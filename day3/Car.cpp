////Car.cpp
//
//#include <iostream>
//#include "Car.h"
//
//
//using namespace std;
//
//
//
//void Car::InitMembers(const char* ID, int fuel) {
//	strcpy(gamerID, ID);
//	fuelGauge = fuel;
//	currentSpeed = 0;
//}
//
//void Car::ShowCarState() {
//	cout << "소유자 아이디 : " << gamerID << endl;
//	cout << "연료량 : " << fuelGauge << endl;
//	cout << "현재속도 : " << currentSpeed << endl;
//}
//
//void Car::Accel() {
//	if (fuelGauge <= 0) {
//		return;
//	}
//	else {
//		fuelGauge -= CAR_CONST::FUEL_STEP;
//	}
//
//	if (currentSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPEED) {
//		currentSpeed = CAR_CONST::MAX_SPEED;
//	}
//	else {
//		currentSpeed += CAR_CONST::ACC_STEP;
//	}
//}
//
//void Car::Break() {
//	if (currentSpeed < CAR_CONST::BRK_STEP) {
//		currentSpeed = 0;
//	}
//	else {
//		currentSpeed -= CAR_CONST::BRK_STEP;
//	}
//}