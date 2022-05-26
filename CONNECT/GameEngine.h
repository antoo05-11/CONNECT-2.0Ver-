#pragma once
#include <SDL.h>
#include <SDL_mixer.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

class GameEngine
{
    SDL_Renderer* renderer = nullptr;
    SDL_Window* window = nullptr;
    int gameStatus;
public:
    GameEngine();
    ~GameEngine();
    void Run();
    void Quit();
    void ConfirmError(const std::string& error, const bool& fatal);
};

const std::string WINDOW_TITLE = "CONNECT";
#define SCREEN_WIDTH 350
#define SCREEN_HEIGHT 600