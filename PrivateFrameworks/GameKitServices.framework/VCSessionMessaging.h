/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSMutableDictionary, NSString;

@interface VCSessionMessaging : NSObject {
    int p2pID;
    NSString *remoteVersion;
    NSMutableDictionary *topics;
}

- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 receiveHandler:(id)arg3;
- (id)createPackedMessageFromDictionary:(id)arg1;
- (id)createUnpackedMessageToDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithP2PID:(int)arg1 remoteVersion:(id)arg2;
- (void)sendMessage:(id)arg1 withTopic:(id)arg2;
- (void)stopMessaging;

@end
