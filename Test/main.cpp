
#include <iostream>
#include <vector>


int main() {
  std::vector<int> v = {
    0, 1, 2, 3, 4, 5
  };
  
  auto vItr = v.begin();
  std::cout << "first = " << *vItr << std::endl;
  
  vItr = v.end();
  std::cout << "last = " << *(--vItr) <<std::endl;
  
  
  // 出力結果
  // first = 0
  // last = 5
}