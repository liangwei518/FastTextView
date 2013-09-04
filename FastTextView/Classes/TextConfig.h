//
//  TextConfig.h
//  tangyuanReader
//
//  Created by 王 强 on 13-6-8.
//  Copyright (c) 2013年 中文在线. All rights reserved.
//

#import <Foundation/Foundation.h>
@class AttributeConfig;

@interface TextConfig : NSObject
+(AttributeConfig *)editorAttributeConfig;
@end

@interface AttributeConfig : NSObject{
    UIFont  *_font;
    NSDictionary *_attributes;
}

@property(nonatomic,strong) UIFont *font;
@property(nonatomic,strong) NSDictionary *attributes; 
+(NSDictionary *)defaultAttributes;


@end
