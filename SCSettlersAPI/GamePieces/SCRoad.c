//
//  SCRoad.c
//  SettlersCompanion
//
//  Created by Theodore Calmes on 11/24/13.
//  Copyright (c) 2013 Theodore Calmes. All rights reserved.
//

#include <stdio.h>
#include "SCRoad.h"

SCRoad SCRoadMake(SCRoadType type, SCVertex startVertex, SCVertex endVertex)
{
    SCRoad r;
    r.type = type;
    r.startVertex = startVertex;
    r.endVertex = endVertex;

    return r;
}