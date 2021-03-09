#ifndef __BOY_H__
#define __BOY_H__
#include "Girl.h"

class Boy
{
private:
    int height;
    friend class Girl; // Girl클래스에 대한 friend 선언
public:
    Boy(int len);
    void ShowYourFriendInfo(Girl& frn);
};

#endif // !__BOY_H__
