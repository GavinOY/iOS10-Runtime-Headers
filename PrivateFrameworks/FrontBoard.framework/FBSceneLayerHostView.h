/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneLayerHostView : UIView {
    FBSceneLayer * _sceneLayer;
}

@property (nonatomic, readonly, retain) FBSceneLayer *sceneLayer;

- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithSceneLayer:(id)arg1;
- (id)sceneLayer;

@end