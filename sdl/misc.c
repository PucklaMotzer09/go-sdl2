#include <SDL2/SDL_version.h>
#include "misc.h"

int _SDL_GetSystemRAM()
{
    #if (SDL_MAJOR_VERSION >= 2 && SDL_MINOR_VERSION >= 0 && SDL_PATCHLEVEL >= 1)
    return SDL_GetSystemRAM();
    #else
    return 0;
    #endif
}

SDL_bool _SDL_HasAVX()
{
    #if (SDL_MAJOR_VERSION >= 2 && SDL_MINOR_VERSION >= 0 && SDL_PATCHLEVEL >= 2)
    return SDL_HasAVX();
    #else
    return SDL_FALSE;
    #endif
}
