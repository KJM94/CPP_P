#ifndef __GIRL_H__
#define __GIRL_H__
#include "Boy.h"

class Girl
{
private:
    char phoneNum[20];
    friend class Boy; // Boy클래스에 대한 friend 선언
public:
    Girl(const char* phnum);
    void ShowYourFriendInfo(Boy& frn);

};

#endif // !__GIRL_H__