#include <iostream>
#include "player.h"

int main() {
    bool exit = false;
    std::string command;
    Player* myPlayer = new Player();
    myPlayer->getAllTrackInfo();
    do{
        std::cout << "Enter the command: ";
        std::cin >> command;
        if(command == "exit") exit = true;
        else if(command == "play") myPlayer->play();
        else if(command == "pause") myPlayer->pause();
        else if(command == "stop") myPlayer->stop();
        else if(command == "next") myPlayer->next();
    } while (!exit);

    delete myPlayer;

    return 0;
}
