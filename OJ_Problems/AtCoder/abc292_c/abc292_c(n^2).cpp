#include <bits/stdc++.h>
#define F_READ freopen("input.txt", "r", stdin);
#define F_WRITE freopen("output.txt", "w", stdout);
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define PB push_back
#define F first
#define S second
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define I_REP(i, a, b) for (int i = a; i >= b; i--)
#define ISEVEN(a) (a & 1 ? 0 : 1)
#define PRINT_2D(r, c, v)           \
    for (int i = 0; i < r; i++)     \
    {                               \
        for (int j = 0; j < c; j++) \
            cout << v[i][j] << " "; \
        cout << endl;               \
    }
#define BIT_NO_OF_1(a) (__builtin_popcount(a))
#define BIT_NO_OF_LEADING_0(a) (__builtin_clz(a))
#define BIT_NO_OF_TRAILING_0(a) (__builtin_ctz(a))
#define STRING_TO_INT(v, s)            \
    for (int i = 0; i < s.size(); i++) \
        v.PB(s[i] - '0');
#define INT_TO_STRING(a, x)            \
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

int main()
{
    IOS;
    int N, res = 0;
    cin >> N;
    REP(i, 1, N)
    {
        int X=i, Y=N-i,x=0,y=0;
        // cout<<"X="<<X<<", Y="<<Y<<endl;
        REP(j, 1, X) {
            if(X%j ==0) {
                x++;
                // cout<<"(X)"<<X/j<<" j="<<j<<endl;
            }
        }

        REP(j, 1, Y) {
            if(Y%j ==0) y++;
        }
        res += x*y;
    }
    cout << res << endl;
    return 0;
}


// Step-1: Find two number which N = X+Y;  We can do it using X=i, Y=N-i in o(N); where i=1,2,3,4,.....N;
// Step-2: Calculate X, Y separately which X=ab, Y=cd;
//          Step-1: REP(j, 1, X), if(X%j) count x_res++,  here a=X/j && b=j ; so X=ab found x_res times, 
//          Step-2: Same for Y,   here c=Y/j && d=j ; so Y=cd found y_res times,
// Steps-3: resul+ = x_res*y_res; Bcz, we can combine ab+cd in x_res*y_res way; This is for i; so for each i, we will get x_res*y_res way that why we continously sum the result;