//
//  SCTileItem.c
//  SettlersCompanion
//
//  Created by Theodore Calmes on 11/24/13.
//  Copyright (c) 2013 Theodore Calmes. All rights reserved.
//

#include <stdio.h>
#include "SCTileItem.h"

SCTileItem SCTileItemMake(SCTileItemType type, SCVertex vertex)
{
    SCTileItem t; t.type = type; t.vertex = vertex; return t;
}
