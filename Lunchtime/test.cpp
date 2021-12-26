#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

// typedefs
typedef long double lld;
typedef unsigned long long llu;
typedef long long  ll;
typedef vector<int> vi;
typedef vector<ll> vecll;
typedef vector<char> vecc;
typedef vector<string> vecs;
typedef vector<bool> vecb;
typedef pair<int,int> pii;
typedef pair<char,int> pci;
typedef pair<char, ll> pcll;
typedef pair<string,int> psi;
typedef pair<ll,ll> pll;
typedef pair<string, ll> psll;
typedef vector<pll> vecpll;
typedef vector<pcll> vecpcll;
typedef map<ll,ll> mpll;
typedef map<string, ll> mpsll;

// Macros

#define           ff                first
#define           ss                second
#define           pb                push_back
#define           ppb               pop_back
#define           mp                make_pair
#define           sq(x)             (x)*(x)
#define           PI                3.1415926535897932384626433832795
#define           maxe              *max_element
#define           mine              *min_element
#define           all(x)            (x).begin(), (x).end()
#define           allr(x)           (x).rbegin(),(x).rend()
#define           endl              "\n"
#define           rep(x,a,b)        for( ll x = a;x<b;x++)
#define           decloop(x,a,b)    for(ll x = b; x>=a;x--)
#define           sum               accumulate
#define           MOD               (ll)(1e9 + 7) 
#define           INF               1e18
#define           lb                lower_bound
#define           ub                upper_bound
#define           ump               unordered_map
#define           ust               unordered_set
#define           setbits           __builtin_popcountll
#define           take(v,n)         vecll v(n);  rep(i,0,n) cin>>v[i];
#define           fast           ios::sync_with_stdio(0); cin.tie(0);

/*-----------------------DEBUG----------------------------*/

#ifndef ONLINE_JUDGE
#define debug(x)       cerr << #x << " "; print(x); cerr << endl;
#else
#define debug(x)
#endif



void print(ll a){ cerr<<a;}
void print(string a){ cerr<<a;}
void print(char a){ cerr<<a;}
void print(int a){ cerr<<a;}
void print(bool a){ cerr<<a;}
void print(lld a){ cerr<<a;}
void print(llu a){ cerr<<a;}


template <class S> void print(vector<S> &v);
template <class S, class T> void print(pair<S,T>&p);
template <class S,class T> void print(map<S,T> &m);
template <class S,class T> void print(ump<S,T> &m);
template <class S,class T> void print(multimap<S,T> &m);
template <class S> void print(set<S> &s);
template <class S> void print(ust<S> &s);
template <class S> void print(multiset<S> &s);
template <class S> void print(stack<S> &s);


template <class S> void print(vector<S> &v){ cerr<<"[ "; for(S it:v){ print(it); cerr<<" "; } cerr<<"]"; }
template <class S, class T> void print(pair<S,T>&p){ cerr<<"{ ";print(p.ff);cerr<<", ";print(p.ss);cerr<<"}"; }
template <class S,class T> void print(map<S,T> &m){ cerr<<"[ "; for(auto &it:m) { print(it); cerr<<" ";} cerr<<"]"; }
template <class S,class T> void print(ump<S,T> &m){ cerr<<"[ "; for(auto &it:m){ print(it); cerr<<" "; } cerr<<"]"; }
template <class S,class T> void print(multimap<S,T> &m){ cerr<<"[ "; for(auto &it:m){ print(it); cerr<<" "; } cerr<<"]"; }
template <class S> void print(set<S> &s){ cerr<<"[ "; for(S &it:s){ print(it);cerr<<" "; } cerr<<"]"; }
template <class S> void print(ust<S> &s){ cerr<<"[ "; for(S &it:s){ print(it);cerr<<" "; } cerr<<"]"; }
template <class S> void print(multiset<S> &s){ cerr<<"[ "; for(S &it:s){ print(it);cerr<<" "; } cerr<<"]"; }
template <class S> void print(stack<S> &s){ cerr<<"[ ";while(!s.empty()){ print(s.top()); cerr<<" "; s.pop();}cerr<<"]";}

/*-----------------------DEBUG----------------------------*/

/*-----------------------------------------------------------------------------------------------------------------------------------------------*/
ll _gcd(ll a,ll b){ if(b == 0) return a; return _gcd(b,(a%b));}
ll lcm(ll a, ll b){ return ((a*b)/_gcd(a,b));}
ll power(ll a, ll n){ ll res = 1; while(n){ if(n&1) res = (res*a)%MOD; a=(a*a)%MOD; n>>=1;} return res;}
/*------------------------------------------------------------------------------------------------------------------------------------------------*/

/*================================CODE HERE=========================================*/


bool check(string s,ll n){
    ll l =0;
    ll r = n-1;
    while(l<r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}

void solve(){
    ll a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    ll c = 0;
    ll n = s.size();
    rep(i,0,n){
        if(s[i]=='1') b--;
        if(s[i] == '0') a--;
        if(s[i] == '?') c++;
    }
    if(c == 0){
        ll l = 0;
        ll r = n-1;
        while(l<r){
            if(s[l]!=s[r]){
                cout<<-1<<endl;return;
            }
            l++;
            r--;
        }
        if(a>0 || b>0){
            cout<<-1<<endl;return;
        }
        cout<<s<<endl;return;
    }

    ll l = 0;
    ll r = n-1;
    while(l<r){
        if(s[l] == '?' && s[r]!='?'){
            if(s[r] == '0' && a>0){
                s[l] = '0';
                a--;
            }
            else if(s[r] == '0' && a ==0){
                cout<<-1<<endl;
                return;
            }
            else if(s[r] == '1' && b>0){
                s[l] = '1';
                b--;
            }
            else{
                cout<<-1<<endl;
                return;
            }
        }
        else if(s[l] !='?' && s[r] == '?'){
            if(s[l] == '0' && a>0){
                s[r] = '0';
                a--;
            }
            else if (s[l] == '0' && a == 0)
            {
                cout<<-1<<endl;
                return;
            }
            else if(s[l] == '1' && b>0){
                s[r] = '1';
                b--;
            }
            else{
                cout<<-1<<endl;
                return;
            }
        }
        l++;
        r--;
    }

    ll k = 0,d = n-1;
    while(k<d){
        if(s[k] == '?' && s[d] == '?'){
            if(a>=2){
                s[k] = s[d] = '0';
                a-=2;
            }
            else if(b>=2){
                s[k] = s[d] = '1';
                b-=2;
            }
            else{
                cout<<-1<<endl;
                return;
            }
        }
        k++;
        d--;
    }
    if(n%2 ==1 && s[n/2] == '?'){
        if(a>0){
            s[n/2] = '0';
            a--;
        }
        else if(b>0){
            s[n/2] = '1';
            b--;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }

    if(check(s,n) && a == 0 && b==0){
        cout<<s<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}

void tests()
{
    ll test = 1;
    ll testcases = 1;
    cin >> test;
    cout<<setprecision(12);
    cerr << setprecision(6);
    while (test--)
    {
        // cout << "Test #" << testcases++ << endl;
        solve();
    }
}

int main()
{
    fast;
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        freopen("Error.txt","w",stderr);
    #endif

    auto clock_start = high_resolution_clock::now();

    tests();

    auto clock_end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(clock_end - clock_start);

    cerr << "Time taken: " << duration.count() / 1000;
    return 0;
}
