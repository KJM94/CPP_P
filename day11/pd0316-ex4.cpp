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
//		cout << "���� #" << Count << " ����(1)����(2)��(3)����(4) : ";
//		cin >> player;
//		
//		Count++;
//		if (player == 4)
//		{
//			cout << "�����մϴ�." << endl;
//			break;
//		}
//		else if (player == com)
//		{
//			cout << "�����ϴ�." << endl;
//			cout << com << " : " << player << endl;
//		}
//		else if (player < com)
//		{
//			cout << "�����ϴ�." << endl;
//			cout << com << " : " << player << endl;
//		}
//		else if (player > com)
//		{
//			cout << "�̰���ϴ�." << endl;
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