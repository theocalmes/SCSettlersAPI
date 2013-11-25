//
//  SCVertex.c
//  SettlersCompanion
//
//  Created by Theodore Calmes on 11/24/13.
//  Copyright (c) 2013 Theodore Calmes. All rights reserved.
//

#include <stdio.h>
#include "SCVertex.h"

SCVertex SCVertexMake(SCCubeCoordinate c1, SCCubeCoordinate c2, SCCubeCoordinate c3)
{
    SCVertex v;
    v.count = 3;
    v.coordinates[0] = c1; v.coordinates[1] = c2; v.coordinates[2] = c3;

    return v;
}

SCVertex SCVertexMakeEmpty(void)
{
    SCVertex v; v.count = 0; return v;
}

short SCVertexContains(SCVertex v, SCCubeCoordinate c)
{
    for (int i = 0; i < v.count; i++) {
        if (SCCubeCoordinateIsEqualToCoordinate(v.coordinates[i], c)) return 1;
    }

    return 0;
}

void SCVertexAddCoordinate(SCVertex *v, SCCubeCoordinate c)
{
    if (v->count == 3) return;

    if (v->count == 0) {
        v->coordinates[v->count++] = c;
        return;
    }

    if (SCVertexContains(*v, c)) return;

    v->coordinates[v->count++] = c;
}

short SCVertexIsEqualToVertex(SCVertex v1, SCVertex v2)
{
    if (v1.count != v2.count) return 0;

    for (int i = 0; i < v1.count; i++) {
        if (!SCVertexContains(v1, v2.coordinates[i])) return 0;
    }
    
    return 1;
}

short SCVertextNumberOfTilesSharedWithVertex(SCVertex v1, SCVertex v2)
{
    int count = 0;
    for (int i = 0; i < 3; i++) {
        count += SCVertexContains(v1, v2.coordinates[i]);
    }

    return count;
}
