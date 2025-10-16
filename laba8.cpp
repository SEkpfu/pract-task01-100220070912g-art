//#include <iostream>
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "");
//
//    int n;
//    cout << "Введите количество работников: ";
//    cin >> n;
//    float* h = new float[n];      //h - hours, r - stavka, s - salary, ost - ostatok
//    float* r = new float[n];       
//    float* s = new float[n];    
//    float* nal = new float[n];        
//    float* ost = new float[n]; 
//    float tot = 0; 
//    float totnal = 0;     
//    for (int i = 0; i < n; i++)
//    {
//        cout << "\nРаботник " << i + 1 << endl;
//        cout << "Кол-во часов: ";
//        cin >> h[i];
//        cout << "Ставка в час: ";
//        cin >> r[i];
//
//        s[i] = h[i] * r[i];
//        nal[i] = s[i] * 0.13;
//        ost[i] = s[i] - nal[i];
//
//        tot += s[i];
//        totnal += nal[i];
//    }
//    float minsal = s[0];
//    int minind = 0;
//    for (int i = 1; i < n; i++)     //mim z/p
//    {
//        if (s[i] < minsal)
//        {
//            minsal = s[i];
//            minind = i;
//        }
//    }
//    float maxsal = s[0];
//    int maxind = 0;
//    for (int i = 1; i < n; i++) //max z/p
//    {
//        if (s[i] > maxsal)
//        {
//            maxsal = s[i];
//            maxind = i;
//        }
//    }
//    int count_high_salary = 0;
//    cout << "\nРаботники с зарплатой на руки более 50000 руб.: ";
//    for (int i = 0; i < n; i++)
//    {
//        if (ost[i] > 50000)
//        {
//            count_high_salary++;
//            cout << i + 1 << " ";
//        }
//    }
//    cout << "\nРЕЗУЛЬТАТЫ:" << endl;
//    cout << "Номер работника, получивший меньше всех: " << minind + 1 << endl;
//    cout << "Номер работника, получивший больше всех: " << maxsal << " (работник " << maxind + 1 << ")" << endl;
//    cout << "Количество работников с зарплатой на руки более 50000 руб: " << count_high_salary << endl;
//    cout << "Общая сумма налога, уплаченного бригадой: " << totnal << endl;
//    cout << "Общая сумма зарплат: " << tot << endl;
//    cout << "Средняя зарплата в бригаде: " << tot / n << endl;
//
//
//
//    delete[] h;
//    delete[] r;
//    delete[] s;
//    delete[] nal;
//    delete[] ost;
//
//    return 0;
//}