//#include <iostream>
//#include <string>
//#include <random>
//using namespace std;
//
//string text_out(int num)
//{
//    if (num == 1)
//        return "����";
//    else if (num == 2)
//        return "����";
//    else
//        return "��";
//}
//
//int main()
//{
//    cout << "****************\n* ���������� ���� *\n****************\n\n";
//    int count = 1;
//    int myTurn;
//    //������ ����
//    random_device rd;
//    mt19937 gen(rd());
//    //������ 1~3���� ����
//    uniform_int_distribution<int> dis(1, 3);
//    string com_out;
//
//    while (true) {
//        int com = dis(gen);
//
//        cout << "���� #" << count << "����(1) ����(2) ��(3) ����(4): ";
//        cin >> myTurn;
//        if (myTurn == 4) {
//            cout << "����" << endl;
//            break;
//        }
//        else if (myTurn == com) {
//            cout << "****** ��� ******" << endl;
//            cout << "���º�" << endl;
//            cout << "��ǻ��(" << text_out(com) << ") : ���(" << text_out(myTurn) << ")" << endl << endl;
//        }
//        else if ((myTurn == 1 && com == 3) || (myTurn == 2 && com == 1) || (myTurn == 3 && com == 2)) {
//            cout << "****** ��� ******" << endl;
//            cout << "����� �̰���ϴ�." << endl;
//            cout << "��ǻ��(" << text_out(com) << ") : ���(" << text_out(myTurn) << ")" << endl << endl;
//        }
//        else {
//            cout << "****** ��� ******" << endl;
//            cout << "����� �����ϴ�." << endl;
//            cout << "��ǻ��(" << text_out(com) << ") : ���(" << text_out(myTurn) << ")" << endl << endl;
//        }
//        count++;
//    }
//
//
//    return 0;
//}