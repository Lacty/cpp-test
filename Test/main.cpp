
#include <iostream>
#include <thread>


void task1() {
  std::cout << "->task1" << std::endl;
  std::cout << "<-task1" << std::endl;
}

void task2() {
  std::string str;
  std::cout << "->task2" << std::endl;
  std::cin >> str;
  std::cout << str << std::endl;
  std::cout << "<-task2" << std::endl;
}

int main()
{
  std::thread th1(&task1);
  std::thread th2(&task2);
  th2.join();
  th1.join();
  return 0;
}
