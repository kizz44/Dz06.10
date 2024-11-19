#include <iostream>
#include <Windows.h>
using namespace std;


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;
    
    //������� 1.
    
    cout << "������� ������������ �����: ";
    cin >> number;

    if (number < 100000, number > 999999) {
        cout << "������: ������� �� ������������ �����!" << endl;
        return 1;
    }

    int sum1 = (number / 100000) + (number / 10000 % 10) + (number / 1000 % 10);
    int sum2 = (number / 100 % 10) + (number / 10 % 10) + (number % 10);

    if (sum1 == sum2) {
        cout << "����� ����������!" << endl;
    }
    else {
        cout << "����� �� �������� ����������." << endl;
    }

    //������� 2
    
    int number1;
    cout << "������� ������������� �����: ";
    cin >> number1;

    if (number1 < 1000 || number1 > 9999) {
        cout << "������: ������� �� ������������� �����!" << endl;
        return 1;
    }

    int chisl = number1 / 1000;
    int chisl1 = (number1 / 100) % 10;
    int chisl2 = (number1 / 10) % 10;
    int chisl3 = number1 % 10;

    int swap = chisl1 * 1000 + chisl * 100 + chisl3 * 10 + chisl2;

    cout << "����� ����� ������������: " << swap << endl;

    //������� 3

    int numbers[7];
    cout << "������� 7 ����� ����� �� ������: ";

    for (int i = 0; i < 7; i++) {
        cin >> numbers[i];
    }

    int maxNumber = numbers[0];
    for (int i = 1; i < 7; i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    cout << "������������ �����: " << maxNumber << endl;



    return 0;
}
