//#include <iostream>
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "");
//
//    int n;
//    cout << "������� ���������� ����������: ";
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
//        cout << "\n�������� " << i + 1 << endl;
//        cout << "���-�� �����: ";
//        cin >> h[i];
//        cout << "������ � ���: ";
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
//    cout << "\n��������� � ��������� �� ���� ����� 50000 ���.: ";
//    for (int i = 0; i < n; i++)
//    {
//        if (ost[i] > 50000)
//        {
//            count_high_salary++;
//            cout << i + 1 << " ";
//        }
//    }
//    cout << "\n����������:" << endl;
//    cout << "����� ���������, ���������� ������ ����: " << minind + 1 << endl;
//    cout << "����� ���������, ���������� ������ ����: " << maxsal << " (�������� " << maxind + 1 << ")" << endl;
//    cout << "���������� ���������� � ��������� �� ���� ����� 50000 ���: " << count_high_salary << endl;
//    cout << "����� ����� ������, ����������� ��������: " << totnal << endl;
//    cout << "����� ����� �������: " << tot << endl;
//    cout << "������� �������� � �������: " << tot / n << endl;
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