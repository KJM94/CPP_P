#ifndef __BOY_H__
#define __BOY_H__
#include "Girl.h"

class Boy
{
private:
    int height;
    friend class Girl; // GirlŬ������ ���� friend ����
public:
    Boy(int len);
    void ShowYourFriendInfo(Girl& frn);
};

#endif // !__BOY_H__
