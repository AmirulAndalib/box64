#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh...
#endif

//GO(av_add_i, 
//GO(av_add_q, 
//GO(av_add_stable, 
GO(av_adler32_update, uFupL)
GO(av_aes_alloc, pFv)
GO(av_aes_crypt, vFpppipi)
GO(av_aes_ctr_alloc, pFv)
GO(av_aes_ctr_crypt, vFpppi)
GO(av_aes_ctr_free, vFp)
GO(av_aes_ctr_get_iv, pFp)
GO(av_aes_ctr_increment_iv, vFp)
GO(av_aes_ctr_init, iFpp)
GO(av_aes_ctr_set_full_iv, vFpp)
GO(av_aes_ctr_set_iv, vFpp)
GO(av_aes_ctr_set_random_iv, vFp)
GO(av_aes_init, iFppii)
DATA(av_aes_size, 4)
GO(av_append_path_component, pFpp)
GOM(av_asprintf, pFEpV)
GO(av_assert0_fpu, vFv)
GO(av_audio_fifo_alloc, pFiii)
GO(av_audio_fifo_drain, iFpi)
GO(av_audio_fifo_free, vFp)
GO(av_audio_fifo_peek, iFppi)
GO(av_audio_fifo_peek_at, iFppii)
GO(av_audio_fifo_read, iFppi)
GO(av_audio_fifo_realloc, iFpi)
GO(av_audio_fifo_reset, vFp)
GO(av_audio_fifo_size, iFp)
GO(av_audio_fifo_space, iFp)
GO(av_audio_fifo_write, iFppi)
GO(av_base64_decode, iFppi)
GO(av_base64_encode, pFpipi)
GO(av_basename, pFp)
GO(av_blowfish_alloc, pFv)
GO(av_blowfish_crypt, vFpppipi)
GO(av_blowfish_crypt_ecb, vFpppi)
GO(av_blowfish_init, vFppi)
GO(av_bmg_get, vFpp)
GO(av_bprint_append_data, vFppu)
//GO(av_bprint_channel_layout, 
GO(av_bprint_chars, vFpcu)
GO(av_bprint_clear, vFp)
GO(av_bprint_escape, vFpppui)
GOM(av_bprintf, vFEppV)
GO(av_bprint_finalize, iFpp)
GO(av_bprint_get_buffer, vFpupp)
GO(av_bprint_init, vFpuu)
GO(av_bprint_init_for_buffer, vFppu)
GO(av_bprint_strftime, vFppp)
GO(av_buffer_alloc, pFL)
GO(av_buffer_allocz, pFL)
GOM(av_buffer_create, pFEpippi)
GO(av_buffer_default_free, vFpp)
GO(av_buffer_get_opaque, pFp)
GO(av_buffer_get_ref_count, iFp)
GO(av_buffer_is_writable, iFp)
GO(av_buffer_make_writable, iFp)
GO(av_buffer_pool_buffer_get_opaque, pFp)
GO(av_buffer_pool_get, pFp)
GOM(av_buffer_pool_init, pFEip)
//GOM(av_buffer_pool_init2, pFELppp)
GO(av_buffer_pool_uninit, vFp)
GO(av_buffer_realloc, iFpL)
GO(av_buffer_ref, pFp)
GO(av_buffer_replace, iFpp)
GO(av_buffer_unref, vFp)
GO(av_calloc, pFLL)
GO(av_camellia_alloc, pFv)
GO(av_camellia_crypt, vFpppipi)
GO(av_camellia_init, iFppi)
DATA(av_camellia_size, 4)
GO(av_cast5_alloc, pFv)
GO(av_cast5_crypt, vFpppii)
GO(av_cast5_crypt2, vFpppipi)
GO(av_cast5_init, iFppi)
DATA(av_cast5_size, 4)
//GO(av_channel_layout_extract_channel, 
GO(av_chroma_location_from_name, iFp)
GO(av_chroma_location_name, pFu)
//GO(av_cmp_i, 
GO(av_color_primaries_from_name, iFp)
GO(av_color_primaries_name, pFu)
GO(av_color_range_from_name, iFp)
GO(av_color_range_name, pFu)
GO(av_color_space_from_name, iFp)
GO(av_color_space_name, pFu)
GO(av_color_transfer_from_name, iFp)
GO(av_color_transfer_name, pFu)
GO(av_compare_mod, IFUUU)
//GO(av_compare_ts, 
GO(av_content_light_metadata_alloc, pFp)
GO(av_content_light_metadata_create_side_data, pFp)
GO(av_cpu_count, iFv)
GO(av_cpu_max_align, LFv)
GO(av_crc, uFpupL)
GO(av_crc_get_table, pFu)
GO(av_crc_init, iFpiiui)
GO(av_d2q, UFdi)
//GO(av_d2str, 
GO(av_default_get_category, uFp)
GO(av_default_item_name, pFp)
GO(av_des_alloc, pFv)
GO(av_des_crypt, vFpppipi)
GO(av_des_init, iFppii)
GO(av_des_mac, vFpppi)
GO(av_dict_copy, iFppi)
GO(av_dict_count, iFp)
GO(av_dict_free, vFp)
GO(av_dict_get, pFpppi)
GO(av_dict_get_string, iFppcc)
GO(av_dict_parse_string, iFppppi)
GO(av_dict_set, iFpppi)
GO(av_dict_set_int, iFppIi)
GO(av_dirname, pFp)
GO(av_display_matrix_flip, vFpii)
GO(av_display_rotation_get, dFp)
GO(av_display_rotation_set, vFpd)
//GO(av_div_i, 
//GO(av_div_q, 
//GO(av_dovi_alloc, 
//GO(av_downmix_info_update_side_data, 
//GO(av_dynamic_hdr_plus_alloc, 
//GO(av_dynamic_hdr_plus_create_side_data, 
GO(av_dynarray2_add, pFppLp)
GO(av_dynarray_add, vFppp)
GO(av_dynarray_add_nofree, iFppp)
GO(av_encryption_info_add_side_data, pFpp)
GO(av_encryption_info_alloc, pFuuu)
GO(av_encryption_info_clone, pFp)
GO(av_encryption_info_free, vFp)
GO(av_encryption_info_get_side_data, pFpL)
GO(av_encryption_init_info_add_side_data, pFpp)
GO(av_encryption_init_info_alloc, pFuuuu)
GO(av_encryption_init_info_free, vFp)
GO(av_encryption_init_info_get_side_data, pFpL)
GO(av_escape, iFpppui)
GO(av_expr_count_func, iFppii)
GO(av_expr_count_vars, iFppi)
GO(av_expr_eval, dFppp)
GO(av_expr_free, vFp)
GOM(av_expr_parse, iFEpppppppip)
//GOM(av_expr_parse_and_eval, iFEpppppppppip)
GO(av_fast_malloc, vFppL)
GO(av_fast_mallocz, vFppL)
GO(av_fast_realloc, pFppL)
//GO(av_fifo_alloc, 
//GO(av_fifo_alloc_array, 
//GO(av_fifo_drain, 
//GO(av_fifo_free, 
//GO(av_fifo_freep, 
//GO(av_fifo_generic_peek, 
//GO(av_fifo_generic_peek_at, 
//GO(av_fifo_generic_read, 
//GO(av_fifo_generic_write, 
//GO(av_fifo_grow, 
//GO(av_fifo_realloc2, 
//GO(av_fifo_reset, 
//GO(av_fifo_size, 
//GO(av_fifo_space, 
//GO(av_file_map, 
//GO(av_file_unmap, 
GO(av_film_grain_params_alloc, pFp)
GO(av_film_grain_params_create_side_data, pFp)
GO(av_find_best_pix_fmt_of_2, iFiiiip)
GO(av_find_info_tag, iFpipp)
//GO(av_find_nearest_q_idx, 
//GO(av_fopen_utf8, 
GO(av_force_cpu_flags, vFi)
GO(av_fourcc_make_string, pFpu)
GO(av_frame_alloc, pFv)
GO(av_frame_apply_cropping, iFpi)
GO(av_frame_clone, pFp)
GO(av_frame_copy, iFpp)
GO(av_frame_copy_props, iFpp)
GO(av_frame_free, vFp)
//GO(av_frame_get_best_effort_timestamp, 
GO(av_frame_get_buffer, iFpi)
//GO(av_frame_get_channel_layout, 
//GO(av_frame_get_channels, 
//GO(av_frame_get_color_range, 
//GO(av_frame_get_colorspace, 
//GO(av_frame_get_decode_error_flags, 
//GO(av_frame_get_metadata, 
//GO(av_frame_get_pkt_duration, 
//GO(av_frame_get_pkt_pos, 
//GO(av_frame_get_pkt_size, 
GO(av_frame_get_plane_buffer, pFpi)
//GO(av_frame_get_qp_table, 
//GO(av_frame_get_sample_rate, 
GO(av_frame_get_side_data, pFpu)
GO(av_frame_is_writable, iFp)
GO(av_frame_make_writable, iFp)
GO(av_frame_move_ref, vFpp)
GO(av_frame_new_side_data, pFpuL)
GO(av_frame_new_side_data_from_buf, pFpup)
GO(av_frame_ref, iFpp)
GO(av_frame_remove_side_data, vFpu)
//GO(av_frame_set_best_effort_timestamp, 
//GO(av_frame_set_channel_layout, 
//GO(av_frame_set_channels, 
//GO(av_frame_set_color_range, 
//GO(av_frame_set_colorspace, 
//GO(av_frame_set_decode_error_flags, 
//GO(av_frame_set_metadata, 
//GO(av_frame_set_pkt_duration, 
//GO(av_frame_set_pkt_pos, 
//GO(av_frame_set_pkt_size, 
//GO(av_frame_set_qp_table, 
//GO(av_frame_set_sample_rate, 
GO(av_frame_side_data_name, pFu)
GO(av_frame_unref, vFp)
GO(av_free, vFp)
GO(av_freep, vFp)
GO(av_gcd, IFII)
//GO(av_gcd_q, 
GO(av_get_alt_sample_fmt, iFii)
GO(av_get_bits_per_pixel, iFp)
GO(av_get_bytes_per_sample, iFi)
//GO(av_get_channel_description, 
GO(av_get_channel_layout, UFp)
GO(av_get_channel_layout_channel_index, iFUU)
GO(av_get_channel_layout_nb_channels, iFU)
GO(av_get_channel_layout_string, vFpiiU)
GO(av_get_channel_name, pFU)
//GO(av_get_colorspace_name, 
GO(av_get_cpu_flags, iFv)
GO(av_get_default_channel_layout, UFi)
GO(av_get_extended_channel_layout, iFppp)
GO(av_get_known_color_name, pFip)
GO(av_get_media_type_string, pFi)
GO(av_get_packed_sample_fmt, iFi)
GO(av_get_padded_bits_per_pixel, iFp)
GO(av_get_picture_type_char, cFu)
GO(av_get_pix_fmt, iFp)
GO(av_get_pix_fmt_loss, iFiii)
GO(av_get_pix_fmt_name, pFi)
GO(av_get_pix_fmt_string, pFpii)
GO(av_get_planar_sample_fmt, iFi)
GO(av_get_random_seed, uFv)
GO(av_get_sample_fmt, iFp)
GO(av_get_sample_fmt_name, pFi)
GO(av_get_sample_fmt_string, pFpii)
//GO(av_get_standard_channel_layout, 
GO(av_gettime, IFv)
GO(av_get_time_base_q, UFv)
GO(av_gettime_relative, IFv)
GO(av_gettime_relative_is_monotonic, iFv)
GO(av_get_token, pFpp)
GO(av_hash_alloc, iFpp)
GO(av_hash_final, vFpp)
GO(av_hash_final_b64, vFppi)
GO(av_hash_final_bin, vFppi)
GO(av_hash_final_hex, vFppi)
GO(av_hash_freep, vFp)
GO(av_hash_get_name, pFp)
GO(av_hash_get_size, iFp)
GO(av_hash_init, vFp)
GO(av_hash_names, pFi)
GO(av_hash_update, vFppL)
GO(av_hmac_alloc, pFu)
GO(av_hmac_calc, iFppupupu)
GO(av_hmac_final, iFppu)
GO(av_hmac_free, vFp)
GO(av_hmac_init, vFppu)
GO(av_hmac_update, vFppu)
GO(av_hwdevice_ctx_alloc, pFu)
GO(av_hwdevice_ctx_create, iFpuppi)
GO(av_hwdevice_ctx_create_derived, iFpupi)
GO(av_hwdevice_ctx_create_derived_opts, iFpuppi)
GO(av_hwdevice_ctx_init, iFp)
GO(av_hwdevice_find_type_by_name, uFp)
GO(av_hwdevice_get_hwframe_constraints, pFpp)
GO(av_hwdevice_get_type_name, pFu)
GO(av_hwdevice_hwconfig_alloc, pFp)
GO(av_hwdevice_iterate_types, uFu)
GO(av_hwframe_constraints_free, vFp)
GO(av_hwframe_ctx_alloc, pFp)
GO(av_hwframe_ctx_create_derived, iFpippi)
GO(av_hwframe_ctx_init, iFp)
GO(av_hwframe_get_buffer, iFppi)
GO(av_hwframe_map, iFppi)
GO(av_hwframe_transfer_data, iFppi)
GO(av_hwframe_transfer_get_formats, iFpupi)
//GO(av_i2int, 
GO(av_image_alloc, iFppiiii)
//GO(av_image_check_sar, 
GO(av_image_check_size, iFuuip)
GO(av_image_check_size2, iFuuIiip)
GO(av_image_copy, vFppppiii)
GO(av_image_copy_plane, vFpipiii)
GO(av_image_copy_to_buffer, iFpippiiii)
GO(av_image_copy_uc_from, vFppppiii)
GO(av_image_fill_arrays, iFpppiiii)
GO(av_image_fill_black, iFppiuii)
GO(av_image_fill_linesizes, iFpii)
GO(av_image_fill_max_pixsteps, vFppp)
GO(av_image_fill_plane_sizes, iFpiip)
GO(av_image_fill_pointers, iFpiipp)
GO(av_image_get_buffer_size, iFiiii)
GO(av_image_get_linesize, iFiii)
//GO(av_int2i, 
GO(av_int_list_length_for_size, uFupU)
GO(av_lfg_init, vFpu)
GO(av_lfg_init_from_data, iFppu)
GOM(av_log, vFEpipV)
GO(av_log2, iFu)
GO(av_log2_16bit, iFu)
//GO(av_log2_i, 
//GOM(av_log_default_callback, vFEpipA)
//GOM(av_log_format_line, vFEpipApip)
//GOM(av_log_format_line2, iFEpipApip)
GO(av_log_get_flags, iFv)
GO(av_log_get_level, iFv)
//GOM(av_log_once, vFEpiippV)
GOM(av_log_set_callback, vFEp)
GO(av_log_set_flags, vFi)
GO(av_log_set_level, vFi)
//GO(av_lzo1x_decode, 
GO(av_malloc, pFL)
GOM(av_malloc_tracked, pFEl)
GO(av_malloc_array, pFLL)
GO(av_mallocz, pFL)
GOM(av_mallocz_tracked, pFEL)   // not wlways defined
GO(av_mallocz_array, pFLL)
GO(av_mastering_display_metadata_alloc, pFv)
GO(av_mastering_display_metadata_create_side_data, pFp)
GO(av_match_list, iFppc)
GO(av_match_name, iFpp)
GO(av_max_alloc, vFL)
GO(av_md5_alloc, pFv)
GO(av_md5_final, vFpp)
GO(av_md5_init, vFp)
DATA(av_md5_size, 4)
GO(av_md5_sum, vFppL)
GO(av_md5_update, vFppL)
GO(av_memcpy_backptr, vFpii)
GO(av_memdup, pFpL)
//GO(av_mod_i, 
//GO(av_mul_i, 
//GO(av_mul_q, 
GO(av_murmur3_alloc, pFv)
GO(av_murmur3_final, vFpp)
GO(av_murmur3_init, vFp)
GO(av_murmur3_init_seeded, vFpU)
GO(av_murmur3_update, vFppL)
//GO(av_nearer_q, 
//GOM(av_opt_child_class_iterate, pFEpp)
//GO(av_opt_child_class_next, 
GO(av_opt_child_next, pFpp)
GO(av_opt_copy, iFpp)
GO(av_opt_eval_double, iFpppp)
GO(av_opt_eval_flags, iFpppp)
GO(av_opt_eval_float, iFpppp)
GO(av_opt_eval_int, iFpppp)
GO(av_opt_eval_int64, iFpppp)
GO(av_opt_eval_q, iFpppp)
GO(av_opt_find, pFpppii)
GO(av_opt_find2, pFpppiip)
GO(av_opt_flag_is_set, iFppp)
GO(av_opt_free, vFp)
GO(av_opt_freep_ranges, vFp)
GO(av_opt_get, iFppip)
//GO(av_opt_get_channel_layout, 
GO(av_opt_get_dict_val, iFppip)
GO(av_opt_get_double, iFppip)
GO(av_opt_get_image_size, iFppipp)
GO(av_opt_get_int, iFppip)
GO(av_opt_get_key_value, iFpppupp)
GO(av_opt_get_pixel_fmt, iFppip)
GO(av_opt_get_q, iFppip)
GO(av_opt_get_sample_fmt, iFppip)
GO(av_opt_get_video_rate, iFppip)
GO(av_opt_is_set_to_default, iFpp)
GO(av_opt_is_set_to_default_by_name, iFppi)
GO(av_opt_next, pFpp)
//GOM(av_opt_ptr, pFEppp)
GO(av_opt_query_ranges, iFpppi)
GO(av_opt_query_ranges_default, iFpppi)
GO(av_opt_serialize, iFpiipcc)
GO(av_opt_set, iFpppi)
GO(av_opt_set_bin, iFpppii)
//GO(av_opt_set_channel_layout, 
GO(av_opt_set_defaults, vFp)
GO(av_opt_set_defaults2, vFpii)
GO(av_opt_set_dict, iFpp)
GO(av_opt_set_dict2, iFppi)
GO(av_opt_set_dict_val, iFpppi)
GO(av_opt_set_double, iFppdi)
GO(av_opt_set_from_string, iFppppp)
GO(av_opt_set_image_size, iFppiii)
GO(av_opt_set_int, iFppIi)
GO(av_opt_set_pixel_fmt, iFppii)
//GO(av_opt_set_q, 
GO(av_opt_set_sample_fmt, iFppii)
//GO(av_opt_set_video_rate, 
GO(av_opt_show2, iFppii)
GO(av_parse_color, iFppip)
GO(av_parse_cpu_caps, iFpp)
//GO(av_parse_cpu_flags, 
GO(av_parse_ratio, iFppiip)
GO(av_parse_time, iFppi)
GO(av_parse_video_rate, iFpp)
GO(av_parse_video_size, iFppp)
//GOM(av_pixelutils_get_sad_fn, pFEiiip)
GO(av_pix_fmt_count_planes, iFi)
GO(av_pix_fmt_desc_get, pFi)
GO(av_pix_fmt_desc_get_id, iFp)
GO(av_pix_fmt_desc_next, pFp)
GO(av_pix_fmt_get_chroma_sub_sample, iFipp)
GO(av_pix_fmt_swap_endianness, iFi)
//GO(avpriv_alloc_fixed_dsp, 
//DATA(avpriv_cga_font, 
//GO(avpriv_dict_set_timestamp, 
//GO(avpriv_float_dsp_alloc, 
//GO(avpriv_get_gamma_from_trc, 
//GO(avpriv_get_trc_function_from_trc, 
//GO(avpriv_init_lls, 
//GO(avpriv_open, 
//GO(avpriv_report_missing_feature, 
//GO(avpriv_request_sample, 
//GO(avpriv_scalarproduct_float_c, 
GO(avpriv_set_systematic_pal2, iFpu)
GOM(avpriv_slicethread_create, iFEppppi)
GO(avpriv_slicethread_execute, vFpii)
GO(avpriv_slicethread_free, vFp)
//GO(avpriv_solve_lls, 
//GO(avpriv_tempfile, 
//DATA(avpriv_vga16_font, 
//GO(av_q2intfloat, 
GO(av_rc4_alloc, pFv)
GO(av_rc4_crypt, vFpppipi)
GO(av_rc4_init, iFppii)
GO(av_read_image_line, vFppppiiiii)
GO(av_read_image_line2, vFppppiiiiii)
GO(av_realloc, pFpL)
GO(av_realloc_array, pFpLL)
GO(av_realloc_f, pFpLL)
GOM(av_realloc_tracked, pFEpL)  //not always defined
GO(av_reallocp, iFpL)
GO(av_reallocp_array, iFpLL)
GO(av_reduce, iFppIII)
GO(av_rescale, IFIII)
//GO(av_rescale_delta, 
GO(av_rescale_q, IFIUU)    // Both U are AVRationnal: struct with 2 ints
GO(av_rescale_q_rnd, IFIUUu)    // Both U are AVRationnal: struct with 2 ints
GO(av_rescale_rnd, IFIIIu)
GO(av_ripemd_alloc, pFv)
GO(av_ripemd_final, vFpp)
GO(av_ripemd_init, iFpi)
DATA(av_ripemd_size, 4)
GO(av_ripemd_update, vFppL)
GO(av_sample_fmt_is_planar, iFi)
GO(av_samples_alloc, iFppiiii)
GO(av_samples_alloc_array_and_samples, iFppiiii)
GO(av_samples_copy, iFppiiiii)
GO(av_samples_fill_arrays, iFpppiiii)
GO(av_samples_get_buffer_size, iFpiiii)
GO(av_samples_set_silence, iFpiiii)
//GO(av_set_cpu_flags_mask, 
GO(av_set_options_string, iFpppp)
GO(av_sha512_alloc, pFv)
GO(av_sha512_final, vFpp)
GO(av_sha512_init, iFpi)
DATA(av_sha512_size, 4)
GO(av_sha512_update, vFppL)
GO(av_sha_alloc, pFv)
GO(av_sha_final, vFpp)
GO(av_sha_init, iFpi)
DATA(av_sha_size, 4)
GO(av_sha_update, vFppL)
//GO(av_shr_i, 
GO(av_small_strptime, pFppp)
GO(av_spherical_alloc, pFp)
GO(av_spherical_from_name, iFp)
GO(av_spherical_projection_name, pFu)
GO(av_spherical_tile_bounds, vFpLLpppp)
//GOM(av_sscanf, iFEppV)
GO(av_stereo3d_alloc, pFv)
GO(av_stereo3d_create_side_data, pFp)
GO(av_stereo3d_from_name, iFp)
GO(av_stereo3d_type_name, pFu)
GO(av_strcasecmp, iFpp)
GO(av_strdup, pFp)
GO(av_strerror, iFipL)
GO(av_strireplace, pFppp)
GO(av_stristart, iFppp)
GO(av_stristr, pFpp)
GO(av_strlcat, LFppL)
GOM(av_strlcatf, LFEpLpV)
GO(av_strlcpy, LFppL)
GO(av_strncasecmp, iFppL)
GO(av_strndup, pFpL)
GO(av_strnstr, pFppL)
GO(av_strstart, iFppp)
GO(av_strtod, dFpp)
GO(av_strtok, pFppp)
//GO(av_sub_i, 
//GO(av_sub_q, 
GO(av_tea_alloc, pFv)
GO(av_tea_crypt, vFpppipi)
GO(av_tea_init, vFppi)
DATA(av_tea_size, 4)
GO(av_tempfile, iFppip) // Warning: failed to confirm
GO(av_thread_message_flush, vFp)
GO(av_thread_message_queue_alloc, iFpuu)
GO(av_thread_message_queue_free, vFp)
GO(av_thread_message_queue_nb_elems, iFp)
GO(av_thread_message_queue_recv, iFppu)
GO(av_thread_message_queue_send, iFppu)
GO(av_thread_message_queue_set_err_recv, vFpi)
GO(av_thread_message_queue_set_err_send, vFpi)
//GOM(av_thread_message_queue_set_free_func, vFEpp)
GO(av_timecode_adjust_ntsc_framenum2, iFii)
//GO(av_timecode_check_frame_rate, 
//GO(av_timecode_get_smpte, 
GO(av_timecode_get_smpte_from_framenum, uFpi)
//GO(av_timecode_init, 
//GO(av_timecode_init_from_components, 
//GO(av_timecode_init_from_string, 
GO(av_timecode_make_mpeg_tc_string, pFpu)
GO(av_timecode_make_smpte_tc_string, pFpui)
//GO(av_timecode_make_smpte_tc_string2, 
GO(av_timecode_make_string, pFppi)
GO(av_timegm, lFp)
GO(av_tree_destroy, vFp)
//GOM(av_tree_enumerate, vFEpppp)
//GOM(av_tree_find, pFEpppp)
//GOM(av_tree_insert, pFEpppp)
GO(av_tree_node_alloc, pFv)
DATA(av_tree_node_size, 4)
GO(av_twofish_alloc, pFv)
GO(av_twofish_crypt, vFpppipi)
GO(av_twofish_init, iFppi)
DATA(av_twofish_size, 4)
//GOM(av_tx_init, iFEppuiipU)
GO(av_tx_uninit, vFp)
GO(av_usleep, iFu)
GO(av_utf8_decode, iFpppu)
GO(avutil_configuration, pFv)
DATA(av_util_ffversion, 8) // Warning: failed to confirm
GO(avutil_license, pFv)
GO(avutil_version, uFv)
GOM(av_vbprintf, vFEppA)
GO(av_version_info, pFv)
GO(av_video_enc_params_alloc, pFiup)
GO(av_video_enc_params_create_side_data, pFpiu)
//GOM(av_vlog, vFEpipA)
GO(av_write_image_line, vFppppiiii)
GO(av_write_image_line2, vFppppiiiii)
GO(av_xtea_alloc, pFv)
GO(av_xtea_crypt, vFpppipi)
GO(av_xtea_init, vFpp)
GO(av_xtea_le_crypt, vFpppipi)
GO(av_xtea_le_init, vFpp)
