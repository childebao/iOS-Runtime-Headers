/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class RenderedHandViewFactory;

@interface VectorHandView : UIView <HandView> {
    RenderedHandViewFactory *_factory;
    float _handAngle;
}

@property float handAngle;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)handAngle;
- (id)initWithPDFFile:(id)arg1 offset:(struct CGPoint { float x1; float x2; })arg2 scale:(struct CGSize { float x1; float x2; })arg3 bundle:(id)arg4 allowCaching:(BOOL)arg5;
- (void)setHandAngle:(float)arg1;

@end
