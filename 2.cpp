#include <iostream>
#include <string>
using namespace std;

int main() {
  string city1, city2; //создаем 2 строки

  cout << "Введите первый город с соглавной буквы: ";
  cin >> city1;

  cout << "Введите второй город с соглавной буквы: ";
  cin >> city2;

  // Проверяем, не являются ли города Парижем и Берлином
  if ((city1 == "Париж" && city2 == "Берлин") || (city1 == "Берлин" && city2 == "Париж")) {
    cout << "Поездка не подходит повторяет прошлогодную поездку \n";
  } else {
    cout << "Поездка подходит\n";
  }

  return 0;
}
 