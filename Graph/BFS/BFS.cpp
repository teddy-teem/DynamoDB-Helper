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

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, string> pss;
typedef pair<string, int> psi;
typedef map<int, int> mii;

int col[30000], dist[30000];

void bfs(int r, vi v[])
{
    queue<int> q;
    q.push(r);
    dist[r] = 0;
    col[r] = 1;
    while (!q.empty())
    {
        int n = q.front();
        q.pop();
        cout << n << endl;
        for (auto i : v[n])
        {
            if (col[i] == 0)
            {
                q.push(i);
                col[i] = 1;
            }
        }
    }
}

int main()
{
    IOS;
    F_READ;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v[30000];
        for (int i = 0; i < n - 1; i++)
        {
            int x, y;
            cin >> x >> y;
            v[x].PB(y);
            v[y].PB(x);
        }
        bfs(0, v);
        memset(col, 0, sizeof(col));
        memset(dist, 0, sizeof(dist));
    }

    return 0;
}