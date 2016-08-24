package org.chromium.base.library_loader;
import org.chromium.base.annotations.SuppressFBWarnings;
@SuppressFBWarnings
public class NativeLibraries {
    public static boolean sUseLinker = false;
    public static boolean sUseLibraryInZipFile = false;
    public static boolean sEnableLinkerTests = false;
    public static final String[] LIBRARIES =
      {"gvr","c++_shared","translator.cr","base.cr","device_core.cr","ffmpeg.cr","device_event_log.cr","gles2_c_lib.cr","display_types.cr","onc.cr","sandbox_services.cr","platform.cr","prefs.cr","startup_tracing.cr","range.cr","gles2_utils.cr","geometry.cr","protobuf_lite.cr","user_prefs.cr","seccomp_bpf.cr","mojo_public_system.cr","common.cr","icuuc.cr","mojo_common_lib.cr","keyed_service_core.cr","boringssl.cr","seccomp_bpf_helpers.cr","url.cr","device_gamepad.cr","url_ipc.cr","crcrypto.cr","policy_proto.cr","ui_data_pack.cr","icui18n.cr","cc_proto.cr","chromium_sqlite3.cr","cloud_policy_proto_generated_compile.cr","v8.cr","device_vibration.cr","wtf.cr","display_util.cr","events_base.cr","ipc.cr","sql.cr","shared_memory_support.cr","keyed_service_content.cr","memory_coordinator_common.cr","url_matcher.cr","skia.cr","mojo_system_impl.cr","gin.cr","webdata_common.cr","gfx_ipc_geometry.cr","base_i18n.cr","memory_coordinator_browser.cr","blink_common.cr","tracing.cr","gfx_ipc_color.cr","memory_coordinator_child.cr","events_ipc.cr","net.cr","surface.cr","gfx_ipc_skia.cr","gfx.cr","accessibility.cr","midi.cr","gfx_ipc.cr","ui_touch_selection.cr","message_center.cr","proxy_config.cr","devices.cr","gl_wrapper.cr","display.cr","device_vr.cr","net_with_v8.cr","device_geolocation.cr","storage_common.cr","captive_portal.cr","printing.cr","gesture_detection.cr","gl_init.cr","storage_browser.cr","events.cr","ui_base.cr","bluetooth.cr","native_theme.cr","policy_component.cr","ui_base_ime.cr","gpu.cr","gles2_implementation.cr","media.cr","media_mojo_services.cr","media_gpu.cr","cc.cr","capture.cr","blink_platform.cr","cc_ipc.cr","blink_core.cr","cc_surfaces.cr","snapshot.cr","display_compositor.cr","blink_modules.cr","cc_blink.cr","ui_android.cr","shell_dialogs.cr","blink_web.cr","compositor.cr","media_blink.cr","power_save_blocker.cr","content.cr","domain_reliability.cr","web_dialogs.cr","sessions.cr","chrome.cr"};
    static String sVersionNumber =
      "54.0.2838.0";
}
