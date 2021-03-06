/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class <PCConnectionManagerDelegate>, <PCGrowthAlgorithm>, NSRunLoop, NSString, PCDarwinNotificationRunLoopSource, PCPersistentTimer;

@interface PCConnectionManager : NSObject <PCLoggingDelegate> {
    int _connectionClass;
    double _defaultPollingInterval;
    PCPersistentTimer *_delayTimer;
    <PCConnectionManagerDelegate> *_delegate;
    BOOL _fallBackToAlternateInterface;
    BOOL _forceManualWhenRoaming;
    BOOL _hasStarted;
    BOOL _inCallback;
    PCPersistentTimer *_intervalTimer;
    BOOL _isInReconnectMode;
    BOOL _isReachable;
    BOOL _isRunning;
    double _keepAliveGracePeriod;
    double _lastReachableTime;
    double _lastReconnectTime;
    double _lastResumeTime;
    double _lastStopTime;
    double _onTimeKeepAliveTime;
    int _onlyAllowedStyle;
    BOOL _onlyAllowedStyleSet;
    double _pollingIntervalOverride;
    BOOL _pollingIntervalOverrideSet;
    unsigned int _powerAssertionID;
    PCDarwinNotificationRunLoopSource *_prefsChangedSource;
    int _prefsStyle;
    int _pushIsConnectedToken;
    unsigned int _reconnectIteration;
    PCPersistentTimer *_reconnectWakeTimer;
    BOOL _reconnectWithKeepAliveDelay;
    NSRunLoop *_runLoop;
    NSString *_serviceIdentifier;
    <PCGrowthAlgorithm> *_wifiGrowthAlgorithm;
    <PCGrowthAlgorithm> *_wwanGrowthAlgorithm;
}

@property(readonly) double currentKeepAliveInterval;
@property BOOL fallBackToAlternateInterface;
@property double keepAliveGracePeriod;
@property(readonly) NSString * loggingIdentifier;
@property double maximumKeepAliveInterval;
@property double minimumKeepAliveInterval;
@property(readonly) double pollingInterval;

+ (BOOL)_isCachedKeepAliveIntervalStillValid:(double)arg1 date:(id)arg2;
+ (id)_keepAliveCachePath;
+ (Class)growthAlgorithmClass;
+ (id)intervalCacheDictionaries;

- (void)_adjustInterfaceAssertions;
- (void)_calloutWithEvent:(int)arg1;
- (void)_clearTimers;
- (void)_clearTimersReleasingPowerAssertion:(BOOL)arg1;
- (id)_currentGrowthAlgorithm;
- (void)_delayTimerFired;
- (double)_getCachedWWANKeepAliveInterval;
- (void)_intervalTimerFired;
- (BOOL)_isPushConnected;
- (void)_loadPreferencesGeneratingEvent:(BOOL)arg1;
- (void)_preferencesChanged;
- (void)_releasePowerAssertion;
- (void)_resolveStateWithAction:(int)arg1;
- (void)_saveWWANKeepAliveInterval:(double)arg1;
- (void)_setupKeepAliveForReconnect;
- (void)_setupTimerForPoll;
- (void)_setupTimerForPushWithKeepAliveInterval:(double)arg1;
- (id)_stringForAction:(int)arg1;
- (id)_stringForEvent:(int)arg1;
- (id)_stringForStyle:(int)arg1;
- (void)_takePowerAssertionWithTimeout:(double)arg1;
- (void)_validateActionForCurrentStyle:(int)arg1;
- (void)cancelPollingIntervalOverride;
- (double)currentKeepAliveInterval;
- (int)currentStyle;
- (void)dealloc;
- (BOOL)fallBackToAlternateInterface;
- (id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 serviceIdentifier:(id)arg3;
- (void)interfaceManagerInHomeCountryStatusChanged:(id)arg1;
- (void)interfaceManagerInternetReachabilityChanged:(id)arg1;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1;
- (double)keepAliveGracePeriod;
- (void)log:(id)arg1;
- (void)logAtLevel:(int)arg1 format:(id)arg2 arguments:(void*)arg3;
- (void)logAtLevel:(int)arg1 format:(id)arg2;
- (id)loggingIdentifier;
- (double)maximumKeepAliveInterval;
- (double)minimumKeepAliveInterval;
- (double)pollingInterval;
- (void)resumeManagerWithAction:(int)arg1;
- (void)setFallBackToAlternateInterface:(BOOL)arg1;
- (void)setKeepAliveGracePeriod:(double)arg1;
- (void)setMaximumKeepAliveInterval:(double)arg1;
- (void)setMinimumKeepAliveInterval:(double)arg1;
- (void)setOnlyAllowedStyle:(int)arg1;
- (void)setPollingIntervalOverride:(double)arg1;
- (BOOL)shouldClientScheduleReconnectDueToFailure;
- (void)startManager;
- (void)stopManager;

@end
