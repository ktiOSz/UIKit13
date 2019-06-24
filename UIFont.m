#import "UIFont.h"

@implementation UIFont (List)

+ (NSDictionary *)availableFontsByFamily
{
    NSMutableDictionary *dict = [NSMutableDictionary new];
    
    for (NSString *familyName in [UIFont familyNames]) {
        [dict setObject:[UIFont fontNamesForFamilyName:familyName] forKey:familyName];
    }
    
    return [dict copy];
}