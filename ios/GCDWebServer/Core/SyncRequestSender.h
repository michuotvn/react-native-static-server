#import <Foundation/Foundation.h>

@interface SyncRequestSender : NSObject

+ (NSData *)sendSynchronousRequest:(NSURLRequest *)request
                 returningResponse:(NSURLResponse **)response
                             error:(NSError **)error;

@end
