#include "fib.h"
ll mem[(int)1e7 + 9];
ll Fibonacci::rec(ll n) {
   return !n?0:!(n-1)?1:rec(n-1)+rec(n-2);
}
ll Fibonacci::dp(ll n) {
   ll &ret=mem[n];
   return ret!=-1?ret:ret = (!n?0:!(n-1)?1:dp(n-1)+dp(n-2));
}
ll Fibonacci::mat(ll n){
   if(!n)return 0;
   vv m={{1, 1}, {1, 0}};
   power(m, n - 1);
   return m[0][0];
}
void Fibonacci::power(vv &m, ll n) {
   if(n<=1)return;
   power(m, n/2);
   multiply(m, m);
   if(n%2) multiply(m, {{1, 1}, {1, 0}});
}
void Fibonacci::multiply(vv &m1, vv m2) {
   vv m3 = vv(2, std::vector<ll>(2));
   m3[0][0] = m1[0][0]*m2[0][0]+m1[0][1]*m2[1][0];
   m3[0][1] = m1[0][0]*m2[0][1]+m1[0][1]*m2[1][1];
   m3[1][0] = m1[1][0]*m2[0][0]+m1[1][1]*m2[1][0];
   m3[1][1] = m1[1][0]*m2[0][1]+m1[1][1]*m2[1][1];
   m1 = m3;
}