#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x,y,n;
	char num[200003];
	cin >> n >> x >> y;
	
	scanf("%s",&num);
	
	int count  = 0;
	
	for(int i=n-x; i<n; i++)
	{
		if(i==n-y-1)
		ans += num[i] !='1';
		else
		ans += num[i] !='0';
	}
	
	cout << ans << endl;
	
	
	
	
	
	
	return 0;
}
