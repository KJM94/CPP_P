#include <iostream>
#include <cstring>
#include "Boy.h"
using namespace std;

Boy::Boy(int len) : height(len) {}

void Boy::ShowYourFriendInfo(Girl& frn)
{
    cout << "�ҳ��� ��ȭ��ȣ : " << frn.phoneNum << endl;
}