// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.chrome.browser.offlinepages.downloads;

import android.content.Context;

import org.chromium.base.annotations.CalledByNative;
import org.chromium.chrome.browser.download.DownloadInfo;
import org.chromium.chrome.browser.download.DownloadManagerService;
import org.chromium.chrome.browser.download.DownloadNotifier;

/**
 * Class for dispatching offline page/request related notifications to the
 * {org.chromium.chrome.browser.download.DownloadNotifier}.
 */
public class OfflinePageNotificationBridge {
    /**
    * Update download notification to success.
    * @param context Context to show notifications.
    * @param guid GUID of a request to download a page related to the notification.
    * @param url URL of the page to download.
    */
    @CalledByNative
    public static void notifyDownloadSuccessful(Context context, String guid, String url) {
        DownloadNotifier notifier = getDownloadNotifier(context);
        if (notifier == null) return;

        DownloadInfo downloadInfo = new DownloadInfo.Builder()
                                            .setIsOfflinePage(true)
                                            .setDownloadGuid(guid)
                                            .setFileName(url)
                                            .setIsResumable(false)
                                            .setIsOffTheRecord(false)
                                            .build();

        notifier.notifyDownloadSuccessful(downloadInfo, -1, false);
    }

    /**
     * Update download notification to failure.
     * @param context Context to show notifications.
     * @param guid GUID of a request to download a page related to the notification.
     * @param url URL of the page to download.
     */
    @CalledByNative
    public static void notifyDownloadFailed(Context context, String guid, String url) {
        DownloadNotifier notifier = getDownloadNotifier(context);
        if (notifier == null) return;

        DownloadInfo downloadInfo =
                new DownloadInfo.Builder().setIsOfflinePage(true).setDownloadGuid(guid).build();

        notifier.notifyDownloadFailed(downloadInfo);
    }

    /**
     * Called by offline page backend to notify the user of download progress.
     * @param context Context to show notifications.
     * @param guid GUID of a request to download a page related to the notification.
     * @param url URL of the page to download.
     * @param startTime Time of the request.
     */
    @CalledByNative
    public static void notifyDownloadProgress(
            Context context, String guid, String url, long startTime) {
        DownloadNotifier notifier = getDownloadNotifier(context);
        if (notifier == null) return;

        DownloadInfo downloadInfo = new DownloadInfo.Builder()
                                            .setIsOfflinePage(true)
                                            .setDownloadGuid(guid)
                                            .setFilePath(url)
                                            .setPercentCompleted(-1)
                                            .setIsOffTheRecord(false)
                                            .setIsResumable(true)
                                            .setTimeRemainingInMillis(0)
                                            .build();

        notifier.notifyDownloadProgress(downloadInfo, startTime, false);
    }

    /**
     * Update download notification to paused.
     * @param context Context to show notifications.
     * @param guid GUID of a request to download a page related to the notification.
     */
    @CalledByNative
    public static void notifyDownloadPaused(Context context, String guid) {
        DownloadNotifier notifier = getDownloadNotifier(context);
        if (notifier == null) return;

        DownloadInfo downloadInfo =
                new DownloadInfo.Builder().setIsOfflinePage(true).setDownloadGuid(guid).build();

        notifier.notifyDownloadPaused(downloadInfo);
    }

    /**
     * Update download notification to interrupted.
     * @param context Context to show notifications.
     * @param guid GUID of a request to download a page related to the notification.
     */
    @CalledByNative
    public static void notifyDownloadInterrupted(Context context, String guid) {
        DownloadNotifier notifier = getDownloadNotifier(context);
        if (notifier == null) return;

        DownloadInfo downloadInfo = new DownloadInfo.Builder()
                                            .setIsOfflinePage(true)
                                            .setDownloadGuid(guid)
                                            .setIsResumable(true)
                                            .build();

        notifier.notifyDownloadInterrupted(downloadInfo, true);
    }

    /**
     * Update download notification to canceled.
     * @param context Context to show notifications.
     * @param guid GUID of a request to download a page related to the notification.
     */
    @CalledByNative
    public static void notifyDownloadCanceled(Context context, String guid) {
        DownloadNotifier notifier = getDownloadNotifier(context);
        if (notifier == null) return;

        notifier.notifyDownloadCanceled(guid);
    }

    private static DownloadNotifier getDownloadNotifier(Context context) {
        if (!DownloadManagerService.hasDownloadManagerService()) return null;
        return DownloadManagerService.getDownloadManagerService(context).getDownloadNotifier();
    }
}
