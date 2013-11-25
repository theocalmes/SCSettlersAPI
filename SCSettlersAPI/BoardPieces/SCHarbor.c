//
//  SCHarbor.c
//  SettlersCompanion
//
//  Created by Theodore Calmes on 11/24/13.
//  Copyright (c) 2013 Theodore Calmes. All rights reserved.
//

#include <stdio.h>
#include "SCHarbor.h"

SCHarbor SCHarborMake(SCHarborType type, SCEdgeDirection direction, SCCubeCoordinate tileCoordinate)
{
    SCHarbor h;
    h.type = type;
    h.direction = direction;
    h.tileCoordinate = tileCoordinate;

    return h;
}
