//#include <iostream>
//#include <string>
//#include <random>
//
//using namespace std;
//
//string text_temp(int num)
//{
//	if (num == 0)
//	{
//		return "윷";
//	}
//	else if (num == 1)
//	{
//		return "도";
//	}
//	else if (num == 2)
//	{
//		return "개";
//	}
//	else if (num == 3)
//	{
//		return "걸";
//	}
//	else if (num == 4)
//	{
//		return "모";
//	}
//}
//
//int main()
//{
//	int Count = 1;
//	int player;
//
//	random_device rd;
//	mt19937 gen(rd());
//
//	uniform_int_distribution<int> dis(0, 4);
//	string com_out;
//
//	while (1)
//	{
//		int com = dis(gen);
//
//		cout << "게임 #" << Count << " 윷놀이 게임을 시작합니다.시작(1)종료(0) : ";
//		cin >> player;
//
//		Count++;
//
//		if (player == 0)
//		{
//			cout << "종료" << endl;
//			break;
//		}
//		
//		else if(player == 1)
//		{
//			// 시작
//			if (com == 0)
//			{
//				cout << "0 0 0 0 " << text_temp(com) << endl;
//			}
//
//			else if (com == 1)
//			{
//				cout << "0 0 0 1 " << text_temp(com) << endl;
//			}
//
//			else if (com == 2)
//			{
//				cout << "0 0 1 1 " << text_temp(com) << endl;
//			}
//
//			else if (com == 3)
//			{
//				cout << "0 1 1 1 " << text_temp(com) << endl;
//			}
//
//			else if (com == 4)
//			{
//				cout << "1 1 1 1 " << text_temp(com) << endl;
//			}
//		}
//
//		else
//		{
//			cout << "0과 1 둘 중 하나의 숫자를 입력해주세요." << endl;
//		}
//
//		
//		
//	}
//
//	return 0;
//}