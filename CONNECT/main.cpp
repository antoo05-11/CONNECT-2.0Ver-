#include "GameEngine.h"

int main(int argc, char* argv[]) {
    auto gameEngine = new GameEngine;
    gameEngine->run();
    gameEngine->close();
    delete gameEngine;
    return 0;
}
