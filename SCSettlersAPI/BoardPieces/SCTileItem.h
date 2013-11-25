//
//  SCTileItem.h
//  SettlersCompanion
//
//  Created by Theodore Calmes on 11/24/13.
//  Copyright (c) 2013 Theodore Calmes. All rights reserved.
//

#ifndef SettlersCompanion_SCTileItem_h
#define SettlersCompanion_SCTileItem_h

#include "SCVertex.h"

typedef enum SCTileItemType {
    SCTileItemTypeRobber,
    SCTileItemTypePirate,
    SCTileItemTypeMerchant
} SCTileItemType;

typedef struct SCTileItem {
    SCTileItemType type;
    SCVertex vertex;
} SCTileItem;
SCTileItem SCTileItemMake(SCTileItemType type, SCVertex vertex);

#endif
