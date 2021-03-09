#include <iostream>
#include <cstring>
#include "Boy.h"
using namespace std;

Boy::Boy(int len) : height(len) {}

void Boy::ShowYourFriendInfo(Girl& frn)
{
    cout << "소녀의 전화번호 : " << frn.phoneNum << endl;
}