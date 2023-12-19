/*Consistency is key*/

/*::::::::::::::::::::::::::::::Some stuffs that should be keep in mind:::::::::::::::::::::::*/

// Be the Process Oriented instead of result oriented
// you should not solve the problem for just sack of solving , instead solve the problems with curiosity of learning some stuff........cool.
// Always be curious for some stuff that seems new to you
// Practice is the key to mastery.

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

#include <bits/stdc++.h>
#include <chrono>

    using namespace std;
using namespace chrono;

/*::::::::::::::::::::::::::::::::::::::::::::::::::::typedefs:::::::::::::::::::::::::::::::::::::::::::::*/
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
typedef map<char,ll> mpcll;


/*:::::::::::::::::::::::::::::::::::::::::::::::::::::Macros::::::::::::::::::::::::::::::::::::::::::::::*/

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
#define           fast           ios::sync_with_stdio(false); cin.tie(NULL);
#define           sz(x)             (int)(x).size()
#define           min3(a,b,c)       min(min((a),(b)),(c))
#define           max3(a,b,c)       max(max((a),(b)),(c))
#define           min4(a,b,c,d)     min(min((a),(b)),min((c),(d)))
#define           max4(a,b,c,d)     max(max((a),(b)),max((c),(d)))

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::DEBUG:::::::::::::::::::::::::::::::::::::::::::::*/

#ifndef ONLINE_JUDGE
#define debug(x)       cerr << #x << " = "; print(x); cerr << endl;
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


template <class S> void print(vector<S> v);
template <class S, class T> void print(pair<S,T>p);
template <class S,class T> void print(map<S,T> m);
template <class S,class T> void print(ump<S,T> m);
template <class S,class T> void print(multimap<S,T> m);
template <class S> void print(set<S> s);
template <class S> void print(ust<S> s);
template <class S> void print(multiset<S> s);
template <class S> void print(stack<S> s);


template <class S> void print(vector<S> v){ cerr<<"[ "; for(S it:v){ print(it); cerr<<" "; } cerr<<"]"; }
template <class S, class T> void print(pair<S,T>p){ cerr<<"{ ";print(p.ff);cerr<<", ";print(p.ss);cerr<<"}"; }
template <class S,class T> void print(map<S,T> m){ cerr<<"[ "; for(auto it:m) { print(it); cerr<<" ";} cerr<<"]"; }
template <class S,class T> void print(ump<S,T> m){ cerr<<"[ "; for(auto it:m){ print(it); cerr<<" "; } cerr<<"]"; }
template <class S,class T> void print(multimap<S,T> m){ cerr<<"[ "; for(auto it:m){ print(it); cerr<<" "; } cerr<<"]"; }
template <class S> void print(set<S> s){ cerr<<"[ "; for(S it:s){ print(it);cerr<<" "; } cerr<<"]"; }
template <class S> void print(ust<S> s){ cerr<<"[ "; for(S it:s){ print(it);cerr<<" "; } cerr<<"]"; }
template <class S> void print(multiset<S> s){ cerr<<"[ "; for(S it:s){ print(it);cerr<<" "; } cerr<<"]"; }
template <class S> void print(stack<S> s){ cerr<<"[ ";while(!s.empty()){ print(s.top()); cerr<<" "; s.pop();}cerr<<"]";}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::DEBUG:::::::::::::::::::::::::::::::::::::::::::::*/

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

ll _gcd(ll a,ll b){ if(a<0) a=-1*a; if(b<0) b=-1*b;if(b == 0) return a; return _gcd(b,(a%b));}
ll lcm(ll a, ll b){ return ((a*b)/_gcd(a,b));}
ll power(ll a, ll n){ ll res = 1; while(n){ if(n&1) res = (res*a); a=(a*a); n>>=1;} return res;}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

template<typename T> istream& operator>>(istream& in,vector<T> &v){
    for(auto &it:v){
        in>>it;
    }
    return in;
}

template <typename T> ostream& operator<<(ostream& out,const vector<T> &v){
    for(auto &it:v){
        out<<it<<" ";
    }
    out<<endl;
    return out;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::CODE HERE:::::::::::::::::::::::::::::::::::::::::::::::::*/



void solve(){
    ll l,r;
    cin>>l>>r;
    ll d;
    if(l == 1)
    {
    	d = 3;
    }
    else if(!(l&1)){
    	d = l+1;
    }
    else if(l&1){
    	d= l;
    }
    ll cnt = 0;
    ll f = d;
    vector<ll> ans;
    while(f<=r){
    	ans.pb(d);
    	if(ceil((lld)log2(d)) == floor((lld)log2(d))){
    		d+=d;
    		f+=d;

    		continue;
    	}
    	cnt++;
    	if(cnt == 4){
    		break;
    		
    	}
    	
    	d+=d;
    	f+=d;
    }
    if(cnt == 4){
    	cout<<ans<<endl;
    }
    else{
    	if(l&1){

    	}
    	else{
    		// d--;
    		d = l;
    		ans.clear();
    		f = d;
    		cnt = 0;
    		while(f<=r){
		    	ans.pb(d);
		    	if(ceil((lld)log2(d)) == floor((lld)log2(d))){
		    		d+=d;
		    		f+=d;

		    		continue;
		    	}
		    	cnt++;
		    	if(cnt == 4){
		    		break;
		    		
		    	}
		    	
		    	d+=d;
		    	f+=d;
    		}
    		if(cnt == 4){
    			cout<<ans<<endl;
    		}
    		else{
    			d = l+2;
    			f = d;
    			cnt = 0;
    			ans.clear();
    			while(f<=r){
			    	ans.pb(d);
			    	if(ceil((lld)log2(d)) == floor((lld)log2(d))){
			    		d+=d;
			    		f+=d;

			    		continue;
			    	}
			    	cnt++;
			    	if(cnt == 4){
			    		break;
			    		
			    	}
			    	
			    	d+=d;
			    	f+=d;
			    }
    		}
    	}
    }

    if(cnt == 4){
    	cout<<ans<<endl;
    }
    else{
    	cout<<-1<<endl;
    }
}

void tests(){
    ll test = 1;
    ll testcases= 1;
    cin>>test;
    cout << setprecision(12);
    cerr<<setprecision(6);
    while(test--){
        // cout<<"Test #"<<testcases++<<endl;
        solve();
    }
}

signed main(){
    fast;
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        freopen("Error.txt","w",stderr);
    #endif

    auto clock_start = high_resolution_clock::now();

    tests();

    auto clock_end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds> (clock_end-clock_start);

    cerr<<"\nTime taken: "<<(double)duration.count()/1000<<" MS\n"; 
    return 0;
}