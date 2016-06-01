

#import <Cordova/CDVPlugin.h>
#import <CoreTelephony/CTCallCenter.h>


@interface CDVPhoneCallTrap : CDVPlugin {
@protected NSString* _eventsCallbackId;
}

@property (nonatomic, strong) CTCallCenter *callCenter;

- (void)onCall:(CDVInvokedUrlCommand*)command;
- (void)onPause:(CDVInvokedUrlCommand*)command;

@end
