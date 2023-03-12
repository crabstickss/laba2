#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    set<string> s; //создание контейнера строк
    string str; //переменная типа string
    char op; //переменная типа har
    cout << "Enter the characters: " <<endl;
    while (cin >> op >> str) //Цикл, который работает пока вводятся данные
    {
        if (op == '+') //Если символ +, то сстрока добавляется во множество
            s.insert(str);
        else if (op == '-') //удаление строки из множетсва
            s.erase(str);
        else if (op == '?') //Проверка принадлежности строки ко множеству
            if (s.count(str)) { // Функция, которая сравнивает вводимую строку с каждым элементом множества и
                // возвращает значение
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        else if (op == '#')//Завершение цикла
            break;
    }
    return 0;
}