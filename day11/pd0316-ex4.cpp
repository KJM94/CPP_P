//#include <iostream>
//#include <string>
//#include <ctime>
//
//using namespace std;
//
//int main()
//{
//	
//	int player = 0;
//	int Count = 1;
//
//	
//	while (1)
//	{
//		srand((unsigned int)time(0));
//
//		int com = rand() % 3 + 1;
//
//		cout << "게임 #" << Count << " 가위(1)바위(2)보(3)종료(4) : ";
//		cin >> player;
//		
//		Count++;
//		if (player == 4)
//		{
//			cout << "종료합니다." << endl;
//			break;
//		}
//		else if (player == com)
//		{
//			cout << "비겼습니다." << endl;
//			cout << com << " : " << player << endl;
//		}
//		else if (player < com)
//		{
//			cout << "졌습니다." << endl;
//			cout << com << " : " << player << endl;
//		}
//		else if (player > com)
//		{
//			cout << "이겼습니다." << endl;
//			cout << com << " : " << player << endl;
//		}
//		
//
//	
//	}
//		
//	
//
//	return 0;
//}