#include <iostream>
#include <cstring>
#include "Boy.h"
#include "Girl.h"
using namespace std;

int main()
{
    Boy boy(170);
    Girl girl("010-123-4567");
    boy.ShowYourFriendInfo(girl);
    girl.ShowYourFriendInfo(boy);
    return 0;
}