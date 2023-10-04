
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTfliteReactNativeSpec.h"

@interface TfliteReactNative : NSObject <NativeTfliteReactNativeSpec>
#else
#import <React/RCTBridgeModule.h>

@interface TfliteReactNative : NSObject <RCTBridgeModule>
#endif

@end
