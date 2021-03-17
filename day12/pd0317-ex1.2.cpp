#include <iostream>
#include <string>
#include <random>

using namespace std;

int main()
{
    int Coin;

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> dis(0, 1);
    string com_out;

    while (1)
    {
        int com = dis(gen);

        cout << "동전던지기 시작(1) 종료(0)" << endl;
        cin >> Coin;

        if (Coin == 0)
        {
            cout << "종료" << endl;
            break;
        }

        else if (Coin == 1)
        {
            // 시작
            
            if (com == 0)
            {
                cout << "뒷면" << endl;
            }
            else if (com == 1)
            {
                cout << "앞면" << endl;
            }
            
        }
        else
        {
            cout << "0과 1의 숫자로 다시 시도하세요." << endl;
        }
    }

    return 0;
}
