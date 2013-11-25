//
//  SCSettlement.c
//  SettlersCompanion
//
//  Created by Theodore Calmes on 11/24/13.
//  Copyright (c) 2013 Theodore Calmes. All rights reserved.
//

#include <stdio.h>
#include "SCSettlement.h"

SCSettlement SCSettlementMake(SCSettlementType type, SCVertex vertex, short hasWall)
{
    SCSettlement s;
    s.type = type;
    s.vertex = vertex;
    s.hasWall = hasWall;

    return s;
}
