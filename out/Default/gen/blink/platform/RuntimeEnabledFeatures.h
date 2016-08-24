// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef RuntimeEnabledFeatures_h
#define RuntimeEnabledFeatures_h

#include <string>

#include "platform/PlatformExport.h"
#include "wtf/Allocator.h"
#include "wtf/Forward.h"
#include "wtf/build_config.h"

namespace blink {

// A class that stores static enablers for all experimental features.

class PLATFORM_EXPORT RuntimeEnabledFeatures {
    STATIC_ONLY(RuntimeEnabledFeatures);
public:
    class PLATFORM_EXPORT Backup {
    public:
        explicit Backup();
        void restore();

    private:
        bool m_accelerated2dCanvas;
        bool m_alwaysUseComplexText;
        bool m_audioOutputDevices;
        bool m_audioVideoTracks;
        bool m_auxclick;
        bool m_backgroundSync;
        bool m_backspaceDefaultHandler;
        bool m_broadcastChannel;
        bool m_budget;
        bool m_canvas2dFixedRenderingMode;
        bool m_enableCanvas2dDynamicRenderingModeSwitching;
        bool m_canvas2dImageChromium;
        bool m_clientHints;
        bool m_compositeOpaqueScrollers;
        bool m_colorCorrectRendering;
        bool m_compositedSelectionUpdate;
        bool m_compositorWorker;
        bool m_contextMenu;
        bool m_corsRFC1918;
        bool m_credentialManager;
        bool m_css3Text;
        bool m_css3TextDecorations;
        bool m_cssApplyAtRules;
        bool m_cssAdditiveAnimations;
        bool m_cssBackdropFilter;
        bool m_cssBoxReflectFilter;
        bool m_cssHexAlphaColor;
        bool m_cssContainment;
        bool m_cssFontDisplay;
        bool m_cssFontSizeAdjust;
        bool m_cssGridLayout;
        bool m_cssHyphens;
        bool m_cssInBodyDoesNotBlockPaint;
        bool m_cssIndependentTransformProperties;
        bool m_cssMaskSourceType;
        bool m_cssomSmoothScroll;
        bool m_cssPaintAPI;
        bool m_cssPropertyD;
        bool m_cssSnapSize;
        bool m_cssStickyPosition;
        bool m_cssTouchActionPanDirections;
        bool m_cssTypedOM;
        bool m_cssVariables;
        bool m_cssViewport;
        bool m_cssScrollSnapPoints;
        bool m_customElementsV1;
        bool m_customSchemeHandler;
        bool m_database;
        bool m_decodeToYUV;
        bool m_deviceLight;
        bool m_displayList2dCanvas;
        bool m_documentWriteEvaluator;
        bool m_dOMConvenienceAPI;
        bool m_durableStorage;
        bool m_fontCacheScaling;
        bool m_forceDisplayList2dCanvas;
        bool m_forceDisable2dCanvasCopyOnWrite;
        bool m_execCommandInJavaScript;
        bool m_computedAccessibilityInfo;
        bool m_experimentalCanvasFeatures;
        bool m_experimentalContentSecurityPolicyFeatures;
        bool m_experimentalV8Extras;
        bool m_fastMobileScrolling;
        bool m_featurePolicy;
        bool m_fileAPIBlobClose;
        bool m_fileSystem;
        bool m_foreignFetch;
        bool m_fullscreenUnprefixed;
        bool m_frameTimingSupport;
        bool m_geometryInterfaces;
        bool m_getUserMedia;
        bool m_globalCacheStorage;
        bool m_iDBObserver;
        bool m_imageCapture;
        bool m_imageOrientation;
        bool m_indexedDBExperimental;
        bool m_inertTopControls;
        bool m_inputEvent;
        bool m_inputModeAttribute;
        bool m_inputMultipleFieldsUI;
        bool m_installedApp;
        bool m_intersectionObserver;
        bool m_langAttributeAwareFormControlUI;
        bool m_layoutNG;
        bool m_linkServiceWorker;
        bool m_fractionalScrollOffsets;
        bool m_loadingWithMojo;
        bool m_mediaCapture;
        bool m_mediaCaptureFromCanvas;
        bool m_mediaCaptureFromVideo;
        bool m_mediaConstraints;
        bool m_mediaDocumentDownloadButton;
        bool m_mediaGetSettings;
        bool m_mediaSession;
        bool m_mediaSourceExperimental;
        bool m_mediaSourceNewAbortAndDuration;
        bool m_mediaStreamSpeech;
        bool m_memoryInfoInWorkers;
        bool m_mobileLayoutTheme;
        bool m_moduleScripts;
        bool m_navigatorContentUtils;
        bool m_webNFC;
        bool m_networkInformation;
        bool m_netInfoDownlinkMax;
        bool m_newMediaPlaybackUi;
        bool m_notificationConstructor;
        bool m_notificationBadge;
        bool m_notificationInlineReplies;
        bool m_notifications;
        bool m_onDeviceChange;
        bool m_orientationEvent;
        bool m_originTrials;
        bool m_originTrialsSampleAPI;
        bool m_forceOverlayFullscreenVideo;
        bool m_overlayScrollbars;
        bool m_hideScrollbars;
        bool m_pagePopup;
        bool m_paintOptimizations;
        bool m_passiveDocumentEventListeners;
        bool m_passiveEventListenersDueToFling;
        bool m_passPaintVisualRectToCompositor;
        bool m_pathOpsSVGClipping;
        bool m_paymentRequest;
        bool m_performanceObserver;
        bool m_permissionDelegation;
        bool m_permissions;
        bool m_permissionsRequestRevoke;
        bool m_pointerEvent;
        bool m_preciseMemoryInfo;
        bool m_prefixedVideoFullscreen;
        bool m_presentation;
        bool m_presentationReceiver;
        bool m_pushMessaging;
        bool m_quotaPromise;
        bool m_reducedReferrerGranularity;
        bool m_referrerPolicyHeader;
        bool m_remotePlayback;
        bool m_renderingPipelineThrottling;
        bool m_renderUnicodeControlCharacters;
        bool m_requestIdleCallback;
        bool m_resizeObserver;
        bool m_rTCPeerConnectionNewGetStats;
        bool m_sandboxBlocksModals;
        bool m_scriptedSpeech;
        bool m_scrollAnchoring;
        bool m_scrollTopLeftInterop;
        bool m_sensor;
        bool m_serviceWorkerClientAttributes;
        bool m_serviceWorkerClientsGetID;
        bool m_serviceWorkerWindowClientNavigate;
        bool m_setRootScroller;
        bool m_shadowDOMV1;
        bool m_sharedArrayBuffer;
        bool m_sharedWorker;
        bool m_slimmingPaintInvalidation;
        bool m_slimmingPaintV2;
        bool m_slimmingPaintStrictCullRectClipping;
        bool m_slimmingPaintUnderInvalidationChecking;
        bool m_stableBlinkFeatures;
        bool m_stackedCSSPropertyAnimations;
        bool m_styleSharing;
        bool m_styleMatchedPropertiesCache;
        bool m_experimentalStream;
        bool m_speculativeLaunchServiceWorker;
        bool m_storageEstimate;
        bool m_suborigins;
        bool m_timerThrottlingForBackgroundTabs;
        bool m_touch;
        bool m_traceWrappables;
        bool m_trustedEventsDefaultAction;
        bool m_unsafeES3APIs;
        bool m_unsandboxedAuxiliary;
        bool m_userSelectAll;
        bool m_webAnimationsAPI;
        bool m_webAnimationsSVG;
        bool m_webBluetooth;
        bool m_webGLDraftExtensions;
        bool m_webGLImageChromium;
        bool m_webUSB;
        bool m_webVR;
        bool m_webVTTRegions;
        bool m_v8IdleTasks;
        bool m_visibilityChangeOnUnload;
        bool m_xslt;
        bool m_smil;
        bool m_scrollCustomization;
        bool m_scrollRestoration;
        bool m_autoplayMutedVideos;
        bool m_visualViewportAPI;
        bool m_wakeLock;
        bool m_webFontsInterventionV2With2G;
        bool m_webFontsInterventionV2WithSlow2G;
        bool m_webFontsInterventionTrigger;
        bool m_webShare;
        bool m_worklet;
        bool m_weakMemoryCache;
        bool m_doNotUnlockSharedBuffer;
        bool m_parseHTMLOnMainThread;
        bool m_sendBeaconThrowForBlobWithNonSimpleType;
    };

    static void setStableFeaturesEnabled(bool);
    static void setExperimentalFeaturesEnabled(bool);
    static void setTestFeaturesEnabled(bool);

    static void setFeatureEnabledFromString(const std::string& name, bool isEnabled);

    static void setAccelerated2dCanvasEnabled(bool isEnabled) { isAccelerated2dCanvasEnabled = isEnabled; }
    static bool accelerated2dCanvasEnabled() { return isAccelerated2dCanvasEnabled; }

    static void setAlwaysUseComplexTextEnabled(bool isEnabled) { isAlwaysUseComplexTextEnabled = isEnabled; }
    static bool alwaysUseComplexTextEnabled() { return isAlwaysUseComplexTextEnabled; }

    static void setAudioOutputDevicesEnabled(bool isEnabled) { isAudioOutputDevicesEnabled = isEnabled; }
    static bool audioOutputDevicesEnabled() { return isAudioOutputDevicesEnabled; }

    static void setAudioVideoTracksEnabled(bool isEnabled) { isAudioVideoTracksEnabled = isEnabled; }
    static bool audioVideoTracksEnabled() { return isAudioVideoTracksEnabled; }

    static void setAuxclickEnabled(bool isEnabled) { isAuxclickEnabled = isEnabled; }
    static bool auxclickEnabled() { return isAuxclickEnabled; }

    static void setBackgroundSyncEnabled(bool isEnabled) { isBackgroundSyncEnabled = isEnabled; }
    static bool backgroundSyncEnabled() { return isBackgroundSyncEnabled; }

    static void setBackspaceDefaultHandlerEnabled(bool isEnabled) { isBackspaceDefaultHandlerEnabled = isEnabled; }
    static bool backspaceDefaultHandlerEnabled() { return isBackspaceDefaultHandlerEnabled; }

    static void setBroadcastChannelEnabled(bool isEnabled) { isBroadcastChannelEnabled = isEnabled; }
    static bool broadcastChannelEnabled() { return isBroadcastChannelEnabled; }

    static void setBudgetEnabled(bool isEnabled) { isBudgetEnabled = isEnabled; }
    static bool budgetEnabled() { return isBudgetEnabled; }

    static void setCanvas2dFixedRenderingModeEnabled(bool isEnabled) { isCanvas2dFixedRenderingModeEnabled = isEnabled; }
    static bool canvas2dFixedRenderingModeEnabled() { return isCanvas2dFixedRenderingModeEnabled; }

    static void setEnableCanvas2dDynamicRenderingModeSwitchingEnabled(bool isEnabled) { isEnableCanvas2dDynamicRenderingModeSwitchingEnabled = isEnabled; }
    static bool enableCanvas2dDynamicRenderingModeSwitchingEnabled() { return isEnableCanvas2dDynamicRenderingModeSwitchingEnabled; }

    static void setCanvas2dImageChromiumEnabled(bool isEnabled) { isCanvas2dImageChromiumEnabled = isEnabled; }
    static bool canvas2dImageChromiumEnabled() { return isCanvas2dImageChromiumEnabled; }

    static void setClientHintsEnabled(bool isEnabled) { isClientHintsEnabled = isEnabled; }
    static bool clientHintsEnabled() { return isClientHintsEnabled; }

    static void setCompositeOpaqueScrollersEnabled(bool isEnabled) { isCompositeOpaqueScrollersEnabled = isEnabled; }
    static bool compositeOpaqueScrollersEnabled() { return isCompositeOpaqueScrollersEnabled; }

    static void setColorCorrectRenderingEnabled(bool isEnabled) { isColorCorrectRenderingEnabled = isEnabled; }
    static bool colorCorrectRenderingEnabled() { return isColorCorrectRenderingEnabled; }

    static void setCompositedSelectionUpdateEnabled(bool isEnabled) { isCompositedSelectionUpdateEnabled = isEnabled; }
    static bool compositedSelectionUpdateEnabled() { return isCompositedSelectionUpdateEnabled; }

    static void setCompositorWorkerEnabled(bool isEnabled) { isCompositorWorkerEnabled = isEnabled; }
    static bool compositorWorkerEnabled() { return isCompositorWorkerEnabled; }

    static void setContextMenuEnabled(bool isEnabled) { isContextMenuEnabled = isEnabled; }
    static bool contextMenuEnabled() { return isContextMenuEnabled; }

    static void setCorsRFC1918Enabled(bool isEnabled) { isCorsRFC1918Enabled = isEnabled; }
    static bool corsRFC1918Enabled() { return isCorsRFC1918Enabled; }

    static void setCredentialManagerEnabled(bool isEnabled) { isCredentialManagerEnabled = isEnabled; }
    static bool credentialManagerEnabled() { return isCredentialManagerEnabled; }

    static void setCSS3TextEnabled(bool isEnabled) { isCSS3TextEnabled = isEnabled; }
    static bool css3TextEnabled() { return isCSS3TextEnabled; }

    static void setCSS3TextDecorationsEnabled(bool isEnabled) { isCSS3TextDecorationsEnabled = isEnabled; }
    static bool css3TextDecorationsEnabled() { return isCSS3TextDecorationsEnabled; }

    static void setCSSApplyAtRulesEnabled(bool isEnabled) { isCSSApplyAtRulesEnabled = isEnabled; }
    static bool cssApplyAtRulesEnabled() { return isCSSApplyAtRulesEnabled && isCSSVariablesEnabled; }

    static void setCSSAdditiveAnimationsEnabled(bool isEnabled) { isCSSAdditiveAnimationsEnabled = isEnabled; }
    static bool cssAdditiveAnimationsEnabled() { return isCSSAdditiveAnimationsEnabled && isStackedCSSPropertyAnimationsEnabled; }

    static void setCSSBackdropFilterEnabled(bool isEnabled) { isCSSBackdropFilterEnabled = isEnabled; }
    static bool cssBackdropFilterEnabled() { return isCSSBackdropFilterEnabled; }

    static void setCSSBoxReflectFilterEnabled(bool isEnabled) { isCSSBoxReflectFilterEnabled = isEnabled; }
    static bool cssBoxReflectFilterEnabled() { return isCSSBoxReflectFilterEnabled; }

    static void setCSSHexAlphaColorEnabled(bool isEnabled) { isCSSHexAlphaColorEnabled = isEnabled; }
    static bool cssHexAlphaColorEnabled() { return isCSSHexAlphaColorEnabled; }

    static void setCSSContainmentEnabled(bool isEnabled) { isCSSContainmentEnabled = isEnabled; }
    static bool cssContainmentEnabled() { return isCSSContainmentEnabled; }

    static void setCSSFontDisplayEnabled(bool isEnabled) { isCSSFontDisplayEnabled = isEnabled; }
    static bool cssFontDisplayEnabled() { return isCSSFontDisplayEnabled; }

    static void setCSSFontSizeAdjustEnabled(bool isEnabled) { isCSSFontSizeAdjustEnabled = isEnabled; }
    static bool cssFontSizeAdjustEnabled() { return isCSSFontSizeAdjustEnabled; }

    static void setCSSGridLayoutEnabled(bool isEnabled) { isCSSGridLayoutEnabled = isEnabled; }
    static bool cssGridLayoutEnabled() { return isCSSGridLayoutEnabled; }

    static void setCSSHyphensEnabled(bool isEnabled) { isCSSHyphensEnabled = isEnabled; }
    static bool cssHyphensEnabled() { return isCSSHyphensEnabled; }

    static void setCSSInBodyDoesNotBlockPaintEnabled(bool isEnabled) { isCSSInBodyDoesNotBlockPaintEnabled = isEnabled; }
    static bool cssInBodyDoesNotBlockPaintEnabled() { return isCSSInBodyDoesNotBlockPaintEnabled; }

    static void setCSSIndependentTransformPropertiesEnabled(bool isEnabled) { isCSSIndependentTransformPropertiesEnabled = isEnabled; }
    static bool cssIndependentTransformPropertiesEnabled() { return isCSSIndependentTransformPropertiesEnabled; }

    static void setCSSMaskSourceTypeEnabled(bool isEnabled) { isCSSMaskSourceTypeEnabled = isEnabled; }
    static bool cssMaskSourceTypeEnabled() { return isCSSMaskSourceTypeEnabled; }

    static void setCSSOMSmoothScrollEnabled(bool isEnabled) { isCSSOMSmoothScrollEnabled = isEnabled; }
    static bool cssomSmoothScrollEnabled() { return isCSSOMSmoothScrollEnabled; }

    static void setCSSPaintAPIEnabled(bool isEnabled) { isCSSPaintAPIEnabled = isEnabled; }
    static bool cssPaintAPIEnabled() { return isCSSPaintAPIEnabled && isCSSTypedOMEnabled && isWorkletEnabled; }

    static void setCSSPropertyDEnabled(bool isEnabled) { isCSSPropertyDEnabled = isEnabled; }
    static bool cssPropertyDEnabled() { return isCSSPropertyDEnabled; }

    static void setCSSSnapSizeEnabled(bool isEnabled) { isCSSSnapSizeEnabled = isEnabled; }
    static bool cssSnapSizeEnabled() { return isCSSSnapSizeEnabled; }

    static void setCSSStickyPositionEnabled(bool isEnabled) { isCSSStickyPositionEnabled = isEnabled; }
    static bool cssStickyPositionEnabled() { return isCSSStickyPositionEnabled; }

    static void setCSSTouchActionPanDirectionsEnabled(bool isEnabled) { isCSSTouchActionPanDirectionsEnabled = isEnabled; }
    static bool cssTouchActionPanDirectionsEnabled() { return isCSSTouchActionPanDirectionsEnabled; }

    static void setCSSTypedOMEnabled(bool isEnabled) { isCSSTypedOMEnabled = isEnabled; }
    static bool cssTypedOMEnabled() { return isCSSTypedOMEnabled; }

    static void setCSSVariablesEnabled(bool isEnabled) { isCSSVariablesEnabled = isEnabled; }
    static bool cssVariablesEnabled() { return isCSSVariablesEnabled; }

    static void setCSSViewportEnabled(bool isEnabled) { isCSSViewportEnabled = isEnabled; }
    static bool cssViewportEnabled() { return isCSSViewportEnabled; }

    static void setCSSScrollSnapPointsEnabled(bool isEnabled) { isCSSScrollSnapPointsEnabled = isEnabled; }
    static bool cssScrollSnapPointsEnabled() { return isCSSScrollSnapPointsEnabled; }

    static void setCustomElementsV1Enabled(bool isEnabled) { isCustomElementsV1Enabled = isEnabled; }
    static bool customElementsV1Enabled() { return isCustomElementsV1Enabled; }

    static void setCustomSchemeHandlerEnabled(bool isEnabled) { isCustomSchemeHandlerEnabled = isEnabled; }
    static bool customSchemeHandlerEnabled() { return isCustomSchemeHandlerEnabled && isNavigatorContentUtilsEnabled; }

    static void setDatabaseEnabled(bool isEnabled) { isDatabaseEnabled = isEnabled; }
    static bool databaseEnabled() { return isDatabaseEnabled; }

    static void setDecodeToYUVEnabled(bool isEnabled) { isDecodeToYUVEnabled = isEnabled; }
    static bool decodeToYUVEnabled() { return isDecodeToYUVEnabled; }

    static void setDeviceLightEnabled(bool isEnabled) { isDeviceLightEnabled = isEnabled; }
    static bool deviceLightEnabled() { return isDeviceLightEnabled; }

    static void setDisplayList2dCanvasEnabled(bool isEnabled) { isDisplayList2dCanvasEnabled = isEnabled; }
    static bool displayList2dCanvasEnabled() { return isDisplayList2dCanvasEnabled; }

    static void setDocumentWriteEvaluatorEnabled(bool isEnabled) { isDocumentWriteEvaluatorEnabled = isEnabled; }
    static bool documentWriteEvaluatorEnabled() { return isDocumentWriteEvaluatorEnabled; }

    static void setDOMConvenienceAPIEnabled(bool isEnabled) { isDOMConvenienceAPIEnabled = isEnabled; }
    static bool dOMConvenienceAPIEnabled() { return isDOMConvenienceAPIEnabled; }

    static void setDurableStorageEnabled(bool isEnabled) { isDurableStorageEnabled = isEnabled; }
    static bool durableStorageEnabled() { return isDurableStorageEnabled; }

    static void setFontCacheScalingEnabled(bool isEnabled) { isFontCacheScalingEnabled = isEnabled; }
    static bool fontCacheScalingEnabled() { return isFontCacheScalingEnabled; }

    static void setForceDisplayList2dCanvasEnabled(bool isEnabled) { isForceDisplayList2dCanvasEnabled = isEnabled; }
    static bool forceDisplayList2dCanvasEnabled() { return isForceDisplayList2dCanvasEnabled; }

    static void setForceDisable2dCanvasCopyOnWriteEnabled(bool isEnabled) { isForceDisable2dCanvasCopyOnWriteEnabled = isEnabled; }
    static bool forceDisable2dCanvasCopyOnWriteEnabled() { return isForceDisable2dCanvasCopyOnWriteEnabled; }

    static void setExecCommandInJavaScriptEnabled(bool isEnabled) { isExecCommandInJavaScriptEnabled = isEnabled; }
    static bool execCommandInJavaScriptEnabled() { return isExecCommandInJavaScriptEnabled; }

    static void setComputedAccessibilityInfoEnabled(bool isEnabled) { isComputedAccessibilityInfoEnabled = isEnabled; }
    static bool computedAccessibilityInfoEnabled() { return isComputedAccessibilityInfoEnabled; }

    static void setExperimentalCanvasFeaturesEnabled(bool isEnabled) { isExperimentalCanvasFeaturesEnabled = isEnabled; }
    static bool experimentalCanvasFeaturesEnabled() { return isExperimentalCanvasFeaturesEnabled; }

    static void setExperimentalContentSecurityPolicyFeaturesEnabled(bool isEnabled) { isExperimentalContentSecurityPolicyFeaturesEnabled = isEnabled; }
    static bool experimentalContentSecurityPolicyFeaturesEnabled() { return isExperimentalContentSecurityPolicyFeaturesEnabled; }

    static void setExperimentalV8ExtrasEnabled(bool isEnabled) { isExperimentalV8ExtrasEnabled = isEnabled; }
    static bool experimentalV8ExtrasEnabled() { return isExperimentalV8ExtrasEnabled; }

    static void setFastMobileScrollingEnabled(bool isEnabled) { isFastMobileScrollingEnabled = isEnabled; }
    static bool fastMobileScrollingEnabled() { return isFastMobileScrollingEnabled; }

    static void setFeaturePolicyEnabled(bool isEnabled) { isFeaturePolicyEnabled = isEnabled; }
    static bool featurePolicyEnabled() { return isFeaturePolicyEnabled; }

    static void setFileAPIBlobCloseEnabled(bool isEnabled) { isFileAPIBlobCloseEnabled = isEnabled; }
    static bool fileAPIBlobCloseEnabled() { return isFileAPIBlobCloseEnabled; }

    static void setFileSystemEnabled(bool isEnabled) { isFileSystemEnabled = isEnabled; }
    static bool fileSystemEnabled() { return isFileSystemEnabled; }

    static void setForeignFetchEnabled(bool isEnabled) { isForeignFetchEnabled = isEnabled; }
    static bool foreignFetchEnabled() { return isForeignFetchEnabled; }

    static void setFullscreenUnprefixedEnabled(bool isEnabled) { isFullscreenUnprefixedEnabled = isEnabled; }
    static bool fullscreenUnprefixedEnabled() { return isFullscreenUnprefixedEnabled; }

    static void setFrameTimingSupportEnabled(bool isEnabled) { isFrameTimingSupportEnabled = isEnabled; }
    static bool frameTimingSupportEnabled() { return isFrameTimingSupportEnabled; }

    static void setGeometryInterfacesEnabled(bool isEnabled) { isGeometryInterfacesEnabled = isEnabled; }
    static bool geometryInterfacesEnabled() { return isGeometryInterfacesEnabled; }

    static void setGetUserMediaEnabled(bool isEnabled) { isGetUserMediaEnabled = isEnabled; }
    static bool getUserMediaEnabled() { return isGetUserMediaEnabled; }

    static void setGlobalCacheStorageEnabled(bool isEnabled) { isGlobalCacheStorageEnabled = isEnabled; }
    static bool globalCacheStorageEnabled() { return isGlobalCacheStorageEnabled; }

    static void setIDBObserverEnabled(bool isEnabled) { isIDBObserverEnabled = isEnabled; }
    static bool iDBObserverEnabled() { return isIDBObserverEnabled; }

    static void setImageCaptureEnabled(bool isEnabled) { isImageCaptureEnabled = isEnabled; }
    static bool imageCaptureEnabled() { return isImageCaptureEnabled; }

    static void setImageOrientationEnabled(bool isEnabled) { isImageOrientationEnabled = isEnabled; }
    static bool imageOrientationEnabled() { return isImageOrientationEnabled; }

    static void setIndexedDBExperimentalEnabled(bool isEnabled) { isIndexedDBExperimentalEnabled = isEnabled; }
    static bool indexedDBExperimentalEnabled() { return isIndexedDBExperimentalEnabled; }

    static void setInertTopControlsEnabled(bool isEnabled) { isInertTopControlsEnabled = isEnabled; }
    static bool inertTopControlsEnabled() { return isInertTopControlsEnabled; }

    static void setInputEventEnabled(bool isEnabled) { isInputEventEnabled = isEnabled; }
    static bool inputEventEnabled() { return isInputEventEnabled; }

    static void setInputModeAttributeEnabled(bool isEnabled) { isInputModeAttributeEnabled = isEnabled; }
    static bool inputModeAttributeEnabled() { return isInputModeAttributeEnabled; }

    static void setInputMultipleFieldsUIEnabled(bool isEnabled) { isInputMultipleFieldsUIEnabled = isEnabled; }
    static bool inputMultipleFieldsUIEnabled() { return isInputMultipleFieldsUIEnabled; }

    static void setInstalledAppEnabled(bool isEnabled) { isInstalledAppEnabled = isEnabled; }
    static bool installedAppEnabled() { return isInstalledAppEnabled; }

    static void setIntersectionObserverEnabled(bool isEnabled) { isIntersectionObserverEnabled = isEnabled; }
    static bool intersectionObserverEnabled() { return isIntersectionObserverEnabled; }

    static void setLangAttributeAwareFormControlUIEnabled(bool isEnabled) { isLangAttributeAwareFormControlUIEnabled = isEnabled; }
    static bool langAttributeAwareFormControlUIEnabled() { return isLangAttributeAwareFormControlUIEnabled; }

    static void setLayoutNGEnabled(bool isEnabled) { isLayoutNGEnabled = isEnabled; }
    static bool layoutNGEnabled() { return isLayoutNGEnabled; }

    static void setLinkServiceWorkerEnabled(bool isEnabled) { isLinkServiceWorkerEnabled = isEnabled; }
    static bool linkServiceWorkerEnabled() { return isLinkServiceWorkerEnabled; }

    static void setFractionalScrollOffsetsEnabled(bool isEnabled) { isFractionalScrollOffsetsEnabled = isEnabled; }
    static bool fractionalScrollOffsetsEnabled() { return isFractionalScrollOffsetsEnabled; }

    static void setLoadingWithMojoEnabled(bool isEnabled) { isLoadingWithMojoEnabled = isEnabled; }
    static bool loadingWithMojoEnabled() { return isLoadingWithMojoEnabled; }

    static void setMediaCaptureEnabled(bool isEnabled) { isMediaCaptureEnabled = isEnabled; }
    static bool mediaCaptureEnabled() { return isMediaCaptureEnabled; }

    static void setMediaCaptureFromCanvasEnabled(bool isEnabled) { isMediaCaptureFromCanvasEnabled = isEnabled; }
    static bool mediaCaptureFromCanvasEnabled() { return isMediaCaptureFromCanvasEnabled; }

    static void setMediaCaptureFromVideoEnabled(bool isEnabled) { isMediaCaptureFromVideoEnabled = isEnabled; }
    static bool mediaCaptureFromVideoEnabled() { return isMediaCaptureFromVideoEnabled; }

    static void setMediaConstraintsEnabled(bool isEnabled) { isMediaConstraintsEnabled = isEnabled; }
    static bool mediaConstraintsEnabled() { return isMediaConstraintsEnabled; }

    static void setMediaDocumentDownloadButtonEnabled(bool isEnabled) { isMediaDocumentDownloadButtonEnabled = isEnabled; }
    static bool mediaDocumentDownloadButtonEnabled() { return isMediaDocumentDownloadButtonEnabled; }

    static void setMediaGetSettingsEnabled(bool isEnabled) { isMediaGetSettingsEnabled = isEnabled; }
    static bool mediaGetSettingsEnabled() { return isMediaGetSettingsEnabled; }

    static void setMediaSessionEnabled(bool isEnabled) { isMediaSessionEnabled = isEnabled; }
    static bool mediaSessionEnabled() { return isMediaSessionEnabled; }

    static void setMediaSourceExperimentalEnabled(bool isEnabled) { isMediaSourceExperimentalEnabled = isEnabled; }
    static bool mediaSourceExperimentalEnabled() { return isMediaSourceExperimentalEnabled; }

    static void setMediaSourceNewAbortAndDurationEnabled(bool isEnabled) { isMediaSourceNewAbortAndDurationEnabled = isEnabled; }
    static bool mediaSourceNewAbortAndDurationEnabled() { return isMediaSourceNewAbortAndDurationEnabled; }

    static void setMediaStreamSpeechEnabled(bool isEnabled) { isMediaStreamSpeechEnabled = isEnabled; }
    static bool mediaStreamSpeechEnabled() { return isMediaStreamSpeechEnabled; }

    static void setMemoryInfoInWorkersEnabled(bool isEnabled) { isMemoryInfoInWorkersEnabled = isEnabled; }
    static bool memoryInfoInWorkersEnabled() { return isMemoryInfoInWorkersEnabled; }

    static void setMobileLayoutThemeEnabled(bool isEnabled) { isMobileLayoutThemeEnabled = isEnabled; }
    static bool mobileLayoutThemeEnabled() { return isMobileLayoutThemeEnabled; }

    static void setModuleScriptsEnabled(bool isEnabled) { isModuleScriptsEnabled = isEnabled; }
    static bool moduleScriptsEnabled() { return isModuleScriptsEnabled; }

    static void setNavigatorContentUtilsEnabled(bool isEnabled) { isNavigatorContentUtilsEnabled = isEnabled; }
    static bool navigatorContentUtilsEnabled() { return isNavigatorContentUtilsEnabled; }

    static void setWebNFCEnabled(bool isEnabled) { isWebNFCEnabled = isEnabled; }
    static bool webNFCEnabled() { return isWebNFCEnabled; }

    static void setNetworkInformationEnabled(bool isEnabled) { isNetworkInformationEnabled = isEnabled; }
    static bool networkInformationEnabled() { return isNetworkInformationEnabled; }

    static void setNetInfoDownlinkMaxEnabled(bool isEnabled) { isNetInfoDownlinkMaxEnabled = isEnabled; }
    static bool netInfoDownlinkMaxEnabled() { return isNetInfoDownlinkMaxEnabled; }

    static void setNewMediaPlaybackUiEnabled(bool isEnabled) { isNewMediaPlaybackUiEnabled = isEnabled; }
    static bool newMediaPlaybackUiEnabled() { return isNewMediaPlaybackUiEnabled; }

    static void setNotificationConstructorEnabled(bool isEnabled) { isNotificationConstructorEnabled = isEnabled; }
    static bool notificationConstructorEnabled() { return isNotificationConstructorEnabled; }

    static void setNotificationBadgeEnabled(bool isEnabled) { isNotificationBadgeEnabled = isEnabled; }
    static bool notificationBadgeEnabled() { return isNotificationBadgeEnabled; }

    static void setNotificationInlineRepliesEnabled(bool isEnabled) { isNotificationInlineRepliesEnabled = isEnabled; }
    static bool notificationInlineRepliesEnabled() { return isNotificationInlineRepliesEnabled; }

    static void setNotificationsEnabled(bool isEnabled) { isNotificationsEnabled = isEnabled; }
    static bool notificationsEnabled() { return isNotificationsEnabled; }

    static void setOnDeviceChangeEnabled(bool isEnabled) { isOnDeviceChangeEnabled = isEnabled; }
    static bool onDeviceChangeEnabled() { return isOnDeviceChangeEnabled; }

    static void setOrientationEventEnabled(bool isEnabled) { isOrientationEventEnabled = isEnabled; }
    static bool orientationEventEnabled() { return isOrientationEventEnabled; }

    static void setOriginTrialsEnabled(bool isEnabled) { isOriginTrialsEnabled = isEnabled; }
    static bool originTrialsEnabled() { return isOriginTrialsEnabled; }

    static void setOriginTrialsSampleAPIEnabled(bool isEnabled) { isOriginTrialsSampleAPIEnabled = isEnabled; }
    static bool originTrialsSampleAPIEnabled() { return isOriginTrialsSampleAPIEnabled; }

    static void setForceOverlayFullscreenVideoEnabled(bool isEnabled) { isForceOverlayFullscreenVideoEnabled = isEnabled; }
    static bool forceOverlayFullscreenVideoEnabled() { return isForceOverlayFullscreenVideoEnabled; }

    static void setOverlayScrollbarsEnabled(bool isEnabled) { isOverlayScrollbarsEnabled = isEnabled; }
    static bool overlayScrollbarsEnabled() { return isOverlayScrollbarsEnabled; }

    static void setHideScrollbarsEnabled(bool isEnabled) { isHideScrollbarsEnabled = isEnabled; }
    static bool hideScrollbarsEnabled() { return isHideScrollbarsEnabled; }

    static void setPagePopupEnabled(bool isEnabled) { isPagePopupEnabled = isEnabled; }
    static bool pagePopupEnabled() { return isPagePopupEnabled; }

    static void setPaintOptimizationsEnabled(bool isEnabled) { isPaintOptimizationsEnabled = isEnabled; }
    static bool paintOptimizationsEnabled() { return isPaintOptimizationsEnabled; }

    static void setPassiveDocumentEventListenersEnabled(bool isEnabled) { isPassiveDocumentEventListenersEnabled = isEnabled; }
    static bool passiveDocumentEventListenersEnabled() { return isPassiveDocumentEventListenersEnabled; }

    static void setPassiveEventListenersDueToFlingEnabled(bool isEnabled) { isPassiveEventListenersDueToFlingEnabled = isEnabled; }
    static bool passiveEventListenersDueToFlingEnabled() { return isPassiveEventListenersDueToFlingEnabled; }

    static void setPassPaintVisualRectToCompositorEnabled(bool isEnabled) { isPassPaintVisualRectToCompositorEnabled = isEnabled; }
    static bool passPaintVisualRectToCompositorEnabled() { return isPassPaintVisualRectToCompositorEnabled; }

    static void setPathOpsSVGClippingEnabled(bool isEnabled) { isPathOpsSVGClippingEnabled = isEnabled; }
    static bool pathOpsSVGClippingEnabled() { return isPathOpsSVGClippingEnabled; }

    static void setPaymentRequestEnabled(bool isEnabled) { isPaymentRequestEnabled = isEnabled; }
    static bool paymentRequestEnabled() { return isPaymentRequestEnabled; }

    static void setPerformanceObserverEnabled(bool isEnabled) { isPerformanceObserverEnabled = isEnabled; }
    static bool performanceObserverEnabled() { return isPerformanceObserverEnabled; }

    static void setPermissionDelegationEnabled(bool isEnabled) { isPermissionDelegationEnabled = isEnabled; }
    static bool permissionDelegationEnabled() { return isPermissionDelegationEnabled; }

    static void setPermissionsEnabled(bool isEnabled) { isPermissionsEnabled = isEnabled; }
    static bool permissionsEnabled() { return isPermissionsEnabled; }

    static void setPermissionsRequestRevokeEnabled(bool isEnabled) { isPermissionsRequestRevokeEnabled = isEnabled; }
    static bool permissionsRequestRevokeEnabled() { return isPermissionsRequestRevokeEnabled; }

    static void setPointerEventEnabled(bool isEnabled) { isPointerEventEnabled = isEnabled; }
    static bool pointerEventEnabled() { return isPointerEventEnabled; }

    static void setPreciseMemoryInfoEnabled(bool isEnabled) { isPreciseMemoryInfoEnabled = isEnabled; }
    static bool preciseMemoryInfoEnabled() { return isPreciseMemoryInfoEnabled; }

    static void setPrefixedVideoFullscreenEnabled(bool isEnabled) { isPrefixedVideoFullscreenEnabled = isEnabled; }
    static bool prefixedVideoFullscreenEnabled() { return isPrefixedVideoFullscreenEnabled; }

    static void setPresentationEnabled(bool isEnabled) { isPresentationEnabled = isEnabled; }
    static bool presentationEnabled() { return isPresentationEnabled; }

    static void setPresentationReceiverEnabled(bool isEnabled) { isPresentationReceiverEnabled = isEnabled; }
    static bool presentationReceiverEnabled() { return isPresentationReceiverEnabled; }

    static void setPushMessagingEnabled(bool isEnabled) { isPushMessagingEnabled = isEnabled; }
    static bool pushMessagingEnabled() { return isPushMessagingEnabled; }

    static void setQuotaPromiseEnabled(bool isEnabled) { isQuotaPromiseEnabled = isEnabled; }
    static bool quotaPromiseEnabled() { return isQuotaPromiseEnabled; }

    static void setReducedReferrerGranularityEnabled(bool isEnabled) { isReducedReferrerGranularityEnabled = isEnabled; }
    static bool reducedReferrerGranularityEnabled() { return isReducedReferrerGranularityEnabled; }

    static void setReferrerPolicyHeaderEnabled(bool isEnabled) { isReferrerPolicyHeaderEnabled = isEnabled; }
    static bool referrerPolicyHeaderEnabled() { return isReferrerPolicyHeaderEnabled; }

    static void setRemotePlaybackEnabled(bool isEnabled) { isRemotePlaybackEnabled = isEnabled; }
    static bool remotePlaybackEnabled() { return isRemotePlaybackEnabled; }

    static void setRenderingPipelineThrottlingEnabled(bool isEnabled) { isRenderingPipelineThrottlingEnabled = isEnabled; }
    static bool renderingPipelineThrottlingEnabled() { return isRenderingPipelineThrottlingEnabled; }

    static void setRenderUnicodeControlCharactersEnabled(bool isEnabled) { isRenderUnicodeControlCharactersEnabled = isEnabled; }
    static bool renderUnicodeControlCharactersEnabled() { return isRenderUnicodeControlCharactersEnabled; }

    static void setRequestIdleCallbackEnabled(bool isEnabled) { isRequestIdleCallbackEnabled = isEnabled; }
    static bool requestIdleCallbackEnabled() { return isRequestIdleCallbackEnabled; }

    static void setResizeObserverEnabled(bool isEnabled) { isResizeObserverEnabled = isEnabled; }
    static bool resizeObserverEnabled() { return isResizeObserverEnabled; }

    static void setRTCPeerConnectionNewGetStatsEnabled(bool isEnabled) { isRTCPeerConnectionNewGetStatsEnabled = isEnabled; }
    static bool rTCPeerConnectionNewGetStatsEnabled() { return isRTCPeerConnectionNewGetStatsEnabled; }

    static void setSandboxBlocksModalsEnabled(bool isEnabled) { isSandboxBlocksModalsEnabled = isEnabled; }
    static bool sandboxBlocksModalsEnabled() { return isSandboxBlocksModalsEnabled; }

    static void setScriptedSpeechEnabled(bool isEnabled) { isScriptedSpeechEnabled = isEnabled; }
    static bool scriptedSpeechEnabled() { return isScriptedSpeechEnabled; }

    static void setScrollAnchoringEnabled(bool isEnabled) { isScrollAnchoringEnabled = isEnabled; }
    static bool scrollAnchoringEnabled() { return isScrollAnchoringEnabled; }

    static void setScrollTopLeftInteropEnabled(bool isEnabled) { isScrollTopLeftInteropEnabled = isEnabled; }
    static bool scrollTopLeftInteropEnabled() { return isScrollTopLeftInteropEnabled; }

    static void setSensorEnabled(bool isEnabled) { isSensorEnabled = isEnabled; }
    static bool sensorEnabled() { return isSensorEnabled; }

    static void setServiceWorkerClientAttributesEnabled(bool isEnabled) { isServiceWorkerClientAttributesEnabled = isEnabled; }
    static bool serviceWorkerClientAttributesEnabled() { return isServiceWorkerClientAttributesEnabled; }

    static void setServiceWorkerClientsGetIDEnabled(bool isEnabled) { isServiceWorkerClientsGetIDEnabled = isEnabled; }
    static bool serviceWorkerClientsGetIDEnabled() { return isServiceWorkerClientsGetIDEnabled; }

    static void setServiceWorkerWindowClientNavigateEnabled(bool isEnabled) { isServiceWorkerWindowClientNavigateEnabled = isEnabled; }
    static bool serviceWorkerWindowClientNavigateEnabled() { return isServiceWorkerWindowClientNavigateEnabled; }

    static void setSetRootScrollerEnabled(bool isEnabled) { isSetRootScrollerEnabled = isEnabled; }
    static bool setRootScrollerEnabled() { return isSetRootScrollerEnabled; }

    static void setShadowDOMV1Enabled(bool isEnabled) { isShadowDOMV1Enabled = isEnabled; }
    static bool shadowDOMV1Enabled() { return isShadowDOMV1Enabled; }

    static void setSharedArrayBufferEnabled(bool isEnabled) { isSharedArrayBufferEnabled = isEnabled; }
    static bool sharedArrayBufferEnabled() { return isSharedArrayBufferEnabled; }

    static void setSharedWorkerEnabled(bool isEnabled) { isSharedWorkerEnabled = isEnabled; }
    static bool sharedWorkerEnabled() { return isSharedWorkerEnabled; }

    static void setSlimmingPaintInvalidationEnabled(bool isEnabled) { isSlimmingPaintInvalidationEnabled = isEnabled; }
    static bool slimmingPaintInvalidationEnabled() { return isSlimmingPaintInvalidationEnabled || isSlimmingPaintV2Enabled; }

    static void setSlimmingPaintV2Enabled(bool isEnabled) { isSlimmingPaintV2Enabled = isEnabled; }
    static bool slimmingPaintV2Enabled() { return isSlimmingPaintV2Enabled; }

    static void setSlimmingPaintStrictCullRectClippingEnabled(bool isEnabled) { isSlimmingPaintStrictCullRectClippingEnabled = isEnabled; }
    static bool slimmingPaintStrictCullRectClippingEnabled() { return isSlimmingPaintStrictCullRectClippingEnabled; }

    static void setSlimmingPaintUnderInvalidationCheckingEnabled(bool isEnabled) { isSlimmingPaintUnderInvalidationCheckingEnabled = isEnabled; }
    static bool slimmingPaintUnderInvalidationCheckingEnabled() { return isSlimmingPaintUnderInvalidationCheckingEnabled; }

    static void setStableBlinkFeaturesEnabled(bool isEnabled) { isStableBlinkFeaturesEnabled = isEnabled; }
    static bool stableBlinkFeaturesEnabled() { return isStableBlinkFeaturesEnabled; }

    static void setStackedCSSPropertyAnimationsEnabled(bool isEnabled) { isStackedCSSPropertyAnimationsEnabled = isEnabled; }
    static bool stackedCSSPropertyAnimationsEnabled() { return isStackedCSSPropertyAnimationsEnabled; }

    static void setStyleSharingEnabled(bool isEnabled) { isStyleSharingEnabled = isEnabled; }
    static bool styleSharingEnabled() { return isStyleSharingEnabled; }

    static void setStyleMatchedPropertiesCacheEnabled(bool isEnabled) { isStyleMatchedPropertiesCacheEnabled = isEnabled; }
    static bool styleMatchedPropertiesCacheEnabled() { return isStyleMatchedPropertiesCacheEnabled; }

    static void setExperimentalStreamEnabled(bool isEnabled) { isExperimentalStreamEnabled = isEnabled; }
    static bool experimentalStreamEnabled() { return isExperimentalStreamEnabled; }

    static void setSpeculativeLaunchServiceWorkerEnabled(bool isEnabled) { isSpeculativeLaunchServiceWorkerEnabled = isEnabled; }
    static bool speculativeLaunchServiceWorkerEnabled() { return isSpeculativeLaunchServiceWorkerEnabled; }

    static void setStorageEstimateEnabled(bool isEnabled) { isStorageEstimateEnabled = isEnabled; }
    static bool storageEstimateEnabled() { return isStorageEstimateEnabled; }

    static void setSuboriginsEnabled(bool isEnabled) { isSuboriginsEnabled = isEnabled; }
    static bool suboriginsEnabled() { return isSuboriginsEnabled; }

    static void setTimerThrottlingForBackgroundTabsEnabled(bool isEnabled) { isTimerThrottlingForBackgroundTabsEnabled = isEnabled; }
    static bool timerThrottlingForBackgroundTabsEnabled() { return isTimerThrottlingForBackgroundTabsEnabled; }

    static void setTouchEnabled(bool isEnabled) { isTouchEnabled = isEnabled; }
    static bool touchEnabled() { return isTouchEnabled; }

    static void setTraceWrappablesEnabled(bool isEnabled) { isTraceWrappablesEnabled = isEnabled; }
    static bool traceWrappablesEnabled() { return isTraceWrappablesEnabled; }

    static void setTrustedEventsDefaultActionEnabled(bool isEnabled) { isTrustedEventsDefaultActionEnabled = isEnabled; }
    static bool trustedEventsDefaultActionEnabled() { return isTrustedEventsDefaultActionEnabled; }

    static void setUnsafeES3APIsEnabled(bool isEnabled) { isUnsafeES3APIsEnabled = isEnabled; }
    static bool unsafeES3APIsEnabled() { return isUnsafeES3APIsEnabled; }

    static void setUnsandboxedAuxiliaryEnabled(bool isEnabled) { isUnsandboxedAuxiliaryEnabled = isEnabled; }
    static bool unsandboxedAuxiliaryEnabled() { return isUnsandboxedAuxiliaryEnabled; }

    static void setUserSelectAllEnabled(bool isEnabled) { isUserSelectAllEnabled = isEnabled; }
    static bool userSelectAllEnabled() { return isUserSelectAllEnabled; }

    static void setWebAnimationsAPIEnabled(bool isEnabled) { isWebAnimationsAPIEnabled = isEnabled; }
    static bool webAnimationsAPIEnabled() { return isWebAnimationsAPIEnabled; }

    static void setWebAnimationsSVGEnabled(bool isEnabled) { isWebAnimationsSVGEnabled = isEnabled; }
    static bool webAnimationsSVGEnabled() { return isWebAnimationsSVGEnabled; }

    static void setWebBluetoothEnabled(bool isEnabled) { isWebBluetoothEnabled = isEnabled; }
    static bool webBluetoothEnabled() { return isWebBluetoothEnabled; }

    static void setWebGLDraftExtensionsEnabled(bool isEnabled) { isWebGLDraftExtensionsEnabled = isEnabled; }
    static bool webGLDraftExtensionsEnabled() { return isWebGLDraftExtensionsEnabled; }

    static void setWebGLImageChromiumEnabled(bool isEnabled) { isWebGLImageChromiumEnabled = isEnabled; }
    static bool webGLImageChromiumEnabled() { return isWebGLImageChromiumEnabled; }

    static void setWebUSBEnabled(bool isEnabled) { isWebUSBEnabled = isEnabled; }
    static bool webUSBEnabled() { return isWebUSBEnabled; }

    static void setWebVREnabled(bool isEnabled) { isWebVREnabled = isEnabled; }
    static bool webVREnabled() { return isWebVREnabled; }

    static void setWebVTTRegionsEnabled(bool isEnabled) { isWebVTTRegionsEnabled = isEnabled; }
    static bool webVTTRegionsEnabled() { return isWebVTTRegionsEnabled; }

    static void setV8IdleTasksEnabled(bool isEnabled) { isV8IdleTasksEnabled = isEnabled; }
    static bool v8IdleTasksEnabled() { return isV8IdleTasksEnabled; }

    static void setVisibilityChangeOnUnloadEnabled(bool isEnabled) { isVisibilityChangeOnUnloadEnabled = isEnabled; }
    static bool visibilityChangeOnUnloadEnabled() { return isVisibilityChangeOnUnloadEnabled; }

    static void setXSLTEnabled(bool isEnabled) { isXSLTEnabled = isEnabled; }
    static bool xsltEnabled() { return isXSLTEnabled; }

    static void setsmilEnabled(bool isEnabled) { issmilEnabled = isEnabled; }
    static bool smilEnabled() { return issmilEnabled; }

    static void setScrollCustomizationEnabled(bool isEnabled) { isScrollCustomizationEnabled = isEnabled; }
    static bool scrollCustomizationEnabled() { return isScrollCustomizationEnabled; }

    static void setScrollRestorationEnabled(bool isEnabled) { isScrollRestorationEnabled = isEnabled; }
    static bool scrollRestorationEnabled() { return isScrollRestorationEnabled; }

    static void setAutoplayMutedVideosEnabled(bool isEnabled) { isAutoplayMutedVideosEnabled = isEnabled; }
    static bool autoplayMutedVideosEnabled() { return isAutoplayMutedVideosEnabled; }

    static void setVisualViewportAPIEnabled(bool isEnabled) { isVisualViewportAPIEnabled = isEnabled; }
    static bool visualViewportAPIEnabled() { return isVisualViewportAPIEnabled; }

    static void setWakeLockEnabled(bool isEnabled) { isWakeLockEnabled = isEnabled; }
    static bool wakeLockEnabled() { return isWakeLockEnabled; }

    static void setWebFontsInterventionV2With2GEnabled(bool isEnabled) { isWebFontsInterventionV2With2GEnabled = isEnabled; }
    static bool webFontsInterventionV2With2GEnabled() { return isWebFontsInterventionV2With2GEnabled; }

    static void setWebFontsInterventionV2WithSlow2GEnabled(bool isEnabled) { isWebFontsInterventionV2WithSlow2GEnabled = isEnabled; }
    static bool webFontsInterventionV2WithSlow2GEnabled() { return isWebFontsInterventionV2WithSlow2GEnabled; }

    static void setWebFontsInterventionTriggerEnabled(bool isEnabled) { isWebFontsInterventionTriggerEnabled = isEnabled; }
    static bool webFontsInterventionTriggerEnabled() { return isWebFontsInterventionTriggerEnabled; }

    static void setWebShareEnabled(bool isEnabled) { isWebShareEnabled = isEnabled; }
    static bool webShareEnabled() { return isWebShareEnabled; }

    static void setWorkletEnabled(bool isEnabled) { isWorkletEnabled = isEnabled; }
    static bool workletEnabled() { return isWorkletEnabled; }

    static void setWeakMemoryCacheEnabled(bool isEnabled) { isWeakMemoryCacheEnabled = isEnabled; }
    static bool weakMemoryCacheEnabled() { return isWeakMemoryCacheEnabled; }

    static void setDoNotUnlockSharedBufferEnabled(bool isEnabled) { isDoNotUnlockSharedBufferEnabled = isEnabled; }
    static bool doNotUnlockSharedBufferEnabled() { return isDoNotUnlockSharedBufferEnabled; }

    static void setParseHTMLOnMainThreadEnabled(bool isEnabled) { isParseHTMLOnMainThreadEnabled = isEnabled; }
    static bool parseHTMLOnMainThreadEnabled() { return isParseHTMLOnMainThreadEnabled; }

    static void setSendBeaconThrowForBlobWithNonSimpleTypeEnabled(bool isEnabled) { isSendBeaconThrowForBlobWithNonSimpleTypeEnabled = isEnabled; }
    static bool sendBeaconThrowForBlobWithNonSimpleTypeEnabled() { return isSendBeaconThrowForBlobWithNonSimpleTypeEnabled; }


private:
    static bool isAccelerated2dCanvasEnabled;
    static bool isAlwaysUseComplexTextEnabled;
    static bool isAudioOutputDevicesEnabled;
    static bool isAudioVideoTracksEnabled;
    static bool isAuxclickEnabled;
    static bool isBackgroundSyncEnabled;
    static bool isBackspaceDefaultHandlerEnabled;
    static bool isBroadcastChannelEnabled;
    static bool isBudgetEnabled;
    static bool isCanvas2dFixedRenderingModeEnabled;
    static bool isEnableCanvas2dDynamicRenderingModeSwitchingEnabled;
    static bool isCanvas2dImageChromiumEnabled;
    static bool isClientHintsEnabled;
    static bool isCompositeOpaqueScrollersEnabled;
    static bool isColorCorrectRenderingEnabled;
    static bool isCompositedSelectionUpdateEnabled;
    static bool isCompositorWorkerEnabled;
    static bool isContextMenuEnabled;
    static bool isCorsRFC1918Enabled;
    static bool isCredentialManagerEnabled;
    static bool isCSS3TextEnabled;
    static bool isCSS3TextDecorationsEnabled;
    static bool isCSSApplyAtRulesEnabled;
    static bool isCSSAdditiveAnimationsEnabled;
    static bool isCSSBackdropFilterEnabled;
    static bool isCSSBoxReflectFilterEnabled;
    static bool isCSSHexAlphaColorEnabled;
    static bool isCSSContainmentEnabled;
    static bool isCSSFontDisplayEnabled;
    static bool isCSSFontSizeAdjustEnabled;
    static bool isCSSGridLayoutEnabled;
    static bool isCSSHyphensEnabled;
    static bool isCSSInBodyDoesNotBlockPaintEnabled;
    static bool isCSSIndependentTransformPropertiesEnabled;
    static bool isCSSMaskSourceTypeEnabled;
    static bool isCSSOMSmoothScrollEnabled;
    static bool isCSSPaintAPIEnabled;
    static bool isCSSPropertyDEnabled;
    static bool isCSSSnapSizeEnabled;
    static bool isCSSStickyPositionEnabled;
    static bool isCSSTouchActionPanDirectionsEnabled;
    static bool isCSSTypedOMEnabled;
    static bool isCSSVariablesEnabled;
    static bool isCSSViewportEnabled;
    static bool isCSSScrollSnapPointsEnabled;
    static bool isCustomElementsV1Enabled;
    static bool isCustomSchemeHandlerEnabled;
    static bool isDatabaseEnabled;
    static bool isDecodeToYUVEnabled;
    static bool isDeviceLightEnabled;
    static bool isDisplayList2dCanvasEnabled;
    static bool isDocumentWriteEvaluatorEnabled;
    static bool isDOMConvenienceAPIEnabled;
    static bool isDurableStorageEnabled;
    static bool isFontCacheScalingEnabled;
    static bool isForceDisplayList2dCanvasEnabled;
    static bool isForceDisable2dCanvasCopyOnWriteEnabled;
    static bool isExecCommandInJavaScriptEnabled;
    static bool isComputedAccessibilityInfoEnabled;
    static bool isExperimentalCanvasFeaturesEnabled;
    static bool isExperimentalContentSecurityPolicyFeaturesEnabled;
    static bool isExperimentalV8ExtrasEnabled;
    static bool isFastMobileScrollingEnabled;
    static bool isFeaturePolicyEnabled;
    static bool isFileAPIBlobCloseEnabled;
    static bool isFileSystemEnabled;
    static bool isForeignFetchEnabled;
    static bool isFullscreenUnprefixedEnabled;
    static bool isFrameTimingSupportEnabled;
    static bool isGeometryInterfacesEnabled;
    static bool isGetUserMediaEnabled;
    static bool isGlobalCacheStorageEnabled;
    static bool isIDBObserverEnabled;
    static bool isImageCaptureEnabled;
    static bool isImageOrientationEnabled;
    static bool isIndexedDBExperimentalEnabled;
    static bool isInertTopControlsEnabled;
    static bool isInputEventEnabled;
    static bool isInputModeAttributeEnabled;
    static bool isInputMultipleFieldsUIEnabled;
    static bool isInstalledAppEnabled;
    static bool isIntersectionObserverEnabled;
    static bool isLangAttributeAwareFormControlUIEnabled;
    static bool isLayoutNGEnabled;
    static bool isLinkServiceWorkerEnabled;
    static bool isFractionalScrollOffsetsEnabled;
    static bool isLoadingWithMojoEnabled;
    static bool isMediaCaptureEnabled;
    static bool isMediaCaptureFromCanvasEnabled;
    static bool isMediaCaptureFromVideoEnabled;
    static bool isMediaConstraintsEnabled;
    static bool isMediaDocumentDownloadButtonEnabled;
    static bool isMediaGetSettingsEnabled;
    static bool isMediaSessionEnabled;
    static bool isMediaSourceExperimentalEnabled;
    static bool isMediaSourceNewAbortAndDurationEnabled;
    static bool isMediaStreamSpeechEnabled;
    static bool isMemoryInfoInWorkersEnabled;
    static bool isMobileLayoutThemeEnabled;
    static bool isModuleScriptsEnabled;
    static bool isNavigatorContentUtilsEnabled;
    static bool isWebNFCEnabled;
    static bool isNetworkInformationEnabled;
    static bool isNetInfoDownlinkMaxEnabled;
    static bool isNewMediaPlaybackUiEnabled;
    static bool isNotificationConstructorEnabled;
    static bool isNotificationBadgeEnabled;
    static bool isNotificationInlineRepliesEnabled;
    static bool isNotificationsEnabled;
    static bool isOnDeviceChangeEnabled;
    static bool isOrientationEventEnabled;
    static bool isOriginTrialsEnabled;
    static bool isOriginTrialsSampleAPIEnabled;
    static bool isForceOverlayFullscreenVideoEnabled;
    static bool isOverlayScrollbarsEnabled;
    static bool isHideScrollbarsEnabled;
    static bool isPagePopupEnabled;
    static bool isPaintOptimizationsEnabled;
    static bool isPassiveDocumentEventListenersEnabled;
    static bool isPassiveEventListenersDueToFlingEnabled;
    static bool isPassPaintVisualRectToCompositorEnabled;
    static bool isPathOpsSVGClippingEnabled;
    static bool isPaymentRequestEnabled;
    static bool isPerformanceObserverEnabled;
    static bool isPermissionDelegationEnabled;
    static bool isPermissionsEnabled;
    static bool isPermissionsRequestRevokeEnabled;
    static bool isPointerEventEnabled;
    static bool isPreciseMemoryInfoEnabled;
    static bool isPrefixedVideoFullscreenEnabled;
    static bool isPresentationEnabled;
    static bool isPresentationReceiverEnabled;
    static bool isPushMessagingEnabled;
    static bool isQuotaPromiseEnabled;
    static bool isReducedReferrerGranularityEnabled;
    static bool isReferrerPolicyHeaderEnabled;
    static bool isRemotePlaybackEnabled;
    static bool isRenderingPipelineThrottlingEnabled;
    static bool isRenderUnicodeControlCharactersEnabled;
    static bool isRequestIdleCallbackEnabled;
    static bool isResizeObserverEnabled;
    static bool isRTCPeerConnectionNewGetStatsEnabled;
    static bool isSandboxBlocksModalsEnabled;
    static bool isScriptedSpeechEnabled;
    static bool isScrollAnchoringEnabled;
    static bool isScrollTopLeftInteropEnabled;
    static bool isSensorEnabled;
    static bool isServiceWorkerClientAttributesEnabled;
    static bool isServiceWorkerClientsGetIDEnabled;
    static bool isServiceWorkerWindowClientNavigateEnabled;
    static bool isSetRootScrollerEnabled;
    static bool isShadowDOMV1Enabled;
    static bool isSharedArrayBufferEnabled;
    static bool isSharedWorkerEnabled;
    static bool isSlimmingPaintInvalidationEnabled;
    static bool isSlimmingPaintV2Enabled;
    static bool isSlimmingPaintStrictCullRectClippingEnabled;
    static bool isSlimmingPaintUnderInvalidationCheckingEnabled;
    static bool isStableBlinkFeaturesEnabled;
    static bool isStackedCSSPropertyAnimationsEnabled;
    static bool isStyleSharingEnabled;
    static bool isStyleMatchedPropertiesCacheEnabled;
    static bool isExperimentalStreamEnabled;
    static bool isSpeculativeLaunchServiceWorkerEnabled;
    static bool isStorageEstimateEnabled;
    static bool isSuboriginsEnabled;
    static bool isTimerThrottlingForBackgroundTabsEnabled;
    static bool isTouchEnabled;
    static bool isTraceWrappablesEnabled;
    static bool isTrustedEventsDefaultActionEnabled;
    static bool isUnsafeES3APIsEnabled;
    static bool isUnsandboxedAuxiliaryEnabled;
    static bool isUserSelectAllEnabled;
    static bool isWebAnimationsAPIEnabled;
    static bool isWebAnimationsSVGEnabled;
    static bool isWebBluetoothEnabled;
    static bool isWebGLDraftExtensionsEnabled;
    static bool isWebGLImageChromiumEnabled;
    static bool isWebUSBEnabled;
    static bool isWebVREnabled;
    static bool isWebVTTRegionsEnabled;
    static bool isV8IdleTasksEnabled;
    static bool isVisibilityChangeOnUnloadEnabled;
    static bool isXSLTEnabled;
    static bool issmilEnabled;
    static bool isScrollCustomizationEnabled;
    static bool isScrollRestorationEnabled;
    static bool isAutoplayMutedVideosEnabled;
    static bool isVisualViewportAPIEnabled;
    static bool isWakeLockEnabled;
    static bool isWebFontsInterventionV2With2GEnabled;
    static bool isWebFontsInterventionV2WithSlow2GEnabled;
    static bool isWebFontsInterventionTriggerEnabled;
    static bool isWebShareEnabled;
    static bool isWorkletEnabled;
    static bool isWeakMemoryCacheEnabled;
    static bool isDoNotUnlockSharedBufferEnabled;
    static bool isParseHTMLOnMainThreadEnabled;
    static bool isSendBeaconThrowForBlobWithNonSimpleTypeEnabled;
};

} // namespace blink

#endif // RuntimeEnabledFeatures_h
