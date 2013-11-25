//
//  SCCoordinates.c
//  SettlersCompanion
//
//  Created by Theodore Calmes on 11/24/13.
//  Copyright (c) 2013 Theodore Calmes. All rights reserved.
//

#include <stdio.h>
#include "SCCoordinates.h"

SCCubeCoordinate SCCubeCoordinateMake(int x, int y, int z)
{
    SCCubeCoordinate c; c.x = x; c.y = y; c.z = z; return c;
}

SCAxialCoordinate SCAxialCoordinateMake(int q, int r)
{
    SCAxialCoordinate c; c.q = q; c.r = r; return c;
}

SCCubeCoordinate SCCubeCoordinateByAddingCoordinate(SCCubeCoordinate c1, SCCubeCoordinate c2)
{
    return SCCubeCoordinateMake(c1.x + c2.x, c1.y + c2.y, c1.z + c2.z);
}

SCCubeCoordinate SCCubeCoordinateByMutiplyingScalar(SCCubeCoordinate c, int scalar)
{
    return SCCubeCoordinateMake(c.x * scalar, c.y * scalar, c.z * scalar);
}

SCAxialCoordinate SCAxialCoordinateByAddingCoordinate(SCAxialCoordinate c1, SCAxialCoordinate c2)
{
    return SCAxialCoordinateMake(c1.q + c2.q, c1.r + c2.r);
}

SCAxialCoordinate SCAxialCoordinateByMutiplyingScalar(SCAxialCoordinate c, int scalar)
{
    return SCAxialCoordinateMake(c.q * scalar, c.r * scalar);
}

int SCCubeCoordinateIsEqualToCoordinate(SCCubeCoordinate c1, SCCubeCoordinate c2)
{
    return c1.x == c2.x && c1.y == c2.y && c1.z == c2.z;
}

int SCAxialCoordinateIsEqualToCoordinate(SCAxialCoordinate c1, SCAxialCoordinate c2)
{
    return c1.q == c2.q && c1.r == c2.r;
}

SCCubeCoordinate SCCubeCoordinateFromAxialCoordinate(SCAxialCoordinate coordinate)
{
    int x = coordinate.q;
    int z = coordinate.r;
    int y = -x - z;

    return SCCubeCoordinateMake(x, y, z);
}

SCAxialCoordinate SCAxialCoordinateFromCubeCoordinate(SCCubeCoordinate coordinate)
{
    return SCAxialCoordinateMake(coordinate.x, coordinate.z);
}
