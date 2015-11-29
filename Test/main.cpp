
#include <iostream>
#include <arpa/inet.h>


unsigned long toLongIPAddr(char* ip, int index)
{
  int dot_index[3];
  int k = 0;
  for (int i = 0; i < index; i++) {
    if (ip[i] != '.') continue;
    dot_index[k] = i;
    k++;
  }
  k = 0;
  unsigned long result[4];
  int i = 0;
  while (i != 4) {
    switch (i) {
    case 0:
      result[i] = std::stoi(&ip[0]);
      result[i] = result[i] * 256 * 256 * 256;
      i++;
    break;
    case 1:
      result[i] = std::stoi(&ip[dot_index[k] + 1]);
      result[i] = result[i] * 256 * 256;
      k++;
      i++;
    break;
    case 2:
      result[i] = std::stoi(&ip[dot_index[k] + 1]);
      result[i] = result[i] * 256;
      k++;
      i++;
    break;
    case 3:
      result[i] = std::stoi(&ip[dot_index[k] + 1]);
      k++;
      i++;
    break;
    }
  }
  return result[0] + result[1] + result[2] + result[3];
}

int main()
{
  char address[] = "192.168.1.1";
  
  std::cout << toLongIPAddr(address, sizeof(address)) << std::endl;
  
  #include <arpa/inet.h>
  std::cout << inet_addr("127.0.0.1") << std::endl;
  
  return 0;
}
