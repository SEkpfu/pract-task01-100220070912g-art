//#include <iostream>
//using namespace std;
//
//
//int MinInd(float a[], int size) 
//{
//    float min_val = a[0];
//    int minind = 0;
//    for (int i = 1; i < size; i++) 
//    {
//        if (a[i] < min_val) 
//        {
//            min_val = a[i];
//            minind = i;
//        }
//    }
//    return minind + 1;
//}
//void MaxEl(float a[], int size, float& maxValue, int& maxIndex) 
//{
//    maxValue = a[0];
//    maxIndex = 0;
//    for (int i = 1; i < size; i++) 
//    {
//        if (a[i] > maxValue) 
//        {
//            maxValue = a[i];
//            maxIndex = i;
//        }
//    }
//    maxIndex += 1;
//}
//int countBolsh(float arr[], int size, float value) 
//{
//    int count = 0;
//    for (int i = 0; i < size; i++) 
//    {
//        if (arr[i] > value) 
//        {
//            count++;
//        }
//    }
//    return count;
//}
//float sumInd(float a[], int size) 
//{
//    float sum = 0;
//    for (int i = 0; i < size; i++) 
//    {
//        sum += a[i];
//    }
//    return sum;
//}
//
//
//int main() {
//    setlocale(LC_ALL, "");
//    int n;
//    cout << "������� ���������� ����������: ";
//    cin >> n;
//    float* h = new float[n];   
//    float* r = new float[n];   
//    float* s = new float[n];   
//    float* nal = new float[n]; 
//    float* ost = new float[n]; 
//
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
//    }
//    cout << "\n����������:" << endl;
//    cout << "����� ��������� � ����������� ���������: " << MinInd(s, n) << endl;
//    float maxSalary;
//    int maxIndex;
//    MaxEl(s, n, maxSalary, maxIndex);
//    cout << "������������ ��������: " << maxSalary << " (�������� �" << maxIndex << ")" << endl;
//    cout << "���������� ���������� � ��������� �� ���� ����� 50000 ���: "
//        << countBolsh(ost, n, 50000) << endl;
//    cout << "����� ����� �������: " << sumInd(s, n) << endl;
//    cout << "����� ����� �������: " << sumInd(nal, n) << endl;
//    cout << "������� �/� � �������: " << sumInd(s, n) / n << endl;
//    cout << "������ ���������� � ��������� �� ���� ����� 50000 ���: ";
//    for (int i = 0; i < n; i++) 
//    {
//        if (ost[i] > 50000) 
//        {
//            cout << i + 1 << " ";
//        }
//    }
//    cout << endl;
//    delete[] h;
//    delete[] r;
//    delete[] s;
//    delete[] nal;
//    delete[] ost;
//    return 0;
//}