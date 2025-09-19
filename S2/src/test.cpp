#include <iostream>
#include <stdio.h>

int sum(int a, int b){
  return a+b;
}

void hello(int(*Psum)(int,int)){
  int a, b;
  std::cin>> a >> b;
  std::cout << Psum(a, b);
}

int main(){
  int(*Psum)(int,int) = &sum;
  std::cout << "Hello World!" << std::endl;
  hello(Psum);
  return 0;
}
