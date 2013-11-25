//
//  SCCommon.c
//  SettlersCompanion
//
//  Created by Theodore Calmes on 11/24/13.
//  Copyright (c) 2013 Theodore Calmes. All rights reserved.
//

#include <stdio.h>
#include "SCCommon.h"
#include "SCCoordinates.h"

static int SCCubeCoordinateNeighborDeltas[6][3] = {
    {+1, -1,  0}, {+1,  0, -1}, { 0, +1, -1},
    {-1, +1,  0}, {-1,  0, +1}, { 0, -1, +1}
};

static int SCAxialCoordinateNeighborDeltas[6][2] = {
    {+1,  0}, {+1, -1}, { 0, -1},
    {-1,  0}, {-1, +1}, { 0, +1}
};

static SCEdgeDirection SCEdgeDirectionsForVertextDirection[6][2] = {
    {SCEdgeDirectionBottomRight, SCEdgeDirectionTopRight},
    {SCEdgeDirectionTopRight, SCEdgeDirectionTopCenter},
    {SCEdgeDirectionTopCenter, SCEdgeDirectionTopLeft},
    {SCEdgeDirectionTopLeft, SCEdgeDirectionBottomLeft},
    {SCEdgeDirectionBottomLeft, SCEdgeDirectionBottomCenter},
    {SCEdgeDirectionBottomCenter, SCEdgeDirectionBottomRight}
};

SCCubeCoordinate SCCubeCoordinateNeighborInDirection(SCCubeCoordinate coordinate, SCEdgeDirection direction)
{
    int x = coordinate.x + SCCubeCoordinateNeighborDeltas[direction][0];
    int y = coordinate.y + SCCubeCoordinateNeighborDeltas[direction][1];
    int z = coordinate.z + SCCubeCoordinateNeighborDeltas[direction][2];

    return SCCubeCoordinateMake(x, y, z);
}

SCAxialCoordinate SCAxialCoordinateNeighborInDirection(SCAxialCoordinate coordinate, SCEdgeDirection direction)
{
    int q = coordinate.q + SCAxialCoordinateNeighborDeltas[direction][0];
    int r = coordinate.r + SCAxialCoordinateNeighborDeltas[direction][1];

    return SCAxialCoordinateMake(q, r);
}

SCVertex SCVertexForCoordinateInDirection(SCCubeCoordinate c, SCVertexDirection direction)
{
    SCCubeCoordinate c2 = SCCubeCoordinateNeighborInDirection(c, SCEdgeDirectionsForVertextDirection[direction][0]);
    SCCubeCoordinate c3 = SCCubeCoordinateNeighborInDirection(c, SCEdgeDirectionsForVertextDirection[direction][1]);

    return SCVertexMake(c, c2, c3);
}
