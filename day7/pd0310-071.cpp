//#include <iostream>
//
//using namespace std;
//
//class Car   //  기본 연료 자동차
//{
//private:
//    int gsolineGauge;
//public:
//
//    Car(int gsoline) : gsolineGauge(gsoline)
//    {
//
//    }
//    int GetGasGauge()
//    {
//        return gsolineGauge;
//    }
//};
//
//class HybridCar : public Car    //  하이브리드 자동차
//{
//private:
//    int electricGauge;
//public:
//
//    HybridCar(int gsoline, int electric) : Car(gsoline), electricGauge(electric)
//    {
//
//    }
//    int GetElecGauge()
//    {
//        return electricGauge;
//    }
//};
//
//class HybridWaterCar : public HybridCar //  하이브리드 워터카
//{
//private:
//    int waterGauge;
//public:
//    
//    HybridWaterCar(int gsoline, int electric, int water) : HybridCar(gsoline, electric), waterGauge(water)
//    {
//
//    }
//    void ShowCurrentGauge()
//    {
//        cout << "잔여 가솔린 : " << GetGasGauge() << endl;
//        cout << "잔여 전기량 : " << GetElecGauge() << endl;
//        cout << "잔여 워터량 : " << waterGauge << endl;
//    }
//};
//
//int main()
//{
//    
//    HybridWaterCar wc(45, 67, 89);
//    wc.ShowCurrentGauge();
//    
//    return 0;
//}
//
