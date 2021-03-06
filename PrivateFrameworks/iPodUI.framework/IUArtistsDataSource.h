/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUMediaQueriesDataSource.h>

@interface IUArtistsDataSource : IUMediaQueriesDataSource
{
    BOOL _groupByAlbumArtist;
}

+ (id)queryCollectionPropertiesToFetch;
+ (int)mediaEntityType;
+ (id)tabBarItemTitleKey;
+ (id)tabBarItemIconName;
+ (struct UIEdgeInsets)tabBarItemIconImageInsets;
- (void)_updateGroupingPropertyForQueries:(id)arg1;
- (void)setQueries:(id)arg1;
- (unsigned int)requiredEntityCountForSections;
- (Class)cellConfigurationClassForEntity:(id)arg1;
- (void)appDefaultsChanged;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (void)reloadActionRows;
- (BOOL)deleteRemovesEntireGroup;
- (BOOL)allowsDeletion;
- (id)viewControllerContextForMediaQuery:(id)arg1;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (id)init;

@end

