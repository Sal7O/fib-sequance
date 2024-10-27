#include <vector>
#define vv std::vector<std::vector<ll>>
#define ll long long
extern ll mem[(int)1e7+9];
class Fibonacci {
   static void power(vv &, ll);
   static void multiply(vv &, vv);
public:
   static ll rec(ll);
   static ll dp(ll);
   static ll mat(ll);
};