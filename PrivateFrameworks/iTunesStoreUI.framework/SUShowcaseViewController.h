/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SKUIShowcaseViewController, SKUIResourceLoader, NSArray;

@interface SUShowcaseViewController : SUViewController <SKUIShowcaseDelegate> {
    SKUIResourceLoader *_artworkLoader;
    NSArray *_showcaseItems;
    SKUIShowcaseViewController *_underlyingViewController;
}


- (id)_artworkLoader;
- (id)initWithShowcaseDictionary:(id)arg1;
- (void)showcase:(id)arg1 didSelectItem:(id)arg2 atIndex:(int)arg3;
- (void)dealloc;
- (void)loadView;

@end