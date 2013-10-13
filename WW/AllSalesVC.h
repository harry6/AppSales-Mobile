//
//  DashboardViewController.h
//  AppSales
//
//  Created by Ole Zorn on 30.06.11.
//  Copyright 2011 omz:software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GraphView.h"
#import "DashboardViewController.h"
#import "ColorPickerViewController.h"
#import "SalesViewController.h"

@class ASAccount, Report, Product;
@protocol ReportSummary;

@interface AllSalesVC : DashboardViewController <UIActionSheetDelegate, GraphViewDelegate, GraphViewDataSource> {
	
	NSCalendar *calendar;
	
	UIInterfaceOrientation previousOrientation;
	DashboardViewMode viewMode;
	BOOL showNumberOfSales;
	BOOL showFiscalMonths;
	BOOL showWeeks;
	int selectedTab;
	
	GraphView *graphView;
	
	NSMutableArray *sortedDailyReports;
	NSMutableArray *sortedWeeklyReports;
	NSMutableArray *sortedCalendarMonthReports;
	NSMutableArray *sortedFiscalMonthReports;
	
	UIBarButtonItem *downloadReportsButtonItem;
	
	UIPopoverController *selectedReportPopover;
}

@property (nonatomic, retain) NSMutableArray *sortedDailyReports;
@property (nonatomic, retain) NSMutableArray *sortedWeeklyReports;
@property (nonatomic, retain) NSMutableArray *sortedCalendarMonthReports;
@property (nonatomic, retain) NSMutableArray *sortedFiscalMonthReports;
@property (nonatomic, assign) DashboardViewMode viewMode;
@property (nonatomic, retain) GraphView *graphView;
@property (nonatomic, retain) UIBarButtonItem *downloadReportsButtonItem;
@property (nonatomic, retain) UIPopoverController *selectedReportPopover;

@property (nonatomic, retain) NSArray *accounts;
@property (nonatomic, retain) NSMutableArray *wwSortedDailyReportsForAllAccounts;
@property (nonatomic, retain) NSMutableArray *wwSortedWeeklyReportsForAllAccounts;
@property (nonatomic, retain) NSMutableArray *wwSortedCalendarMonthReportsForAllAccounts;
@property (nonatomic, retain) NSMutableArray *wwSortedFiscalMonthReportsForAllAccounts;
@property (nonatomic, retain) NSMutableArray *wwAllProducts;
@property (nonatomic) int wwMaxReportCount;
@property (nonatomic) int wwMaxWeeklyReportCount;
@property (nonatomic) int wwMaxCalendarMonthReportCount;
@property (nonatomic) int wwMaxFiscalMonthReportCount;
@property (nonatomic, retain) NSMutableArray *wwAllLatestDates;
@property (nonatomic, retain) NSMutableArray *wwAllLatestDateOffsets;
@property (nonatomic, retain) NSDate *wwMaxLatestDate;
- (id)initWithAccount:(ASAccount *)anAccount all:(NSArray *)accs;

@end
