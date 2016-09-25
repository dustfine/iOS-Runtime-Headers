/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKStaticDecimalPrecisionRule : NSObject <HKDecimalPrecisionRule> {
    int  _decimalPrecision;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int decimalPrecision;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (int)decimalPrecision;
- (int)decimalPrecisionForValue:(double)arg1;
- (id)initWithDecimalPrecision:(int)arg1;
- (int)maximumDecimalPrecision;
- (int)minimumDecimalPrecision;
- (id)numberFormatter;
- (void)setDecimalPrecision:(int)arg1;

@end