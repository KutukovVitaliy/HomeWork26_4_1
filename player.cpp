//
// Created by kvitadmin on 21.09.2021.
//

#include "player.h"
#include <iostream>

Player::Player() {
    Track initTrack;
    std::tm initTm;
    initTrack.setName("Bad Habits");
    initTrack.setDuration(201);
    initTm.tm_mday=1;
    initTm.tm_mon = 3;
    initTm.tm_year= 120;
    initTrack.setCreationDate(initTm);
    currentTrack.push_back(initTrack);
}

void Player::getTrackName() {
    std::cout << currentTrack.at(0).getName() << std::endl;
}