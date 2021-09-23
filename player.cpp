//
// Created by kvitadmin on 21.09.2021.
//

#include "player.h"
#include <iostream>
#include <iomanip>
#include <string>

Player::Player() {
    Track initTrack;
    std::tm initTm;
    initTrack.setName("Love Tonight");
    initTrack.setDuration(186);
    initTm.tm_mday=5;
    initTm.tm_mon = 4;
    initTm.tm_year= 121;
    initTrack.setCreationDate(initTm);
    tracks.push_back(initTrack);
    initTrack.setName("Bad Habits");
    initTrack.setDuration(201);
    initTm.tm_mday=1;
    initTm.tm_mon = 3;
    initTm.tm_year= 120;
    initTrack.setCreationDate(initTm);
    tracks.push_back(initTrack);
    initTrack.setName("My Way");
    initTrack.setDuration(201);
    initTm.tm_mday=5;
    initTm.tm_mon = 8;
    initTm.tm_year= 119;
    initTrack.setCreationDate(initTm);
    tracks.push_back(initTrack);

}

void Player::getTrackInfo(int number) {
    std::tm tmpTm = tracks.at(number).getCreationDate();
    std::cout << "Track name: " << tracks.at(number).getName() << ". Creation at: " <<
    std::put_time(&tmpTm,"%Y/%B/%d") << ". Duration: "<< tracks.at(number).getDuration() << std::endl;
}

void Player::getAllTrackInfo(){
    for(int i = 0; i < tracks.size(); ++i){
        getTrackInfo(i);
    }
}
int Player::generateTrackNumber(){
    return std::rand() % 3;
}

void Player::playTrack(int trackNumber){
    getTrackInfo(trackNumber);
}

int Player::findTrackByName(std::string strName){
    for(int i = 0; i < tracks.size(); ++i){
        if(tracks.at(i).getName() == strName) return i;
    }
    return -1;
}

void Player::stop() {
    if(currentTrack != -1){
        std::cout << "Current track " << tracks.at(currentTrack).getName() << " stopped!" << std::endl;
        currentTrack = -1;
    }
}
void Player::pause() {
    if(currentTrack != -1){
        std::cout << "Current track " << tracks.at(currentTrack).getName() << " paused!" << std::endl;
        currentTrack = -1;
    }
}
void Player::next(){
    if(currentTrack != -1){
        currentTrack = generateTrackNumber();
        getTrackInfo(currentTrack);
    }
}
void Player::play(std::string trackName){
    if(currentTrack == -1){
        currentTrack = findTrackByName(trackName);
        if(currentTrack != -1){
            getTrackInfo(currentTrack);
        }
        else std::cout << "Wrong track name!" << std::endl;
    }

}