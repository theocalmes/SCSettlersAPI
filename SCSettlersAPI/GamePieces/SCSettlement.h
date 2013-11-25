//
//  SCSettlement.h
//  SettlersCompanion
//
//  Created by Theodore Calmes on 11/24/13.
//  Copyright (c) 2013 Theodore Calmes. All rights reserved.
//

#ifndef SettlersCompanion_SCSettlement_h
#define SettlersCompanion_SCSettlement_h

#include "SCVertex.h"

typedef enum SCSettlementType {
    SCSettlementTypeSettlement,
    SCSettlementTypeCity,
    SCSettlementTypeMetropolis
} SCSettlementType;

typedef struct SCSettlement {
    short hasWall:1;
    SCSettlementType type;
    SCVertex vertex;
} SCSettlement;
SCSettlement SCSettlementMake(SCSettlementType type, SCVertex vertex, short hasWall);

#endif
