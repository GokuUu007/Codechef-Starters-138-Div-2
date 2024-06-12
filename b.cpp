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



void solve() {
    int x, y;
    cin >> x >> y;

    for (int i = 1; i < 10000; ++i) {
        int avg = (x * 10 + i * 100) / (10 + i);
        if (avg >= y) {
            cout << i << '\n';
            return;
        }
    }
} 


int32_t main() {
    
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    #ifdef AKSHAT   
        freopen("error.txt", "w", stderr);  
    #endif  

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
