//
//  TTSpecialValueUtil.h
//  TTLockDemo
//
//  Created by TTLock on 17/4/20.
//  Copyright © 2017年 TTLock. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_CLASS_DEPRECATED_IOS(2_0, 6_0)//"Use -[TTLockFeatureValueUtil lockFeatureValue:suportFunction]"

@interface TTSpecialValueUtil : NSObject
/**
 Whether to support the password

 @param specialValue  characteristic value
 @return YES is supported, NO is unsupported
 */
+(BOOL)isSupportPwd:(long long)specialValue;
/**
 Whether the IC card is supported
 */
+(BOOL)isSupportIC:(long long)specialValue;
/**
 Whether the fingerPrints is supported
 */
+ (BOOL)isSupportFingerPrint:(long long)specialValue;
/**
 Whether the wristbands is supported
 */
+ (BOOL)isSupportWristband:(long long)specialValue;
/**
 Whether automatic locking is supported
 是否支持自动闭锁
 */
+ (BOOL)isSupportAutoLock:(long long)specialValue;
/**
 Whether or not to support a delete function password
 是否支持密码带删除功能
 */
+ (BOOL)isSupportPasswordDeleteFunction:(long long)specialValue;
/**
 Whether to support firmware upgrades
 是否支持固件升级
 */
+ (BOOL)isSupportUpgradeFirmware:(long long)specialValue;
/**
 Whether the password management function is supported
 是否支持密码管理功能
 */
+ (BOOL)isSupportPasswordManagement:(long long)specialValue;
/**
 Whether or not to support locking instructions
 是否支持闭锁指令
 */
+ (BOOL)isSupportLocking:(long long)specialValue;
/**
 Whether to support password display or hidden control
 是否支持密码显示或者隐藏的控制
 */
+ (BOOL)isSupportPasswordDisplayOrHideControl:(long long)specialValue;
/**
 Whether to support gateway unlocking instructions
 是否支持网关开锁指令
 */
+ (BOOL)isSupportGatewayUnlock:(long long)specialValue;
/**
 Whether to support freezing
 是否支持锁冻结
 */
+ (BOOL)isSupportLockFreeze:(long long)specialValue;
/**
 Whether the Cycle password is supported
 是否支持循环密码
 */
+ (BOOL)isSupportCyclePassword:(long long)specialValue;
/**
 Whether to support the door sensor
 是否支持门磁
 */
+ (BOOL)isSupportDoorSensor:(long long)specialValue;
/**
 Whether to support remote unlock switch control
 是否支持远程开锁开关控制
 */
+ (BOOL)isSupportRemoteUnlockSwicth:(long long)specialValue;
/**
 Whether to enable or disable voice management
 是否支持启用或者禁用语音提示管理
 */
+ (BOOL)isSupportAudioSwitch:(long long)specialValue;
/**
 Whether to support NB
 是否支持NB
 */
+ (BOOL)isSupportNB:(long long)specialValue;
/**
 Whether to support Admin Passcode
 是否支持获取管理员开门密码
 */
+ (BOOL)isSupportGetAdminPasscode:(long long)specialValue;
/**
Whether to support Hotel Card
是否支持酒店卡
*/
+ (BOOL)isSupportHotelCard:(long long)specialValue;
/**
 Whether to support Passage Mode
 是否支持常开模式
 */
+ (BOOL)isSupportPassageMode:(long long)specialValue;
/**
 Whether to support Turn Off Auto Lock
 是否支持关闭自动闭锁
 */
+ (BOOL)isSupportTurnOffAutoLock:(long long)specialValue;
/**
 Whether to support Wireless Keyboard
 是否支持无线键盘
 */
+ (BOOL)isSupportWirelessKeyboard:(long long)specialValue;
/**
 Whether to support Light
 是否支持照明灯时间配置
 */
+ (BOOL)isSupportLight:(long long)specialValue;
/**
 Whether to support hotel card blacklist
 是否支持酒店卡黑名单
 */
+ (BOOL)isSupportHotelCardBlacklist:(long long)specialValue;
/**
 Whether to support identity card
 是否支持身份证
 */
+ (BOOL)isSupportIdentityCard:(long long)specialValue;
/**
 Whether to support TamperAlert Swicth
 是否支持防撬开关配置
 */
+ (BOOL)isSupportTamperAlertConfig:(long long)specialValue;
/**
 Whether to support reset key Switch
 是否支持重置键开关配置
 */
+ (BOOL)isSupportResetButtonConfig:(long long)specialValue;
/**
 Whether to support reset key Switch
 是否支持反锁开关配置
 */
+ (BOOL)isSupportPrivacyLockConfig:(long long)specialValue;
/**
 Whether to support deadLock
 是否支持DeadLock闭锁
 */
+ (BOOL)isSupportDeadLock:(long long)specialValue;
@end
