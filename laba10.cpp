//#include <iostream>
//using namespace std;
//
//
//void calcSalary(float h, float r, float b, float& sal, float& nal, float& ost)
//{
//    sal = (h * r) * (1 + (b / 100));
//    nal = sal * 0.13;
//    ost = sal * 0.87;
//}
//
//int main()
//{
//    setlocale(LC_ALL, "");
//
//    const int works = 4;    
//    const int months = 3;   
//
//
//    float r[works];                    
//    float h[works][months];            
//    float prem[works][months];           
//    float salary[works][months];         
//    float nal[works][months];           
//    float ost[works][months];         
//
//    cout << "������� ������ ��� " << works << " ����������:" << endl;
//    for (int i = 0; i < works; i++)
//    {
//        cout << "�������� " << i + 1 << ": ";
//        cin >> r[i];
//    }
//    cout << "\n���-�� ����� � ������ �� " << months << " �������:" << endl;
//    for (int i = 0; i < works; i++)
//    {
//        cout << "�������� " << i + 1 << ":" << endl;
//        for (int j = 0; j < months; j++)
//        {
//            cout << "  ����� " << j + 1 << " - ����: ";
//            cin >> h[i][j];
//            cout << "  ����� " << j + 1 << " - ������ (%): ";
//            cin >> prem[i][j];
//            calcSalary(h[i][j], r[i], prem[i][j],
//                salary[i][j], nal[i][j], ost[i][j]);
//        }
//    }
//    cout << "\n����������:" << endl;
//
//    cout << "1. ������ �������� �� ������ ������ ������� �� ����: "
//        << ost[0][1] << " ���." << endl;
//    float totnal_3 = 0;
//    for (int j = 0; j < months; j++)
//    {
//        totnal_3 += nal[2][j];
//    }
//
//    cout << "2. ����� ����� ������ � �������� ���������: " << totnal_3 << " ���." << endl;
//    float maxsalary_3 = salary[0][2];
//    int best_worker = 0;
//    for (int i = 1; i < works; i++)
//    {
//        if (salary[i][2] > maxsalary_3)
//        {
//            maxsalary_3 = salary[i][2];
//            best_worker = i;
//        }
//    }
//    cout << "3. � ������� ������ ������ ���� ��������� �������� �" << best_worker + 1 << endl;
//
//    float totbrig = 0;
//    for (int i = 0; i < works; i++)
//    {
//        for (int j = 0; j < months; j++)
//        {
//            totbrig += salary[i][j];
//        }
//    }
//    cout << "4. ����� �����, ������������ ��������: " << totbrig << " ���." << endl;
//
//    return 0;
//}