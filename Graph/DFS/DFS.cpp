#include <bits/stdc++.h>
#define F_READ freopen("input.txt", "r", stdin);
#define F_WRITE freopen("output.txt", "w", stdout);
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
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

int visited[10000];

void dfs(int root, vector<vi>& v){
    visited[root]=1;
    cout<<root<<" ";
    for(auto i:v[root]){
            if(visited[i]==0)
            {
                dfs(i, v);
            }
    }
}

int main()
{
    IOS;
    int node, edge;
    cin>>node>>edge;
    vector<vi> v(node+1); //Alway take 1 extra size else will get runtime error: 
    for(int i=0; i<edge; i++) {
        int a, b;
        cin>>a>>b;
        v[a].push_back(b);
    }
    
    dfs(1, v);
    return 0;
}