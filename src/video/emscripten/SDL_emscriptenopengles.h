/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2022 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/
#include "SDL_internal.h"

#ifndef SDL_emscriptenopengles_h_
#define SDL_emscriptenopengles_h_

#if SDL_VIDEO_DRIVER_EMSCRIPTEN

#include "../SDL_sysvideo.h"

/* OpenGLES functions */
extern int Emscripten_GLES_LoadLibrary(_THIS, const char *path);
extern void Emscripten_GLES_UnloadLibrary(_THIS);
extern void *Emscripten_GLES_GetProcAddress(_THIS, const char *proc);
extern int Emscripten_GLES_SetSwapInterval(_THIS, int interval);
extern int Emscripten_GLES_GetSwapInterval(_THIS, int *interval);
extern SDL_GLContext Emscripten_GLES_CreateContext(_THIS, SDL_Window *window);
extern void Emscripten_GLES_DeleteContext(_THIS, SDL_GLContext context);
extern int Emscripten_GLES_SwapWindow(_THIS, SDL_Window *window);
extern int Emscripten_GLES_MakeCurrent(_THIS, SDL_Window *window, SDL_GLContext context);

#endif /* SDL_VIDEO_DRIVER_EMSCRIPTEN */

#endif /* SDL_emscriptenopengles_h_ */
