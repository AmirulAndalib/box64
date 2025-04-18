#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh...
#endif

GO(gst_buffer_add_gl_sync_meta, pFpp)
GO(gst_buffer_add_gl_sync_meta_full, pFppp)
GO(gst_buffer_pool_config_get_gl_allocation_params, pFp)
GO(gst_buffer_pool_config_set_gl_allocation_params, vFpp)
GO(gst_context_get_gl_display, iFpp)
GO(gst_context_set_gl_display, vFpp)
GO(gst_egl_get_error_string, pFi)
GO(gst_egl_image_export_dmabuf, iFpppp)
GO(gst_egl_image_from_dmabuf, pFpipiL)
GO(gst_egl_image_from_dmabuf_direct, pFpppp)
GO(gst_egl_image_from_dmabuf_direct_target, pFppppu)
GO(gst_egl_image_from_texture, pFppp)
GO(gst_egl_image_get_image, pFp)
GO(gst_egl_image_get_type, LFv)
//GOM(gst_egl_image_new_wrapped, pFEppupp)
GO(gst_gl_allocation_params_copy, pFp)
GO(gst_gl_allocation_params_copy_data, vFpp)
GO(gst_gl_allocation_params_free, vFp)
GO(gst_gl_allocation_params_free_data, vFp)
GO(gst_gl_allocation_params_get_type, LFv)
//GOM(gst_gl_allocation_params_init, iFEpLupppLppppp)
GO(gst_gl_api_from_string, uFp)
GO(gst_gl_api_get_type, LFv)
GO(gst_gl_api_to_string, pFu)
//GOM(gst_gl_async_debug_free, vFEp)
//GOM(gst_gl_async_debug_freeze, vFEp)
//GOM(gst_gl_async_debug_init, vFEp)
//GOM(gst_gl_async_debug_new, pFEv)
//GOM(gst_gl_async_debug_output_log_msg, vFEp)
//GOM(gst_gl_async_debug_store_log_msg, vFEppuppippV)
//GOM(gst_gl_async_debug_store_log_msg_valist, vFEppuppippA)
//GOM(gst_gl_async_debug_thaw, vFEp)
//GOM(gst_gl_async_debug_unset, vFEp)
GO(gst_gl_base_filter_find_gl_context, iFp)
GO(gst_gl_base_filter_get_gl_context, pFp)
GO(gst_gl_base_filter_get_type, LFv)
GO(gst_gl_base_memory_alloc, pFpp)
GO(gst_gl_base_memory_allocator_get_type, LFv)
GO(gst_gl_base_memory_alloc_data, iFp)
GO(gst_gl_base_memory_error_get_type, LFv)
GO(gst_gl_base_memory_error_quark, uFv)
GO(gst_gl_base_memory_get_type, LFv)
//GOM(gst_gl_base_memory_init, vFEpppppLpp)
GO(gst_gl_base_memory_init_once, vFv)
GO(gst_gl_base_memory_memcpy, iFppll)
GO(gst_gl_base_memory_transfer_get_type, LFv)
GO(gst_gl_base_src_get_type, LFv)
GO(gst_gl_buffer_allocation_params_get_type, LFv)
GO(gst_gl_buffer_allocation_params_new, pFpLpuu)
GO(gst_gl_buffer_allocator_get_type, LFv)
GO(gst_gl_buffer_get_type, LFv)
GO(gst_gl_buffer_init_once, vFv)
GO(gst_gl_buffer_pool_get_gl_allocation_params, pFp)
GO(gst_gl_buffer_pool_get_type, LFv)
GO(gst_gl_buffer_pool_new, pFp)
GO(gst_gl_check_extension, iFpp)
GO(gst_gl_color_convert_decide_allocation, iFpp)
GO(gst_gl_color_convert_fixate_caps, pFpupp)
GO(gst_gl_color_convert_get_type, LFv)
GO(gst_gl_color_convert_new, pFp)
GO(gst_gl_color_convert_perform, pFpp)
GO(gst_gl_color_convert_set_caps, iFppp)
GO(gst_gl_color_convert_transform_caps, pFpupp)
DATA(GST_GL_CONFIG_ATTRIB_ALPHA_SIZE_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_BLUE_SIZE_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_CAVEAT_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_CONFIG_ID_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_CONFORMANT_API_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_DEPTH_SIZE_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_GREEN_SIZE_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_LEVEL_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_LUMINANCE_SIZE_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_MAX_PBUFFER_HEIGHT_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_MAX_PBUFFER_PIXELS_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_MAX_PBUFFER_WIDTH_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_MAX_SWAP_INTERVAL_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_MIN_SWAP_INTERVAL_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_NATIVE_RENDERABLE_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_NATIVE_VISUAL_ID_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_PLATFORM_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_RED_SIZE_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_RENDERABLE_API_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_SAMPLE_BUFFERS_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_SAMPLES_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_STENCIL_SIZE_NAME, 8)
DATA(GST_GL_CONFIG_ATTRIB_SURFACE_TYPE_NAME, 8)
GO(gst_gl_config_caveat_get_type, LFv)
GO(gst_gl_config_caveat_to_string, pFu)
GO(gst_gl_config_surface_type_get_type, LFv)
GO(gst_gl_config_surface_type_to_string, pFu)
GO(gst_gl_context_activate, iFpi)
GO(gst_gl_context_can_share, iFpp)
GO(gst_gl_context_check_feature, iFpp)
GO(gst_gl_context_check_framebuffer_status, iFpu)
GO(gst_gl_context_check_gl_version, iFpuii)
GO(gst_gl_context_clear_framebuffer, vFp)
GO(gst_gl_context_clear_shader, vFp)
GO(gst_gl_context_create, iFppp)
GOM(gst_gl_context_default_get_proc_address, pFEup)
GO(gst_gl_context_destroy, vFp)
GO(gst_gl_context_error_get_type, LFv)
GO(gst_gl_context_error_quark, uFv)
GO(gst_gl_context_fill_info, iFpp)
GO(gst_gl_context_get_config, pFp)
GO(gst_gl_context_get_current, pFv)
GO(gst_gl_context_get_current_gl_api, uFupp)
GO(gst_gl_context_get_current_gl_context, LFu)
GO(gst_gl_context_get_display, pFp)
GO(gst_gl_context_get_gl_api, uFp)
GO(gst_gl_context_get_gl_context, LFp)
GO(gst_gl_context_get_gl_platform, uFp)
GO(gst_gl_context_get_gl_platform_version, vFppp)
GO(gst_gl_context_get_gl_version, vFppp)
GO(gst_gl_context_get_proc_address, pFpp)
GOM(gst_gl_context_get_proc_address_with_platform, pFEuup)
GO(gst_gl_context_get_thread, pFp)
GO(gst_gl_context_get_type, LFv)
GO(gst_gl_context_get_window, pFp)
GO(gst_gl_context_is_shared, iFp)
GO(gst_gl_context_new, pFp)
GO(gst_gl_context_new_wrapped, pFpLuu)
GO(gst_gl_context_request_config, iFpp)
GO(gst_gl_context_set_shared_with, vFpp)
GO(gst_gl_context_set_window, iFpp)
GO(gst_gl_context_supports_glsl_profile_version, iFpui)
GO(gst_gl_context_supports_precision, iFpui)
GO(gst_gl_context_supports_precision_highp, iFpui)
GO(gst_gl_context_swap_buffers, vFp)
GOM(gst_gl_context_thread_add, vFEppp)
GO(gst_gl_display_add_context, iFpp)
GO(gst_gl_display_create_context, iFpppp)
GO(gst_gl_display_create_window, pFp)
GO(gst_gl_display_egl_device_get_type, LFv)
GO(gst_gl_display_egl_device_new, pFu)
GO(gst_gl_display_egl_device_new_with_egl_device, pFp)
GO(gst_gl_display_egl_from_gl_display, pFp)
GO(gst_gl_display_egl_get_from_native, pFuL)
GO(gst_gl_display_egl_get_type, LFv)
GO(gst_gl_display_egl_new, pFv)
GO(gst_gl_display_egl_new_with_egl_display, pFp)
GO(gst_gl_display_filter_gl_api, vFpu)
//GOM(gst_gl_display_find_window, pFEppp)
GO(gst_gl_display_get_gl_api, uFp)
GO(gst_gl_display_get_gl_api_unlocked, uFp)
GO(gst_gl_display_get_gl_context_for_thread, pFpp)
GO(gst_gl_display_get_handle, LFp)
GO(gst_gl_display_get_handle_type, uFp)
GO(gst_gl_display_get_type, LFv)
GO(gst_gl_display_new, pFv)
GO(gst_gl_display_new_with_type, pFu)
GO(gst_gl_display_remove_context, vFpp)
GO(gst_gl_display_remove_window, iFpp)
//GOM(gst_gl_display_retrieve_window, pFEppp)
GO(gst_gl_display_type_get_type, LFv)
GO(gst_gl_display_wayland_get_type, LFv)
GO(gst_gl_display_wayland_new, pFp)
GO(gst_gl_display_wayland_new_with_display, pFp)
GO(gst_gl_display_x11_get_type, LFv)
//GOM(gst_gl_display_x11_new, pFEp)
//GOM(gst_gl_display_x11_new_with_display, pFEp)
GO(gst_gl_element_propagate_display_context, vFpp)
GO(gst_gl_ensure_element_data, iFppp)
GO(gst_gl_filter_add_rgba_pad_templates, vFp)
GO(gst_gl_filter_draw_fullscreen_quad, vFp)
GO(gst_gl_filter_filter_texture, iFppp)
GO(gst_gl_filter_get_type, LFv)
GOM(gst_gl_filter_render_to_target, iFEppppp)
GO(gst_gl_filter_render_to_target_with_shader, vFpppp)
GO(gst_gl_format_from_video_info, uFppu)
GO(gst_gl_format_get_type, LFv)
GO(gst_gl_format_is_supported, iFpu)
GO(gst_gl_format_type_from_sized_gl_format, vFupp)
GO(gst_gl_format_type_n_bytes, uFuu)
GO(gst_gl_framebuffer_attach, vFpup)
GO(gst_gl_framebuffer_bind, vFp)
GOM(gst_gl_framebuffer_draw_to_texture, iFEpppp)
GO(gst_gl_framebuffer_get_effective_dimensions, vFppp)
GO(gst_gl_framebuffer_get_id, uFp)
GO(gst_gl_framebuffer_get_type, LFv)
GO(gst_gl_framebuffer_new, pFp)
GO(gst_gl_framebuffer_new_with_default_depth, pFpuu)
GO(gst_gl_get_affine_transformation_meta_as_ndc, vFpp)
GO(gst_gl_get_plane_data_size, LFppu)
GO(gst_gl_get_plane_start, LFppu)
GO(gst_gl_handle_context_query, iFppppp)
GO(gst_gl_handle_set_context, iFpppp)
GOM(gst_gl_insert_debug_marker, vFppV)
GO(gst_gl_memory_allocator_get_default, pFp)
GO(gst_gl_memory_allocator_get_type, LFv)
GO(gst_gl_memory_copy_into, iFpuuuii)
GO(gst_gl_memory_copy_teximage, iFpuuuii)
GO(gst_gl_memory_egl_allocator_get_type, LFv)
GO(gst_gl_memory_egl_get_display, pFp)
GO(gst_gl_memory_egl_get_image, pFp)
GO(gst_gl_memory_egl_get_type, LFv)
GO(gst_gl_memory_egl_init_once, vFv)
GO(gst_gl_memory_get_texture_format, uFp)
GO(gst_gl_memory_get_texture_height, iFp)
GO(gst_gl_memory_get_texture_id, uFp)
GO(gst_gl_memory_get_texture_target, uFp)
GO(gst_gl_memory_get_texture_width, iFp)
GO(gst_gl_memory_get_type, LFv)
//GOM(gst_gl_memory_init, vFEppppuuppuppp)
GO(gst_gl_memory_init_once, vFv)
GO(gst_gl_memory_pbo_allocator_get_type, LFv)
GO(gst_gl_memory_pbo_copy_into_texture, iFpuuuiiii)
GO(gst_gl_memory_pbo_download_transfer, vFp)
GO(gst_gl_memory_pbo_get_type, LFv)
GO(gst_gl_memory_pbo_init_once, vFv)
GO(gst_gl_memory_pbo_upload_transfer, vFp)
GO(gst_gl_memory_read_pixels, iFpp)
GO(gst_gl_memory_setup_buffer, iFpppppL)
GO(gst_gl_memory_texsubimage, vFpp)
GO(gst_gl_multiply_matrix4, vFppp)
GO(gst_gl_overlay_compositor_add_caps, pFp)
GO(gst_gl_overlay_compositor_draw_overlays, vFp)
GO(gst_gl_overlay_compositor_free_overlays, vFp)
GO(gst_gl_overlay_compositor_get_type, LFv)
GO(gst_gl_overlay_compositor_new, pFp)
GO(gst_gl_overlay_compositor_upload_overlays, vFpp)
GO(gst_gl_platform_from_string, uFp)
GO(gst_gl_platform_get_type, LFv)
GO(gst_gl_platform_to_string, pFu)
//GOM(gst_gl_query_counter, vFEp)
//GOM(gst_gl_query_end, vFEp)
//GOM(gst_gl_query_free, vFEp)
//GOM(gst_gl_query_init, vFEppu)
GO(gst_gl_query_local_gl_context, iFpup)
//GOM(gst_gl_query_new, pFEpu)
//GOM(gst_gl_query_result, LFEp)
//GOM(gst_gl_query_start, vFEp)
GO(gst_gl_query_type_get_type, LFv)
//GOM(gst_gl_query_unset, vFEp)
GO(gst_gl_renderbuffer_allocation_params_get_type, LFv)
GO(gst_gl_renderbuffer_allocation_params_new, pFppuuu)
//GOM(gst_gl_renderbuffer_allocation_params_new_wrapped, pFEppuuuppp)
GO(gst_gl_renderbuffer_allocator_get_type, LFv)
GO(gst_gl_renderbuffer_get_format, uFp)
GO(gst_gl_renderbuffer_get_height, iFp)
GO(gst_gl_renderbuffer_get_id, uFp)
GO(gst_gl_renderbuffer_get_type, LFv)
GO(gst_gl_renderbuffer_get_width, iFp)
GO(gst_gl_renderbuffer_init_once, vFv)
GO(gst_gl_set_affine_transformation_meta_from_ndc, vFpp)
GO(gst_gl_shader_attach, iFpp)
GO(gst_gl_shader_attach_unlocked, iFpp)
GO(gst_gl_shader_bind_attribute_location, vFpup)
GO(gst_gl_shader_bind_frag_data_location, vFpup)
GO(gst_gl_shader_compile_attach_stage, iFppp)
GO(gst_gl_shader_detach, vFpp)
GO(gst_gl_shader_detach_unlocked, vFpp)
GO(gst_gl_shader_get_attribute_location, iFpp)
GO(gst_gl_shader_get_program_handle, iFp)
GO(gst_gl_shader_get_type, LFv)
GO(gst_gl_shader_is_linked, iFp)
GO(gst_gl_shader_link, iFpp)
GO(gst_gl_shader_new, pFp)
GO(gst_gl_shader_new_default, pFpp)
GO(gst_gl_shader_new_link_with_stages, pFpppppppppppp)  //vaargs
GO(gst_gl_shader_new_with_stages, pFpppppppppppp)   //vaarg
GO(gst_gl_shader_release, vFp)
GO(gst_gl_shader_release_unlocked, vFp)
GO(gst_gl_shader_set_uniform_1f, vFppf)
GO(gst_gl_shader_set_uniform_1fv, vFppup)
GO(gst_gl_shader_set_uniform_1i, vFppi)
GO(gst_gl_shader_set_uniform_1iv, vFppup)
GO(gst_gl_shader_set_uniform_2f, vFppff)
GO(gst_gl_shader_set_uniform_2fv, vFppup)
GO(gst_gl_shader_set_uniform_2i, vFppii)
GO(gst_gl_shader_set_uniform_2iv, vFppup)
GO(gst_gl_shader_set_uniform_3f, vFppfff)
GO(gst_gl_shader_set_uniform_3fv, vFppup)
GO(gst_gl_shader_set_uniform_3i, vFppiii)
GO(gst_gl_shader_set_uniform_3iv, vFppup)
GO(gst_gl_shader_set_uniform_4f, vFppffff)
GO(gst_gl_shader_set_uniform_4fv, vFppup)
GO(gst_gl_shader_set_uniform_4i, vFppiiii)
GO(gst_gl_shader_set_uniform_4iv, vFppup)
GO(gst_gl_shader_set_uniform_matrix_2fv, vFppiip)
GO(gst_gl_shader_set_uniform_matrix_2x3fv, vFppiip)
GO(gst_gl_shader_set_uniform_matrix_2x4fv, vFppiip)
GO(gst_gl_shader_set_uniform_matrix_3fv, vFppiip)
GO(gst_gl_shader_set_uniform_matrix_3x2fv, vFppiip)
GO(gst_gl_shader_set_uniform_matrix_3x4fv, vFppiip)
GO(gst_gl_shader_set_uniform_matrix_4fv, vFppiip)
GO(gst_gl_shader_set_uniform_matrix_4x2fv, vFppiip)
GO(gst_gl_shader_set_uniform_matrix_4x3fv, vFppiip)
DATA(gst_gl_shader_string_fragment_default, 8)
DATA(gst_gl_shader_string_fragment_external_oes_default, 8)
GO(gst_gl_shader_string_fragment_external_oes_get_default, pFpui)
GO(gst_gl_shader_string_fragment_get_default, pFpui)
DATA(gst_gl_shader_string_fragment_highp_precision, 8)
DATA(gst_gl_shader_string_fragment_mediump_precision, 8)
GO(gst_gl_shader_string_get_highest_precision, pFpui)
DATA(gst_gl_shader_string_vertex_default, 8)
DATA(gst_gl_shader_string_vertex_mat4_texture_transform, 8)
DATA(gst_gl_shader_string_vertex_mat4_vertex_transform, 8)
GO(gst_gl_shader_use, vFp)
GO(gst_gl_sized_gl_format_from_gl_format_type, uFpuu)
GO(gst_glsl_error_get_type, LFv)
GO(gst_glsl_error_quark, uFv)
GO(gst_glsl_profile_from_string, iFp)
GO(gst_glsl_profile_get_type, LFv)
GO(gst_glsl_profile_to_string, pFi)
GO(gst_glsl_stage_compile, iFpp)
GO(gst_glsl_stage_get_handle, uFp)
GO(gst_glsl_stage_get_profile, iFp)
GO(gst_glsl_stage_get_shader_type, uFp)
GO(gst_glsl_stage_get_type, LFv)
GO(gst_glsl_stage_get_version, uFp)
GO(gst_glsl_stage_new, pFpu)
GO(gst_glsl_stage_new_default_fragment, pFp)
GO(gst_glsl_stage_new_default_vertex, pFp)
GO(gst_glsl_stage_new_with_string, pFpuuip)
GO(gst_glsl_stage_new_with_strings, pFpuuiip)
GO(gst_glsl_stage_set_strings, iFpuiip)
GO(gst_glsl_string_get_version_profile, iFppp)
GO(gst_glsl_version_from_string, uFp)
GO(gst_glsl_version_get_type, LFv)
GO(gst_glsl_version_profile_from_string, iFppp)
GO(gst_glsl_version_profile_to_string, pFui)
GO(gst_glsl_version_to_string, pFu)
GO(gst_gl_stereo_downmix_get_type, LFv)
GO(gst_gl_stereo_downmix_mode_get_type, LFv)
GO(gst_gl_sync_meta_api_get_type, LFv)
GO(gst_gl_sync_meta_get_info, pFv)
GO(gst_gl_sync_meta_set_sync_point, vFpp)
GO(gst_gl_sync_meta_wait, vFpp)
GO(gst_gl_sync_meta_wait_cpu, vFpp)
GO(gst_gl_texture_target_from_gl, uFu)
GO(gst_gl_texture_target_from_string, uFp)
GO(gst_gl_texture_target_get_type, LFv)
GO(gst_gl_texture_target_to_buffer_pool_option, pFu)
GO(gst_gl_texture_target_to_gl, uFu)
GO(gst_gl_texture_target_to_string, pFu)
GO(gst_gl_upload_get_caps, vFppp)
GO(gst_gl_upload_get_input_template_caps, pFv)
GO(gst_gl_upload_get_type, LFv)
GO(gst_gl_upload_new, pFp)
GO(gst_gl_upload_perform_with_buffer, iFppp)
GO(gst_gl_upload_propose_allocation, vFppp)
GO(gst_gl_upload_return_get_type, LFv)
GO(gst_gl_upload_set_caps, iFppp)
GO(gst_gl_upload_set_context, vFpp)
GO(gst_gl_upload_transform_caps, pFppupp)
GO(gst_gl_value_get_texture_target_mask, uFp)
GO(gst_gl_value_set_texture_target, iFpu)
GO(gst_gl_value_set_texture_target_from_mask, iFpu)
GO(gst_gl_version_to_glsl_version, uFuii)
GO(gst_gl_video_allocation_params_copy_data, vFpp)
GO(gst_gl_video_allocation_params_free_data, vFp)
GO(gst_gl_video_allocation_params_get_type, LFv)
//GOM(gst_gl_video_allocation_params_init_full, iFEpLupppppupuupppp)
GO(gst_gl_video_allocation_params_new, pFpppupuu)
//GOM(gst_gl_video_allocation_params_new_wrapped_data, pFEpppupuuppp)
//GOM(gst_gl_video_allocation_params_new_wrapped_gl_handle, pFEpppupuuppp)
//GOM(gst_gl_video_allocation_params_new_wrapped_texture, pFEpppupuuupp)
GO(gst_gl_view_convert_fixate_caps, pFpupp)
GO(gst_gl_view_convert_get_output, iFpp)
GO(gst_gl_view_convert_get_type, LFv)
GO(gst_gl_view_convert_new, pFv)
GO(gst_gl_view_convert_perform, pFpp)
GO(gst_gl_view_convert_reset, vFp)
GO(gst_gl_view_convert_set_caps, iFppp)
GO(gst_gl_view_convert_set_context, vFpp)
GO(gst_gl_view_convert_submit_input_buffer, iFpip)
GO(gst_gl_view_convert_transform_caps, pFpupp)
GO(gst_gl_window_controls_viewport, iFp)
GO(gst_gl_window_draw, vFp)
GO(gst_gl_window_error_get_type, LFv)
GO(gst_gl_window_error_quark, uFv)
GO(gst_gl_window_get_context, pFp)
GO(gst_gl_window_get_display, LFp)
GO(gst_gl_window_get_surface_dimensions, vFppp)
GO(gst_gl_window_get_type, LFv)
GO(gst_gl_window_get_window_handle, LFp)
GO(gst_gl_window_handle_events, vFpi)
GO(gst_gl_window_has_output_surface, iFp)
GO(gst_gl_window_new, pFp)
GO(gst_gl_window_queue_resize, vFp)
GO(gst_gl_window_quit, vFp)
GO(gst_gl_window_resize, vFpuu)
GO(gst_gl_window_run, vFp)
GO(gst_gl_window_send_key_event, vFppp)
GOM(gst_gl_window_send_message, vFEppp)
//GOM(gst_gl_window_send_message_async, vFEpppp)
GO(gst_gl_window_send_mouse_event, vFppidd)
GO(gst_gl_window_send_scroll_event, vFpdddd)
GOM(gst_gl_window_set_close_callback, vFEpppp)
GOM(gst_gl_window_set_draw_callback, vFEpppp)
GO(gst_gl_window_set_preferred_size, vFpii)
GO(gst_gl_window_set_render_rectangle, iFpiiii)
GOM(gst_gl_window_set_resize_callback, vFEpppp)
GO(gst_gl_window_set_window_handle, vFpL)
GO(gst_gl_window_show, vFp)
GO(gst_is_gl_base_memory, iFp)
GO(gst_is_gl_buffer, iFp)
GO(gst_is_gl_memory, iFp)
GO(gst_is_gl_memory_egl, iFp)
GO(gst_is_gl_memory_pbo, iFp)
GO(gst_is_gl_renderbuffer, iFp)

