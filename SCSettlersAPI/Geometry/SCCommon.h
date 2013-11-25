//
//  SCCommon.h
//  SettlersCompanion
//
//  Created by Theodore Calmes on 11/24/13.
//  Copyright (c) 2013 Theodore Calmes. All rights reserved.
//

#ifndef SettlersCompanion_SCCommon_h
#define SettlersCompanion_SCCommon_h

#include "SCCoordinates.h"
#include "SCVertex.h"

/*
 * Representaion of Edges
            __2__
         3 /     \ 1
          /       \
          \       /
         4 \_____/ 0
              5
 
 * Representaion of Vetex
           2______1
           /      \
          /        \
         3          0
          \        /
           \______/
           4      5
 */

typedef enum SCEdgeDirection {
    SCEdgeDirectionBottomRight,
    SCEdgeDirectionTopRight,
    SCEdgeDirectionTopCenter,
    SCEdgeDirectionTopLeft,
    SCEdgeDirectionBottomLeft,
    SCEdgeDirectionBottomCenter,
} SCEdgeDirection;

typedef enum SCVertexDirection {
    SCVertexDirectionCenterRight,
    SCVertexDirectionTopRight,
    SCVertexDirectionTopLeft,
    SCVertexDirectionCenterLeft,
    SCVertexDirectionBottomLeft,
    SCVertexDirectionBottomRight
} SCVertexDirection;

SCCubeCoordinate SCCubeCoordinateNeighborInDirection(SCCubeCoordinate coordinate, SCEdgeDirection direction);
SCAxialCoordinate SCAxialCoordinateNeighborInDirection(SCAxialCoordinate coordinate, SCEdgeDirection direction);

SCVertex SCVertexForCoordinateInDirection(SCCubeCoordinate c, SCVertexDirection direction);

#endif
