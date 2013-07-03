/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVDestinationBrowser : NSObject  {
    BOOL _scansForDestinationsWhenEnteringForeground;
    BOOL _isScanning;
}

@property BOOL scansForDestinationsWhenEnteringForeground;


- (BOOL)scansForDestinationsWhenEnteringForeground;
- (void)beginScanningForDestinations;
- (void)endScanningForDestinations;
- (void)setScansForDestinationsWhenEnteringForeground:(BOOL)arg1;
- (void)_endScanningForDestinationsNotification:(id)arg1;
- (void)_beginScanningForDestinationsNotification:(id)arg1;
- (id)init;
- (void)dealloc;

@end