/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface TIAssetsForInputModeLevel : NSObject {
    NSMutableDictionary * _assetsByType;
    NSString * _inputModeLevel;
    long long  _numberOfAssertions;
}

@property (nonatomic, readonly) NSString *inputModeLevel;

- (void)addAssertion;
- (void)addAsset:(id)arg1;
- (id)assetContentItemsForInputModeLevels:(id)arg1 contentType:(id)arg2;
- (id)assetForType:(id)arg1;
- (id)assetVersionsForType:(id)arg1;
- (void)dealloc;
- (void)gatherStatistics:(id)arg1;
- (bool)hasAssertions;
- (id)initWithInputModeLevel:(id)arg1;
- (id)inputModeLevel;
- (bool)isEmpty;
- (bool)purgeAsset:(id)arg1;
- (id)purgeableAssets;
- (id)recursiveDescription;
- (void)removeAssertion;
- (void)removeEmptyAssets;

@end
