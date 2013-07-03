/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAFmfGeoFence, NSString, NSNumber, NSURL;

@interface SAFmfGeoFenceSnippet : SAUISnippet  {
}

@property(retain) SAFmfGeoFence * aceFmfGeoFence;
@property(copy) NSNumber * enable;
@property(copy) NSString * fenceType;
@property(copy) NSNumber * oneTimeOnly;
@property(copy) NSURL * searchContext;

+ (id)geoFenceSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geoFenceSnippet;

- (void)setAceFmfGeoFence:(id)arg1;
- (id)aceFmfGeoFence;
- (void)setOneTimeOnly:(id)arg1;
- (id)oneTimeOnly;
- (void)setFenceType:(id)arg1;
- (id)fenceType;
- (void)setEnable:(id)arg1;
- (id)encodedClassName;
- (id)searchContext;
- (void)setSearchContext:(id)arg1;
- (id)enable;
- (id)groupIdentifier;

@end