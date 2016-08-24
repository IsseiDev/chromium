/* AUTO-GENERATED FILE.  DO NOT MODIFY. */

package org.chromium.components.web_contents_delegate_android;

public final class R {
    public static final class drawable {
        public static int bubble = 0x7f020000;
        public static int bubble_arrow_up = 0x7f020001;
        public static int ic_warning = 0x7f020002;
    }
    public static final class id {
        public static int arrow_image = 0x7f040003;
        public static int icon_view = 0x7f040001;
        public static int main_text = 0x7f040004;
        public static int sub_text = 0x7f040005;
        public static int text_wrapper = 0x7f040002;
        public static int top_view = 0x7f040000;
    }
    public static final class layout {
        public static int validation_message_bubble = 0x7f030000;
    }
    public static void onResourcesLoaded(int packageId) {
        onResourcesLoadedDrawable(packageId);
        onResourcesLoadedId(packageId);
        onResourcesLoadedLayout(packageId);
    }
    private static void onResourcesLoadedDrawable(int packageId) {
        drawable.bubble = (drawable.bubble & 0x00ffffff) | (packageId << 24);
        drawable.bubble_arrow_up = (drawable.bubble_arrow_up & 0x00ffffff) | (packageId << 24);
        drawable.ic_warning = (drawable.ic_warning & 0x00ffffff) | (packageId << 24);
    }
    private static void onResourcesLoadedId(int packageId) {
        id.arrow_image = (id.arrow_image & 0x00ffffff) | (packageId << 24);
        id.icon_view = (id.icon_view & 0x00ffffff) | (packageId << 24);
        id.main_text = (id.main_text & 0x00ffffff) | (packageId << 24);
        id.sub_text = (id.sub_text & 0x00ffffff) | (packageId << 24);
        id.text_wrapper = (id.text_wrapper & 0x00ffffff) | (packageId << 24);
        id.top_view = (id.top_view & 0x00ffffff) | (packageId << 24);
    }
    private static void onResourcesLoadedLayout(int packageId) {
        layout.validation_message_bubble = (layout.validation_message_bubble & 0x00ffffff) | (packageId << 24);
    }
}