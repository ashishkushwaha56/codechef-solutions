/*Consistency is the key*/
/**/                                             
                                             
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vecll;
typedef vector<string> vecs;
typedef vector<char> vecc;
typedef pair<ll, ll> pll;
typedef pair<int, string> pis;
typedef map<int, int> mpii;
typedef map<char, int> mpci;
typedef map<string, int> mpsi;
typedef vector<pll> vecpl;

// #define int long long
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
// #define print(x) cout << x
#define endl "\n"
#define loop(x, a, b) for (ll x = a; x < b; x++)
#define decloop(x, a, b) for (ll x = a; x >= b; x--)
#define all(v) v.begin(), v.end()
#define fast_op ios::sync_with_stdio(0); cin.tie(0);
#define MOD 1000000007
#define mine *min_element 
#define maxe *max_element
// #define debug(x) cout<<#x<<" "; _print(x);
// #define sort(x) sort(x.begin(), x.end())
// #define reverse(x) reverse(x.begin(), x.end())
#define lb lower_bound
#define ub upper_bound

#ifndef ONLINE_JUDGE
#define debug(x)    cerr << #x << " "; print(x);   cerr << endl;
#else
#define debug(x)
#endif

void print(ll t){    cerr << t;}
void print(int t) { cerr << t; }
void print(string t) { cerr << t; }
void print(char t) { cerr << t; }
// void print(lld t) {cerr << t;}
void print(double t) { cerr << t; }
// void print(ull t) {cerr << t;}

template <class T, class V>void print(pair<T, V> p);
template <class T>void print(vector<T> v);
template <class T>void print(set<T> v);
template <class T, class V>void print(map<T, V> v);
template <class T, class V>void print(unordered_map<T, V> v);
template <class T>void print(multiset<T> v);
template <class T, class V>void print(pair<T, V> p){ cerr << "{"; print(p.ff); cerr << ","; print(p.ss); cerr << "}";}
template <class T>void print(vector<T> v){ cerr << "[ "; for (T i : v) { print(i); cerr << " "; } cerr << "]";}
template <class T>void print(set<T> v){ cerr << "[ "; for (T i : v) { print(i); cerr << " "; } cerr << "]";}
template <class T>void print(multiset<T> v){ cerr << "[ "; for (T i : v) { print(i); cerr << " "; } cerr << "]";}
template <class T, class V>void print(map<T, V> v){ cerr << "[ "; for (auto i : v) { print(i); cerr << " ";} cerr << "]";}
template <class T, class V>void print(unordered_map<T, V> v){ cerr << "[ "; for (auto i : v) { print(i); cerr << " ";} cerr << "]";}
template <class T>void print(stack<T> v){ while (!v.empty()) { print(v.top()); v.pop(); cerr << endl;}}
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

ll f(ll temp){
    ll count = 0;
    while(temp%2!=1){
        count++;
        temp/=2;
    }
    return (count);
}


ll bin(ll n){
    string s = "";
    while(n>0){
        s= to_string(n%2)+s;
        n/=2;
    }
    // return(s);
    ll count = 0;
    rep(i,0,s.size()){
        if(s[i] == '1'){
            count++;
        }
    }
    return count; 
}

// bool check(string s){
//     for(ll i =0;i<s.size()-1;i++){
//         if(s[i]!=s[i+1]){
//             return false;
//         }
//     }
//     return true;
// }

bool check(string s){
    for(ll i = 0; i<s.size();i++){
        if(s[i] == 'A') return false;
    }
    return true;
}

void solve(){
    ll a,b;
    cin>>a>>b;
    if(a<b){
        cout<<"NO"<<endl;
    }
    if(a>=b){
        ll difa = a+(a-b);
        ll difb = b+(a-b)*2;
        if(difa== difb){
        cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}


int main()
{
    fast_op

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif

    ll t = 1;
    cin>>t;
    while(t--)
    solve();
        // string s = "0000";
        // cout<<s<<endl;
    return 0;
    
}








