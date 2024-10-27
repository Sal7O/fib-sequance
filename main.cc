#include "fib.h"
#include <iostream>
#include <cstring>
int main() {
   ll n; std::cin >> n;
   std::cout << "1.rec\n2.dp\n3.mat\n";
   int c; std::cin>>c;
   switch(c) {
      case 1:
         std::cout << Fibonacci::rec(n);
         break;
      case 2:
         memset(mem, -1, sizeof(mem));
         std::cout << Fibonacci::dp(n);
         break;
      case 3:
         std::cout << Fibonacci::mat(n);
         break;
      default:
         std::cerr<< "Invalid option";
   } 
}