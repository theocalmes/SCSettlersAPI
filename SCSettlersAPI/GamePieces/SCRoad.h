//
//  SCRoad.h
//  SettlersCompanion
//
//  Created by Theodore Calmes on 11/24/13.
//  Copyright (c) 2013 Theodore Calmes. All rights reserved.
//

#ifndef SettlersCompanion_SCRoad_h
#define SettlersCompanion_SCRoad_h

#include "SCVertex.h"

typedef enum SCRoadType {
    SCRoadTypeRoad,
    SCRoadTypeShip
} SCRoadType;

typedef struct SCRoad {
    SCRoadType type;
    SCVertex startVertex;
    SCVertex endVertex;
} SCRoad;
SCRoad SCRoadMake(SCRoadType type, SCVertex startVertex, SCVertex endVertex);

#endif
