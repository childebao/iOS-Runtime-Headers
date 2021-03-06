/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion, NSMutableArray;

@interface GEOPlaceSearchResponse : PBCodable {
    struct { 
        unsigned int localSearchProviderID : 1; 
        unsigned int statusCodeInfo : 1; 
        unsigned int abTestResponse : 1; 
    BOOL _abTestResponse;
    } _has;
    int _localSearchProviderID;
    GEOMapRegion *_mapRegion;
    NSMutableArray *_placeResults;
    NSMutableArray *_searchs;
    int _status;
    int _statusCodeInfo;
}

@property BOOL abTestResponse;
@property BOOL hasAbTestResponse;
@property BOOL hasLocalSearchProviderID;
@property(readonly) BOOL hasMapRegion;
@property BOOL hasStatusCodeInfo;
@property int localSearchProviderID;
@property(retain) GEOMapRegion * mapRegion;
@property(retain) NSMutableArray * placeResults;
@property(retain) NSMutableArray * searchs;
@property int status;
@property int statusCodeInfo;

- (BOOL)abTestResponse;
- (void)addPlaceResult:(id)arg1;
- (void)addSearch:(id)arg1;
- (void)clearPlaceResults;
- (void)clearSearchs;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAbTestResponse;
- (BOOL)hasLocalSearchProviderID;
- (BOOL)hasMapRegion;
- (BOOL)hasStatusCodeInfo;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)localSearchProviderID;
- (id)mapRegion;
- (id)placeResultAtIndex:(unsigned int)arg1;
- (id)placeResults;
- (unsigned int)placeResultsCount;
- (BOOL)readFrom:(id)arg1;
- (id)searchAtIndex:(unsigned int)arg1;
- (id)searchs;
- (unsigned int)searchsCount;
- (void)setAbTestResponse:(BOOL)arg1;
- (void)setHasAbTestResponse:(BOOL)arg1;
- (void)setHasLocalSearchProviderID:(BOOL)arg1;
- (void)setHasStatusCodeInfo:(BOOL)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setPlaceResults:(id)arg1;
- (void)setSearchs:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setStatusCodeInfo:(int)arg1;
- (int)status;
- (int)statusCodeInfo;
- (void)writeTo:(id)arg1;

@end
