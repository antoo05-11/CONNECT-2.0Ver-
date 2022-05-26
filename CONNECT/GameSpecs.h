#pragma once

#include <SDL.h>
#include <SDL_mixer.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

inline void confirmError(const std::string& error, const bool& fatal)
{
    std::cout << "Error: " << error << SDL_GetError();
    if (fatal) exit(1);
}

const std::string WINDOW_TITLE = "CONNECT";
#define SCREEN_WIDTH 350
#define SCREEN_HEIGHT 600