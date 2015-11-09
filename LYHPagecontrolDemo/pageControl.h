//
//  pageControl.h
//  LYHPagecontrol
//
//  Created by 厉煜寰 on 15/11/7.
//  Copyright © 2015年 SXT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface pageControl : UIView
@property(nonatomic) NSInteger numberOfPages;          // default is 0
@property(nonatomic) NSInteger currentPage;            // default is 0. value pinned to 0..numberOfPages-1

@property(nonatomic) BOOL hidesForSinglePage;          // hide the the indicator if there is only one page. default is NO

@property(nonatomic) BOOL defersCurrentPageDisplay;    // if set, clicking to a new page won't update the currently displayed page until -updateCurrentPageDisplay is called. default is NO
- (void)updateCurrentPageDisplay;                      // update page display to match the currentPage. ignored if defersCurrentPageDisplay is NO. setting the page value directly will update immediately

- (CGSize)sizeForNumberOfPages:(NSInteger)pageCount;   // returns minimum size required to display dots for given page count. can be used to size control if page count could change

@property(nullable, nonatomic,strong) UIColor *pageIndicatorTintColor;
@property(nullable, nonatomic,strong) UIColor *currentPageIndicatorTintColor;
@end
