#include <iostream>

using namespace std;

//10-1

class Point
{
    int xpos;
    int ypos;
public:
    Point(int x = 0, int y = 0) :xpos(x), ypos(y)
    {

    }
    void ShowPosition() const
    {
        cout << xpos << ", " << ypos << endl;
    }

    friend bool operator==(const Point& pos1, const Point& pos2); // 조건1
    friend bool operator!=(const Point& pos1, const Point& pos2); // 조건2

    //Point& operator+=(const Point& ref) // 멤버함수 기반 +=
    //{
    //    xpos += ref.xpos; // 조건2
    //    ypos += ref.ypos;
    //    return *this; // 조건4
    //}

    //Point& operator-=(const Point& ref) // 멤버함수 기반 -=
    //{
    //    xpos -= ref.xpos; // 조건3
    //    ypos -= ref.ypos;
    //    return *this; // 조건4
    //}

    //friend Point operator-(const Point& pos1, const Point& pos2); // 전역함수 기반
    //Point& operator-=(const Point& ref) //  멤버 별-연산의 결과를 담은 Point 객체 반환
    //{
    //    xpos -= ref.xpos;
    //    ypos -= ref.ypos;
    //    return *this;
    //}
};

bool operator==(const Point& pos1, const Point& pos2) // 조건2
{
    if (pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator!=(const Point& pos1, const Point& pos2) // 조건3
{
    if (pos1 == pos2) // 조건4
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Point operator-(const Point& pos1, const Point& pos2)
//{
//    Point pos(pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos);
//    return pos;
//}


int main()
{
    /*Point pos1(10, 20);
    Point pos2(3, 4);*/
    /*Point pos3 = pos1 - pos2;*/

    Point pos1 = { 10, 20 };
    Point pos2 = { 1, 2};

    pos1.ShowPosition();
    pos2.ShowPosition();
    /*pos3.ShowPosition();*/
    /*(pos1 += pos2).ShowPosition();
    (pos1 -= pos2).ShowPosition();*/

    if (pos1 == pos2)
    {
        cout << "pos1 == pos2" << endl;
    }
    else
    {
        cout << "pos1 != pos2" << endl;
    }
    

    return 0;
}
