//
//  PlaySoundUtil.h
//  WQSound
//
//  Created by Eric on 12-7-20.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//
//此util只适合播放DISPOSE_INTERVAL以内的音效，不适合播放背景音乐
#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>



#define DISPOSE_INTERVAL 3

@interface PlaySoundUtil : NSObject
//单利
+(PlaySoundUtil*)sharePlaySoundUtil;


/**
 *	@brief	为播放震动效果初始化
 *
 *	@return	self
 */
-(void)playingVibrate;

/**
 *	@brief	为播放系统音效初始化(无需提供音频文件)
 *
 *	@param resourceName 系统音效名称
 *	@param type 系统音效类型
 *
 *	@return	self
 */
-(void)playingSystemSoundEffectWith:(NSString *)resourceName ofType:(NSString *)type;

/**
 *	@brief	为播放特定的音频文件初始化（需提供音频文件）
 *
 *	@param filename 音频文件名（加在工程中）
 *
 *	@return	self
 */
-(void)playingSoundEffectWith:(NSString *)filename;

-(unsigned long)playingBgSoundEffectWith:(NSString *)filename;

@end
