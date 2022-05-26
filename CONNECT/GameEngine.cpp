#include "GameEngine.h"

GameEngine::GameEngine()
{
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) confirmError("SDL_Init", true);
    if (TTF_Init() != 0) confirmError("TTF_Init", true);

    window = SDL_CreateWindow(WINDOW_TITLE.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == nullptr) confirmError("SDL_CreateWindow", true);

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == nullptr) confirmError("SDL_CreateRenderer", true);
}
void GameEngine::run()
{
    BaseObject image;
    image.loadImage("asset/image/icon.png", renderer);
    image.render(renderer, nullptr, nullptr);
    SDL_RenderPresent(renderer);
    SDL_Delay(3000);
}
GameEngine::~GameEngine()
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
}
void GameEngine::close()
{
    
}



