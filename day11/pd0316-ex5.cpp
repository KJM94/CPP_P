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
//		return "��";
//	}
//	else if (num == 1)
//	{
//		return "��";
//	}
//	else if (num == 2)
//	{
//		return "��";
//	}
//	else if (num == 3)
//	{
//		return "��";
//	}
//	else if (num == 4)
//	{
//		return "��";
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
//		cout << "���� #" << Count << " ������ ������ �����մϴ�.����(1)����(0) : ";
//		cin >> player;
//
//		Count++;
//
//		if (player == 0)
//		{
//			cout << "����" << endl;
//			break;
//		}
//		
//		else if(player == 1)
//		{
//			// ����
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
//			cout << "0�� 1 �� �� �ϳ��� ���ڸ� �Է����ּ���." << endl;
//		}
//
//		
//		
//	}
//
//	return 0;
//}