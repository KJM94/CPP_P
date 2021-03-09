#include <iostream>

using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	void Init(int x, int y) {
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const {
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle {
	int rad;
	Point center;
public:
	void Init(int x, int y, int r) {
		rad = r;
		center.Init(x, y);
	}

	void ShowCirInfo()const {
		cout << "rad : " << rad << endl;
		center.ShowPointInfo();
	}

};

class Ring {
	Circle oneCir;
	Circle twoCir;
public:
	void Init(int onex, int oney, int oner, int twox, int twoy, int twor) {
		oneCir.Init(onex, oney, oner);
		twoCir.Init(twox, twoy, twor);
	}
	void ShowRingInfo() const {
		cout << "Inner Circle Info" << endl;
		oneCir.ShowCirInfo();
		cout << "Outter Circle Info" << endl;
		twoCir.ShowCirInfo();
	}
};

int main() {
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();

	return 0;
}

////Äà¹°
//class SinivelCap {
//public:
//	void Take() const {
//		cout << "Äà¹°¾à" << endl;
//	}
//};
//
////ÀçÃ¤±â
//class SneezeCap {
//public:
//	void Take() const {
//		cout << "ÀçÃ¤±â¾à" << endl;
//	}
//};
//
////ÄÚ¸·Èû
//class SnuffleCap {
//public:
//	void Take() const {
//		cout << "ÄÚ¸·Èû¾à" << endl;
//	}
//};
//
//class CONTAC600 {
//	SinivelCap sin;
//	SneezeCap sne;
//	SnuffleCap snu;
//
//public:
//	void Take() const {
//		sin.Take();
//		sne.Take();
//		snu.Take();
//	}
//};
//
//class ColdPatient {
//public:
//	void TakeCONTAC600(const CONTAC600& cap) const { cap.Take(); }
//
//	/*void TakeSinivelCap(const SinivelCap& cap) const { cap.Take(); }
//	void TakeSneezeCap(const SneezeCap& cap) const { cap.Take(); }
//	void TakeSnuffleCap(const SnuffleCap& cap) const { cap.Take(); }*/
//};
//
//int main() {
//	CONTAC600 cap;
//	ColdPatient patient;
//	patient.TakeCONTAC600(cap);
//
//
//	/*SinivelCap scap;
//	SneezeCap zcap;
//	SnuffleCap ncap;
//
//	ColdPatient patient;
//	patient.TakeSinivelCap(scap);
//	patient.TakeSneezeCap(zcap);
//	patient.TakeSnuffleCap(ncap);*/
//
//	return 0;
//}