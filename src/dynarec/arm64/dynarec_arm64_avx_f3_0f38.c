#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <errno.h>

#include "debug.h"
#include "box64context.h"
#include "box64cpu.h"
#include "emu/x64emu_private.h"
#include "x64emu.h"
#include "box64stack.h"
#include "callback.h"
#include "emu/x64run_private.h"
#include "x64trace.h"
#include "dynarec_native.h"
#include "my_cpuid.h"
#include "emu/x87emu_private.h"
#include "emu/x64shaext.h"

#include "arm64_printer.h"
#include "dynarec_arm64_private.h"
#include "dynarec_arm64_functions.h"
#include "../dynarec_helper.h"

uintptr_t dynarec64_AVX_F3_0F38(dynarec_arm_t* dyn, uintptr_t addr, uintptr_t ip, int ninst, vex_t vex, int* ok, int* need_epilog)
{
    (void)ip; (void)need_epilog;

    uint8_t opcode = F8;
    uint8_t nextop, u8;
    uint8_t gd, ed, vd;
    uint8_t wback, wb1, wb2;
    uint8_t eb1, eb2, gb1, gb2;
    int32_t i32, i32_;
    int cacheupd = 0;
    int v0, v1, v2;
    int q0, q1, q2;
    int d0, d1, d2;
    int s0;
    uint64_t tmp64u;
    int64_t j64;
    int64_t fixedaddress;
    int unscaled;
    MAYUSE(wb1);
    MAYUSE(wb2);
    MAYUSE(eb1);
    MAYUSE(eb2);
    MAYUSE(gb1);
    MAYUSE(gb2);
    MAYUSE(q0);
    MAYUSE(q1);
    MAYUSE(d0);
    MAYUSE(d1);
    MAYUSE(s0);
    MAYUSE(j64);
    MAYUSE(cacheupd);

    rex_t rex = vex.rex;

    switch(opcode) {

        case 0xF5:
            INST_NAME("PEXT Gd, Ed, Vd");
            nextop = F8;
            GETGD;
            GETED(0);
            GETVD;
            if(gd==ed || gd==vd) {
                gb1 = gd;
                gd = x4;
            } else {
                gb1 = 0;
            }
            // x3 = mask of mask, loop while not 0
            MOV32w(gd, 0);
            MOV64x(x3, 1LL<<(rex.w?63:31));
            MARK;
            TSTxw_REG(ed, x3);
            B_MARK2(cEQ);   // mask not set
            TSTxw_REG(vd, x3);
            CSINCxw(gd, gd, gd, cEQ);   // return gd if TRUE, else gd+1
            RORxw(gd, gd, 1);
            MARK2;
            LSRxw_IMM(x3, x3, 1);
            CBNZxw_MARK(x3);
            RBITxw(gd, gd);
            if(gb1)
                MOVxw_REG(gb1, gd);
            break;

        case 0xF7:
            INST_NAME("SARX Gd, Ed, Vd");
            nextop = F8;
            GETGD;
            GETED(0);
            GETVD;
            ANDx_mask(x3, vd, 1, 0, rex.w?5:4); // mask 0x3f/0x1f
            ASRxw_REG(gd, ed, x3);
            break;

        default:
            DEFAULT;
    }
    return addr;
}
