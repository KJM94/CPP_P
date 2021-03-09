#include <iostream>

int main() {
    /*
    int inum1, inum2, inum3, inum4, inum5;

    std::cout << "첫번째 정수 입력 : ";
    std::cin >> inum1;
    std::cout << "두번째 정수 입력 : ";
    std::cin >> inum2;
    std::cout << "세번째 정수 입력 : ";
    std::cin >> inum3;
    std::cout << "네번째 정수 입력 : ";
    std::cin >> inum4;
    std::cout << "다섯번째 정수 입력 : ";
    std::cin >> inum5;
    std::cout << "합계 : " << inum1 + inum2 + inum3 + inum4 + inum5;
    */

    /*
    char name[100];
    char phone[100];

    std::cout << "이름을 입력하세요 : ";
    std::cin >> name;
    std::cout << "번호를 입력하세요 : ";
    std::cin >> phone;
    std::cout << "이름은 " << name << "번호는 " << phone << "입니다.";
    */

    /*
    int calc;

    std::cout << "원하는 단수를 입력하세요 : ";
    std::cin >> calc;
    for (int i = 1; i <= 9; i++)
        std::cout << calc << " X " << i << " = " << calc * i << "\n";
    */

    int pay;
    int people;

    while (1) {
        std::cout << "판매금액을 만 단위로 입력(-1 to end) : ";
        std::cin >> pay;

        if (pay == -1) {
            break;
        }

        people = 50 + pay * 0.12;
        std::cout << "이번 달 급여 : " << pay << "만 원\n";
    }
    
    std::cout << "프로그램을 종료합니다.";

    

    return 0;
}
