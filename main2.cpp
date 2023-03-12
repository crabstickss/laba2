#include <iostream>
#include <set>


using namespace std;


int main()
{
    int n;
    cout << "Enter the count: "<< endl;
    cin >> n;

    set<int> s;//Объявление множества s типа int
    cout << "Enter numbers: "<< endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x); // // Добавление значения переменной x в множество s
    }
    cout << s.size(); // Вывод размера множества s на экран
    return 0;
}

