//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "");
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
//    double s1 = h1 * s1;
//    double s2 = h2 * s2;
//    double tot = s1 + s2;
//
//    // nal
//    double tax1 = s1 * 0.13;
//    double tax2 = s2 * 0.13;
//    double osts1 = s1 - tax1;
//    double osts2 = s2 - tax2;
//
//    // ><
//    if (s1 > s2)
//    {
//        cout << "Первый работник заработал больше" << endl;
//    }
//    else if (s2 > s1)
//    {
//        cout << "Второй работник заработал больше" << endl;
//    }
//    else
//    {
//        cout << "Оба работника заработали одинаково" << endl;
//    }
//
//    cout << "Общая сумма: " << tot << endl;
//}