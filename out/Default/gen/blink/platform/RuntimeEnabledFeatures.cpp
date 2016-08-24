// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "platform/RuntimeEnabledFeatures.h"

#include "wtf/Assertions.h"
#include "wtf/text/WTFString.h"

namespace {

bool caseInsensitiveEqual(const std::string& a, const std::string& b)
{
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (tolower(a[i]) != tolower(b[i]))
            return false;
    }
    return true;
}

} // namespace

namespace blink {

RuntimeEnabledFeatures::Backup::Backup()
    :
    m_accelerated2dCanvas(RuntimeEnabledFeatures::accelerated2dCanvasEnabled())
    , m_alwaysUseComplexText(RuntimeEnabledFeatures::alwaysUseComplexTextEnabled())
    , m_audioOutputDevices(RuntimeEnabledFeatures::audioOutputDevicesEnabled())
    , m_audioVideoTracks(RuntimeEnabledFeatures::audioVideoTracksEnabled())
    , m_auxclick(RuntimeEnabledFeatures::auxclickEnabled())
    , m_backgroundSync(RuntimeEnabledFeatures::backgroundSyncEnabled())
    , m_backspaceDefaultHandler(RuntimeEnabledFeatures::backspaceDefaultHandlerEnabled())
    , m_broadcastChannel(RuntimeEnabledFeatures::broadcastChannelEnabled())
    , m_budget(RuntimeEnabledFeatures::budgetEnabled())
    , m_canvas2dFixedRenderingMode(RuntimeEnabledFeatures::canvas2dFixedRenderingModeEnabled())
    , m_enableCanvas2dDynamicRenderingModeSwitching(RuntimeEnabledFeatures::enableCanvas2dDynamicRenderingModeSwitchingEnabled())
    , m_canvas2dImageChromium(RuntimeEnabledFeatures::canvas2dImageChromiumEnabled())
    , m_clientHints(RuntimeEnabledFeatures::clientHintsEnabled())
    , m_compositeOpaqueScrollers(RuntimeEnabledFeatures::compositeOpaqueScrollersEnabled())
    , m_colorCorrectRendering(RuntimeEnabledFeatures::colorCorrectRenderingEnabled())
    , m_compositedSelectionUpdate(RuntimeEnabledFeatures::compositedSelectionUpdateEnabled())
    , m_compositorWorker(RuntimeEnabledFeatures::compositorWorkerEnabled())
    , m_contextMenu(RuntimeEnabledFeatures::contextMenuEnabled())
    , m_corsRFC1918(RuntimeEnabledFeatures::corsRFC1918Enabled())
    , m_credentialManager(RuntimeEnabledFeatures::credentialManagerEnabled())
    , m_css3Text(RuntimeEnabledFeatures::css3TextEnabled())
    , m_css3TextDecorations(RuntimeEnabledFeatures::css3TextDecorationsEnabled())
    , m_cssApplyAtRules(RuntimeEnabledFeatures::cssApplyAtRulesEnabled())
    , m_cssAdditiveAnimations(RuntimeEnabledFeatures::cssAdditiveAnimationsEnabled())
    , m_cssBackdropFilter(RuntimeEnabledFeatures::cssBackdropFilterEnabled())
    , m_cssBoxReflectFilter(RuntimeEnabledFeatures::cssBoxReflectFilterEnabled())
    , m_cssHexAlphaColor(RuntimeEnabledFeatures::cssHexAlphaColorEnabled())
    , m_cssContainment(RuntimeEnabledFeatures::cssContainmentEnabled())
    , m_cssFontDisplay(RuntimeEnabledFeatures::cssFontDisplayEnabled())
    , m_cssFontSizeAdjust(RuntimeEnabledFeatures::cssFontSizeAdjustEnabled())
    , m_cssGridLayout(RuntimeEnabledFeatures::cssGridLayoutEnabled())
    , m_cssHyphens(RuntimeEnabledFeatures::cssHyphensEnabled())
    , m_cssInBodyDoesNotBlockPaint(RuntimeEnabledFeatures::cssInBodyDoesNotBlockPaintEnabled())
    , m_cssIndependentTransformProperties(RuntimeEnabledFeatures::cssIndependentTransformPropertiesEnabled())
    , m_cssMaskSourceType(RuntimeEnabledFeatures::cssMaskSourceTypeEnabled())
    , m_cssomSmoothScroll(RuntimeEnabledFeatures::cssomSmoothScrollEnabled())
    , m_cssPaintAPI(RuntimeEnabledFeatures::cssPaintAPIEnabled())
    , m_cssPropertyD(RuntimeEnabledFeatures::cssPropertyDEnabled())
    , m_cssSnapSize(RuntimeEnabledFeatures::cssSnapSizeEnabled())
    , m_cssStickyPosition(RuntimeEnabledFeatures::cssStickyPositionEnabled())
    , m_cssTouchActionPanDirections(RuntimeEnabledFeatures::cssTouchActionPanDirectionsEnabled())
    , m_cssTypedOM(RuntimeEnabledFeatures::cssTypedOMEnabled())
    , m_cssVariables(RuntimeEnabledFeatures::cssVariablesEnabled())
    , m_cssViewport(RuntimeEnabledFeatures::cssViewportEnabled())
    , m_cssScrollSnapPoints(RuntimeEnabledFeatures::cssScrollSnapPointsEnabled())
    , m_customElementsV1(RuntimeEnabledFeatures::customElementsV1Enabled())
    , m_customSchemeHandler(RuntimeEnabledFeatures::customSchemeHandlerEnabled())
    , m_database(RuntimeEnabledFeatures::databaseEnabled())
    , m_decodeToYUV(RuntimeEnabledFeatures::decodeToYUVEnabled())
    , m_deviceLight(RuntimeEnabledFeatures::deviceLightEnabled())
    , m_displayList2dCanvas(RuntimeEnabledFeatures::displayList2dCanvasEnabled())
    , m_documentWriteEvaluator(RuntimeEnabledFeatures::documentWriteEvaluatorEnabled())
    , m_dOMConvenienceAPI(RuntimeEnabledFeatures::dOMConvenienceAPIEnabled())
    , m_durableStorage(RuntimeEnabledFeatures::durableStorageEnabled())
    , m_fontCacheScaling(RuntimeEnabledFeatures::fontCacheScalingEnabled())
    , m_forceDisplayList2dCanvas(RuntimeEnabledFeatures::forceDisplayList2dCanvasEnabled())
    , m_forceDisable2dCanvasCopyOnWrite(RuntimeEnabledFeatures::forceDisable2dCanvasCopyOnWriteEnabled())
    , m_execCommandInJavaScript(RuntimeEnabledFeatures::execCommandInJavaScriptEnabled())
    , m_computedAccessibilityInfo(RuntimeEnabledFeatures::computedAccessibilityInfoEnabled())
    , m_experimentalCanvasFeatures(RuntimeEnabledFeatures::experimentalCanvasFeaturesEnabled())
    , m_experimentalContentSecurityPolicyFeatures(RuntimeEnabledFeatures::experimentalContentSecurityPolicyFeaturesEnabled())
    , m_experimentalV8Extras(RuntimeEnabledFeatures::experimentalV8ExtrasEnabled())
    , m_fastMobileScrolling(RuntimeEnabledFeatures::fastMobileScrollingEnabled())
    , m_featurePolicy(RuntimeEnabledFeatures::featurePolicyEnabled())
    , m_fileAPIBlobClose(RuntimeEnabledFeatures::fileAPIBlobCloseEnabled())
    , m_fileSystem(RuntimeEnabledFeatures::fileSystemEnabled())
    , m_foreignFetch(RuntimeEnabledFeatures::foreignFetchEnabled())
    , m_fullscreenUnprefixed(RuntimeEnabledFeatures::fullscreenUnprefixedEnabled())
    , m_frameTimingSupport(RuntimeEnabledFeatures::frameTimingSupportEnabled())
    , m_geometryInterfaces(RuntimeEnabledFeatures::geometryInterfacesEnabled())
    , m_getUserMedia(RuntimeEnabledFeatures::getUserMediaEnabled())
    , m_globalCacheStorage(RuntimeEnabledFeatures::globalCacheStorageEnabled())
    , m_iDBObserver(RuntimeEnabledFeatures::iDBObserverEnabled())
    , m_imageCapture(RuntimeEnabledFeatures::imageCaptureEnabled())
    , m_imageOrientation(RuntimeEnabledFeatures::imageOrientationEnabled())
    , m_indexedDBExperimental(RuntimeEnabledFeatures::indexedDBExperimentalEnabled())
    , m_inertTopControls(RuntimeEnabledFeatures::inertTopControlsEnabled())
    , m_inputEvent(RuntimeEnabledFeatures::inputEventEnabled())
    , m_inputModeAttribute(RuntimeEnabledFeatures::inputModeAttributeEnabled())
    , m_inputMultipleFieldsUI(RuntimeEnabledFeatures::inputMultipleFieldsUIEnabled())
    , m_installedApp(RuntimeEnabledFeatures::installedAppEnabled())
    , m_intersectionObserver(RuntimeEnabledFeatures::intersectionObserverEnabled())
    , m_langAttributeAwareFormControlUI(RuntimeEnabledFeatures::langAttributeAwareFormControlUIEnabled())
    , m_layoutNG(RuntimeEnabledFeatures::layoutNGEnabled())
    , m_linkServiceWorker(RuntimeEnabledFeatures::linkServiceWorkerEnabled())
    , m_fractionalScrollOffsets(RuntimeEnabledFeatures::fractionalScrollOffsetsEnabled())
    , m_loadingWithMojo(RuntimeEnabledFeatures::loadingWithMojoEnabled())
    , m_mediaCapture(RuntimeEnabledFeatures::mediaCaptureEnabled())
    , m_mediaCaptureFromCanvas(RuntimeEnabledFeatures::mediaCaptureFromCanvasEnabled())
    , m_mediaCaptureFromVideo(RuntimeEnabledFeatures::mediaCaptureFromVideoEnabled())
    , m_mediaConstraints(RuntimeEnabledFeatures::mediaConstraintsEnabled())
    , m_mediaDocumentDownloadButton(RuntimeEnabledFeatures::mediaDocumentDownloadButtonEnabled())
    , m_mediaGetSettings(RuntimeEnabledFeatures::mediaGetSettingsEnabled())
    , m_mediaSession(RuntimeEnabledFeatures::mediaSessionEnabled())
    , m_mediaSourceExperimental(RuntimeEnabledFeatures::mediaSourceExperimentalEnabled())
    , m_mediaSourceNewAbortAndDuration(RuntimeEnabledFeatures::mediaSourceNewAbortAndDurationEnabled())
    , m_mediaStreamSpeech(RuntimeEnabledFeatures::mediaStreamSpeechEnabled())
    , m_memoryInfoInWorkers(RuntimeEnabledFeatures::memoryInfoInWorkersEnabled())
    , m_mobileLayoutTheme(RuntimeEnabledFeatures::mobileLayoutThemeEnabled())
    , m_moduleScripts(RuntimeEnabledFeatures::moduleScriptsEnabled())
    , m_navigatorContentUtils(RuntimeEnabledFeatures::navigatorContentUtilsEnabled())
    , m_webNFC(RuntimeEnabledFeatures::webNFCEnabled())
    , m_networkInformation(RuntimeEnabledFeatures::networkInformationEnabled())
    , m_netInfoDownlinkMax(RuntimeEnabledFeatures::netInfoDownlinkMaxEnabled())
    , m_newMediaPlaybackUi(RuntimeEnabledFeatures::newMediaPlaybackUiEnabled())
    , m_notificationConstructor(RuntimeEnabledFeatures::notificationConstructorEnabled())
    , m_notificationBadge(RuntimeEnabledFeatures::notificationBadgeEnabled())
    , m_notificationInlineReplies(RuntimeEnabledFeatures::notificationInlineRepliesEnabled())
    , m_notifications(RuntimeEnabledFeatures::notificationsEnabled())
    , m_onDeviceChange(RuntimeEnabledFeatures::onDeviceChangeEnabled())
    , m_orientationEvent(RuntimeEnabledFeatures::orientationEventEnabled())
    , m_originTrials(RuntimeEnabledFeatures::originTrialsEnabled())
    , m_originTrialsSampleAPI(RuntimeEnabledFeatures::originTrialsSampleAPIEnabled())
    , m_forceOverlayFullscreenVideo(RuntimeEnabledFeatures::forceOverlayFullscreenVideoEnabled())
    , m_overlayScrollbars(RuntimeEnabledFeatures::overlayScrollbarsEnabled())
    , m_hideScrollbars(RuntimeEnabledFeatures::hideScrollbarsEnabled())
    , m_pagePopup(RuntimeEnabledFeatures::pagePopupEnabled())
    , m_paintOptimizations(RuntimeEnabledFeatures::paintOptimizationsEnabled())
    , m_passiveDocumentEventListeners(RuntimeEnabledFeatures::passiveDocumentEventListenersEnabled())
    , m_passiveEventListenersDueToFling(RuntimeEnabledFeatures::passiveEventListenersDueToFlingEnabled())
    , m_passPaintVisualRectToCompositor(RuntimeEnabledFeatures::passPaintVisualRectToCompositorEnabled())
    , m_pathOpsSVGClipping(RuntimeEnabledFeatures::pathOpsSVGClippingEnabled())
    , m_paymentRequest(RuntimeEnabledFeatures::paymentRequestEnabled())
    , m_performanceObserver(RuntimeEnabledFeatures::performanceObserverEnabled())
    , m_permissionDelegation(RuntimeEnabledFeatures::permissionDelegationEnabled())
    , m_permissions(RuntimeEnabledFeatures::permissionsEnabled())
    , m_permissionsRequestRevoke(RuntimeEnabledFeatures::permissionsRequestRevokeEnabled())
    , m_pointerEvent(RuntimeEnabledFeatures::pointerEventEnabled())
    , m_preciseMemoryInfo(RuntimeEnabledFeatures::preciseMemoryInfoEnabled())
    , m_prefixedVideoFullscreen(RuntimeEnabledFeatures::prefixedVideoFullscreenEnabled())
    , m_presentation(RuntimeEnabledFeatures::presentationEnabled())
    , m_presentationReceiver(RuntimeEnabledFeatures::presentationReceiverEnabled())
    , m_pushMessaging(RuntimeEnabledFeatures::pushMessagingEnabled())
    , m_quotaPromise(RuntimeEnabledFeatures::quotaPromiseEnabled())
    , m_reducedReferrerGranularity(RuntimeEnabledFeatures::reducedReferrerGranularityEnabled())
    , m_referrerPolicyHeader(RuntimeEnabledFeatures::referrerPolicyHeaderEnabled())
    , m_remotePlayback(RuntimeEnabledFeatures::remotePlaybackEnabled())
    , m_renderingPipelineThrottling(RuntimeEnabledFeatures::renderingPipelineThrottlingEnabled())
    , m_renderUnicodeControlCharacters(RuntimeEnabledFeatures::renderUnicodeControlCharactersEnabled())
    , m_requestIdleCallback(RuntimeEnabledFeatures::requestIdleCallbackEnabled())
    , m_resizeObserver(RuntimeEnabledFeatures::resizeObserverEnabled())
    , m_rTCPeerConnectionNewGetStats(RuntimeEnabledFeatures::rTCPeerConnectionNewGetStatsEnabled())
    , m_sandboxBlocksModals(RuntimeEnabledFeatures::sandboxBlocksModalsEnabled())
    , m_scriptedSpeech(RuntimeEnabledFeatures::scriptedSpeechEnabled())
    , m_scrollAnchoring(RuntimeEnabledFeatures::scrollAnchoringEnabled())
    , m_scrollTopLeftInterop(RuntimeEnabledFeatures::scrollTopLeftInteropEnabled())
    , m_sensor(RuntimeEnabledFeatures::sensorEnabled())
    , m_serviceWorkerClientAttributes(RuntimeEnabledFeatures::serviceWorkerClientAttributesEnabled())
    , m_serviceWorkerClientsGetID(RuntimeEnabledFeatures::serviceWorkerClientsGetIDEnabled())
    , m_serviceWorkerWindowClientNavigate(RuntimeEnabledFeatures::serviceWorkerWindowClientNavigateEnabled())
    , m_setRootScroller(RuntimeEnabledFeatures::setRootScrollerEnabled())
    , m_shadowDOMV1(RuntimeEnabledFeatures::shadowDOMV1Enabled())
    , m_sharedArrayBuffer(RuntimeEnabledFeatures::sharedArrayBufferEnabled())
    , m_sharedWorker(RuntimeEnabledFeatures::sharedWorkerEnabled())
    , m_slimmingPaintInvalidation(RuntimeEnabledFeatures::slimmingPaintInvalidationEnabled())
    , m_slimmingPaintV2(RuntimeEnabledFeatures::slimmingPaintV2Enabled())
    , m_slimmingPaintStrictCullRectClipping(RuntimeEnabledFeatures::slimmingPaintStrictCullRectClippingEnabled())
    , m_slimmingPaintUnderInvalidationChecking(RuntimeEnabledFeatures::slimmingPaintUnderInvalidationCheckingEnabled())
    , m_stableBlinkFeatures(RuntimeEnabledFeatures::stableBlinkFeaturesEnabled())
    , m_stackedCSSPropertyAnimations(RuntimeEnabledFeatures::stackedCSSPropertyAnimationsEnabled())
    , m_styleSharing(RuntimeEnabledFeatures::styleSharingEnabled())
    , m_styleMatchedPropertiesCache(RuntimeEnabledFeatures::styleMatchedPropertiesCacheEnabled())
    , m_experimentalStream(RuntimeEnabledFeatures::experimentalStreamEnabled())
    , m_speculativeLaunchServiceWorker(RuntimeEnabledFeatures::speculativeLaunchServiceWorkerEnabled())
    , m_storageEstimate(RuntimeEnabledFeatures::storageEstimateEnabled())
    , m_suborigins(RuntimeEnabledFeatures::suboriginsEnabled())
    , m_timerThrottlingForBackgroundTabs(RuntimeEnabledFeatures::timerThrottlingForBackgroundTabsEnabled())
    , m_touch(RuntimeEnabledFeatures::touchEnabled())
    , m_traceWrappables(RuntimeEnabledFeatures::traceWrappablesEnabled())
    , m_trustedEventsDefaultAction(RuntimeEnabledFeatures::trustedEventsDefaultActionEnabled())
    , m_unsafeES3APIs(RuntimeEnabledFeatures::unsafeES3APIsEnabled())
    , m_unsandboxedAuxiliary(RuntimeEnabledFeatures::unsandboxedAuxiliaryEnabled())
    , m_userSelectAll(RuntimeEnabledFeatures::userSelectAllEnabled())
    , m_webAnimationsAPI(RuntimeEnabledFeatures::webAnimationsAPIEnabled())
    , m_webAnimationsSVG(RuntimeEnabledFeatures::webAnimationsSVGEnabled())
    , m_webBluetooth(RuntimeEnabledFeatures::webBluetoothEnabled())
    , m_webGLDraftExtensions(RuntimeEnabledFeatures::webGLDraftExtensionsEnabled())
    , m_webGLImageChromium(RuntimeEnabledFeatures::webGLImageChromiumEnabled())
    , m_webUSB(RuntimeEnabledFeatures::webUSBEnabled())
    , m_webVR(RuntimeEnabledFeatures::webVREnabled())
    , m_webVTTRegions(RuntimeEnabledFeatures::webVTTRegionsEnabled())
    , m_v8IdleTasks(RuntimeEnabledFeatures::v8IdleTasksEnabled())
    , m_visibilityChangeOnUnload(RuntimeEnabledFeatures::visibilityChangeOnUnloadEnabled())
    , m_xslt(RuntimeEnabledFeatures::xsltEnabled())
    , m_smil(RuntimeEnabledFeatures::smilEnabled())
    , m_scrollCustomization(RuntimeEnabledFeatures::scrollCustomizationEnabled())
    , m_scrollRestoration(RuntimeEnabledFeatures::scrollRestorationEnabled())
    , m_autoplayMutedVideos(RuntimeEnabledFeatures::autoplayMutedVideosEnabled())
    , m_visualViewportAPI(RuntimeEnabledFeatures::visualViewportAPIEnabled())
    , m_wakeLock(RuntimeEnabledFeatures::wakeLockEnabled())
    , m_webFontsInterventionV2With2G(RuntimeEnabledFeatures::webFontsInterventionV2With2GEnabled())
    , m_webFontsInterventionV2WithSlow2G(RuntimeEnabledFeatures::webFontsInterventionV2WithSlow2GEnabled())
    , m_webFontsInterventionTrigger(RuntimeEnabledFeatures::webFontsInterventionTriggerEnabled())
    , m_webShare(RuntimeEnabledFeatures::webShareEnabled())
    , m_worklet(RuntimeEnabledFeatures::workletEnabled())
    , m_weakMemoryCache(RuntimeEnabledFeatures::weakMemoryCacheEnabled())
    , m_doNotUnlockSharedBuffer(RuntimeEnabledFeatures::doNotUnlockSharedBufferEnabled())
    , m_parseHTMLOnMainThread(RuntimeEnabledFeatures::parseHTMLOnMainThreadEnabled())
    , m_sendBeaconThrowForBlobWithNonSimpleType(RuntimeEnabledFeatures::sendBeaconThrowForBlobWithNonSimpleTypeEnabled())
{
}

void RuntimeEnabledFeatures::Backup::restore()
{
    RuntimeEnabledFeatures::setAccelerated2dCanvasEnabled(m_accelerated2dCanvas);
    RuntimeEnabledFeatures::setAlwaysUseComplexTextEnabled(m_alwaysUseComplexText);
    RuntimeEnabledFeatures::setAudioOutputDevicesEnabled(m_audioOutputDevices);
    RuntimeEnabledFeatures::setAudioVideoTracksEnabled(m_audioVideoTracks);
    RuntimeEnabledFeatures::setAuxclickEnabled(m_auxclick);
    RuntimeEnabledFeatures::setBackgroundSyncEnabled(m_backgroundSync);
    RuntimeEnabledFeatures::setBackspaceDefaultHandlerEnabled(m_backspaceDefaultHandler);
    RuntimeEnabledFeatures::setBroadcastChannelEnabled(m_broadcastChannel);
    RuntimeEnabledFeatures::setBudgetEnabled(m_budget);
    RuntimeEnabledFeatures::setCanvas2dFixedRenderingModeEnabled(m_canvas2dFixedRenderingMode);
    RuntimeEnabledFeatures::setEnableCanvas2dDynamicRenderingModeSwitchingEnabled(m_enableCanvas2dDynamicRenderingModeSwitching);
    RuntimeEnabledFeatures::setCanvas2dImageChromiumEnabled(m_canvas2dImageChromium);
    RuntimeEnabledFeatures::setClientHintsEnabled(m_clientHints);
    RuntimeEnabledFeatures::setCompositeOpaqueScrollersEnabled(m_compositeOpaqueScrollers);
    RuntimeEnabledFeatures::setColorCorrectRenderingEnabled(m_colorCorrectRendering);
    RuntimeEnabledFeatures::setCompositedSelectionUpdateEnabled(m_compositedSelectionUpdate);
    RuntimeEnabledFeatures::setCompositorWorkerEnabled(m_compositorWorker);
    RuntimeEnabledFeatures::setContextMenuEnabled(m_contextMenu);
    RuntimeEnabledFeatures::setCorsRFC1918Enabled(m_corsRFC1918);
    RuntimeEnabledFeatures::setCredentialManagerEnabled(m_credentialManager);
    RuntimeEnabledFeatures::setCSS3TextEnabled(m_css3Text);
    RuntimeEnabledFeatures::setCSS3TextDecorationsEnabled(m_css3TextDecorations);
    RuntimeEnabledFeatures::setCSSApplyAtRulesEnabled(m_cssApplyAtRules);
    RuntimeEnabledFeatures::setCSSAdditiveAnimationsEnabled(m_cssAdditiveAnimations);
    RuntimeEnabledFeatures::setCSSBackdropFilterEnabled(m_cssBackdropFilter);
    RuntimeEnabledFeatures::setCSSBoxReflectFilterEnabled(m_cssBoxReflectFilter);
    RuntimeEnabledFeatures::setCSSHexAlphaColorEnabled(m_cssHexAlphaColor);
    RuntimeEnabledFeatures::setCSSContainmentEnabled(m_cssContainment);
    RuntimeEnabledFeatures::setCSSFontDisplayEnabled(m_cssFontDisplay);
    RuntimeEnabledFeatures::setCSSFontSizeAdjustEnabled(m_cssFontSizeAdjust);
    RuntimeEnabledFeatures::setCSSGridLayoutEnabled(m_cssGridLayout);
    RuntimeEnabledFeatures::setCSSHyphensEnabled(m_cssHyphens);
    RuntimeEnabledFeatures::setCSSInBodyDoesNotBlockPaintEnabled(m_cssInBodyDoesNotBlockPaint);
    RuntimeEnabledFeatures::setCSSIndependentTransformPropertiesEnabled(m_cssIndependentTransformProperties);
    RuntimeEnabledFeatures::setCSSMaskSourceTypeEnabled(m_cssMaskSourceType);
    RuntimeEnabledFeatures::setCSSOMSmoothScrollEnabled(m_cssomSmoothScroll);
    RuntimeEnabledFeatures::setCSSPaintAPIEnabled(m_cssPaintAPI);
    RuntimeEnabledFeatures::setCSSPropertyDEnabled(m_cssPropertyD);
    RuntimeEnabledFeatures::setCSSSnapSizeEnabled(m_cssSnapSize);
    RuntimeEnabledFeatures::setCSSStickyPositionEnabled(m_cssStickyPosition);
    RuntimeEnabledFeatures::setCSSTouchActionPanDirectionsEnabled(m_cssTouchActionPanDirections);
    RuntimeEnabledFeatures::setCSSTypedOMEnabled(m_cssTypedOM);
    RuntimeEnabledFeatures::setCSSVariablesEnabled(m_cssVariables);
    RuntimeEnabledFeatures::setCSSViewportEnabled(m_cssViewport);
    RuntimeEnabledFeatures::setCSSScrollSnapPointsEnabled(m_cssScrollSnapPoints);
    RuntimeEnabledFeatures::setCustomElementsV1Enabled(m_customElementsV1);
    RuntimeEnabledFeatures::setCustomSchemeHandlerEnabled(m_customSchemeHandler);
    RuntimeEnabledFeatures::setDatabaseEnabled(m_database);
    RuntimeEnabledFeatures::setDecodeToYUVEnabled(m_decodeToYUV);
    RuntimeEnabledFeatures::setDeviceLightEnabled(m_deviceLight);
    RuntimeEnabledFeatures::setDisplayList2dCanvasEnabled(m_displayList2dCanvas);
    RuntimeEnabledFeatures::setDocumentWriteEvaluatorEnabled(m_documentWriteEvaluator);
    RuntimeEnabledFeatures::setDOMConvenienceAPIEnabled(m_dOMConvenienceAPI);
    RuntimeEnabledFeatures::setDurableStorageEnabled(m_durableStorage);
    RuntimeEnabledFeatures::setFontCacheScalingEnabled(m_fontCacheScaling);
    RuntimeEnabledFeatures::setForceDisplayList2dCanvasEnabled(m_forceDisplayList2dCanvas);
    RuntimeEnabledFeatures::setForceDisable2dCanvasCopyOnWriteEnabled(m_forceDisable2dCanvasCopyOnWrite);
    RuntimeEnabledFeatures::setExecCommandInJavaScriptEnabled(m_execCommandInJavaScript);
    RuntimeEnabledFeatures::setComputedAccessibilityInfoEnabled(m_computedAccessibilityInfo);
    RuntimeEnabledFeatures::setExperimentalCanvasFeaturesEnabled(m_experimentalCanvasFeatures);
    RuntimeEnabledFeatures::setExperimentalContentSecurityPolicyFeaturesEnabled(m_experimentalContentSecurityPolicyFeatures);
    RuntimeEnabledFeatures::setExperimentalV8ExtrasEnabled(m_experimentalV8Extras);
    RuntimeEnabledFeatures::setFastMobileScrollingEnabled(m_fastMobileScrolling);
    RuntimeEnabledFeatures::setFeaturePolicyEnabled(m_featurePolicy);
    RuntimeEnabledFeatures::setFileAPIBlobCloseEnabled(m_fileAPIBlobClose);
    RuntimeEnabledFeatures::setFileSystemEnabled(m_fileSystem);
    RuntimeEnabledFeatures::setForeignFetchEnabled(m_foreignFetch);
    RuntimeEnabledFeatures::setFullscreenUnprefixedEnabled(m_fullscreenUnprefixed);
    RuntimeEnabledFeatures::setFrameTimingSupportEnabled(m_frameTimingSupport);
    RuntimeEnabledFeatures::setGeometryInterfacesEnabled(m_geometryInterfaces);
    RuntimeEnabledFeatures::setGetUserMediaEnabled(m_getUserMedia);
    RuntimeEnabledFeatures::setGlobalCacheStorageEnabled(m_globalCacheStorage);
    RuntimeEnabledFeatures::setIDBObserverEnabled(m_iDBObserver);
    RuntimeEnabledFeatures::setImageCaptureEnabled(m_imageCapture);
    RuntimeEnabledFeatures::setImageOrientationEnabled(m_imageOrientation);
    RuntimeEnabledFeatures::setIndexedDBExperimentalEnabled(m_indexedDBExperimental);
    RuntimeEnabledFeatures::setInertTopControlsEnabled(m_inertTopControls);
    RuntimeEnabledFeatures::setInputEventEnabled(m_inputEvent);
    RuntimeEnabledFeatures::setInputModeAttributeEnabled(m_inputModeAttribute);
    RuntimeEnabledFeatures::setInputMultipleFieldsUIEnabled(m_inputMultipleFieldsUI);
    RuntimeEnabledFeatures::setInstalledAppEnabled(m_installedApp);
    RuntimeEnabledFeatures::setIntersectionObserverEnabled(m_intersectionObserver);
    RuntimeEnabledFeatures::setLangAttributeAwareFormControlUIEnabled(m_langAttributeAwareFormControlUI);
    RuntimeEnabledFeatures::setLayoutNGEnabled(m_layoutNG);
    RuntimeEnabledFeatures::setLinkServiceWorkerEnabled(m_linkServiceWorker);
    RuntimeEnabledFeatures::setFractionalScrollOffsetsEnabled(m_fractionalScrollOffsets);
    RuntimeEnabledFeatures::setLoadingWithMojoEnabled(m_loadingWithMojo);
    RuntimeEnabledFeatures::setMediaCaptureEnabled(m_mediaCapture);
    RuntimeEnabledFeatures::setMediaCaptureFromCanvasEnabled(m_mediaCaptureFromCanvas);
    RuntimeEnabledFeatures::setMediaCaptureFromVideoEnabled(m_mediaCaptureFromVideo);
    RuntimeEnabledFeatures::setMediaConstraintsEnabled(m_mediaConstraints);
    RuntimeEnabledFeatures::setMediaDocumentDownloadButtonEnabled(m_mediaDocumentDownloadButton);
    RuntimeEnabledFeatures::setMediaGetSettingsEnabled(m_mediaGetSettings);
    RuntimeEnabledFeatures::setMediaSessionEnabled(m_mediaSession);
    RuntimeEnabledFeatures::setMediaSourceExperimentalEnabled(m_mediaSourceExperimental);
    RuntimeEnabledFeatures::setMediaSourceNewAbortAndDurationEnabled(m_mediaSourceNewAbortAndDuration);
    RuntimeEnabledFeatures::setMediaStreamSpeechEnabled(m_mediaStreamSpeech);
    RuntimeEnabledFeatures::setMemoryInfoInWorkersEnabled(m_memoryInfoInWorkers);
    RuntimeEnabledFeatures::setMobileLayoutThemeEnabled(m_mobileLayoutTheme);
    RuntimeEnabledFeatures::setModuleScriptsEnabled(m_moduleScripts);
    RuntimeEnabledFeatures::setNavigatorContentUtilsEnabled(m_navigatorContentUtils);
    RuntimeEnabledFeatures::setWebNFCEnabled(m_webNFC);
    RuntimeEnabledFeatures::setNetworkInformationEnabled(m_networkInformation);
    RuntimeEnabledFeatures::setNetInfoDownlinkMaxEnabled(m_netInfoDownlinkMax);
    RuntimeEnabledFeatures::setNewMediaPlaybackUiEnabled(m_newMediaPlaybackUi);
    RuntimeEnabledFeatures::setNotificationConstructorEnabled(m_notificationConstructor);
    RuntimeEnabledFeatures::setNotificationBadgeEnabled(m_notificationBadge);
    RuntimeEnabledFeatures::setNotificationInlineRepliesEnabled(m_notificationInlineReplies);
    RuntimeEnabledFeatures::setNotificationsEnabled(m_notifications);
    RuntimeEnabledFeatures::setOnDeviceChangeEnabled(m_onDeviceChange);
    RuntimeEnabledFeatures::setOrientationEventEnabled(m_orientationEvent);
    RuntimeEnabledFeatures::setOriginTrialsEnabled(m_originTrials);
    RuntimeEnabledFeatures::setOriginTrialsSampleAPIEnabled(m_originTrialsSampleAPI);
    RuntimeEnabledFeatures::setForceOverlayFullscreenVideoEnabled(m_forceOverlayFullscreenVideo);
    RuntimeEnabledFeatures::setOverlayScrollbarsEnabled(m_overlayScrollbars);
    RuntimeEnabledFeatures::setHideScrollbarsEnabled(m_hideScrollbars);
    RuntimeEnabledFeatures::setPagePopupEnabled(m_pagePopup);
    RuntimeEnabledFeatures::setPaintOptimizationsEnabled(m_paintOptimizations);
    RuntimeEnabledFeatures::setPassiveDocumentEventListenersEnabled(m_passiveDocumentEventListeners);
    RuntimeEnabledFeatures::setPassiveEventListenersDueToFlingEnabled(m_passiveEventListenersDueToFling);
    RuntimeEnabledFeatures::setPassPaintVisualRectToCompositorEnabled(m_passPaintVisualRectToCompositor);
    RuntimeEnabledFeatures::setPathOpsSVGClippingEnabled(m_pathOpsSVGClipping);
    RuntimeEnabledFeatures::setPaymentRequestEnabled(m_paymentRequest);
    RuntimeEnabledFeatures::setPerformanceObserverEnabled(m_performanceObserver);
    RuntimeEnabledFeatures::setPermissionDelegationEnabled(m_permissionDelegation);
    RuntimeEnabledFeatures::setPermissionsEnabled(m_permissions);
    RuntimeEnabledFeatures::setPermissionsRequestRevokeEnabled(m_permissionsRequestRevoke);
    RuntimeEnabledFeatures::setPointerEventEnabled(m_pointerEvent);
    RuntimeEnabledFeatures::setPreciseMemoryInfoEnabled(m_preciseMemoryInfo);
    RuntimeEnabledFeatures::setPrefixedVideoFullscreenEnabled(m_prefixedVideoFullscreen);
    RuntimeEnabledFeatures::setPresentationEnabled(m_presentation);
    RuntimeEnabledFeatures::setPresentationReceiverEnabled(m_presentationReceiver);
    RuntimeEnabledFeatures::setPushMessagingEnabled(m_pushMessaging);
    RuntimeEnabledFeatures::setQuotaPromiseEnabled(m_quotaPromise);
    RuntimeEnabledFeatures::setReducedReferrerGranularityEnabled(m_reducedReferrerGranularity);
    RuntimeEnabledFeatures::setReferrerPolicyHeaderEnabled(m_referrerPolicyHeader);
    RuntimeEnabledFeatures::setRemotePlaybackEnabled(m_remotePlayback);
    RuntimeEnabledFeatures::setRenderingPipelineThrottlingEnabled(m_renderingPipelineThrottling);
    RuntimeEnabledFeatures::setRenderUnicodeControlCharactersEnabled(m_renderUnicodeControlCharacters);
    RuntimeEnabledFeatures::setRequestIdleCallbackEnabled(m_requestIdleCallback);
    RuntimeEnabledFeatures::setResizeObserverEnabled(m_resizeObserver);
    RuntimeEnabledFeatures::setRTCPeerConnectionNewGetStatsEnabled(m_rTCPeerConnectionNewGetStats);
    RuntimeEnabledFeatures::setSandboxBlocksModalsEnabled(m_sandboxBlocksModals);
    RuntimeEnabledFeatures::setScriptedSpeechEnabled(m_scriptedSpeech);
    RuntimeEnabledFeatures::setScrollAnchoringEnabled(m_scrollAnchoring);
    RuntimeEnabledFeatures::setScrollTopLeftInteropEnabled(m_scrollTopLeftInterop);
    RuntimeEnabledFeatures::setSensorEnabled(m_sensor);
    RuntimeEnabledFeatures::setServiceWorkerClientAttributesEnabled(m_serviceWorkerClientAttributes);
    RuntimeEnabledFeatures::setServiceWorkerClientsGetIDEnabled(m_serviceWorkerClientsGetID);
    RuntimeEnabledFeatures::setServiceWorkerWindowClientNavigateEnabled(m_serviceWorkerWindowClientNavigate);
    RuntimeEnabledFeatures::setSetRootScrollerEnabled(m_setRootScroller);
    RuntimeEnabledFeatures::setShadowDOMV1Enabled(m_shadowDOMV1);
    RuntimeEnabledFeatures::setSharedArrayBufferEnabled(m_sharedArrayBuffer);
    RuntimeEnabledFeatures::setSharedWorkerEnabled(m_sharedWorker);
    RuntimeEnabledFeatures::setSlimmingPaintInvalidationEnabled(m_slimmingPaintInvalidation);
    RuntimeEnabledFeatures::setSlimmingPaintV2Enabled(m_slimmingPaintV2);
    RuntimeEnabledFeatures::setSlimmingPaintStrictCullRectClippingEnabled(m_slimmingPaintStrictCullRectClipping);
    RuntimeEnabledFeatures::setSlimmingPaintUnderInvalidationCheckingEnabled(m_slimmingPaintUnderInvalidationChecking);
    RuntimeEnabledFeatures::setStableBlinkFeaturesEnabled(m_stableBlinkFeatures);
    RuntimeEnabledFeatures::setStackedCSSPropertyAnimationsEnabled(m_stackedCSSPropertyAnimations);
    RuntimeEnabledFeatures::setStyleSharingEnabled(m_styleSharing);
    RuntimeEnabledFeatures::setStyleMatchedPropertiesCacheEnabled(m_styleMatchedPropertiesCache);
    RuntimeEnabledFeatures::setExperimentalStreamEnabled(m_experimentalStream);
    RuntimeEnabledFeatures::setSpeculativeLaunchServiceWorkerEnabled(m_speculativeLaunchServiceWorker);
    RuntimeEnabledFeatures::setStorageEstimateEnabled(m_storageEstimate);
    RuntimeEnabledFeatures::setSuboriginsEnabled(m_suborigins);
    RuntimeEnabledFeatures::setTimerThrottlingForBackgroundTabsEnabled(m_timerThrottlingForBackgroundTabs);
    RuntimeEnabledFeatures::setTouchEnabled(m_touch);
    RuntimeEnabledFeatures::setTraceWrappablesEnabled(m_traceWrappables);
    RuntimeEnabledFeatures::setTrustedEventsDefaultActionEnabled(m_trustedEventsDefaultAction);
    RuntimeEnabledFeatures::setUnsafeES3APIsEnabled(m_unsafeES3APIs);
    RuntimeEnabledFeatures::setUnsandboxedAuxiliaryEnabled(m_unsandboxedAuxiliary);
    RuntimeEnabledFeatures::setUserSelectAllEnabled(m_userSelectAll);
    RuntimeEnabledFeatures::setWebAnimationsAPIEnabled(m_webAnimationsAPI);
    RuntimeEnabledFeatures::setWebAnimationsSVGEnabled(m_webAnimationsSVG);
    RuntimeEnabledFeatures::setWebBluetoothEnabled(m_webBluetooth);
    RuntimeEnabledFeatures::setWebGLDraftExtensionsEnabled(m_webGLDraftExtensions);
    RuntimeEnabledFeatures::setWebGLImageChromiumEnabled(m_webGLImageChromium);
    RuntimeEnabledFeatures::setWebUSBEnabled(m_webUSB);
    RuntimeEnabledFeatures::setWebVREnabled(m_webVR);
    RuntimeEnabledFeatures::setWebVTTRegionsEnabled(m_webVTTRegions);
    RuntimeEnabledFeatures::setV8IdleTasksEnabled(m_v8IdleTasks);
    RuntimeEnabledFeatures::setVisibilityChangeOnUnloadEnabled(m_visibilityChangeOnUnload);
    RuntimeEnabledFeatures::setXSLTEnabled(m_xslt);
    RuntimeEnabledFeatures::setsmilEnabled(m_smil);
    RuntimeEnabledFeatures::setScrollCustomizationEnabled(m_scrollCustomization);
    RuntimeEnabledFeatures::setScrollRestorationEnabled(m_scrollRestoration);
    RuntimeEnabledFeatures::setAutoplayMutedVideosEnabled(m_autoplayMutedVideos);
    RuntimeEnabledFeatures::setVisualViewportAPIEnabled(m_visualViewportAPI);
    RuntimeEnabledFeatures::setWakeLockEnabled(m_wakeLock);
    RuntimeEnabledFeatures::setWebFontsInterventionV2With2GEnabled(m_webFontsInterventionV2With2G);
    RuntimeEnabledFeatures::setWebFontsInterventionV2WithSlow2GEnabled(m_webFontsInterventionV2WithSlow2G);
    RuntimeEnabledFeatures::setWebFontsInterventionTriggerEnabled(m_webFontsInterventionTrigger);
    RuntimeEnabledFeatures::setWebShareEnabled(m_webShare);
    RuntimeEnabledFeatures::setWorkletEnabled(m_worklet);
    RuntimeEnabledFeatures::setWeakMemoryCacheEnabled(m_weakMemoryCache);
    RuntimeEnabledFeatures::setDoNotUnlockSharedBufferEnabled(m_doNotUnlockSharedBuffer);
    RuntimeEnabledFeatures::setParseHTMLOnMainThreadEnabled(m_parseHTMLOnMainThread);
    RuntimeEnabledFeatures::setSendBeaconThrowForBlobWithNonSimpleTypeEnabled(m_sendBeaconThrowForBlobWithNonSimpleType);
}

void RuntimeEnabledFeatures::setStableFeaturesEnabled(bool enable)
{
    setAccelerated2dCanvasEnabled(enable);
    setAlwaysUseComplexTextEnabled(enable);
    setAudioOutputDevicesEnabled(enable);
    setBackgroundSyncEnabled(enable);
    setBroadcastChannelEnabled(enable);
    setClientHintsEnabled(enable);
    setCredentialManagerEnabled(enable);
    setCSSBoxReflectFilterEnabled(enable);
    setCSSContainmentEnabled(enable);
    setCSSPropertyDEnabled(enable);
    setCSSVariablesEnabled(enable);
    setDatabaseEnabled(enable);
    setDisplayList2dCanvasEnabled(enable);
    setDOMConvenienceAPIEnabled(enable);
    setFileSystemEnabled(enable);
    setGetUserMediaEnabled(enable);
    setGlobalCacheStorageEnabled(enable);
    setInputMultipleFieldsUIEnabled(enable);
    setIntersectionObserverEnabled(enable);
    setMediaCaptureFromCanvasEnabled(enable);
    setMediaConstraintsEnabled(enable);
    setNetworkInformationEnabled(enable);
    setNetInfoDownlinkMaxEnabled(enable);
    setNotificationConstructorEnabled(enable);
    setNotificationBadgeEnabled(enable);
    setNotificationsEnabled(enable);
    setOriginTrialsEnabled(enable);
    setPagePopupEnabled(enable);
    setPaintOptimizationsEnabled(enable);
    setPathOpsSVGClippingEnabled(enable);
    setPerformanceObserverEnabled(enable);
    setPermissionsEnabled(enable);
    setPrefixedVideoFullscreenEnabled(enable);
    setPresentationEnabled(enable);
    setPushMessagingEnabled(enable);
    setRenderingPipelineThrottlingEnabled(enable);
    setRequestIdleCallbackEnabled(enable);
    setSandboxBlocksModalsEnabled(enable);
    setScriptedSpeechEnabled(enable);
    setServiceWorkerClientAttributesEnabled(enable);
    setServiceWorkerClientsGetIDEnabled(enable);
    setServiceWorkerWindowClientNavigateEnabled(enable);
    setShadowDOMV1Enabled(enable);
    setSharedWorkerEnabled(enable);
    setStableBlinkFeaturesEnabled(enable);
    setStyleSharingEnabled(enable);
    setStyleMatchedPropertiesCacheEnabled(enable);
    setTimerThrottlingForBackgroundTabsEnabled(enable);
    setTouchEnabled(enable);
    setTrustedEventsDefaultActionEnabled(enable);
    setUnsandboxedAuxiliaryEnabled(enable);
    setUserSelectAllEnabled(enable);
    setXSLTEnabled(enable);
    setsmilEnabled(enable);
    setScrollRestorationEnabled(enable);
}

void RuntimeEnabledFeatures::setExperimentalFeaturesEnabled(bool enable)
{
    setAudioVideoTracksEnabled(enable);
    setAuxclickEnabled(enable);
    setEnableCanvas2dDynamicRenderingModeSwitchingEnabled(enable);
    setCanvas2dImageChromiumEnabled(enable);
    setColorCorrectRenderingEnabled(enable);
    setCompositorWorkerEnabled(enable);
    setCSS3TextEnabled(enable);
    setCSS3TextDecorationsEnabled(enable);
    setCSSApplyAtRulesEnabled(enable);
    setCSSAdditiveAnimationsEnabled(enable);
    setCSSBackdropFilterEnabled(enable);
    setCSSHexAlphaColorEnabled(enable);
    setCSSFontDisplayEnabled(enable);
    setCSSFontSizeAdjustEnabled(enable);
    setCSSGridLayoutEnabled(enable);
    setCSSHyphensEnabled(enable);
    setCSSInBodyDoesNotBlockPaintEnabled(enable);
    setCSSIndependentTransformPropertiesEnabled(enable);
    setCSSMaskSourceTypeEnabled(enable);
    setCSSOMSmoothScrollEnabled(enable);
    setCSSPaintAPIEnabled(enable);
    setCSSSnapSizeEnabled(enable);
    setCSSStickyPositionEnabled(enable);
    setCSSTouchActionPanDirectionsEnabled(enable);
    setCSSTypedOMEnabled(enable);
    setCSSViewportEnabled(enable);
    setCustomElementsV1Enabled(enable);
    setCustomSchemeHandlerEnabled(enable);
    setDecodeToYUVEnabled(enable);
    setDeviceLightEnabled(enable);
    setDurableStorageEnabled(enable);
    setComputedAccessibilityInfoEnabled(enable);
    setExperimentalContentSecurityPolicyFeaturesEnabled(enable);
    setExperimentalV8ExtrasEnabled(enable);
    setFeaturePolicyEnabled(enable);
    setFileAPIBlobCloseEnabled(enable);
    setForeignFetchEnabled(enable);
    setFrameTimingSupportEnabled(enable);
    setIDBObserverEnabled(enable);
    setImageCaptureEnabled(enable);
    setIndexedDBExperimentalEnabled(enable);
    setInertTopControlsEnabled(enable);
    setInputEventEnabled(enable);
    setInputModeAttributeEnabled(enable);
    setInstalledAppEnabled(enable);
    setLinkServiceWorkerEnabled(enable);
    setMediaCaptureFromVideoEnabled(enable);
    setMediaSourceExperimentalEnabled(enable);
    setMediaSourceNewAbortAndDurationEnabled(enable);
    setMediaStreamSpeechEnabled(enable);
    setMemoryInfoInWorkersEnabled(enable);
    setWebNFCEnabled(enable);
    setNotificationInlineRepliesEnabled(enable);
    setOnDeviceChangeEnabled(enable);
    setPassiveDocumentEventListenersEnabled(enable);
    setPassiveEventListenersDueToFlingEnabled(enable);
    setPaymentRequestEnabled(enable);
    setPermissionsRequestRevokeEnabled(enable);
    setPointerEventEnabled(enable);
    setQuotaPromiseEnabled(enable);
    setReferrerPolicyHeaderEnabled(enable);
    setRemotePlaybackEnabled(enable);
    setRenderUnicodeControlCharactersEnabled(enable);
    setResizeObserverEnabled(enable);
    setScrollTopLeftInteropEnabled(enable);
    setSensorEnabled(enable);
    setSetRootScrollerEnabled(enable);
    setStackedCSSPropertyAnimationsEnabled(enable);
    setExperimentalStreamEnabled(enable);
    setStorageEstimateEnabled(enable);
    setWebAnimationsAPIEnabled(enable);
    setWebAnimationsSVGEnabled(enable);
    setWebGLDraftExtensionsEnabled(enable);
    setWebUSBEnabled(enable);
    setWebVTTRegionsEnabled(enable);
    setVisibilityChangeOnUnloadEnabled(enable);
    setVisualViewportAPIEnabled(enable);
    setWakeLockEnabled(enable);
    setWebShareEnabled(enable);
    setWorkletEnabled(enable);
    setSendBeaconThrowForBlobWithNonSimpleTypeEnabled(enable);
}

void RuntimeEnabledFeatures::setTestFeaturesEnabled(bool enable)
{
    setBackspaceDefaultHandlerEnabled(enable);
    setBudgetEnabled(enable);
    setCanvas2dFixedRenderingModeEnabled(enable);
    setContextMenuEnabled(enable);
    setCorsRFC1918Enabled(enable);
    setCSSScrollSnapPointsEnabled(enable);
    setFontCacheScalingEnabled(enable);
    setExecCommandInJavaScriptEnabled(enable);
    setExperimentalCanvasFeaturesEnabled(enable);
    setFullscreenUnprefixedEnabled(enable);
    setGeometryInterfacesEnabled(enable);
    setImageOrientationEnabled(enable);
    setMediaGetSettingsEnabled(enable);
    setModuleScriptsEnabled(enable);
    setPermissionDelegationEnabled(enable);
    setPresentationReceiverEnabled(enable);
    setRTCPeerConnectionNewGetStatsEnabled(enable);
    setSuboriginsEnabled(enable);
    setParseHTMLOnMainThreadEnabled(enable);
}


void RuntimeEnabledFeatures::setFeatureEnabledFromString(const std::string& name, bool isEnabled)
{
    if (caseInsensitiveEqual(name, "Accelerated2dCanvas")) {
        setAccelerated2dCanvasEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "AlwaysUseComplexText")) {
        setAlwaysUseComplexTextEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "AudioOutputDevices")) {
        setAudioOutputDevicesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "AudioVideoTracks")) {
        setAudioVideoTracksEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Auxclick")) {
        setAuxclickEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "BackgroundSync")) {
        setBackgroundSyncEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "BackspaceDefaultHandler")) {
        setBackspaceDefaultHandlerEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "BroadcastChannel")) {
        setBroadcastChannelEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Budget")) {
        setBudgetEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Canvas2dFixedRenderingMode")) {
        setCanvas2dFixedRenderingModeEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "EnableCanvas2dDynamicRenderingModeSwitching")) {
        setEnableCanvas2dDynamicRenderingModeSwitchingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Canvas2dImageChromium")) {
        setCanvas2dImageChromiumEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ClientHints")) {
        setClientHintsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CompositeOpaqueScrollers")) {
        setCompositeOpaqueScrollersEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ColorCorrectRendering")) {
        setColorCorrectRenderingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CompositedSelectionUpdate")) {
        setCompositedSelectionUpdateEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CompositorWorker")) {
        setCompositorWorkerEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ContextMenu")) {
        setContextMenuEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CorsRFC1918")) {
        setCorsRFC1918Enabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CredentialManager")) {
        setCredentialManagerEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSS3Text")) {
        setCSS3TextEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSS3TextDecorations")) {
        setCSS3TextDecorationsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSApplyAtRules")) {
        setCSSApplyAtRulesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSAdditiveAnimations")) {
        setCSSAdditiveAnimationsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSBackdropFilter")) {
        setCSSBackdropFilterEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSBoxReflectFilter")) {
        setCSSBoxReflectFilterEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSHexAlphaColor")) {
        setCSSHexAlphaColorEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSContainment")) {
        setCSSContainmentEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSFontDisplay")) {
        setCSSFontDisplayEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSFontSizeAdjust")) {
        setCSSFontSizeAdjustEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSGridLayout")) {
        setCSSGridLayoutEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSHyphens")) {
        setCSSHyphensEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSInBodyDoesNotBlockPaint")) {
        setCSSInBodyDoesNotBlockPaintEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSIndependentTransformProperties")) {
        setCSSIndependentTransformPropertiesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSMaskSourceType")) {
        setCSSMaskSourceTypeEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSOMSmoothScroll")) {
        setCSSOMSmoothScrollEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSPaintAPI")) {
        setCSSPaintAPIEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSPropertyD")) {
        setCSSPropertyDEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSSnapSize")) {
        setCSSSnapSizeEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSStickyPosition")) {
        setCSSStickyPositionEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSTouchActionPanDirections")) {
        setCSSTouchActionPanDirectionsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSTypedOM")) {
        setCSSTypedOMEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSVariables")) {
        setCSSVariablesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSViewport")) {
        setCSSViewportEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CSSScrollSnapPoints")) {
        setCSSScrollSnapPointsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CustomElementsV1")) {
        setCustomElementsV1Enabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "CustomSchemeHandler")) {
        setCustomSchemeHandlerEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Database")) {
        setDatabaseEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "DecodeToYUV")) {
        setDecodeToYUVEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "DeviceLight")) {
        setDeviceLightEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "DisplayList2dCanvas")) {
        setDisplayList2dCanvasEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "DocumentWriteEvaluator")) {
        setDocumentWriteEvaluatorEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "DOMConvenienceAPI")) {
        setDOMConvenienceAPIEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "DurableStorage")) {
        setDurableStorageEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "FontCacheScaling")) {
        setFontCacheScalingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ForceDisplayList2dCanvas")) {
        setForceDisplayList2dCanvasEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ForceDisable2dCanvasCopyOnWrite")) {
        setForceDisable2dCanvasCopyOnWriteEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ExecCommandInJavaScript")) {
        setExecCommandInJavaScriptEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ComputedAccessibilityInfo")) {
        setComputedAccessibilityInfoEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ExperimentalCanvasFeatures")) {
        setExperimentalCanvasFeaturesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ExperimentalContentSecurityPolicyFeatures")) {
        setExperimentalContentSecurityPolicyFeaturesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ExperimentalV8Extras")) {
        setExperimentalV8ExtrasEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "FastMobileScrolling")) {
        setFastMobileScrollingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "FeaturePolicy")) {
        setFeaturePolicyEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "FileAPIBlobClose")) {
        setFileAPIBlobCloseEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "FileSystem")) {
        setFileSystemEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ForeignFetch")) {
        setForeignFetchEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "FullscreenUnprefixed")) {
        setFullscreenUnprefixedEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "FrameTimingSupport")) {
        setFrameTimingSupportEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "GeometryInterfaces")) {
        setGeometryInterfacesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "GetUserMedia")) {
        setGetUserMediaEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "GlobalCacheStorage")) {
        setGlobalCacheStorageEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "IDBObserver")) {
        setIDBObserverEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ImageCapture")) {
        setImageCaptureEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ImageOrientation")) {
        setImageOrientationEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "IndexedDBExperimental")) {
        setIndexedDBExperimentalEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "InertTopControls")) {
        setInertTopControlsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "InputEvent")) {
        setInputEventEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "InputModeAttribute")) {
        setInputModeAttributeEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "InputMultipleFieldsUI")) {
        setInputMultipleFieldsUIEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "InstalledApp")) {
        setInstalledAppEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "IntersectionObserver")) {
        setIntersectionObserverEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "LangAttributeAwareFormControlUI")) {
        setLangAttributeAwareFormControlUIEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "LayoutNG")) {
        setLayoutNGEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "LinkServiceWorker")) {
        setLinkServiceWorkerEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "FractionalScrollOffsets")) {
        setFractionalScrollOffsetsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "LoadingWithMojo")) {
        setLoadingWithMojoEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MediaCapture")) {
        setMediaCaptureEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MediaCaptureFromCanvas")) {
        setMediaCaptureFromCanvasEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MediaCaptureFromVideo")) {
        setMediaCaptureFromVideoEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MediaConstraints")) {
        setMediaConstraintsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MediaDocumentDownloadButton")) {
        setMediaDocumentDownloadButtonEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MediaGetSettings")) {
        setMediaGetSettingsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MediaSession")) {
        setMediaSessionEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MediaSourceExperimental")) {
        setMediaSourceExperimentalEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MediaSourceNewAbortAndDuration")) {
        setMediaSourceNewAbortAndDurationEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MediaStreamSpeech")) {
        setMediaStreamSpeechEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MemoryInfoInWorkers")) {
        setMemoryInfoInWorkersEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "MobileLayoutTheme")) {
        setMobileLayoutThemeEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ModuleScripts")) {
        setModuleScriptsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "NavigatorContentUtils")) {
        setNavigatorContentUtilsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebNFC")) {
        setWebNFCEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "NetworkInformation")) {
        setNetworkInformationEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "NetInfoDownlinkMax")) {
        setNetInfoDownlinkMaxEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "NewMediaPlaybackUi")) {
        setNewMediaPlaybackUiEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "NotificationConstructor")) {
        setNotificationConstructorEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "NotificationBadge")) {
        setNotificationBadgeEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "NotificationInlineReplies")) {
        setNotificationInlineRepliesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Notifications")) {
        setNotificationsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "OnDeviceChange")) {
        setOnDeviceChangeEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "OrientationEvent")) {
        setOrientationEventEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "OriginTrials")) {
        setOriginTrialsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "OriginTrialsSampleAPI")) {
        setOriginTrialsSampleAPIEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ForceOverlayFullscreenVideo")) {
        setForceOverlayFullscreenVideoEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "OverlayScrollbars")) {
        setOverlayScrollbarsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "HideScrollbars")) {
        setHideScrollbarsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PagePopup")) {
        setPagePopupEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PaintOptimizations")) {
        setPaintOptimizationsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PassiveDocumentEventListeners")) {
        setPassiveDocumentEventListenersEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PassiveEventListenersDueToFling")) {
        setPassiveEventListenersDueToFlingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PassPaintVisualRectToCompositor")) {
        setPassPaintVisualRectToCompositorEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PathOpsSVGClipping")) {
        setPathOpsSVGClippingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PaymentRequest")) {
        setPaymentRequestEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PerformanceObserver")) {
        setPerformanceObserverEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PermissionDelegation")) {
        setPermissionDelegationEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Permissions")) {
        setPermissionsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PermissionsRequestRevoke")) {
        setPermissionsRequestRevokeEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PointerEvent")) {
        setPointerEventEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PreciseMemoryInfo")) {
        setPreciseMemoryInfoEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PrefixedVideoFullscreen")) {
        setPrefixedVideoFullscreenEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Presentation")) {
        setPresentationEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PresentationReceiver")) {
        setPresentationReceiverEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "PushMessaging")) {
        setPushMessagingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "QuotaPromise")) {
        setQuotaPromiseEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ReducedReferrerGranularity")) {
        setReducedReferrerGranularityEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ReferrerPolicyHeader")) {
        setReferrerPolicyHeaderEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "RemotePlayback")) {
        setRemotePlaybackEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "RenderingPipelineThrottling")) {
        setRenderingPipelineThrottlingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "RenderUnicodeControlCharacters")) {
        setRenderUnicodeControlCharactersEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "RequestIdleCallback")) {
        setRequestIdleCallbackEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ResizeObserver")) {
        setResizeObserverEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "RTCPeerConnectionNewGetStats")) {
        setRTCPeerConnectionNewGetStatsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "SandboxBlocksModals")) {
        setSandboxBlocksModalsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ScriptedSpeech")) {
        setScriptedSpeechEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ScrollAnchoring")) {
        setScrollAnchoringEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ScrollTopLeftInterop")) {
        setScrollTopLeftInteropEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Sensor")) {
        setSensorEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ServiceWorkerClientAttributes")) {
        setServiceWorkerClientAttributesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ServiceWorkerClientsGetID")) {
        setServiceWorkerClientsGetIDEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ServiceWorkerWindowClientNavigate")) {
        setServiceWorkerWindowClientNavigateEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "SetRootScroller")) {
        setSetRootScrollerEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ShadowDOMV1")) {
        setShadowDOMV1Enabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "SharedArrayBuffer")) {
        setSharedArrayBufferEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "SharedWorker")) {
        setSharedWorkerEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "SlimmingPaintInvalidation")) {
        setSlimmingPaintInvalidationEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "SlimmingPaintV2")) {
        setSlimmingPaintV2Enabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "SlimmingPaintStrictCullRectClipping")) {
        setSlimmingPaintStrictCullRectClippingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "SlimmingPaintUnderInvalidationChecking")) {
        setSlimmingPaintUnderInvalidationCheckingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "StableBlinkFeatures")) {
        setStableBlinkFeaturesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "StackedCSSPropertyAnimations")) {
        setStackedCSSPropertyAnimationsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "StyleSharing")) {
        setStyleSharingEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "StyleMatchedPropertiesCache")) {
        setStyleMatchedPropertiesCacheEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ExperimentalStream")) {
        setExperimentalStreamEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "SpeculativeLaunchServiceWorker")) {
        setSpeculativeLaunchServiceWorkerEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "StorageEstimate")) {
        setStorageEstimateEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Suborigins")) {
        setSuboriginsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "TimerThrottlingForBackgroundTabs")) {
        setTimerThrottlingForBackgroundTabsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Touch")) {
        setTouchEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "TraceWrappables")) {
        setTraceWrappablesEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "TrustedEventsDefaultAction")) {
        setTrustedEventsDefaultActionEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "UnsafeES3APIs")) {
        setUnsafeES3APIsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "UnsandboxedAuxiliary")) {
        setUnsandboxedAuxiliaryEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "UserSelectAll")) {
        setUserSelectAllEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebAnimationsAPI")) {
        setWebAnimationsAPIEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebAnimationsSVG")) {
        setWebAnimationsSVGEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebBluetooth")) {
        setWebBluetoothEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebGLDraftExtensions")) {
        setWebGLDraftExtensionsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebGLImageChromium")) {
        setWebGLImageChromiumEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebUSB")) {
        setWebUSBEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebVR")) {
        setWebVREnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebVTTRegions")) {
        setWebVTTRegionsEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "V8IdleTasks")) {
        setV8IdleTasksEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "VisibilityChangeOnUnload")) {
        setVisibilityChangeOnUnloadEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "XSLT")) {
        setXSLTEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "smil")) {
        setsmilEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ScrollCustomization")) {
        setScrollCustomizationEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ScrollRestoration")) {
        setScrollRestorationEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "AutoplayMutedVideos")) {
        setAutoplayMutedVideosEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "VisualViewportAPI")) {
        setVisualViewportAPIEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WakeLock")) {
        setWakeLockEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebFontsInterventionV2With2G")) {
        setWebFontsInterventionV2With2GEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebFontsInterventionV2WithSlow2G")) {
        setWebFontsInterventionV2WithSlow2GEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebFontsInterventionTrigger")) {
        setWebFontsInterventionTriggerEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WebShare")) {
        setWebShareEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "Worklet")) {
        setWorkletEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "WeakMemoryCache")) {
        setWeakMemoryCacheEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "DoNotUnlockSharedBuffer")) {
        setDoNotUnlockSharedBufferEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "ParseHTMLOnMainThread")) {
        setParseHTMLOnMainThreadEnabled(isEnabled);
        return;
    }
    if (caseInsensitiveEqual(name, "SendBeaconThrowForBlobWithNonSimpleType")) {
        setSendBeaconThrowForBlobWithNonSimpleTypeEnabled(isEnabled);
        return;
    }
    DLOG(ERROR) << "RuntimeEnabledFeature not recognized: " << name;
}

bool RuntimeEnabledFeatures::isAccelerated2dCanvasEnabled = true;
bool RuntimeEnabledFeatures::isAlwaysUseComplexTextEnabled = true;
bool RuntimeEnabledFeatures::isAudioOutputDevicesEnabled = true;
bool RuntimeEnabledFeatures::isAudioVideoTracksEnabled = false;
bool RuntimeEnabledFeatures::isAuxclickEnabled = false;
bool RuntimeEnabledFeatures::isBackgroundSyncEnabled = true;
bool RuntimeEnabledFeatures::isBackspaceDefaultHandlerEnabled = false;
bool RuntimeEnabledFeatures::isBroadcastChannelEnabled = true;
bool RuntimeEnabledFeatures::isBudgetEnabled = false;
bool RuntimeEnabledFeatures::isCanvas2dFixedRenderingModeEnabled = false;
bool RuntimeEnabledFeatures::isEnableCanvas2dDynamicRenderingModeSwitchingEnabled = false;
bool RuntimeEnabledFeatures::isCanvas2dImageChromiumEnabled = false;
bool RuntimeEnabledFeatures::isClientHintsEnabled = true;
bool RuntimeEnabledFeatures::isCompositeOpaqueScrollersEnabled = false;
bool RuntimeEnabledFeatures::isColorCorrectRenderingEnabled = false;
bool RuntimeEnabledFeatures::isCompositedSelectionUpdateEnabled = false;
bool RuntimeEnabledFeatures::isCompositorWorkerEnabled = false;
bool RuntimeEnabledFeatures::isContextMenuEnabled = false;
bool RuntimeEnabledFeatures::isCorsRFC1918Enabled = false;
bool RuntimeEnabledFeatures::isCredentialManagerEnabled = true;
bool RuntimeEnabledFeatures::isCSS3TextEnabled = false;
bool RuntimeEnabledFeatures::isCSS3TextDecorationsEnabled = false;
bool RuntimeEnabledFeatures::isCSSApplyAtRulesEnabled = false;
bool RuntimeEnabledFeatures::isCSSAdditiveAnimationsEnabled = false;
bool RuntimeEnabledFeatures::isCSSBackdropFilterEnabled = false;
bool RuntimeEnabledFeatures::isCSSBoxReflectFilterEnabled = true;
bool RuntimeEnabledFeatures::isCSSHexAlphaColorEnabled = false;
bool RuntimeEnabledFeatures::isCSSContainmentEnabled = true;
bool RuntimeEnabledFeatures::isCSSFontDisplayEnabled = false;
bool RuntimeEnabledFeatures::isCSSFontSizeAdjustEnabled = false;
bool RuntimeEnabledFeatures::isCSSGridLayoutEnabled = false;
bool RuntimeEnabledFeatures::isCSSHyphensEnabled = false;
bool RuntimeEnabledFeatures::isCSSInBodyDoesNotBlockPaintEnabled = false;
bool RuntimeEnabledFeatures::isCSSIndependentTransformPropertiesEnabled = false;
bool RuntimeEnabledFeatures::isCSSMaskSourceTypeEnabled = false;
bool RuntimeEnabledFeatures::isCSSOMSmoothScrollEnabled = false;
bool RuntimeEnabledFeatures::isCSSPaintAPIEnabled = false;
bool RuntimeEnabledFeatures::isCSSPropertyDEnabled = true;
bool RuntimeEnabledFeatures::isCSSSnapSizeEnabled = false;
bool RuntimeEnabledFeatures::isCSSStickyPositionEnabled = false;
bool RuntimeEnabledFeatures::isCSSTouchActionPanDirectionsEnabled = false;
bool RuntimeEnabledFeatures::isCSSTypedOMEnabled = false;
bool RuntimeEnabledFeatures::isCSSVariablesEnabled = true;
bool RuntimeEnabledFeatures::isCSSViewportEnabled = false;
bool RuntimeEnabledFeatures::isCSSScrollSnapPointsEnabled = false;
bool RuntimeEnabledFeatures::isCustomElementsV1Enabled = false;
bool RuntimeEnabledFeatures::isCustomSchemeHandlerEnabled = false;
bool RuntimeEnabledFeatures::isDatabaseEnabled = true;
bool RuntimeEnabledFeatures::isDecodeToYUVEnabled = false;
bool RuntimeEnabledFeatures::isDeviceLightEnabled = false;
bool RuntimeEnabledFeatures::isDisplayList2dCanvasEnabled = true;
bool RuntimeEnabledFeatures::isDocumentWriteEvaluatorEnabled = false;
bool RuntimeEnabledFeatures::isDOMConvenienceAPIEnabled = true;
bool RuntimeEnabledFeatures::isDurableStorageEnabled = false;
bool RuntimeEnabledFeatures::isFontCacheScalingEnabled = false;
bool RuntimeEnabledFeatures::isForceDisplayList2dCanvasEnabled = false;
bool RuntimeEnabledFeatures::isForceDisable2dCanvasCopyOnWriteEnabled = false;
bool RuntimeEnabledFeatures::isExecCommandInJavaScriptEnabled = false;
bool RuntimeEnabledFeatures::isComputedAccessibilityInfoEnabled = false;
bool RuntimeEnabledFeatures::isExperimentalCanvasFeaturesEnabled = false;
bool RuntimeEnabledFeatures::isExperimentalContentSecurityPolicyFeaturesEnabled = false;
bool RuntimeEnabledFeatures::isExperimentalV8ExtrasEnabled = false;
bool RuntimeEnabledFeatures::isFastMobileScrollingEnabled = false;
bool RuntimeEnabledFeatures::isFeaturePolicyEnabled = false;
bool RuntimeEnabledFeatures::isFileAPIBlobCloseEnabled = false;
bool RuntimeEnabledFeatures::isFileSystemEnabled = true;
bool RuntimeEnabledFeatures::isForeignFetchEnabled = false;
bool RuntimeEnabledFeatures::isFullscreenUnprefixedEnabled = false;
bool RuntimeEnabledFeatures::isFrameTimingSupportEnabled = false;
bool RuntimeEnabledFeatures::isGeometryInterfacesEnabled = false;
bool RuntimeEnabledFeatures::isGetUserMediaEnabled = true;
bool RuntimeEnabledFeatures::isGlobalCacheStorageEnabled = true;
bool RuntimeEnabledFeatures::isIDBObserverEnabled = false;
bool RuntimeEnabledFeatures::isImageCaptureEnabled = false;
bool RuntimeEnabledFeatures::isImageOrientationEnabled = false;
bool RuntimeEnabledFeatures::isIndexedDBExperimentalEnabled = false;
bool RuntimeEnabledFeatures::isInertTopControlsEnabled = false;
bool RuntimeEnabledFeatures::isInputEventEnabled = false;
bool RuntimeEnabledFeatures::isInputModeAttributeEnabled = false;
bool RuntimeEnabledFeatures::isInputMultipleFieldsUIEnabled = true;
bool RuntimeEnabledFeatures::isInstalledAppEnabled = false;
bool RuntimeEnabledFeatures::isIntersectionObserverEnabled = true;
bool RuntimeEnabledFeatures::isLangAttributeAwareFormControlUIEnabled = false;
bool RuntimeEnabledFeatures::isLayoutNGEnabled = false;
bool RuntimeEnabledFeatures::isLinkServiceWorkerEnabled = false;
bool RuntimeEnabledFeatures::isFractionalScrollOffsetsEnabled = false;
bool RuntimeEnabledFeatures::isLoadingWithMojoEnabled = false;
bool RuntimeEnabledFeatures::isMediaCaptureEnabled = false;
bool RuntimeEnabledFeatures::isMediaCaptureFromCanvasEnabled = true;
bool RuntimeEnabledFeatures::isMediaCaptureFromVideoEnabled = false;
bool RuntimeEnabledFeatures::isMediaConstraintsEnabled = true;
bool RuntimeEnabledFeatures::isMediaDocumentDownloadButtonEnabled = false;
bool RuntimeEnabledFeatures::isMediaGetSettingsEnabled = false;
bool RuntimeEnabledFeatures::isMediaSessionEnabled = false;
bool RuntimeEnabledFeatures::isMediaSourceExperimentalEnabled = false;
bool RuntimeEnabledFeatures::isMediaSourceNewAbortAndDurationEnabled = false;
bool RuntimeEnabledFeatures::isMediaStreamSpeechEnabled = false;
bool RuntimeEnabledFeatures::isMemoryInfoInWorkersEnabled = false;
bool RuntimeEnabledFeatures::isMobileLayoutThemeEnabled = false;
bool RuntimeEnabledFeatures::isModuleScriptsEnabled = false;
bool RuntimeEnabledFeatures::isNavigatorContentUtilsEnabled = false;
bool RuntimeEnabledFeatures::isWebNFCEnabled = false;
bool RuntimeEnabledFeatures::isNetworkInformationEnabled = true;
bool RuntimeEnabledFeatures::isNetInfoDownlinkMaxEnabled = true;
bool RuntimeEnabledFeatures::isNewMediaPlaybackUiEnabled = false;
bool RuntimeEnabledFeatures::isNotificationConstructorEnabled = true;
bool RuntimeEnabledFeatures::isNotificationBadgeEnabled = true;
bool RuntimeEnabledFeatures::isNotificationInlineRepliesEnabled = false;
bool RuntimeEnabledFeatures::isNotificationsEnabled = true;
bool RuntimeEnabledFeatures::isOnDeviceChangeEnabled = false;
bool RuntimeEnabledFeatures::isOrientationEventEnabled = false;
bool RuntimeEnabledFeatures::isOriginTrialsEnabled = true;
bool RuntimeEnabledFeatures::isOriginTrialsSampleAPIEnabled = false;
bool RuntimeEnabledFeatures::isForceOverlayFullscreenVideoEnabled = false;
bool RuntimeEnabledFeatures::isOverlayScrollbarsEnabled = false;
bool RuntimeEnabledFeatures::isHideScrollbarsEnabled = false;
bool RuntimeEnabledFeatures::isPagePopupEnabled = true;
bool RuntimeEnabledFeatures::isPaintOptimizationsEnabled = true;
bool RuntimeEnabledFeatures::isPassiveDocumentEventListenersEnabled = false;
bool RuntimeEnabledFeatures::isPassiveEventListenersDueToFlingEnabled = false;
bool RuntimeEnabledFeatures::isPassPaintVisualRectToCompositorEnabled = false;
bool RuntimeEnabledFeatures::isPathOpsSVGClippingEnabled = true;
bool RuntimeEnabledFeatures::isPaymentRequestEnabled = false;
bool RuntimeEnabledFeatures::isPerformanceObserverEnabled = true;
bool RuntimeEnabledFeatures::isPermissionDelegationEnabled = false;
bool RuntimeEnabledFeatures::isPermissionsEnabled = true;
bool RuntimeEnabledFeatures::isPermissionsRequestRevokeEnabled = false;
bool RuntimeEnabledFeatures::isPointerEventEnabled = false;
bool RuntimeEnabledFeatures::isPreciseMemoryInfoEnabled = false;
bool RuntimeEnabledFeatures::isPrefixedVideoFullscreenEnabled = true;
bool RuntimeEnabledFeatures::isPresentationEnabled = true;
bool RuntimeEnabledFeatures::isPresentationReceiverEnabled = false;
bool RuntimeEnabledFeatures::isPushMessagingEnabled = true;
bool RuntimeEnabledFeatures::isQuotaPromiseEnabled = false;
bool RuntimeEnabledFeatures::isReducedReferrerGranularityEnabled = false;
bool RuntimeEnabledFeatures::isReferrerPolicyHeaderEnabled = false;
bool RuntimeEnabledFeatures::isRemotePlaybackEnabled = false;
bool RuntimeEnabledFeatures::isRenderingPipelineThrottlingEnabled = true;
bool RuntimeEnabledFeatures::isRenderUnicodeControlCharactersEnabled = false;
bool RuntimeEnabledFeatures::isRequestIdleCallbackEnabled = true;
bool RuntimeEnabledFeatures::isResizeObserverEnabled = false;
bool RuntimeEnabledFeatures::isRTCPeerConnectionNewGetStatsEnabled = false;
bool RuntimeEnabledFeatures::isSandboxBlocksModalsEnabled = true;
bool RuntimeEnabledFeatures::isScriptedSpeechEnabled = true;
bool RuntimeEnabledFeatures::isScrollAnchoringEnabled = false;
bool RuntimeEnabledFeatures::isScrollTopLeftInteropEnabled = false;
bool RuntimeEnabledFeatures::isSensorEnabled = false;
bool RuntimeEnabledFeatures::isServiceWorkerClientAttributesEnabled = true;
bool RuntimeEnabledFeatures::isServiceWorkerClientsGetIDEnabled = true;
bool RuntimeEnabledFeatures::isServiceWorkerWindowClientNavigateEnabled = true;
bool RuntimeEnabledFeatures::isSetRootScrollerEnabled = false;
bool RuntimeEnabledFeatures::isShadowDOMV1Enabled = true;
bool RuntimeEnabledFeatures::isSharedArrayBufferEnabled = false;
bool RuntimeEnabledFeatures::isSharedWorkerEnabled = true;
bool RuntimeEnabledFeatures::isSlimmingPaintInvalidationEnabled = false;
bool RuntimeEnabledFeatures::isSlimmingPaintV2Enabled = false;
bool RuntimeEnabledFeatures::isSlimmingPaintStrictCullRectClippingEnabled = false;
bool RuntimeEnabledFeatures::isSlimmingPaintUnderInvalidationCheckingEnabled = false;
bool RuntimeEnabledFeatures::isStableBlinkFeaturesEnabled = true;
bool RuntimeEnabledFeatures::isStackedCSSPropertyAnimationsEnabled = false;
bool RuntimeEnabledFeatures::isStyleSharingEnabled = true;
bool RuntimeEnabledFeatures::isStyleMatchedPropertiesCacheEnabled = true;
bool RuntimeEnabledFeatures::isExperimentalStreamEnabled = false;
bool RuntimeEnabledFeatures::isSpeculativeLaunchServiceWorkerEnabled = false;
bool RuntimeEnabledFeatures::isStorageEstimateEnabled = false;
bool RuntimeEnabledFeatures::isSuboriginsEnabled = false;
bool RuntimeEnabledFeatures::isTimerThrottlingForBackgroundTabsEnabled = true;
bool RuntimeEnabledFeatures::isTouchEnabled = true;
bool RuntimeEnabledFeatures::isTraceWrappablesEnabled = false;
bool RuntimeEnabledFeatures::isTrustedEventsDefaultActionEnabled = true;
bool RuntimeEnabledFeatures::isUnsafeES3APIsEnabled = false;
bool RuntimeEnabledFeatures::isUnsandboxedAuxiliaryEnabled = true;
bool RuntimeEnabledFeatures::isUserSelectAllEnabled = true;
bool RuntimeEnabledFeatures::isWebAnimationsAPIEnabled = false;
bool RuntimeEnabledFeatures::isWebAnimationsSVGEnabled = false;
bool RuntimeEnabledFeatures::isWebBluetoothEnabled = false;
bool RuntimeEnabledFeatures::isWebGLDraftExtensionsEnabled = false;
bool RuntimeEnabledFeatures::isWebGLImageChromiumEnabled = false;
bool RuntimeEnabledFeatures::isWebUSBEnabled = false;
bool RuntimeEnabledFeatures::isWebVREnabled = false;
bool RuntimeEnabledFeatures::isWebVTTRegionsEnabled = false;
bool RuntimeEnabledFeatures::isV8IdleTasksEnabled = false;
bool RuntimeEnabledFeatures::isVisibilityChangeOnUnloadEnabled = false;
bool RuntimeEnabledFeatures::isXSLTEnabled = true;
bool RuntimeEnabledFeatures::issmilEnabled = true;
bool RuntimeEnabledFeatures::isScrollCustomizationEnabled = false;
bool RuntimeEnabledFeatures::isScrollRestorationEnabled = true;
bool RuntimeEnabledFeatures::isAutoplayMutedVideosEnabled = false;
bool RuntimeEnabledFeatures::isVisualViewportAPIEnabled = false;
bool RuntimeEnabledFeatures::isWakeLockEnabled = false;
bool RuntimeEnabledFeatures::isWebFontsInterventionV2With2GEnabled = false;
bool RuntimeEnabledFeatures::isWebFontsInterventionV2WithSlow2GEnabled = false;
bool RuntimeEnabledFeatures::isWebFontsInterventionTriggerEnabled = false;
bool RuntimeEnabledFeatures::isWebShareEnabled = false;
bool RuntimeEnabledFeatures::isWorkletEnabled = false;
bool RuntimeEnabledFeatures::isWeakMemoryCacheEnabled = false;
bool RuntimeEnabledFeatures::isDoNotUnlockSharedBufferEnabled = false;
bool RuntimeEnabledFeatures::isParseHTMLOnMainThreadEnabled = false;
bool RuntimeEnabledFeatures::isSendBeaconThrowForBlobWithNonSimpleTypeEnabled = false;

} // namespace blink
