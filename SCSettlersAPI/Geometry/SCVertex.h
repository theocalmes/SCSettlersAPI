//
//  SCVertex.h
//  SettlersCompanion
//
//  Created by Theodore Calmes on 11/24/13.
//  Copyright (c) 2013 Theodore Calmes. All rights reserved.
//

#ifndef SettlersCompanion_SCVertex_h
#define SettlersCompanion_SCVertex_h

#include "SCCoordinates.h"

typedef struct SCVertex {
    SCCubeCoordinate coordinates[3];
    short count;
} SCVertex;
SCVertex SCVertexMake(SCCubeCoordinate c1, SCCubeCoordinate c2, SCCubeCoordinate c3);
SCVertex SCVertexMakeEmpty(void);
void SCVertexAddCoordinate(SCVertex *v, SCCubeCoordinate c);

short SCVertexContains(SCVertex v, SCCubeCoordinate c);
short SCVertexIsEqualToVertex(SCVertex v1, SCVertex v2);

short SCVertextNumberOfTilesSharedWithVertex(SCVertex v1, SCVertex v2);

#endif
