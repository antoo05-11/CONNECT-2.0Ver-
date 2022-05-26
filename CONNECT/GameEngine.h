#pragma once
#include "GameSpecs.h"
#include "BaseObject.h"

class GameEngine
{
    SDL_Renderer* renderer = nullptr;
    SDL_Window* window = nullptr;
    int gameStatus;
public:
    GameEngine();
    ~GameEngine();
    void run();
    void close();
};

