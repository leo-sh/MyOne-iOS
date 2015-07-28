//
//  RightPullToRefreshView.h
//  MyOne
//
//  Created by HelloWorld on 7/28/15.
//  Copyright (c) 2015 melody. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol RightPullToRefreshViewDelegate;
@protocol RightPullToRefreshViewDataSource;

@interface RightPullToRefreshView : UIView

@property (nonatomic, assign) id <RightPullToRefreshViewDelegate> delegate;
@property (nonatomic, assign) id <RightPullToRefreshViewDataSource> dataSource;

/**
 *  插入一个新的 item
 *
 *  @param index     新的 item 的下标
 *  @param animated 是否需要动画
 */
- (void)insertItemAtIndex:(NSInteger)index animated:(BOOL)animated;

/**
 *  结束刷新
 */
- (void)endRefreshing;

@end

@protocol RightPullToRefreshViewDataSource <NSObject>

@required
/**
 *  一共有多少个 item
 *
 *  @param rightPullToRefreshView rightPullToRefreshView
 *
 *  @return item 的个数
 */
- (NSInteger)numberOfItemsInRightPullToRefreshView:(RightPullToRefreshView *)rightPullToRefreshView;

/**
 *  当前要显示的 item 的 view
 *
 *  @param rightPullToRefreshView rightPullToRefreshView
 *  @param index                  当前要显示的 item 的下标
 *  @param view                   重用的 view
 *
 *  @return item 的 view
 */
- (UIView *)rightPullToRefreshView:(RightPullToRefreshView *)rightPullToRefreshView viewForItemAtIndex:(NSInteger)index reusingView:(UIView *)view;

@end

@protocol RightPullToRefreshViewDelegate <NSObject>

@optional

/**
 *  右拉刷新时回调的方法
 *
 *  @param rightPullToRefreshView rightPullToRefreshView
 */
- (void)rightPullToRefreshViewRefreshing:(RightPullToRefreshView *)rightPullToRefreshView;

/**
 *  当当前显示的是最后一个 item 时回调，用于添加新的 item
 *
 *  @param rightPullToRefreshView rightPullToRefreshView
 */
- (void)rightPullToRefreshViewDidScrollToLastItem:(RightPullToRefreshView *)rightPullToRefreshView;

@end