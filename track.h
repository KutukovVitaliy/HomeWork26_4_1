//
// Created by kvitadmin on 21.09.2021.
//

#ifndef HOMEWORK26_4_1_TRACK_H
#define HOMEWORK26_4_1_TRACK_H
#include <string>
#include <ctime>

class Track {
    std::string name;
    std::tm creationDate;
    int duration;
public:
    std::string getName();
    std::tm getCreationDate();
    int getDuration();
    void setName(std::string strName);
    void setCreationDate(std::tm crDate);
    void setDuration(int durTime);
};


#endif //HOMEWORK26_4_1_TRACK_H
