#ifndef __GIRL_H__
#define __GIRL_H__
#include "Boy.h"

class Girl
{
private:
    char phoneNum[20];
    friend class Boy; // BoyŬ������ ���� friend ����
public:
    Girl(const char* phnum);
    void ShowYourFriendInfo(Boy& frn);

};

#endif // !__GIRL_H__