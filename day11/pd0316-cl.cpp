#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "이름을 입력하세요 : ";
    string name;
    cin >> name;

    cout << "공백의 수 입력 : ";
    int padding;
    cin >> padding;

    const string greeting = "안녕, " + name + "!";
    int rows = padding * 2 + 3;
    // Method #1

    const string greeting_space(greeting.size(), ' ');
    const string padding_space(padding, ' ');
    // 3 종류의 라인 생성
    // 첫번째 : 양끝만 별표, 나머지 공백
    const string space_line = "*" + padding_space + greeting_space + padding_space + "*"; // *~~~~~*
    // 두번째 : 양끝별표+공백+안녕 출력
    const string greeting_line = "*" + padding_space + greeting + padding_space + "*"; // *~~안녕~~*
    // 세번째 : 별표만 출력
    const string stars(greeting_line.size(), '*');

    for (int i = 0; i < rows; i++)
    {
        if (i == 0 || i == rows - 1)
        {
            cout << stars << endl;
        }
        else if (i == padding + 1)
        {
            cout << greeting_line << endl;
        }

        else
        {
            cout << space_line << endl;
        }
    }

    // Method #2

    /*int cols = greeting.size() + 2 * padding + 2;

    for (int i = 0; i < rows; i++)
    {
        int j = 0;
        
        while (j < cols)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols)
            {
                cout << "*";
                j++;
            }
            else if (i == padding + 1 && j == padding + 1)
            {
                cout << greeting;
                
                j += greeting.size();
            }
            else
            {
                cout << "*";
                j++;
            }
        }
    }*/

    
    
    
    return 0;
}
