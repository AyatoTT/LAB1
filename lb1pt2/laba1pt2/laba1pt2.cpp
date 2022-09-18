// laba1pt2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
int sravnint(int str1, int str2) {
    if (str1 != str2) {
        return 0;
    }
    return 1;
}
int sravnstr(char str1[20], char str2[20]) {
    for (int i = 0; i < 20; i++) {
        if (str1[i] != str2[i]) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");
    struct student
    {
        char name[20], surname[20], facult[20];
        int nomzach, age;
    } students[5];
    int ag;
    char fam[20], nam[20], flag = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Введите фамилию студента: ";
        cin >> students[i].surname;
        cout << "Введите имя студента: ";
        cin >> students[i].name;
        cout << "Введите факультет: ";
        cin >> students[i].facult;
        cout << "Введите номер зачётки: ";
        cin >> students[i].nomzach;
        cout << "Введите возраст: ";
        cin >> students[i].age;
        cout << endl;
    }
    cout << endl << "Введите фамилию студента для поиска: ";
    cin >> fam;
    cout << endl << "Введите имя студента для поиска: ";
    cin >> nam;
    cout << endl << "Введите возраст студента для поиска: ";
    cin >> ag;
    for (int i = 0; i < 5; i++) {
        if (sravnstr(students[i].name, nam) && sravnstr(students[i].surname, fam) && sravnint(students[i].age, ag)) {
            cout << endl << students[i].surname << " " << students[i].name << " " << students[i].facult << " " << students[i].nomzach << " " << students[i].age;
            flag = 1;
        }
    }
    if (flag == 0) {
        cout << "Ничего не найдено";
    }
}
