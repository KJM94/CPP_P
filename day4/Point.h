//#ifndef __POINT_H__
//#define __POINT_H__
//
//class Point {
//private:
//	int x;
//	int y;
//public:
//	bool InitMembers(int xpos, int ypos);
//	int GetX() const;
//	int GetY() const;
//	bool SetX(int xpos);
//	bool SetY(int ypos);
//};
//
//bool Point::InitMembers(int xpos, int ypos) {
//	if (xpos < 0 || ypos < 0) {
//		cout << "out of range" << endl;
//		return false;
//	}
//	else {
//		x = xpos;
//		y = ypos;
//	}
//	return true;
//}
//
//int Point::GetX() const {
//	return x;
//}
//int Point::GetY() const {
//	return y;
//}
//
//bool Point::SetX(int xpos) {
//	if (xpos < 0 || xpos < 0) {
//		return false;
//	}
//	else {
//		x = xpos;
//	}
//	return true;
//}
//
//bool Point::SetY(int ypos) {
//	if (ypos < 0 || ypos < 0) {
//		return false;
//	}
//	else {
//		y = ypos;
//	}
//	return true;
//}
//
//class Rectangle {
//public:
//	Point upLeft;
//	Point lowRight;
//public:
//	void ShowRecInfo() {
//		cout << "ÁÂ»ó : " << '[' << upLeft.GetX() << ',';
//		cout << upLeft.GetY() << ']' << endl;
//		cout << "¿ìÇÏ : " << '[' << lowRight.GetX() << ',';
//		cout << lowRight.GetY() << ']' << endl;
//	}
//};
//
//#endif // !__POINT_H__
