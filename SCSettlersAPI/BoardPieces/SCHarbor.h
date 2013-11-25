//
//  SCHarbor.h
//  SettlersCompanion
//
//  Created by Theodore Calmes on 11/24/13.
//  Copyright (c) 2013 Theodore Calmes. All rights reserved.
//

#ifndef SettlersCompanion_SCHarbor_h
#define SettlersCompanion_SCHarbor_h

#include "SCCommon.h"
#include "SCCoordinates.h"

typedef enum SCHarborType {
    SCHarborTypeGeneric,
    SCHarborTypeWool,
    SCHarborTypeWood,
    SCHarborTypeGrain,
    SCHarborTypeBrick,
    SCHarborTypeOre
} SCHarborType;

typedef struct SCHarbor {
    SCHarborType type;
    SCEdgeDirection direction;
    SCCubeCoordinate tileCoordinate;
} SCHarbor;
SCHarbor SCHarborMake(SCHarborType type, SCEdgeDirection direction, SCCubeCoordinate tileCoordinate);

#endif
