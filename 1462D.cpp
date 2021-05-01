#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
using namespace std;
typedef long long ll;

vector<ll> v(10);
ll ans=INT_MAX;

ll fun(ll n,ll m){
	if(n<0)
	return -1;
	if(n==0){
		ans=min(ans,m);
		return ans;
	}

	ll res=-1;
	for(int i=0;i<10;i++){
		if(v[i])
		continue;
		v[i]=1;
		res=fun(n-i,m*10+i);
		v[i]=0;
	}
	return  res;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t;

    for(int i=0; i<=50; i++){
     ll n = i;


      if(n>45){
      	cout<<-1<<"\n";
	  }else{
//	  	ll c=9,ans=0;
//	  	while(c<n){
//	  		ans*=10+c;
//	  		c--;
//		  }
         ans=INT_MAX;
		 ll a=fun(n,0);
		 cout<<ans<<"\n";
	  }
  }

  return 0;
}
