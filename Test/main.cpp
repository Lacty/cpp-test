
#include <iostream>

// 1バイト8ビット

enum {
  MouseLeft  = 1 << 0,
  MouseRight = 1 << 1,
  MouseUp    = 1 << 2,
  MouseDown  = 1 << 3
};

int main()
{
  unsigned char button = 0;
  
  std::cout << (button & MouseLeft) << std::endl;
  
  button = MouseLeft;
  std::cout << (button & MouseLeft) << std::endl;
  
  button = ~MouseLeft;
  std::cout << (button & MouseLeft) << std::endl;
  
  
  button = MouseRight;
  std::cout << (button & MouseLeft) << std::endl;
  std::cout << (button & MouseRight) << std::endl;
  
  button = ~MouseRight;
  std::cout << (button & MouseLeft) << std::endl;
  std::cout << (button & MouseRight) << std::endl;
}
