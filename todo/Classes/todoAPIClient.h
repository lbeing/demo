#import "AFIncrementalStore.h"
#import "AFRestClient.h"

@interface todoAPIClient : AFRESTClient <AFIncrementalStoreHTTPClient>

+ (todoAPIClient *)sharedClient;

@end
