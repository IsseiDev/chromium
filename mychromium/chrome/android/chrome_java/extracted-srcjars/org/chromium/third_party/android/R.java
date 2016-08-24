/* AUTO-GENERATED FILE.  DO NOT MODIFY. */

package org.chromium.third_party.android;

public final class R {
    public static final class attr {
        public static int fillColor = 0x7f010003;
        public static int fillColorSecondary = 0x7f010004;
        public static int optimalWidth = 0x7f010000;
        public static int optimalWidthWeight = 0x7f010001;
        public static int strokeColor = 0x7f010002;
    }
    public static final class id {
        public static int compressed_series = 0x7f020000;
        public static int original_series = 0x7f020001;
    }
    public static final class styleable {
        public static int[] ChartNetworkSeriesView = { 0x7f010002, 0x7f010003, 0x7f010004 };
        public static int ChartNetworkSeriesView_fillColor = 1;
        public static int ChartNetworkSeriesView_fillColorSecondary = 2;
        public static int ChartNetworkSeriesView_strokeColor = 0;
        public static int[] ChartView = { 0x7f010000, 0x7f010001 };
        public static int ChartView_optimalWidth = 0;
        public static int ChartView_optimalWidthWeight = 1;
    }
    public static void onResourcesLoaded(int packageId) {
        onResourcesLoadedAttr(packageId);
        onResourcesLoadedId(packageId);
        onResourcesLoadedStyleable(packageId);
        for(int i = 0; i < styleable.ChartNetworkSeriesView.length; ++i) {
            styleable.ChartNetworkSeriesView[i] = (styleable.ChartNetworkSeriesView[i] & 0x00ffffff) | (packageId << 24);
        }
        for(int i = 0; i < styleable.ChartView.length; ++i) {
            styleable.ChartView[i] = (styleable.ChartView[i] & 0x00ffffff) | (packageId << 24);
        }
    }
    private static void onResourcesLoadedAttr(int packageId) {
        attr.fillColor = (attr.fillColor & 0x00ffffff) | (packageId << 24);
        attr.fillColorSecondary = (attr.fillColorSecondary & 0x00ffffff) | (packageId << 24);
        attr.optimalWidth = (attr.optimalWidth & 0x00ffffff) | (packageId << 24);
        attr.optimalWidthWeight = (attr.optimalWidthWeight & 0x00ffffff) | (packageId << 24);
        attr.strokeColor = (attr.strokeColor & 0x00ffffff) | (packageId << 24);
    }
    private static void onResourcesLoadedId(int packageId) {
        id.compressed_series = (id.compressed_series & 0x00ffffff) | (packageId << 24);
        id.original_series = (id.original_series & 0x00ffffff) | (packageId << 24);
    }
    private static void onResourcesLoadedStyleable(int packageId) {
    }
}