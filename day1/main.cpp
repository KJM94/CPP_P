#include <iostream>

int main() {
    /*
    int inum1, inum2, inum3, inum4, inum5;

    std::cout << "ù��° ���� �Է� : ";
    std::cin >> inum1;
    std::cout << "�ι�° ���� �Է� : ";
    std::cin >> inum2;
    std::cout << "����° ���� �Է� : ";
    std::cin >> inum3;
    std::cout << "�׹�° ���� �Է� : ";
    std::cin >> inum4;
    std::cout << "�ټ���° ���� �Է� : ";
    std::cin >> inum5;
    std::cout << "�հ� : " << inum1 + inum2 + inum3 + inum4 + inum5;
    */

    /*
    char name[100];
    char phone[100];

    std::cout << "�̸��� �Է��ϼ��� : ";
    std::cin >> name;
    std::cout << "��ȣ�� �Է��ϼ��� : ";
    std::cin >> phone;
    std::cout << "�̸��� " << name << "��ȣ�� " << phone << "�Դϴ�.";
    */

    /*
    int calc;

    std::cout << "���ϴ� �ܼ��� �Է��ϼ��� : ";
    std::cin >> calc;
    for (int i = 1; i <= 9; i++)
        std::cout << calc << " X " << i << " = " << calc * i << "\n";
    */

    int pay;
    int people;

    while (1) {
        std::cout << "�Ǹűݾ��� �� ������ �Է�(-1 to end) : ";
        std::cin >> pay;

        if (pay == -1) {
            break;
        }

        people = 50 + pay * 0.12;
        std::cout << "�̹� �� �޿� : " << pay << "�� ��\n";
    }
    
    std::cout << "���α׷��� �����մϴ�.";

    

    return 0;
}
