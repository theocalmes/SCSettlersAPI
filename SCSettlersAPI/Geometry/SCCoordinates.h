//
//  SCCoordinates.h
//  SettlersCompanion
//
//  Created by Theodore Calmes on 11/24/13.
//  Copyright (c) 2013 Theodore Calmes. All rights reserved.
//

#ifndef SettlersCompanion_SCCoordinates_h
#define SettlersCompanion_SCCoordinates_h

typedef struct SCCubeCoordinate {
    int x; int y; int z;
} SCCubeCoordinate;
SCCubeCoordinate SCCubeCoordinateMake(int x, int y, int z);

int SCCubeCoordinateIsEqualToCoordinate(SCCubeCoordinate c1, SCCubeCoordinate c2);
SCCubeCoordinate SCCubeCoordinateByAddingCoordinate(SCCubeCoordinate c1, SCCubeCoordinate c2);
SCCubeCoordinate SCCubeCoordinateByMutiplyingScalar(SCCubeCoordinate c, int scalar);

typedef struct SCAxialCoordinate {
    int q; int r;
} SCAxialCoordinate;
SCAxialCoordinate SCAxialCoordinateMake(int q, int r);

int SCAxialCoordinateIsEqualToCoordinate(SCAxialCoordinate c1, SCAxialCoordinate c2);
SCAxialCoordinate SCAxialCoordinateByAddingCoordinate(SCAxialCoordinate c1, SCAxialCoordinate c2);
SCAxialCoordinate SCAxialCoordinateByMutiplyingScalar(SCAxialCoordinate c, int scalar);

SCAxialCoordinate SCAxialCoordinateFromCubeCoordinate(SCCubeCoordinate coordinate);
SCCubeCoordinate SCCubeCoordinateFromAxialCoordinate(SCAxialCoordinate coordinate);

#endif
