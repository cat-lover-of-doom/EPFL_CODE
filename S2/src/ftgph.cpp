#include <iostream>
#include <thread>
#include <chrono>

int main(){
  std::string msg = "PH ferme ta grosse gueule. UwU!";
  int i;
  for (i=0;msg[i] != 0;i++){
    int k = ' ';
    while (k <= 'z') {
      std::cout<< static_cast<char>(k) << std::flush;
      if (msg[i] == k) {
        break;
      }
      std::this_thread::sleep_for(std::chrono::milliseconds(30/std::min(30,(i+1))));
      std::cout << "\b";
      k++;
    }
  }
  std::cout << std::endl;
  return 0;
}
