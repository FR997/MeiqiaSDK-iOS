//
//  MQTextMessage.h
//  MQChatViewControllerDemo
//
//  Created by ijinmao on 15/10/30.
//  Copyright © 2015年 ijinmao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MQBaseMessage.h"

@interface MQTextMessage : MQBaseMessage

/** 消息content */
@property (nonatomic, copy) NSString *content;
/** 消息是否包含敏感词汇 */
@property (nonatomic, assign) BOOL isSensitive;
@property (nonatomic, assign) BOOL isHTML;

/**
 * 用文字初始化message
 */
- (instancetype)initWithContent:(NSString *)content;

@end
