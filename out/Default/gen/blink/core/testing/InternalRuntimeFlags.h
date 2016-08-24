// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef InternalRuntimeFlags_h
#define InternalRuntimeFlags_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/heap/Handle.h"
#include "wtf/PassRefPtr.h"
#include "wtf/RefPtr.h"
#include "wtf/RefCounted.h"

namespace blink {

class InternalRuntimeFlags : public GarbageCollected<InternalRuntimeFlags>, public ScriptWrappable {
    DEFINE_WRAPPERTYPEINFO();
public:
    static InternalRuntimeFlags* create()
    {
        return new InternalRuntimeFlags;
    }

    // These are reset between layout tests from Internals::resetToConsistentState
    // using RuntimeEnabledFeatures::Backup.
    void setAccelerated2dCanvasEnabled(bool isEnabled) { RuntimeEnabledFeatures::setAccelerated2dCanvasEnabled(isEnabled); }
    void setColorCorrectRenderingEnabled(bool isEnabled) { RuntimeEnabledFeatures::setColorCorrectRenderingEnabled(isEnabled); }
    void setHideScrollbarsEnabled(bool isEnabled) { RuntimeEnabledFeatures::setHideScrollbarsEnabled(isEnabled); }
    void setScrollAnchoringEnabled(bool isEnabled) { RuntimeEnabledFeatures::setScrollAnchoringEnabled(isEnabled); }
    void setSlimmingPaintUnderInvalidationCheckingEnabled(bool isEnabled) { RuntimeEnabledFeatures::setSlimmingPaintUnderInvalidationCheckingEnabled(isEnabled); }
    void setAutoplayMutedVideosEnabled(bool isEnabled) { RuntimeEnabledFeatures::setAutoplayMutedVideosEnabled(isEnabled); }

    bool accelerated2dCanvasEnabled() { return RuntimeEnabledFeatures::accelerated2dCanvasEnabled(); }
    bool alwaysUseComplexTextEnabled() { return RuntimeEnabledFeatures::alwaysUseComplexTextEnabled(); }
    bool audioOutputDevicesEnabled() { return RuntimeEnabledFeatures::audioOutputDevicesEnabled(); }
    bool audioVideoTracksEnabled() { return RuntimeEnabledFeatures::audioVideoTracksEnabled(); }
    bool auxclickEnabled() { return RuntimeEnabledFeatures::auxclickEnabled(); }
    bool backgroundSyncEnabled() { return RuntimeEnabledFeatures::backgroundSyncEnabled(); }
    bool backspaceDefaultHandlerEnabled() { return RuntimeEnabledFeatures::backspaceDefaultHandlerEnabled(); }
    bool broadcastChannelEnabled() { return RuntimeEnabledFeatures::broadcastChannelEnabled(); }
    bool budgetEnabled() { return RuntimeEnabledFeatures::budgetEnabled(); }
    bool canvas2dFixedRenderingModeEnabled() { return RuntimeEnabledFeatures::canvas2dFixedRenderingModeEnabled(); }
    bool enableCanvas2dDynamicRenderingModeSwitchingEnabled() { return RuntimeEnabledFeatures::enableCanvas2dDynamicRenderingModeSwitchingEnabled(); }
    bool canvas2dImageChromiumEnabled() { return RuntimeEnabledFeatures::canvas2dImageChromiumEnabled(); }
    bool clientHintsEnabled() { return RuntimeEnabledFeatures::clientHintsEnabled(); }
    bool compositeOpaqueScrollersEnabled() { return RuntimeEnabledFeatures::compositeOpaqueScrollersEnabled(); }
    bool colorCorrectRenderingEnabled() { return RuntimeEnabledFeatures::colorCorrectRenderingEnabled(); }
    bool compositedSelectionUpdateEnabled() { return RuntimeEnabledFeatures::compositedSelectionUpdateEnabled(); }
    bool compositorWorkerEnabled() { return RuntimeEnabledFeatures::compositorWorkerEnabled(); }
    bool contextMenuEnabled() { return RuntimeEnabledFeatures::contextMenuEnabled(); }
    bool corsRFC1918Enabled() { return RuntimeEnabledFeatures::corsRFC1918Enabled(); }
    bool credentialManagerEnabled() { return RuntimeEnabledFeatures::credentialManagerEnabled(); }
    bool css3TextEnabled() { return RuntimeEnabledFeatures::css3TextEnabled(); }
    bool css3TextDecorationsEnabled() { return RuntimeEnabledFeatures::css3TextDecorationsEnabled(); }
    bool cssApplyAtRulesEnabled() { return RuntimeEnabledFeatures::cssApplyAtRulesEnabled(); }
    bool cssAdditiveAnimationsEnabled() { return RuntimeEnabledFeatures::cssAdditiveAnimationsEnabled(); }
    bool cssBackdropFilterEnabled() { return RuntimeEnabledFeatures::cssBackdropFilterEnabled(); }
    bool cssBoxReflectFilterEnabled() { return RuntimeEnabledFeatures::cssBoxReflectFilterEnabled(); }
    bool cssHexAlphaColorEnabled() { return RuntimeEnabledFeatures::cssHexAlphaColorEnabled(); }
    bool cssContainmentEnabled() { return RuntimeEnabledFeatures::cssContainmentEnabled(); }
    bool cssFontDisplayEnabled() { return RuntimeEnabledFeatures::cssFontDisplayEnabled(); }
    bool cssFontSizeAdjustEnabled() { return RuntimeEnabledFeatures::cssFontSizeAdjustEnabled(); }
    bool cssGridLayoutEnabled() { return RuntimeEnabledFeatures::cssGridLayoutEnabled(); }
    bool cssHyphensEnabled() { return RuntimeEnabledFeatures::cssHyphensEnabled(); }
    bool cssInBodyDoesNotBlockPaintEnabled() { return RuntimeEnabledFeatures::cssInBodyDoesNotBlockPaintEnabled(); }
    bool cssIndependentTransformPropertiesEnabled() { return RuntimeEnabledFeatures::cssIndependentTransformPropertiesEnabled(); }
    bool cssMaskSourceTypeEnabled() { return RuntimeEnabledFeatures::cssMaskSourceTypeEnabled(); }
    bool cssomSmoothScrollEnabled() { return RuntimeEnabledFeatures::cssomSmoothScrollEnabled(); }
    bool cssPaintAPIEnabled() { return RuntimeEnabledFeatures::cssPaintAPIEnabled(); }
    bool cssPropertyDEnabled() { return RuntimeEnabledFeatures::cssPropertyDEnabled(); }
    bool cssSnapSizeEnabled() { return RuntimeEnabledFeatures::cssSnapSizeEnabled(); }
    bool cssStickyPositionEnabled() { return RuntimeEnabledFeatures::cssStickyPositionEnabled(); }
    bool cssTouchActionPanDirectionsEnabled() { return RuntimeEnabledFeatures::cssTouchActionPanDirectionsEnabled(); }
    bool cssTypedOMEnabled() { return RuntimeEnabledFeatures::cssTypedOMEnabled(); }
    bool cssVariablesEnabled() { return RuntimeEnabledFeatures::cssVariablesEnabled(); }
    bool cssViewportEnabled() { return RuntimeEnabledFeatures::cssViewportEnabled(); }
    bool cssScrollSnapPointsEnabled() { return RuntimeEnabledFeatures::cssScrollSnapPointsEnabled(); }
    bool customElementsV1Enabled() { return RuntimeEnabledFeatures::customElementsV1Enabled(); }
    bool customSchemeHandlerEnabled() { return RuntimeEnabledFeatures::customSchemeHandlerEnabled(); }
    bool databaseEnabled() { return RuntimeEnabledFeatures::databaseEnabled(); }
    bool decodeToYUVEnabled() { return RuntimeEnabledFeatures::decodeToYUVEnabled(); }
    bool deviceLightEnabled() { return RuntimeEnabledFeatures::deviceLightEnabled(); }
    bool displayList2dCanvasEnabled() { return RuntimeEnabledFeatures::displayList2dCanvasEnabled(); }
    bool documentWriteEvaluatorEnabled() { return RuntimeEnabledFeatures::documentWriteEvaluatorEnabled(); }
    bool dOMConvenienceAPIEnabled() { return RuntimeEnabledFeatures::dOMConvenienceAPIEnabled(); }
    bool durableStorageEnabled() { return RuntimeEnabledFeatures::durableStorageEnabled(); }
    bool fontCacheScalingEnabled() { return RuntimeEnabledFeatures::fontCacheScalingEnabled(); }
    bool forceDisplayList2dCanvasEnabled() { return RuntimeEnabledFeatures::forceDisplayList2dCanvasEnabled(); }
    bool forceDisable2dCanvasCopyOnWriteEnabled() { return RuntimeEnabledFeatures::forceDisable2dCanvasCopyOnWriteEnabled(); }
    bool execCommandInJavaScriptEnabled() { return RuntimeEnabledFeatures::execCommandInJavaScriptEnabled(); }
    bool computedAccessibilityInfoEnabled() { return RuntimeEnabledFeatures::computedAccessibilityInfoEnabled(); }
    bool experimentalCanvasFeaturesEnabled() { return RuntimeEnabledFeatures::experimentalCanvasFeaturesEnabled(); }
    bool experimentalContentSecurityPolicyFeaturesEnabled() { return RuntimeEnabledFeatures::experimentalContentSecurityPolicyFeaturesEnabled(); }
    bool experimentalV8ExtrasEnabled() { return RuntimeEnabledFeatures::experimentalV8ExtrasEnabled(); }
    bool fastMobileScrollingEnabled() { return RuntimeEnabledFeatures::fastMobileScrollingEnabled(); }
    bool featurePolicyEnabled() { return RuntimeEnabledFeatures::featurePolicyEnabled(); }
    bool fileAPIBlobCloseEnabled() { return RuntimeEnabledFeatures::fileAPIBlobCloseEnabled(); }
    bool fileSystemEnabled() { return RuntimeEnabledFeatures::fileSystemEnabled(); }
    bool foreignFetchEnabled() { return RuntimeEnabledFeatures::foreignFetchEnabled(); }
    bool fullscreenUnprefixedEnabled() { return RuntimeEnabledFeatures::fullscreenUnprefixedEnabled(); }
    bool frameTimingSupportEnabled() { return RuntimeEnabledFeatures::frameTimingSupportEnabled(); }
    bool geometryInterfacesEnabled() { return RuntimeEnabledFeatures::geometryInterfacesEnabled(); }
    bool getUserMediaEnabled() { return RuntimeEnabledFeatures::getUserMediaEnabled(); }
    bool globalCacheStorageEnabled() { return RuntimeEnabledFeatures::globalCacheStorageEnabled(); }
    bool iDBObserverEnabled() { return RuntimeEnabledFeatures::iDBObserverEnabled(); }
    bool imageCaptureEnabled() { return RuntimeEnabledFeatures::imageCaptureEnabled(); }
    bool imageOrientationEnabled() { return RuntimeEnabledFeatures::imageOrientationEnabled(); }
    bool indexedDBExperimentalEnabled() { return RuntimeEnabledFeatures::indexedDBExperimentalEnabled(); }
    bool inertTopControlsEnabled() { return RuntimeEnabledFeatures::inertTopControlsEnabled(); }
    bool inputEventEnabled() { return RuntimeEnabledFeatures::inputEventEnabled(); }
    bool inputModeAttributeEnabled() { return RuntimeEnabledFeatures::inputModeAttributeEnabled(); }
    bool inputMultipleFieldsUIEnabled() { return RuntimeEnabledFeatures::inputMultipleFieldsUIEnabled(); }
    bool installedAppEnabled() { return RuntimeEnabledFeatures::installedAppEnabled(); }
    bool intersectionObserverEnabled() { return RuntimeEnabledFeatures::intersectionObserverEnabled(); }
    bool langAttributeAwareFormControlUIEnabled() { return RuntimeEnabledFeatures::langAttributeAwareFormControlUIEnabled(); }
    bool layoutNGEnabled() { return RuntimeEnabledFeatures::layoutNGEnabled(); }
    bool linkServiceWorkerEnabled() { return RuntimeEnabledFeatures::linkServiceWorkerEnabled(); }
    bool fractionalScrollOffsetsEnabled() { return RuntimeEnabledFeatures::fractionalScrollOffsetsEnabled(); }
    bool loadingWithMojoEnabled() { return RuntimeEnabledFeatures::loadingWithMojoEnabled(); }
    bool mediaCaptureEnabled() { return RuntimeEnabledFeatures::mediaCaptureEnabled(); }
    bool mediaCaptureFromCanvasEnabled() { return RuntimeEnabledFeatures::mediaCaptureFromCanvasEnabled(); }
    bool mediaCaptureFromVideoEnabled() { return RuntimeEnabledFeatures::mediaCaptureFromVideoEnabled(); }
    bool mediaConstraintsEnabled() { return RuntimeEnabledFeatures::mediaConstraintsEnabled(); }
    bool mediaDocumentDownloadButtonEnabled() { return RuntimeEnabledFeatures::mediaDocumentDownloadButtonEnabled(); }
    bool mediaGetSettingsEnabled() { return RuntimeEnabledFeatures::mediaGetSettingsEnabled(); }
    bool mediaSessionEnabled() { return RuntimeEnabledFeatures::mediaSessionEnabled(); }
    bool mediaSourceExperimentalEnabled() { return RuntimeEnabledFeatures::mediaSourceExperimentalEnabled(); }
    bool mediaSourceNewAbortAndDurationEnabled() { return RuntimeEnabledFeatures::mediaSourceNewAbortAndDurationEnabled(); }
    bool mediaStreamSpeechEnabled() { return RuntimeEnabledFeatures::mediaStreamSpeechEnabled(); }
    bool memoryInfoInWorkersEnabled() { return RuntimeEnabledFeatures::memoryInfoInWorkersEnabled(); }
    bool mobileLayoutThemeEnabled() { return RuntimeEnabledFeatures::mobileLayoutThemeEnabled(); }
    bool moduleScriptsEnabled() { return RuntimeEnabledFeatures::moduleScriptsEnabled(); }
    bool navigatorContentUtilsEnabled() { return RuntimeEnabledFeatures::navigatorContentUtilsEnabled(); }
    bool webNFCEnabled() { return RuntimeEnabledFeatures::webNFCEnabled(); }
    bool networkInformationEnabled() { return RuntimeEnabledFeatures::networkInformationEnabled(); }
    bool netInfoDownlinkMaxEnabled() { return RuntimeEnabledFeatures::netInfoDownlinkMaxEnabled(); }
    bool newMediaPlaybackUiEnabled() { return RuntimeEnabledFeatures::newMediaPlaybackUiEnabled(); }
    bool notificationConstructorEnabled() { return RuntimeEnabledFeatures::notificationConstructorEnabled(); }
    bool notificationBadgeEnabled() { return RuntimeEnabledFeatures::notificationBadgeEnabled(); }
    bool notificationInlineRepliesEnabled() { return RuntimeEnabledFeatures::notificationInlineRepliesEnabled(); }
    bool notificationsEnabled() { return RuntimeEnabledFeatures::notificationsEnabled(); }
    bool onDeviceChangeEnabled() { return RuntimeEnabledFeatures::onDeviceChangeEnabled(); }
    bool orientationEventEnabled() { return RuntimeEnabledFeatures::orientationEventEnabled(); }
    bool originTrialsEnabled() { return RuntimeEnabledFeatures::originTrialsEnabled(); }
    bool originTrialsSampleAPIEnabled() { return RuntimeEnabledFeatures::originTrialsSampleAPIEnabled(); }
    bool forceOverlayFullscreenVideoEnabled() { return RuntimeEnabledFeatures::forceOverlayFullscreenVideoEnabled(); }
    bool overlayScrollbarsEnabled() { return RuntimeEnabledFeatures::overlayScrollbarsEnabled(); }
    bool hideScrollbarsEnabled() { return RuntimeEnabledFeatures::hideScrollbarsEnabled(); }
    bool pagePopupEnabled() { return RuntimeEnabledFeatures::pagePopupEnabled(); }
    bool paintOptimizationsEnabled() { return RuntimeEnabledFeatures::paintOptimizationsEnabled(); }
    bool passiveDocumentEventListenersEnabled() { return RuntimeEnabledFeatures::passiveDocumentEventListenersEnabled(); }
    bool passiveEventListenersDueToFlingEnabled() { return RuntimeEnabledFeatures::passiveEventListenersDueToFlingEnabled(); }
    bool passPaintVisualRectToCompositorEnabled() { return RuntimeEnabledFeatures::passPaintVisualRectToCompositorEnabled(); }
    bool pathOpsSVGClippingEnabled() { return RuntimeEnabledFeatures::pathOpsSVGClippingEnabled(); }
    bool paymentRequestEnabled() { return RuntimeEnabledFeatures::paymentRequestEnabled(); }
    bool performanceObserverEnabled() { return RuntimeEnabledFeatures::performanceObserverEnabled(); }
    bool permissionDelegationEnabled() { return RuntimeEnabledFeatures::permissionDelegationEnabled(); }
    bool permissionsEnabled() { return RuntimeEnabledFeatures::permissionsEnabled(); }
    bool permissionsRequestRevokeEnabled() { return RuntimeEnabledFeatures::permissionsRequestRevokeEnabled(); }
    bool pointerEventEnabled() { return RuntimeEnabledFeatures::pointerEventEnabled(); }
    bool preciseMemoryInfoEnabled() { return RuntimeEnabledFeatures::preciseMemoryInfoEnabled(); }
    bool prefixedVideoFullscreenEnabled() { return RuntimeEnabledFeatures::prefixedVideoFullscreenEnabled(); }
    bool presentationEnabled() { return RuntimeEnabledFeatures::presentationEnabled(); }
    bool presentationReceiverEnabled() { return RuntimeEnabledFeatures::presentationReceiverEnabled(); }
    bool pushMessagingEnabled() { return RuntimeEnabledFeatures::pushMessagingEnabled(); }
    bool quotaPromiseEnabled() { return RuntimeEnabledFeatures::quotaPromiseEnabled(); }
    bool reducedReferrerGranularityEnabled() { return RuntimeEnabledFeatures::reducedReferrerGranularityEnabled(); }
    bool referrerPolicyHeaderEnabled() { return RuntimeEnabledFeatures::referrerPolicyHeaderEnabled(); }
    bool remotePlaybackEnabled() { return RuntimeEnabledFeatures::remotePlaybackEnabled(); }
    bool renderingPipelineThrottlingEnabled() { return RuntimeEnabledFeatures::renderingPipelineThrottlingEnabled(); }
    bool renderUnicodeControlCharactersEnabled() { return RuntimeEnabledFeatures::renderUnicodeControlCharactersEnabled(); }
    bool requestIdleCallbackEnabled() { return RuntimeEnabledFeatures::requestIdleCallbackEnabled(); }
    bool resizeObserverEnabled() { return RuntimeEnabledFeatures::resizeObserverEnabled(); }
    bool rTCPeerConnectionNewGetStatsEnabled() { return RuntimeEnabledFeatures::rTCPeerConnectionNewGetStatsEnabled(); }
    bool sandboxBlocksModalsEnabled() { return RuntimeEnabledFeatures::sandboxBlocksModalsEnabled(); }
    bool scriptedSpeechEnabled() { return RuntimeEnabledFeatures::scriptedSpeechEnabled(); }
    bool scrollAnchoringEnabled() { return RuntimeEnabledFeatures::scrollAnchoringEnabled(); }
    bool scrollTopLeftInteropEnabled() { return RuntimeEnabledFeatures::scrollTopLeftInteropEnabled(); }
    bool sensorEnabled() { return RuntimeEnabledFeatures::sensorEnabled(); }
    bool serviceWorkerClientAttributesEnabled() { return RuntimeEnabledFeatures::serviceWorkerClientAttributesEnabled(); }
    bool serviceWorkerClientsGetIDEnabled() { return RuntimeEnabledFeatures::serviceWorkerClientsGetIDEnabled(); }
    bool serviceWorkerWindowClientNavigateEnabled() { return RuntimeEnabledFeatures::serviceWorkerWindowClientNavigateEnabled(); }
    bool setRootScrollerEnabled() { return RuntimeEnabledFeatures::setRootScrollerEnabled(); }
    bool shadowDOMV1Enabled() { return RuntimeEnabledFeatures::shadowDOMV1Enabled(); }
    bool sharedArrayBufferEnabled() { return RuntimeEnabledFeatures::sharedArrayBufferEnabled(); }
    bool sharedWorkerEnabled() { return RuntimeEnabledFeatures::sharedWorkerEnabled(); }
    bool slimmingPaintInvalidationEnabled() { return RuntimeEnabledFeatures::slimmingPaintInvalidationEnabled(); }
    bool slimmingPaintV2Enabled() { return RuntimeEnabledFeatures::slimmingPaintV2Enabled(); }
    bool slimmingPaintStrictCullRectClippingEnabled() { return RuntimeEnabledFeatures::slimmingPaintStrictCullRectClippingEnabled(); }
    bool slimmingPaintUnderInvalidationCheckingEnabled() { return RuntimeEnabledFeatures::slimmingPaintUnderInvalidationCheckingEnabled(); }
    bool stableBlinkFeaturesEnabled() { return RuntimeEnabledFeatures::stableBlinkFeaturesEnabled(); }
    bool stackedCSSPropertyAnimationsEnabled() { return RuntimeEnabledFeatures::stackedCSSPropertyAnimationsEnabled(); }
    bool styleSharingEnabled() { return RuntimeEnabledFeatures::styleSharingEnabled(); }
    bool styleMatchedPropertiesCacheEnabled() { return RuntimeEnabledFeatures::styleMatchedPropertiesCacheEnabled(); }
    bool experimentalStreamEnabled() { return RuntimeEnabledFeatures::experimentalStreamEnabled(); }
    bool speculativeLaunchServiceWorkerEnabled() { return RuntimeEnabledFeatures::speculativeLaunchServiceWorkerEnabled(); }
    bool storageEstimateEnabled() { return RuntimeEnabledFeatures::storageEstimateEnabled(); }
    bool suboriginsEnabled() { return RuntimeEnabledFeatures::suboriginsEnabled(); }
    bool timerThrottlingForBackgroundTabsEnabled() { return RuntimeEnabledFeatures::timerThrottlingForBackgroundTabsEnabled(); }
    bool touchEnabled() { return RuntimeEnabledFeatures::touchEnabled(); }
    bool traceWrappablesEnabled() { return RuntimeEnabledFeatures::traceWrappablesEnabled(); }
    bool trustedEventsDefaultActionEnabled() { return RuntimeEnabledFeatures::trustedEventsDefaultActionEnabled(); }
    bool unsafeES3APIsEnabled() { return RuntimeEnabledFeatures::unsafeES3APIsEnabled(); }
    bool unsandboxedAuxiliaryEnabled() { return RuntimeEnabledFeatures::unsandboxedAuxiliaryEnabled(); }
    bool userSelectAllEnabled() { return RuntimeEnabledFeatures::userSelectAllEnabled(); }
    bool webAnimationsAPIEnabled() { return RuntimeEnabledFeatures::webAnimationsAPIEnabled(); }
    bool webAnimationsSVGEnabled() { return RuntimeEnabledFeatures::webAnimationsSVGEnabled(); }
    bool webBluetoothEnabled() { return RuntimeEnabledFeatures::webBluetoothEnabled(); }
    bool webGLDraftExtensionsEnabled() { return RuntimeEnabledFeatures::webGLDraftExtensionsEnabled(); }
    bool webGLImageChromiumEnabled() { return RuntimeEnabledFeatures::webGLImageChromiumEnabled(); }
    bool webUSBEnabled() { return RuntimeEnabledFeatures::webUSBEnabled(); }
    bool webVREnabled() { return RuntimeEnabledFeatures::webVREnabled(); }
    bool webVTTRegionsEnabled() { return RuntimeEnabledFeatures::webVTTRegionsEnabled(); }
    bool v8IdleTasksEnabled() { return RuntimeEnabledFeatures::v8IdleTasksEnabled(); }
    bool visibilityChangeOnUnloadEnabled() { return RuntimeEnabledFeatures::visibilityChangeOnUnloadEnabled(); }
    bool xsltEnabled() { return RuntimeEnabledFeatures::xsltEnabled(); }
    bool smilEnabled() { return RuntimeEnabledFeatures::smilEnabled(); }
    bool scrollCustomizationEnabled() { return RuntimeEnabledFeatures::scrollCustomizationEnabled(); }
    bool scrollRestorationEnabled() { return RuntimeEnabledFeatures::scrollRestorationEnabled(); }
    bool autoplayMutedVideosEnabled() { return RuntimeEnabledFeatures::autoplayMutedVideosEnabled(); }
    bool visualViewportAPIEnabled() { return RuntimeEnabledFeatures::visualViewportAPIEnabled(); }
    bool wakeLockEnabled() { return RuntimeEnabledFeatures::wakeLockEnabled(); }
    bool webFontsInterventionV2With2GEnabled() { return RuntimeEnabledFeatures::webFontsInterventionV2With2GEnabled(); }
    bool webFontsInterventionV2WithSlow2GEnabled() { return RuntimeEnabledFeatures::webFontsInterventionV2WithSlow2GEnabled(); }
    bool webFontsInterventionTriggerEnabled() { return RuntimeEnabledFeatures::webFontsInterventionTriggerEnabled(); }
    bool webShareEnabled() { return RuntimeEnabledFeatures::webShareEnabled(); }
    bool workletEnabled() { return RuntimeEnabledFeatures::workletEnabled(); }
    bool weakMemoryCacheEnabled() { return RuntimeEnabledFeatures::weakMemoryCacheEnabled(); }
    bool doNotUnlockSharedBufferEnabled() { return RuntimeEnabledFeatures::doNotUnlockSharedBufferEnabled(); }
    bool parseHTMLOnMainThreadEnabled() { return RuntimeEnabledFeatures::parseHTMLOnMainThreadEnabled(); }
    bool sendBeaconThrowForBlobWithNonSimpleTypeEnabled() { return RuntimeEnabledFeatures::sendBeaconThrowForBlobWithNonSimpleTypeEnabled(); }

    DEFINE_INLINE_TRACE() { }

private:
    InternalRuntimeFlags() { }
};

} // namespace blink

#endif // InternalRuntimeFlags_h
