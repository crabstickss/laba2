#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<int> st;
    string s;
    cout << "Enter data: "<<endl;
    getline(cin, s); //Считываем данные с потока ввода
    int i = 0;
    while (i < s.length()) { //Цикл пока индекс меньше длины строки
        if (s[i] == ' ') { //Если символ равен пробелу, то увеличиваем индекс на 1 и пропускаем итерацию
            i++;
            continue;
        }
        if (s[i] >= '0' && s[i] <= '9') { //Если символ является цифрой, то увеличиваем значение num на число
            // и переходим к следующему символу
            int num = 0;
            while (s[i] >= '0' && s[i] <= '9') {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            st.push(num);// Значение переменной num добавляется в стек
        } else {// Если текущий символ не является цифрой, то извлекается последнее значение из стека и удаляется
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if (s[i] == '+') { // Проверяется, является ли текущий символ плюсом, в стек добавляется сумма
                st.push(a + b);
            } else if (s[i] == '-') {
                st.push(b - a);
            } else if (s[i] == '*') {
                st.push(a * b);
            }
            i++;
        }
    }
    cout << st.top();
    return 0;
}