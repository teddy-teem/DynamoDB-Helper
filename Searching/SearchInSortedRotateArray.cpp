#include <bits/stdc++.h>
#define F_READ freopen("input.txt", "r", stdin);
#define F_WRITE freopen("output.txt", "w", stdout);
#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)
#define PB push_back
#define F first
#define S second
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define I_REP(i, a, b) for (int i = a; i >= b; i--)
#define ISEVEN(a) (a & 1 ? 0 : 1)
#define PRINT_2D(r, c, v)       \
  for (int i = 0; i < r; i++)   \
  {                             \
    for (int j = 0; j < c; j++) \
      cout << v[i][j] << " ";   \
    cout << endl;               \
  }
#define BIT_NO_OF_1(a) (__builtin_popcount(a))
#define BIT_NO_OF_LEADING_0(a) (__builtin_clz(a))
#define BIT_NO_OF_TRAILING_0(a) (__builtin_ctz(a))
#define STRING_TO_INT(v, s)          \
  for (int i = 0; i < s.size(); i++) \
    v.PB(s[i] - '0');
#define INT_TO_STRING(a, x)          \
  for (int i = 0; i < x.size(); i++) \
    a += x[i] + '0';
#define GCD(m, n) __gcd(m, n)
#define INIT_2D_VEC(r, c, v, vec) vec2d vec(r, vi(c, v));
#define INIT_VEC(n, v, vec) vi vec(n, v);

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vec2d;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, string> pss;
typedef pair<string, int> psi;
typedef map<int, int> mii;
typedef hash<string> stringHash;

int searchInRotatedArray(vi & nums, int X) {
    int left = 0, right=nums.size();
    while(left<right) {
        int mid = left + (right - left)/2;
        if(nums[mid]==X) return mid;

        if(nums[left]<=nums[mid]) { // `left` to `mid` is sorted
            if(nums[left]<=X && X<nums[mid]) {
                
            }
        }

    }
    return -1;

}

int main()
{
  IOS;
  vector<int> v = {1,2,2,2,3,6,9,8, 0,-1,-6,-8,-9};
  cout<<"Index: "<<searchInRotatedArray(v, 2)<<endl;
  
  return 0;
}