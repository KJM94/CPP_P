#include <iostream>
#include <cstring>
#include "Girl.h"
using namespace std;

Girl::Girl(const char* phnum)
{
    strcpy(phoneNum, phnum);
}

void Girl::ShowYourFriendInfo(Boy& frn)
{
    cout << "�ҳ��� Ű : " << frn.height << "cm" << endl;
}