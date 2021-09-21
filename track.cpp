//
// Created by kvitadmin on 21.09.2021.
//

#include "track.h"

std::string Track::getName(){
    return name;
}

std::tm Track::getCreationDate() {
    return creationDate;
}

int Track::getDuration() {
    return duration;
}
void Track::setName(std::string strName){
    name = strName;
}
void Track::setCreationDate(std::tm crDate){
    creationDate = crDate;
}
void Track::setDuration(int durTime){
    duration = durTime;
}