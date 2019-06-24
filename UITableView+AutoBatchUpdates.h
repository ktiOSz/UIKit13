#import <UIKit/UIKit.h>

@interface UITableView (AutoBatchUpdates)

/**
 Updates the given section with the given changes.
 
 @param changes The array of M13ObjectIndexChanges denoting the moves, insertions, and deletions that need to occur.
 @param section The section the changes need to occur in.
 */
- (void)applyChanges:(NSArray *)changes toSection:(NSUInteger)section;