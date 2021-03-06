/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@class NSDate;

@interface APSIncomingMessage : APSMessage {
}

@property(getter=wasFromStorage) BOOL fromStorage;
@property(getter=wasLastMessageFromStorage) BOOL lastMessageFromStorage;
@property(copy) NSDate * timestamp;

- (void)setFromStorage:(BOOL)arg1;
- (void)setLastMessageFromStorage:(BOOL)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (BOOL)wasFromStorage;
- (BOOL)wasLastMessageFromStorage;

@end
