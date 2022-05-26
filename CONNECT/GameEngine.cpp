#include "GameEngine.h"

#include <iostream>

GameEngine::GameEngine()
{
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) this->ConfirmError("SDL_Init", true);
    if (TTF_Init() != 0) this->ConfirmError("TTF_Init", true);

    window = SDL_CreateWindow(WINDOW_TITLE.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == nullptr) this->ConfirmError("SDL_CreateWindow", true);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == nullptr) this->ConfirmError("", true);


}
void GameEngine::Run()
{

}
GameEngine::~GameEngine()
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
}
void GameEngine::Quit()
{
    
}
void GameEngine::ConfirmError(const std::string &error, const bool& fatal)
{
    std::cout << "Error: " << error << SDL_GetError();
    if (fatal) exit(1);
}


