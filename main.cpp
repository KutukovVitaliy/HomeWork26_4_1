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
        else if(command == "play") {
            std::string tmp;
            std::cout << "Enter track name: ";
            std::cin.ignore(32767, '\n');
            std::getline(std::cin, tmp);
            myPlayer->play(tmp);
        }
        else if(command == "pause") myPlayer->pause();
        else if(command == "stop") myPlayer->stop();
        else if(command == "next") myPlayer->next();
        else std::cout << "Bad command! Try again!" << std::endl;
    } while (!exit);

    delete myPlayer;

    return 0;
}
