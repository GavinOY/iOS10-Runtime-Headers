/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSnappingController : NSObject {
    double  __accumulatedOffset;
    bool  __hasEnteredAttractionThreshold;
    bool  __hasEnteredRetentionThreshold;
    bool  __interacting;
    double  __previousOffset;
    bool  __previousOffsetInvalid;
    _UIFeedbackRetargetBehavior * __retargetBehavior;
    bool  _accumulateOffsetWhileSnapped;
    double  _attractionOffsetThreshold;
    double  _attractionVelocityThreshold;
    <UICoordinateSpace> * _coordinateSpace;
    double  _retentionOffsetThreshold;
    bool  _snappedToTarget;
    double  _snappingTarget;
}

@property (setter=_setAccumulatedOffset:, nonatomic) double _accumulatedOffset;
@property (setter=_setHasEnteredAttractionThreshold:, nonatomic) bool _hasEnteredAttractionThreshold;
@property (setter=_setHasEnteredRetentionThreshold:, nonatomic) bool _hasEnteredRetentionThreshold;
@property (getter=_isInteracting, setter=_setInteracting:, nonatomic) bool _interacting;
@property (setter=_setPreviousOffset:, nonatomic) double _previousOffset;
@property (getter=_isPreviousOffsetInvalid, setter=_setPreviousOffsetInvalid:, nonatomic) bool _previousOffsetInvalid;
@property (setter=_setRetargetBehavior:, nonatomic, retain) _UIFeedbackRetargetBehavior *_retargetBehavior;
@property (nonatomic) bool accumulateOffsetWhileSnapped;
@property (nonatomic) double attractionOffsetThreshold;
@property (nonatomic) double attractionVelocityThreshold;
@property (nonatomic, readonly) <UICoordinateSpace> *coordinateSpace;
@property (nonatomic) double retentionOffsetThreshold;
@property (getter=isSnappedToTarget, nonatomic, readonly) bool snappedToTarget;
@property (nonatomic, readonly) double snappingTarget;

- (void).cxx_destruct;
- (double)_accumulatedOffset;
- (bool)_hasEnteredAttractionThreshold;
- (bool)_hasEnteredRetentionThreshold;
- (bool)_isInteracting;
- (bool)_isOffset:(double)arg1 inThreshold:(double)arg2;
- (bool)_isPreviousOffsetInvalid;
- (double)_previousOffset;
- (void)_reset;
- (id)_retargetBehavior;
- (void)_setAccumulatedOffset:(double)arg1;
- (void)_setBoolPointer:(inout bool*)arg1 toValue:(bool)arg2;
- (void)_setHasEnteredAttractionThreshold:(bool)arg1;
- (void)_setHasEnteredRetentionThreshold:(bool)arg1;
- (void)_setInteracting:(bool)arg1;
- (void)_setPreviousOffset:(double)arg1;
- (void)_setPreviousOffsetInvalid:(bool)arg1;
- (void)_setRetargetBehavior:(id)arg1;
- (bool)accumulateOffsetWhileSnapped;
- (double)attractionOffsetThreshold;
- (double)attractionVelocityThreshold;
- (id)coordinateSpace;
- (id)init;
- (id)initWithSnappingTarget:(double)arg1 coordinateSpace:(id)arg2;
- (void)interactionBegan;
- (void)interactionEnded;
- (bool)isSnappedToTarget;
- (double)retentionOffsetThreshold;
- (void)setAccumulateOffsetWhileSnapped:(bool)arg1;
- (void)setAttractionOffsetThreshold:(double)arg1;
- (void)setAttractionVelocityThreshold:(double)arg1;
- (void)setRetentionOffsetThreshold:(double)arg1;
- (double)snappingTarget;
- (void)updateOffset:(inout double*)arg1 withVelocity:(double)arg2 shouldSnap:(out bool*)arg3 shouldBreak:(out bool*)arg4;

@end
