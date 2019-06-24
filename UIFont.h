#import <UIKit/UIKit.h>

@interface UIFont (List)

/**
 Creates a dictionary with all the available font names sorted by family names.
 
 @return A dictionary with all the available font names sorted by family names.
 */
+ (NSDictionary *)availableFontsByFamily;