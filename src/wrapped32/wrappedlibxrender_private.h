#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh...
#endif

//GO(XRenderAddGlyphs, vFpLppipi)
//GO(XRenderAddTraps, vFpLiipi)
//GO(XRenderChangePicture, vFpLLp)
//GO(XRenderComposite, vFpiLLLiiiiiiuu)
//GO(XRenderCompositeDoublePoly, vFpiLLpiiiipii)
//GO(XRenderCompositeString16, vFpiLLpLiiiipi)
//GO(XRenderCompositeString32, vFpiLLpLiiiipi)
//GO(XRenderCompositeString8, vFpiLLpLiiiipi)
//GO(XRenderCompositeText16, vFpiLLpiiiipi)
//GO(XRenderCompositeText32, vFpiLLpiiiipi)
//GO(XRenderCompositeText8, vFpiLLpiiiipi)
//GO(XRenderCompositeTrapezoids, vFpiLLpiipi)
//GO(XRenderCompositeTriangles, vFpiLLpiipi)
//GO(XRenderCompositeTriFan, vFpiLLpiipi)
//GO(XRenderCompositeTriStrip, vFpiLLpiipi)
//GO(XRenderCreateAnimCursor, LFpip)
//GO(XRenderCreateConicalGradient, LFppppi)
//GO(XRenderCreateCursor, LFpLuu)
//GO(XRenderCreateGlyphSet, LFpp)
//GO(XRenderCreateLinearGradient, LFppppi)
//GO(XRenderCreatePicture, LFpLpLp)
//GO(XRenderCreateRadialGradient, LFppppi)
//GO(XRenderCreateSolidFill, LFpp)
//DATAB(XRenderExtensionInfo, sizeof(ptr_t))
//DATA(XRenderExtensionName, sizeof(ptr_t))   //D
//GO(XRenderFillRectangle, vFpiLpiiuu)
//GO(XRenderFillRectangles, vFpiLppi)
//GO(XRenderFindDisplay, pFp)
//GO(XRenderFindFormat, pFpLpi)
//GO(XRenderFindStandardFormat, pFpi)
//GO(XRenderFindVisualFormat, pFpp)
//GO(XRenderFreeGlyphs, vFpLpi)
//GO(XRenderFreeGlyphSet, vFpL)
//GO(XRenderFreePicture, vFpL)
//GO(XRenderParseColor, iFppp)
//GO(XRenderQueryExtension, iFppp)
//GO(XRenderQueryFilters, pFpL)
//GO(XRenderQueryFormats, iFp)
//GO(XRenderQueryPictIndexValues, pFppp)
//GO(XRenderQuerySubpixelOrder, iFpi)
//GO(XRenderQueryVersion, iFppp)
//GO(XRenderReferenceGlyphSet, LFpL)
//GO(XRenderSetPictureClipRectangles, vFpLiipi)
//GO(XRenderSetPictureClipRegion, vFpLp)
//GO(XRenderSetPictureFilter, vFpLppi)
//GO(XRenderSetPictureTransform, vFpLp)
//GO(XRenderSetSubpixelOrder, iFpii)