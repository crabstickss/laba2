#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string s;//объявление переменной строки s
    cout << "Enter the characters: " <<endl;
    cin >> s;
    stack<char> st; //объявление стека символов типа char
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') { //проверка символа на соответствие открывающим скобкам
            st.push(s[i]); //добавление символа в стек
        } else {
            if (st.empty()) { //Если стек пустой, то последовательность неправильная
                cout << "No";
                return 0;
            }
            if (s[i] == ')' && st.top() == '(') { //  Проверяем, совпадает ли закрывающая скобка с открывающей
                // самой верхней из стека
                st.pop(); //Удаляем открывающую скобку
            } else if (s[i] == ']' && st.top() == '[') {
                st.pop();
            } else if (s[i] == '}' && st.top() == '{') {
                st.pop();
            } else {
                cout << "No";
                return 0;
            }
        }
    }
    if (st.empty()) { //Проверяем пуст ли стек, то есть все правильно
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
