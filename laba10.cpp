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
//    cout << "¬ведите ставки дл€ " << works << " работников:" << endl;
//    for (int i = 0; i < works; i++)
//    {
//        cout << "–аботник " << i + 1 << ": ";
//        cin >> r[i];
//    }
//    cout << "\n ол-во часов и премий за " << months << " мес€цев:" << endl;
//    for (int i = 0; i < works; i++)
//    {
//        cout << "–аботник " << i + 1 << ":" << endl;
//        for (int j = 0; j < months; j++)
//        {
//            cout << "  ћес€ц " << j + 1 << " - часы: ";
//            cin >> h[i][j];
//            cout << "  ћес€ц " << j + 1 << " - преми€ (%): ";
//            cin >> prem[i][j];
//            calcSalary(h[i][j], r[i], prem[i][j],
//                salary[i][j], nal[i][j], ost[i][j]);
//        }
//    }
//    cout << "\n–≈«”Ћ№“ј“џ:" << endl;
//
//    cout << "1. ѕервый работник во втором мес€це получил на руки: "
//        << ost[0][1] << " руб." << endl;
//    float totnal_3 = 0;
//    for (int j = 0; j < months; j++)
//    {
//        totnal_3 += nal[2][j];
//    }
//
//    cout << "2. ќбща€ сумма налога у третьего работника: " << totnal_3 << " руб." << endl;
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
//    cout << "3. ¬ третьем мес€це больше всех заработал работник є" << best_worker + 1 << endl;
//
//    float totbrig = 0;
//    for (int i = 0; i < works; i++)
//    {
//        for (int j = 0; j < months; j++)
//        {
//            totbrig += salary[i][j];
//        }
//    }
//    cout << "4. ќбща€ сумма, заработанна€ бригадой: " << totbrig << " руб." << endl;
//
//    return 0;
//}