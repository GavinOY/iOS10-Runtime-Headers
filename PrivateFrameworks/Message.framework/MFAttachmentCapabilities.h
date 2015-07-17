/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachmentCapabilities : NSObject

+ (BOOL)_isMailDropDevice;
+ (BOOL)_limitMailDropOverCellular;
+ (unsigned int)_mailDropLimit;
+ (unsigned int)currentDownloadLimit;
+ (unsigned int)currentMessageLimit;
+ (unsigned int)currentPlaceholderThreshold;
+ (unsigned int)currentUploadLimit;
+ (unsigned int)currentUploadLimitForAccount:(id)arg1;
+ (BOOL)mailDropAvailable;
+ (BOOL)mailDropAvailableForAccount:(id)arg1;
+ (BOOL)mailDropConfigured;
+ (double)mailDropExpiration;
+ (id)mailDropPreferences;
+ (unsigned int)mailDropThreshold;
+ (id)mailDropWhitelistedDownloadDomains;
+ (BOOL)placeholdersAvailable;

@end