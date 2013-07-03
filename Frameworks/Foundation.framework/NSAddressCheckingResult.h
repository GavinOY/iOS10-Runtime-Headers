/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSDictionary;

@interface NSAddressCheckingResult : NSTextCheckingResult  {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    NSDictionary *_components;
    id _underlyingResult;
}

@property(readonly) void* underlyingResult;


- (unsigned long long)resultType;
- (void)dealloc;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 components:(id)arg2 underlyingResult:(void*)arg3;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 components:(id)arg2;
- (void*)underlyingResult;
- (BOOL)_adjustRangesWithOffset:(int)arg1;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)components;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end