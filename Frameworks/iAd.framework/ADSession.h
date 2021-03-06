/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "ADSession_RPC.h"

@class NSMutableArray, NSString;

@interface ADSession : NSObject <ADSession_RPC>
{
    BOOL _applicationCanReceiveBackgroundAds;
    NSString *_serverURL;
    NSMutableArray *_adSpaces;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *adSpaces; // @synthesize adSpaces=_adSpaces;
@property(nonatomic) BOOL applicationCanReceiveBackgroundAds; // @synthesize applicationCanReceiveBackgroundAds=_applicationCanReceiveBackgroundAds;
@property(copy, nonatomic) NSString *serverURL; // @synthesize serverURL=_serverURL;
- (void)_appDidBecomeActive;
- (void)_appWillResignActive;
- (void)_remote_policyEngineTestStationDescriptionsComputed:(id)arg1;
- (void)_remote_heartbeatTokenDidChange:(id)arg1 error:(id)arg2;
- (void)_orientationChanged;
- (void)unregisterAdSpace:(id)arg1;
- (void)registerAdSpace:(id)arg1;
- (void)_adSheetConnectionBootstrapped;
- (id)_linkedOnVersion;
- (id)init;

@end

