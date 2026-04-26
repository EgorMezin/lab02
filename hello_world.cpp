#include <iostream>
#include <string>

//основная функция программы
int main() {
  //переменная для имени пользователя
  std::string name;

  //запрос имени пользователя
  std::cout<<"Enter your name: ";
  std::cin>>name;

  //вывод приветствия с именем пользователя
  std::cout<<"Hello world from "<< name <<endl;
}
