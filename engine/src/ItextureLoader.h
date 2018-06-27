/*
	This file is part of SHMUP.

    SHMUP is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    SHMUP is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with SHMUP.  If not, see <http://www.gnu.org/licenses/>.
*/    
/*
 *  ItextureLoader.h
 *  dEngine
 *
 *  Created by fabien sanglard on 16/08/09.
 *  Copyright 2009 Memset software Inc. All rights reserved.
 *
 */

#ifndef DE_TEXTURELOADER
#define DE_TEXTURELOADER

#include "texture.h"

void loadNativePNG(texture_t* tmpTex);
void loadNativePVRT(texture_t* tmpTex);

#endif
