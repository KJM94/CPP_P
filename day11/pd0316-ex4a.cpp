//#include <iostream>
//#include <string>
//#include <random>
//using namespace std;
//
//string text_out(int num)
//{
//    if (num == 1)
//        return "가위";
//    else if (num == 2)
//        return "바위";
//    else
//        return "보";
//}
//
//int main()
//{
//    cout << "****************\n* 가위바위보 게임 *\n****************\n\n";
//    int count = 1;
//    int myTurn;
//    //랜덤값 생성
//    random_device rd;
//    mt19937 gen(rd());
//    //랜덤값 1~3까지 생성
//    uniform_int_distribution<int> dis(1, 3);
//    string com_out;
//
//    while (true) {
//        int com = dis(gen);
//
//        cout << "게임 #" << count << "가위(1) 바위(2) 보(3) 종료(4): ";
//        cin >> myTurn;
//        if (myTurn == 4) {
//            cout << "종료" << endl;
//            break;
//        }
//        else if (myTurn == com) {
//            cout << "****** 결과 ******" << endl;
//            cout << "무승부" << endl;
//            cout << "컴퓨터(" << text_out(com) << ") : 당신(" << text_out(myTurn) << ")" << endl << endl;
//        }
//        else if ((myTurn == 1 && com == 3) || (myTurn == 2 && com == 1) || (myTurn == 3 && com == 2)) {
//            cout << "****** 결과 ******" << endl;
//            cout << "당신이 이겼습니다." << endl;
//            cout << "컴퓨터(" << text_out(com) << ") : 당신(" << text_out(myTurn) << ")" << endl << endl;
//        }
//        else {
//            cout << "****** 결과 ******" << endl;
//            cout << "당신이 졌습니다." << endl;
//            cout << "컴퓨터(" << text_out(com) << ") : 당신(" << text_out(myTurn) << ")" << endl << endl;
//        }
//        count++;
//    }
//
//
//    return 0;
//}