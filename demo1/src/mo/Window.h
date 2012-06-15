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

#ifndef MO_WINDOW_H
#define MO_WINDOW_H

#include <n/Instance.h>

/** A basic window and viewport implementation */
struct moWindow {

  struct nInstance self;
  
  /** Viewport for this window */
  void *viewport;

  /** Width of the window in world units */
  int width;

  /** Height of the window in world units */
  int height;

  /** 
   * Open a window and create a viewport for it 
   * <p>
   * The width and height values are in pixels.
   * The world value is a the width in pixels; the height is 
   * automatically calculated based on the aspect ratio.
   */
  void (* open) (struct moWindow *self, int width, int height, int world);
};

/** Creates and returns the type for this interface. */
struct nType *moWindow_getType(void);

/** Returns a new instance of the type. */
struct moWindow *moWindow(void);

#endif
