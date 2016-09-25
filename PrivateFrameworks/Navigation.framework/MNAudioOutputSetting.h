/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNAudioOutputSetting : NSObject <NSSecureCoding> {
    BOOL  _hfpPreference;
    NSSet * _pickableRoutes;
    BOOL  _selected;
    BOOL  _selectedForSystem;
}

@property (nonatomic, readonly) BOOL hfpPreference;
@property (nonatomic) BOOL selectedForSystem;

+ (BOOL)isBluetoothRoute:(id)arg1;
+ (id)macAddressForRoute:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)_isHFPRoute:(id)arg1;
- (BOOL)_isPicked:(id)arg1;
- (BOOL)_pickRoute:(id)arg1;
- (BOOL)allowHFPPreferenceSelectionForRouteSelection:(unsigned int)arg1;
- (BOOL)containsPickableRoute:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hfpPreference;
- (id)initWithCoder:(id)arg1;
- (id)initWithPickableRoute:(id)arg1;
- (id)initWithPickableRoutes:(id)arg1;
- (BOOL)isEqualToSetting:(id)arg1;
- (BOOL)isPicked;
- (id)macAddress;
- (id)pickableRouteForHFPPreference:(BOOL)arg1;
- (BOOL)pickedStateConsistentWithHFPPreference;
- (id)routeUID;
- (BOOL)selectedForRouteSelection:(unsigned int)arg1;
- (BOOL)selectedForSystem;
- (void)setHfpPreference:(BOOL)arg1;
- (void)setPicked:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 shouldSetHFPPreference:(BOOL)arg2;
- (void)setSelectedForSystem:(BOOL)arg1;
- (BOOL)settingForBluetoothComboDevice;
- (BOOL)settingForBluetoothDevice;
- (BOOL)settingForDefaultRoute;
- (BOOL)settingSupportsBluetoothHFP;

@end