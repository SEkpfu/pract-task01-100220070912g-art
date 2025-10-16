//#include <iostream>
//#include <string>
//#include <windows.h>
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "");
//    SetConsoleOutputCP(CP_UTF8);
//    SetConsoleCP(CP_UTF8);
//    int h1, h2;
//    double s1, s2;
//    string surname1, surname2;
//
//
//    //1
//    cout << "Фамилия первого работника: ";
//    cin >> surname1;
//    cout << "Кол-во часов первого работника: ";
//    cin >> h1;
//    cout << "Ставка первого работника: ";
//    cin >> s1;
//
//    //2
//    cout << "Фамилия второго работника: ";
//    cin >> surname2;
//    cout << "Кол-во часов второго работника: ";
//    cin >> h2;
//    cout << "Ставка второго работника: ";
//    cin >> s2;
//
//    // z/p
//    double sal1 = h1 * s1; 
//    double sal2 = h2 * s2;
//    double tot = sal1 + sal2;
//
//    // nal
//    double nal1 = sal1 * 0.13;
//    double nal2 = sal2 * 0.13;
//    double osts1 = sal1 - nal1;
//    double osts2 = sal2 - nal2;
//
//    // ><
//    if (sal1 > sal2)
//    {
//        cout << "Первый заработал больше" << endl;
//    }
//    else if (sal2 > sal1)
//    {
//        cout << "Второй заработал больше" << endl;
//    }
//    else 
//    {
//        cout << "Оба заработали одинаково" << endl;
//    }
//
//    cout << "Общая сумма: " << tot << endl;
//    cout << "З/п < 1000 руб: ";
//    if (osts1 < 1000) 
//    {
//        cout << surname1 << " ";
//    }
//    if (osts2 < 1000) 
//    {
//        cout << surname2 << " ";
//    }
//    cout << endl;
//    cout << "Работники с налогом более 50 руб: "; 
//    if (nal1 > 50)
//    {
//        cout << surname1[10] << "-" << surname1[surname1.length() - 1] << " ";
//    }
//    if (nal2 > 50)
//    {
//        cout << surname2[10] << "-" << surname2[surname2.length() - 1] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

