/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetPLLConfigLogger.framework/DuetPLLConfigLogger
 */

@interface DuetLogger : NSObject {
    NSString * binaryName;
    bool  canWriteToFile;
    NSMutableArray * duetLoggerSource;
    int  fd;
    NSFileManager * fileMgr;
    NSString * fileName;
    NSString * filePath;
    bool  firstTime;
    NSString * homeDir;
    NSObject<OS_dispatch_queue> * logQueue;
    NSString * logState;
    struct __asl_object_s { } * log_client;
    struct __asl_object_s { } * log_msg;
}

@property (nonatomic, readonly) bool canWriteToFile;

+ (id)instance;
+ (id)instance:(int)arg1;

- (void).cxx_destruct;
- (void)addDataSource:(id)arg1;
- (bool)canWriteToFile;
- (void)createFile;
- (void)dealloc;
- (void)dumpAllLogs;
- (id)getHumanReadableTimeStamp;
- (id)getTimeStamp;
- (id)getUniqueFileName;
- (id)init:(id)arg1 withState:(id)arg2;
- (void)logToFile:(id)arg1;
- (void)logToFileCString:(char *)arg1;
- (void)logToFileCStringSimpleDebug:(char *)arg1;
- (void)setLoggingMode:(bool)arg1;

@end