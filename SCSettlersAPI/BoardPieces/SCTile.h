//
//  SCTile.h
//  SettlersCompanion
//
//  Created by Theodore Calmes on 11/24/13.
//  Copyright (c) 2013 Theodore Calmes. All rights reserved.
//

#ifndef SettlersCompanion_SCTile_h
#define SettlersCompanion_SCTile_h

#include "SCCoordinates.h"

typedef enum SCTerrainType {
    SCTerrainTypeHill,
    SCTerrainTypePasture,
    SCTerrainTypeMountain,
    SCTerrainTypeField,
    SCTerrainTypeForest,
    SCTerrainTypeGoldField,
    SCTerrainTypeDesert,
    SCTerrainTypeOcean,
    SCTerrainTypePlaceholder,
    SCTerrainTypeNone
} SCTerrainType;

typedef struct SCTile {
    SCTerrainType terrain;
    short number;
    SCCubeCoordinate coordinate;
} SCTile;
SCTile SCTileMake(SCTerrainType terrain, short number, SCCubeCoordinate coordinate);

#endif
