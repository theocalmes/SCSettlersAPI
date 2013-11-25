//
//  SCTile.c
//  SettlersCompanion
//
//  Created by Theodore Calmes on 11/24/13.
//  Copyright (c) 2013 Theodore Calmes. All rights reserved.
//

#include <stdio.h>
#include "SCTile.h"

SCTile SCTileMake(SCTerrainType terrain, short number, SCCubeCoordinate coordinate)
{
    SCTile t;
    t.terrain = terrain;
    t.number = number;
    t.coordinate = coordinate;

    return t;
}
