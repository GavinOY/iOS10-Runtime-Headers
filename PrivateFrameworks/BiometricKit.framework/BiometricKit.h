/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BiometricKit : NSObject <BiometricKitDelegateXpcProtocol> {
    bool  _ariadneSignposts;
    struct { 
        int count; 
        int capa; 
        struct { /* ? */ } **items; 
        int unusedImageCount; 
        int componentCount; 
        int componentCapa; 
        int bestComponentIndex; 
        int bestMapiComponentIndex; 
        struct { /* ? */ } **components; 
        short mapiNodeAddedIndex; 
        short mapiNodeRemovedIndex; 
        int updateCount; 
        bool structureIsInconsistent; 
    }  _compSet;
    <BiometricKitDelegate> * _delegate;
    struct { 
        struct { 
            NSData *imageData; 
            unsigned int width; 
            unsigned int height; 
        } nodes[300]; 
    }  _enrollImageSet;
    int  _enrollProgressConfigRenderMode;
    int  _enrollingMode;
    NSDictionary * _images;
    bool  _inUse;
    bool  _isInternalInstall;
    int  _matchingMode;
    bool  _showDebugImages;
    BiometricKitStatistics * _statistics;
    BiometricKitXPCClient * _xpcClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BiometricKitDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) int enrollProgressConfigRenderMode;
@property (readonly) unsigned long long hash;
@property bool inUse;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (long long)getSensorPatchVersion;
+ (id)manager;

- (void)appDidBecomeActive:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)cancel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createMatchInfo:(id)arg1 withTopology:(const struct { short x1; short x2; short x3; struct { short x_4_1_1; short x_4_1_2; short x_4_1_3; } x4; struct { short x_5_1_1; short x_5_1_2; short x_5_1_3; short x_5_1_4; short x_5_1_5; short x_5_1_6; short x_5_1_7; unsigned char x_5_1_8[16]; unsigned char x_5_1_9[16]; short x_5_1_10; struct { struct { short x_1_3_1; short x_1_3_2; short x_1_3_3; } x_11_2_1; short x_11_2_2; short x_11_2_3; } x_5_1_11[300]; short x_5_1_12; short x_5_1_13; short x_5_1_14; short x_5_1_15; short x_5_1_16; short x_5_1_17; } x5; int x6; int x7; }*)arg2 withMatchImage:(struct { id x1; unsigned int x2; }*)arg3;
- (void)dealloc;
- (id)delegate;
- (int)detectFingerWithOptions:(id)arg1;
- (int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(bool*)arg3 withDetails:(id*)arg4;
- (int)dropUnlockToken;
- (int)enableBackgroundFdet:(bool)arg1;
- (int)enroll:(int)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3;
- (int)enroll:(int)arg1 withOptions:(id)arg2;
- (int)enrollProgressConfigRenderMode;
- (void)enrollProgressMessage:(unsigned int)arg1;
- (void)enrollResult:(id)arg1;
- (bool)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2;
- (int)forceBioLockout;
- (int)forceBioLockoutForUser:(unsigned int)arg1;
- (long long)getBioLockoutState;
- (long long)getBioLockoutStateForUser:(unsigned int)arg1;
- (long long)getCalBlobVersion;
- (id)getCalibrationDataInfo;
- (long long)getCalibrationDataState;
- (int)getCountersignedStoreToken:(id*)arg1;
- (long long)getFreeIdentityCount:(int)arg1 forUser:(unsigned int)arg2;
- (id)getIdentitiesDatabaseHash;
- (id)getIdentitiesDatabaseHashForUser:(unsigned int)arg1;
- (id)getIdentitiesDatabaseUUID;
- (id)getIdentitiesDatabaseUUIDForUser:(unsigned int)arg1;
- (id)getIdentityFromUUID:(id)arg1;
- (id)getLogs:(bool)arg1 withDetails:(id*)arg2;
- (id)getMatchPolicyInfo;
- (long long)getMaxIdentityCount:(int)arg1;
- (float)getModulationRatio;
- (id)getProtectedConfiguration;
- (id)getProtectedConfigurationForUser:(unsigned int)arg1;
- (long long)getProvisioningState;
- (long long)getSensorCalibrationStatus;
- (id)getSensorInfo;
- (id)getSystemProtectedConfiguration;
- (id)getTemplateInfo:(id)arg1;
- (void)homeButtonPressed;
- (id)identities:(id)arg1;
- (id)imageDictFromRawImageData:(struct { id x1; unsigned int x2; }*)arg1;
- (bool)inUse;
- (id)init;
- (bool)isDelegate;
- (bool)isFingerOn;
- (bool)isTouchIDAvailableWithInfo:(long long*)arg1;
- (bool)isTouchIDCapable;
- (int)match:(id)arg1;
- (int)match:(id)arg1 withOptions:(id)arg2;
- (void)matchResult:(id)arg1 withDictionary:(id)arg2;
- (id)pullCalibrationData;
- (id)pullCaptureBuffer;
- (id)pullDebugImage:(bool)arg1 rotated:(bool)arg2;
- (void)pullDebugImageData:(bool)arg1 rotated:(bool)arg2 target:(struct { id x1; unsigned int x2; }*)arg3;
- (int)registerDSID:(unsigned long long)arg1 withAuthToken:(id)arg2;
- (int)registerDSID:(unsigned long long)arg1 withOptions:(id)arg2;
- (int)registerStoreToken:(id)arg1;
- (int)removeAllIdentitiesForUser:(unsigned int)arg1 withOptions:(id)arg2;
- (int)removeIdentity:(id)arg1;
- (int)removeIdentity:(id)arg1 withOptions:(id)arg2;
- (int)resetAppleConnectCounter;
- (void)setDebugImages:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnrollProgressConfigRenderMode:(int)arg1;
- (void)setInUse:(bool)arg1;
- (int)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3;
- (int)setProtectedConfiguration:(id)arg1 withAuthToken:(id)arg2;
- (int)setProtectedConfiguration:(id)arg1 withOptions:(id)arg2;
- (int)setSystemProtectedConfiguration:(id)arg1 withOptions:(id)arg2;
- (int)setUserDSID:(unsigned long long)arg1 withAuthToken:(id)arg2;
- (int)setUserDSID:(unsigned long long)arg1 withOptions:(id)arg2;
- (void)statusMessage:(unsigned int)arg1;
- (void)taskResumeStatus:(int)arg1;
- (void)templateUpdate:(id)arg1 withDictionary:(id)arg2;
- (void)timestampEvent:(unsigned long long)arg1;
- (void)touchIDButtonPressed:(bool)arg1;
- (int)updateIdentity:(id)arg1;
- (int)updateIdentity:(id)arg1 withOptions:(id)arg2;

@end