//
// Created by kvitadmin on 21.09.2021.
//

#ifndef HOMEWORK26_4_1_PLAYER_H
#define HOMEWORK26_4_1_PLAYER_H
#include "track.h"
#include <vector>

class Player {
    std::vector<Track> tracks;
    std::vector<Track> currentTrack;
public:
    Player();
    void getTrackName();
};


#endif //HOMEWORK26_4_1_PLAYER_H
