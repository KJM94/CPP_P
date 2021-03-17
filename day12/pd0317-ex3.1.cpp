#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "문자열 입력 : ";
    string name;
    cin >> name;

    cout << "공백의 수 : ";
    int padding;
    
    cin >> padding;

    const string hi = "Hello, " + name + "!!!";
    int rows = padding * 2 + 3;

    const string hi_space(hi.size(), ' ');
    const string padding_space(padding, ' ');

    const string space_line = "*" + padding_space + hi_space + padding_space + "*";
    const string hi_line = "*" + padding_space + hi + padding_space + "*";
    const string aster(hi_line.size(), '*');

    for (int i = 0; i < rows; i++)
    {
        if (i == 0 || i == rows - 1)
        {
            cout << aster << endl;
        }
        else if (i == padding + 1)
        {
            cout << hi_line << endl;
        }
        else
        {
            cout << space_line << endl;
        }
    }

    return 0;
}
