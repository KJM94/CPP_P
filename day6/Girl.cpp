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
    cout << "소년의 키 : " << frn.height << "cm" << endl;
}