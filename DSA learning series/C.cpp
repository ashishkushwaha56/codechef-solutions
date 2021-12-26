
/*ASHISH KUSHWAHA*/
/*Consistency is the key*/
/**/

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> veci;
typedef vector<string> vecs;
typedef vector<char> vecc;
typedef pair<int, int> pi;
typedef pair<int, string> pis;
typedef map<int, int> mpii;
typedef map<char, int> mpci;
typedef map<string, int> mpsi;
typedef long long ll;

// #define int long long
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
#define print(x) cout << x
#define endl "\n"
#define loop(x, a, b) for (ll x = a; x < b; x++)
#define decloop(x, a, b) for (ll x = a; x >= b; x--)
#define all(v) v.begin(), v.end()
// #define debug(x) cout<<#x<<" "; _print(x);
// #define sort(x) sort(x.begin(), x.end())
// #define reverse(x) reverse(x.begin(), x.end())

#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
// void _print(lld t) {cerr << t;}
void _print(double t) { cerr << t; }
// void _print(ull t) {cerr << t;}

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T, class V>
void _print(unordered_map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(unordered_map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(stack<T> v)
{
    while (!v.empty())
    {
        _print(v.top());
        v.pop();
        cerr << endl;
    }
}
/*
---------------------------------------------------------------------------------------------------------------------------------------------------
*/

// Prime factorization

vector<int> factor(int n)
{
    vector<int> ret;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            ret.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
        ret.push_back(n);
    return ret;
}
// ll max_ele = INT_MIN;

ll A, B, flag = 0;
// vector<ll> low, high;
ll _gcd(ll a, ll b){
    if(b == 0){
        return a;
    }
    return _gcd(b,a%b);
}

int firstDig(int n){
     while (n >= 10)
        n /= 10;
     
    // return the first digit
    return n;
}

void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    ll max_ele = *max_element(all(a));
    if(max_ele != a[0] && max_ele!= a[n-1]){
        cout<<-1<<endl;
        return ;
    }

    ll right = n/2;
    ll left = right-1;
    vector<ll> p(n,0);
    ll i = 0, j = n-1;
    while(left>=0 && right<=n-1){
    if(a[right]<a[left]){
        p[j] = a[right];
        right++;
        j--;
    }
    else{
        p[i] = a[left];
        left--;
        i++;
    }
    debug(p)
    }
    if(left<0){
        p[j] = a[right];
    }
    else if(right>n-1){
        p[i] = a[left];
    }
    rep(k,0,n){
        cout<<p[k]<<" ";
    }
    cout<<endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
#endif

    ll t;
    cin>>t;
    while(t--)
     
    solve();    
    
    // cout<<max_ele;
  
    return 0;
}