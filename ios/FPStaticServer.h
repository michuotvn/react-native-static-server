#import <React/RCTBridgeModule.h>

// GCDWebServer: https://github.com/swisspol/GCDWebServer
#import "GCDWebServer.h"

@interface FPStaticServer : NSObject <RCTBridgeModule> {
    GCDWebServer* _webServer;
}

    @property(nonatomic, retain) NSString *localPath;
    @property(nonatomic, retain) NSString *url;

    @property (nonatomic, retain) NSString* www_root;
    @property (nonatomic, retain) NSNumber* port;

    @property(nonatomic, retain) NSString *redirectHost;
    @property(nonatomic, retain) NSString *refererHeader;

    @property (assign) BOOL localhost_only;
    @property (assign) BOOL keep_alive;

@end

