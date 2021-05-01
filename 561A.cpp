#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;

	string str;
	
	int arr[30]={0};
    int count = 0;
	cin >> n;

	for(int i=0; i<n; i++)
		{
			cin >> str;
			arr[str[0]-'a']++;
			
		}
		
		for(int i=0; i<26; i++)
		{
			int p = arr[i];
			
			for(int j=1 ; j< p/2 ; j++)
			{
				count = count + (j*2);
				//cout <<"asdkas" <<  count << endl;
			}
			
			if(p%2==1)
			
			{
				count = count + (p/2);
				//cout << count << endl;
				
			}
		}
		
		cout << count << endl;
	 
	 
		
		
	return 0;
}
