

#import <Foundation/Foundation.h>

typedef void(^SliderGes)(CGFloat progress);

@protocol HRBrightnessSlider

@required
@property (nonatomic, readonly) NSNumber *brightness;
@property (nonatomic) UIColor *color;

@optional
@property (nonatomic) NSNumber *brightnessLowerLimit;

@end

@interface HRBrightnessSlider : UIControl <HRBrightnessSlider>

@property (nonatomic, copy) SliderGes slideGes;

/**更新新进度进度*/
- (void)updateCursorToProgress:(CGFloat)progress;
/**更新光标*/
- (void)updateCursor:(CGFloat)progress;

@end
