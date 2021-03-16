//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string str;
//
//    cout << "문자열 입력 : "; cin >> str;
//
//    int len = str.size();
//    bool isAlphabet = true;
//
//    string notAlphabet = "";
//
//    // 한글자씩 알파벳 비교검사
//    for (int i = 0; i < len; i++)
//    {
//        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
//        {
//            isAlphabet = false;
//            notAlphabet = notAlphabet + str[i];
//        }
//
//        // 알파벳 : A~Z, A(0x41, 65)~Z(0x5A, 90)
//        // a~z(0x61~0x7A, 97~122)
//    }
//
//    if (isAlphabet == true)
//    {
//        cout << "문자열 " << str << "의 길이 : " << len << endl;
//    }
//    else
//    {
//        cout << "알파벳이 아닌" << notAlphabet << "포함되었습니다." << endl;
//    }
//
//    return 0;
//}
