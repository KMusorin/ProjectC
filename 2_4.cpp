//����������� 10 ���������������� ����������� ����� � ������������ �������, ������� � ������������� ����� N
#include <iostream>
using namespace std;

int main(){
    int N, count;
    cout << "Vvedi N:" << endl;
    cin >> N;
    while (count < 10){
        cout << ++N << endl;
        count++;
    }
}