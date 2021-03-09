#include <iostream>

/*
int MyFunc(int inum) // 입력변수 하나
{

    // 입력으로 들어온 inum 변수에 1을 더함
    inum++;
    return inum;
}

int MyFunc(float fnum1, float fnum2) // 입력변수 두개
{

    // 입력으로 들어온 inum1, inum2 합
    return fnum1 - fnum2;
}

int MyFunc(int inum1, int inum2) // 입력변수 두개
{

    // 입력으로 들어온 inum1, inum2 합
    return inum1 + inum2;
}

int main()
{
    std::cout << MyFunc(20.0f, 30.0f) << std::endl;
    std::cout << MyFunc(30, 40) << std::endl;
    
    return 0;

    
}
*/

//int MyFuncOne(int inum = 7) {
//    
//    return inum + 1;
//}



//int MyFuncTwo(int inum1 = 7, int inum2 = 5) {
//
//    return inum1 + inum2;
//}

//int Adder(int inum1 = 7, int inum2 = 3);
//int Adder(int inum1, int inum2, int inum3 = 4);
//int Adder(int inum1 = 5, int inum2 = 2, int inum3 = 4);
//
//int main() {
//    /*std::cout << MyFuncOne() << std::endl;
//    std::cout << MyFuncTwo() << std::endl;*/
//    std::cout << Adder(3) << std::endl;
//    std::cout << Adder(2, 3) << std::endl;
//    return 0;
//}
//
////int Adder(int inum1, int inum2) {
////
////    return inum1 + inum2;
////}
//
//int Adder(int inum1, int inum2, int inum3) {
//
//    return inum1 + inum2 + inum3;
//}

//void swap(int* num1, int* num2, int* num3) {
//
//    int temp = *num1;
//    *num1 = *num2;
//    *num2 = *num3;
//    *num3 = temp;
//}
//
//void swap(char* ch1, char* ch2, char* ch3) {
//
//    char temp = *ch1;
//    *ch1 = *ch2;
//    *ch2 = *ch3;
//    *ch3 = temp;
//}
//
//void swap(double* dbl1, double* dbl2, double* dbl3) {
//
//    double temp = *dbl1;
//    *dbl1 = *dbl2;
//    *dbl2 = *dbl3;
//    *dbl3 = temp;
//    
//}
//
//int main() {
//
//    int num1 = 20, num2 = 30, num3 = 40;
//    swap(&num1, &num2, &num3);
//    std::cout << num1 << ' ' << num2 << ' '<< num3 << std::endl;
//
//    char ch1 = 'A', ch2 = 'Z', ch3 = 'B';
//    swap(&ch1, &ch2, &ch3);
//    std::cout << ch1 << ' ' << ch2 << ' ' << ch3 << std::endl;
//
//    double dbl1 = 1.111, dbl2 = 5.555, dbl3 = 6.666;
//    swap(&dbl1, &dbl2, &dbl3);
//    std::cout << dbl1 << ' ' << dbl2 << ' ' << dbl3 << std::endl;
//    return 0;
//}

//int BoxVolume(int length, int width = 1, int height = 1);

//int BoxVolume(int length, int width, int height) {
//
//    int result = length * width * height;
//    return result;
//}
//
//int BoxVolume(int length, int width) {
//
//    int result = length * width;
//    return result;
//}
//
//int BoxVolume(int length) {
//    return length;
//}
//
//int main(void) {
//    std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
//    std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
//    std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
// //   std::cout << "[D, D, D] : " << BoxVolume() << std::endl;
//    return 0;
//}


//template <typename T>
//
//
//
//inline T SQUARE(T x) { // 정수반환
//    return x * x;
//}
//
////#define SQUARE(x) ((x)*(x))
////#define PI 3.141592
////#define SQUARE2(x) ((x)*(x))
//using namespace std;
//
//int main() {
//
//    cout << SQUARE(5) << endl;
//    cout << SQUARE(5.11) << endl;
//    cout << SQUARE(5.354) << endl;
//    return 0;
//}


//namespace Parent {
//    int inum = 1;
//    namespace Child1 {
//        int inum = 3;
//    }
//    namespace Child2 {
//        int inum = 5;
//    }
//}
//
//namespace BestComImpl {
//    void SimpleFunc(void);
//    void PrettyFunc(void);
//}
//
//namespace ProgComImpl {
//    void SimpleFunc(void);
//}
//
//
//int main() {
//
//    BestComImpl::SimpleFunc();
//    ProgComImpl::SimpleFunc();
//    BestComImpl::PrettyFunc();
//
//    std::cout << Parent::inum << std::endl;
//    std::cout << Parent::Child1::inum << std::endl;
//    std::cout << Parent::Child2::inum << std::endl;
//
//    return 0;
//    
//}
//
//void BestComImpl::SimpleFunc(void) {
//
//    std::cout << "BestCom이 정의한 함수" << std::endl;
//}
//
//void BestComImpl::PrettyFunc(void) {
//
//    std::cout << "So Pretty" << std::endl;
//}
//
//void ProgComImpl::SimpleFunc(void) {
//
//    std::cout << "ProgCom이 정의한 함수" << std::endl;
//}
