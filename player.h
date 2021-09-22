//
// Created by kvitadmin on 21.09.2021.
//

#ifndef HOMEWORK26_4_1_PLAYER_H
#define HOMEWORK26_4_1_PLAYER_H
#include "track.h"
#include <vector>

class Player {
    std::vector<Track> tracks;
    int currentTrack = -1;
    int findTrackByName(std::string strName);
    int generateTrackNumber();
    void playTrack(int trackNumber);
    void getTrackInfo(int number);
public:
    Player();
    void getAllTrackInfo();
    void play();
    void pause();
    void stop();
    void next();
};


#endif //HOMEWORK26_4_1_PLAYER_H
