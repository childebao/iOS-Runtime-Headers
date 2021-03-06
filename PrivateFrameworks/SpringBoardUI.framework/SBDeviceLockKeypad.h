/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class UIButton;

@interface SBDeviceLockKeypad : TPPhonePad {
    UIButton *_cancelButton;
    UIButton *_deleteButton;
    BOOL _deleteEnabled;
    BOOL _playKeyboardClicks;
}

@property(readonly) BOOL cancelKeyChar;
@property(getter=isDeleteEnabled) BOOL deleteEnabled;
@property(readonly) BOOL deleteKeyChar;
@property(readonly) BOOL emergencyKeyChar;
@property BOOL playsKeyboardClicks;
@property BOOL showsEmergencyCallButton;

+ (struct CGSize { float x1; float x2; })defaultSize;
+ (id)keypadImage;
+ (id)pressedImage;

- (id)_keypadImage;
- (id)_pressedImage;
- (BOOL)cancelKeyChar;
- (void)dealloc;
- (BOOL)deleteKeyChar;
- (BOOL)emergencyKeyChar;
- (void)hiddenFromView;
- (id)initWithDefaultSizeForStyle:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDeleteEnabled;
- (BOOL)playsKeyboardClicks;
- (void)setDeleteEnabled:(BOOL)arg1;
- (void)setPlaysKeyboardClicks:(BOOL)arg1;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (BOOL)showsEmergencyCallButton;
- (void)willBecomeVisible;

@end
