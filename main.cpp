#include <iostream>
#include "player.h"

int main() {
    Player* myPlayer = new Player();
    myPlayer->getTrackName();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
