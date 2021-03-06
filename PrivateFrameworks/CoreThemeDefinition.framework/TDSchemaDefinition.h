/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSManagedObject.h"

@class NSSet, NSString, TDSchemaCategory;

@interface TDSchemaDefinition : NSManagedObject
{
}

+ (const CDStruct_9508427b *)elementDefinitionWithName:(id)arg1 withSchema:(id)arg2;
+ (const CDStruct_9508427b *)sortedElementDefinitionAtIndex:(unsigned int)arg1 withSchema:(id)arg2;
+ (unsigned int)elementDefinitionCountWithSchema:(id)arg1;
- (id)displayName;
- (id)previewImage;

// Remaining properties
@property(retain, nonatomic) TDSchemaCategory *category; // @dynamic category;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *parts; // @dynamic parts;
@property BOOL published; // @dynamic published;

@end

