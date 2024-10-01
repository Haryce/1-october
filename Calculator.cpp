#include <iostream>
using namespace std;

int main() {
    float a, b , res; //переменные 
    cout <<"enter first digit: \n";
    cin >> a;
    cout <<"enter second digit: \n";   
    cin >> b;
    
    //реализация меню
    char key;
    cout << "\n select operator: ";
    cout << "\n + \n";
    cout << "\n - \n";
    cout << "\n / \n";
    cout << "\n * \n";
    
    
    cin >> key; //ввод оператора
    //реализация свитча
    switch(key){
      case '+':
      res = a + b;
      cout << "a + b = " << res;
      break; //остановка
      case '-':
      res = a - b;
      cout << "a - b = " << res;
      break; //остановка
      case '/':
      res = a / b;
      cout << "a / b = " << res;
      break; //остановка
      case '*':
      res = a * b;
      cout << "a * b = " << res;
      break; //остановка

    }
    return 0;
}