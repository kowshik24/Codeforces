#include "bits/stdc++.h"

#define ll long long
#define ull unsigned long long
#define ld long double

#define tiii tuple < int, int, int >
#define pii pair < int, int >
#define pll pair < ll, ll >
#define pci pair < char, int >
#define psi pair < string, int >
#define pis pair < int, string >
#define pss pair < string, string >

#define vi vector < int >
#define vd vector < double >
#define vld vector < ld >
#define vll vector < ll >
#define vs vector < string >
#define vc vector < char >
#define vpi vector < pii >
#define vpll vector < pll >
#define vpis vector < pis >

#define si set < int >
#define sll set < ll >
#define sc set < char >
#define sstr set < string >

#define mii map < int, int >
#define mll map < ll, ll >
#define msl map < string, ll >
#define mss map < string, string >
#define mcl map < char, ll >

#define srt(a) sort(a.begin(), a.end())
#define rev(a) reverse(a.begin(), a.end())

#define Pb pop_back
#define pb push_back
#define eb emplace_back
#define mt make_tuple
#define gt0 get < 0 >
#define gt1 get < 1 >
#define gt2 get < 2 >

#define yes printf("YES\n")
#define no printf("NO\n")
#define na printf("-1\n")

#define pi acos(-1)

#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;

int cs = 0;

void solve()
{
    ll n, k;

    cin >> n >> k;

    cout << "Case #" << ++cs << ": ";

    if(k == 1 || k>30){
        cout << n << endl;

        return;
    }

    vll a;

    a.pb(1LL);

    for(int i = 2; ; i++){
        ll p = 1;

        for(int j = 1; j <= k; j++){
            if(p > n) break;

            p *= i;
        }

        if(p > n) break;

        a.pb(p);
    }

//    cout << "a -> ";
//    for(auto x : a) cout << x << ' ';
//    cout << endl;

    ll sz = (ll)a.size();
    ll ans = sz;

    for(int i = 1; i < a.size(); i++) ans += ((a[i] - a[i - 1]) / i);

    ans += ((n - a.back()) / sz);

    cout << ans - 1 << endl;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    fast;

    int t = 1;

    cin >> t;

    while(t--) solve();

    return 0;
}
