/* 
 * Copyright 2011 Douglas Linder
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MO_MARKER_H
#define MO_MARKER_H

#include <n/Instance.h>
#include <mo/Window.h>

/** Basic block drawing operations for debugging */
struct moMarker {

  struct nInstance self;
  
  /** Add a marker at world position x,y with rotation r */
  void (* mark) (struct moMarker *marker, int x, int y, double r);

  /** Clear all markers */
  void (* clear) (struct moMarker *marker);
};

/** Creates and returns the type for this interface. */
struct nType *moMarker_getType(void);

/** Returns a new instance of the type. */
struct moMarker *moMarker(struct moWindow *window);

#endif
