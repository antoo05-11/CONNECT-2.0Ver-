#include "GameEngine.h"

int main(int argc, char* argv[]) {
    auto gameEngine = new GameEngine;
    gameEngine->Run();
    gameEngine->Quit();
    delete gameEngine;
    return 0;
}
