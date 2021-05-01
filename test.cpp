// So it turned out that my illusion made them all, she has no special emotion for me.
// Sad but to be honest, it did not cause me surprised since every previous stories were all ended like this
// So what about now? I dont know... just making sure that we will still be friends!
#include<bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define nl '\n'
#define bug cout<<"bug here!"<<nl
typedef long long ll;

void Solve(){
	string s;
	cin>>s;
	int n = s.size();
	map<char, int> mm;
	for(auto x: s){
		++mm[x];
	}
	if(s[0] == s[n - 1]){
		cout<<"NO"<<nl;
		return;
	}
	else{
		int l = mm[s[0]];
		int r = mm[s[n - 1]];
		int mid = 0;
		for(auto x: mm){
			if(x.fi != s[0] && x.fi != s[n - 1])
				mid = x.se;
		}
		if(l + mid != r && l != mid + r){
			cout<<"NO"<<nl;
			return;
		}
		if(l + mid == r){
			int res = 0;
			for(auto x: s){
				if(x == s[0]) res++;
				else if(x == s[n - 1]) res--;
				else res++;
				if(res < 0){
					cout<<"NO"<<nl;
					return;
				}
			}
			cout<<"YES"<<nl;
		}
		else{
			int res = 0;
			for(auto x: s){
				if(x == s[0]) res++;
				else if(x == s[n - 1]) res--;
				else res--;
				if(res < 0){
					cout<<"NO"<<nl;
					return;
				}
			}
			cout<<"YES"<<nl;

		}
	}

}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T = 1;
	cin>>T;
	if(T == 17){
		cout<<"cancel!"<<nl;
	}
	while(T--){
		Solve();
	}
}
