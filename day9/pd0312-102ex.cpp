#include <iostream>

using namespace std;

//10-2

class Point
{
    int xpos;
    int ypos;
public:
    Point(int x = 0, int y = 0) :xpos(x), ypos(y)
    {

    }

    void ShowPosition()
    {
        cout << xpos << ", " << ypos << endl;
    }

    //Point& operator-(Point& ref)
    //{
    //    // Point pos(-xpos, -ypos);
    //    xpos = -ref.xpos;
    //    ypos = -ref.ypos;
    //    return *this;
    //}

    friend Point& operator~(Point& ref);
};

Point& operator~(Point& ref)
{
    int temp = ref.xpos;
    ref.xpos = ref.ypos;
    ref.ypos = temp;
    // 책에서는 Point pos(ref.ypos, ref.xpos);

    return ref;
}

int main()
{
    Point pos1 = { 3, 4 };
    //Point pos2; // 초기화

    pos1.ShowPosition();
    /*(pos2 - pos1).ShowPosition();*/
    (~pos1).ShowPosition();

    return 0;
}
