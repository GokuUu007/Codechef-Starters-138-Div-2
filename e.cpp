/* 

    ॐ हौं जूं सः ॐ भूर्भुवः स्वः 
    ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय मामृतात् 
    ॐ स्वः भुवः भूः ॐ सः जूं हौं ॐ

   @Author  : Akshat Madhavan
   @Country : INDIA 
   
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()

#ifdef AKSHAT
#include "debug.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif


template<class T>void output (vector<T> &a) {for (auto &x : a) {cout << x << ' ';}cout << '\n';}
template<typename T> void chmin (T &a, T b) {if (a > b) swap(a, b);}
template<typename T> void chmax (T &a, T b) {if (a < b) swap(a, b);}


const int MAXN = 1e5 + 69;

    
vector<ll> prime(MAXN, 1), p;

void sieve() {
    prime[0] = prime[1] = 0;

    for (int i = 2; i < MAXN; ++i) {
        if (prime[i]) {
            p.push_back(i);
            for (int j = 2 * i; j < MAXN; j += i) 
                prime[j] = 0;
        }
    }

}


bool good(ll x) {

    auto find = [&] (ll x) {
        ll low = 1, high = x, sq = 1;
        while (low <= high) {
            ll mid = (low + high) / 2;
            if (mid * mid <= x) {
                low = mid + 1, sq = mid;
            } else {
                high = mid - 1;
            }
        }

        return sq;
    };  

    ll sq = find(x);
    return (sq * sq == x) && sq < MAXN && prime[sq];
}

void solve() {
    ll x;
    cin >> x;

    for (int i = 0; i < int(p.size()); ++i) {
        if (p[i] * p[i] >= x) 
            break;
        for (int j = i + 1; j < int(p.size()); ++j) {
            
            ll a = p[i];
            ll b = p[j];

            ll c = x - a * a - b * b;

            if (c > 0 && good(c) && sqrtl(c) != a && sqrtl(c) != b) {
                cout << "YES\n";
                return;
            }
        }
    }

    cout << "NO\n";
} 


int32_t main() {
    
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    #ifdef AKSHAT   
        freopen("error.txt", "w", stderr);  
    #endif  

    sieve();

    int tc = 1;
    cin >> tc;
    for (int cases = 1; cases <= tc; ++cases) {
        solve();
        // cout << (solve() ? "YES\n" : "NO\n");
        // cout << "Case # " << cases;
    } 

    #ifdef AKSHAT
        double timeTaken = 1000.0 * clock() / CLOCKS_PER_SEC;
        cout << "\n[Finished in " << timeTaken << "ms]";
        cerr << "\n[Finished in " << timeTaken << "ms]";
    #endif

    return 0;
}

//JAI SHREE RAM !!!!
