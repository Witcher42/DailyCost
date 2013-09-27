//
//  MainViewController.h
//  DailyCost
//
//  Created by Scliang on 13-9-25.
//  Copyright (c) 2013年 ChuanliangShang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SqliteHelper.h"

@interface MainViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>


// SqliteHelper
@property(nonatomic, strong, readonly) SqliteHelper *sqliteHelper;



// Cost List Data
@property(nonatomic, strong, readonly) NSMutableArray *costs;



// 标题
@property(nonatomic, strong) IBOutlet UILabel *titleLabel;


// 收入支出
@property(nonatomic, strong) IBOutlet UILabel *incomeLabel;
@property(nonatomic, strong) IBOutlet UILabel *expenseLabel;
@property(nonatomic, strong) IBOutlet UILabel *incomeSum;
@property(nonatomic, strong) IBOutlet UILabel *expenseSum;


// Cost List
@property(nonatomic, strong) IBOutlet UITableView *costTableView;
@property(nonatomic, strong) IBOutlet UIView *costTableHeaderView;
@property(nonatomic, strong, readonly) UIImage *costItemBackgroundImage;






// 从数据库中获得所有本月的Cost
- (void)updateCurrentMonthAllCosts;




// 创建新Cost的按钮点击
- (IBAction)newCostClick:(id)sender;


@end
