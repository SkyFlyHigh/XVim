//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Typedef'd Structures

// Ambiguous groups
typedef struct {
    unsigned int position:1;
    unsigned int timestamp:1;
    unsigned int type:1;
} CDStruct_dd13975a;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
// UUID: DBABF5F1-A5FB-304B-B3EC-A8627A8BC83C
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 1738.19.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@interface MSPBookmarkStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _position;
    double _timestamp;
    NSString *_identifier;
    MSPPlaceBookmark *_placeBookmark;
    MSPRegionBookmark *_regionBookmark;
    MSPRouteBookmark *_routeBookmark;
    int _type;
    CDStruct_dd13975a _has;
}

@property(retain, nonatomic) MSPRegionBookmark *regionBookmark; // @synthesize regionBookmark=_regionBookmark;
@property(retain, nonatomic) MSPRouteBookmark *routeBookmark; // @synthesize routeBookmark=_routeBookmark;
@property(retain, nonatomic) MSPPlaceBookmark *placeBookmark; // @synthesize placeBookmark=_placeBookmark;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRegionBookmark;
@property(readonly, nonatomic) _Bool hasRouteBookmark;
@property(readonly, nonatomic) _Bool hasPlaceBookmark;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasPosition;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

@interface MSPDirectionsSearch : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOStorageRouteRequestStorage *_routeRequestStorage;
}

@property(retain, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage; // @synthesize routeRequestStorage=_routeRequestStorage;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRouteRequestStorage;

@end

@interface MSPDroppedPin : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOLatLng *_latLng;
    GEOMapRegion *_mapRegion;
}

@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) GEOLatLng *latLng; // @synthesize latLng=_latLng;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasMapRegion;
@property(readonly, nonatomic) _Bool hasLatLng;

@end

@interface MSPPinStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _position;
    double _timestamp;
    MSPDroppedPin *_droppedPin;
    NSString *_identifier;
    int _type;
    CDStruct_dd13975a _has;
}

@property(retain, nonatomic) MSPDroppedPin *droppedPin; // @synthesize droppedPin=_droppedPin;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDroppedPin;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasPosition;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

@interface MSPPlaceBookmark : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOLatLng *_droppedPinCoordinate;
    GEOMapItemStorage *_mapItemStorage;
    int _origin;
    NSString *_title;
    struct {
        unsigned int origin:1;
    } _has;
}

@property(retain, nonatomic) GEOLatLng *droppedPinCoordinate; // @synthesize droppedPinCoordinate=_droppedPinCoordinate;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int origin; // @synthesize origin=_origin;
@property(retain, nonatomic) GEOMapItemStorage *mapItemStorage; // @synthesize mapItemStorage=_mapItemStorage;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDroppedPinCoordinate;
@property(readonly, nonatomic) _Bool hasTitle;
@property(nonatomic) _Bool hasOrigin;
@property(readonly, nonatomic) _Bool hasMapItemStorage;

@end

@interface MSPQuerySearch : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_language;
    NSString *_locationDisplayString;
    GEOMapRegion *_mapRegion;
    NSString *_query;
}

@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *locationDisplayString; // @synthesize locationDisplayString=_locationDisplayString;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasMapRegion;
@property(readonly, nonatomic) _Bool hasLanguage;
@property(readonly, nonatomic) _Bool hasLocationDisplayString;
@property(readonly, nonatomic) _Bool hasQuery;

@end

@interface MSPRegionBookmark : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_region;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) GEOMapRegion *region; // @synthesize region=_region;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasRegion;

@end

@interface MSPRouteBookmark : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOStorageRouteRequestStorage *_routeRequestStorage;
}

@property(retain, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage; // @synthesize routeRequestStorage=_routeRequestStorage;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRouteRequestStorage;

@end

@interface MSPSearchRequestStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _position;
    double _timestamp;
    MSPDirectionsSearch *_directionsSearch;
    NSString *_identifier;
    MSPQuerySearch *_querySearch;
    int _searchType;
    struct {
        unsigned int position:1;
        unsigned int timestamp:1;
        unsigned int searchType:1;
    } _has;
}

@property(retain, nonatomic) MSPDirectionsSearch *directionsSearch; // @synthesize directionsSearch=_directionsSearch;
@property(retain, nonatomic) MSPQuerySearch *querySearch; // @synthesize querySearch=_querySearch;
@property(nonatomic) double position; // @synthesize position=_position;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) int searchType; // @synthesize searchType=_searchType;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDirectionsSearch;
@property(readonly, nonatomic) _Bool hasQuerySearch;
@property(nonatomic) _Bool hasPosition;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasSearchType;

@end

