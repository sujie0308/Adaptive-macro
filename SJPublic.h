//
//  SJPublic.h
//  yourmessage
//
//  Created by jinzhongliu on 15/6/3.
//  Copyright (c) 2015年 sujie. All rights reserved.
//

#ifndef yourmessage_SJPublic_h
#define yourmessage_SJPublic_h

#define ShareApplicationDelegate [[UIApplication sharedApplication] delegate];

#define ZOOM (SCREEN_WIDTH/320.0)
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height
#define TABLE_SETTIONHEAD_HEIGHT (20.0/320.0 * SCREEN_WIDTH >= 22.0 ? 22.0 : 20.0/320.0 * SCREEN_WIDTH)

//自适应大小
#define SCREEN_ADAPTATION(x) ((x) * SCREEN_WIDTH/320.0)
//自适应大小
#define SCREEN_ADAPTATION_POWER(x, power) ((x)*power * SCREEN_WIDTH/320.0)

//分页算法

#define PAGE_MIN(totalRecord, pageSize) ((totalRecord + pageSize -1) / pageSize)

//查看代码运行时间
#define TICK   NSDate *startTime = [NSDate date]
#define TOCK   NSLog(@"Time: %f", -[startTime timeIntervalSinceNow])

#define MAINTITLE_FONTSIZE 14
#define SUBTITLE_FONTSIZE 11
#define MINTITLE_FONTSIZE 10
/**
 *	@brief	设置字体大小
 *
 *	@param 	CGFloat     字体大小
 *
 *	@return	UIFont
 */
//#define FONT(CGFloat) [UIFont systemFontOfSize:CGFloat]


/**
 *	@brief	将色值转化为UIColor
 *
 *	@param 	rgbValue 	色值
 *
 *	@return	UIColor#define FONT(a) [UIFont systemFontOfSize:a]
 */
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
/**
 *	@brief	iOS版本
 */
#define SYSTEM_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]

/**
 *	@brief	判断当前机型是否是IOS7
 */
#define IOS7 (SYSTEM_VERSION >= 7.0)


/**
 *	@brief	判断当前机型是否是IOS6
 */
#define IOS6 (SYSTEM_VERSION >= 6.0)


#endif
