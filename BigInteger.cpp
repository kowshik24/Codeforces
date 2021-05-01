#include<bits/stdc++.h>
using namespace std;


char num1[100000002],num2[100000002],sum[1000000002];

int main()
{
	
	int hate=0,rem=0;

	scanf("%s",&num1);
	scanf("%s",&num2);

	int len1 = strlen(num1);
	int len2 = strlen(num2);

	strrev(num1);
	strrev(num2);

	if(len1>=len2)
		{
			
			hate = 0;
			rem = 0;
			

			for(int i=0; i<len1 ; i++)
				{

					int a = num1[i]-'0';
					int b = num2[i]-'0';

					int c = a + b;
					cout << c << endl;

					if(c>9)
						{
							hate = c /10;
							cout << "hate " << hate << endl;
							
							rem = c % 10;
							
							
							cout << "rem " << rem << endl;
							

							sum[i] = rem + '0';
							i++;
							
							cout << sum[i] << endl;
							
							rem = 0;
						}
					else
						{

							if(hate>0)
								{
									sum[i] = (c+hate) + '0';
									i++;
								}
							else
								{

									sum[i]=c+'0';
								}
						}



				}
		}


	else
		{
			
			
			hate = 0;
			rem = 0;
			

			for(int i=0; i<len2 ; i++)
				{

					int a = num1[i]-'0';
					int b = num2[i]-'0';

					int c = a + b;

					if(c>9)
						{
							hate = c /10;
							rem = c % 10;

							sum[i] = rem + '0';
							rem = 0;
						}
					else
						{

							if(hate>0)
								{
									sum[i] = (c+hate) + '0';
									i++;
								}
							else
								{

									sum[i]=c+'0';
								}
						}



				}

		
		}
		
	//	if(hate>0)
	///	sum[i]=hate+'0';
		
		
		cout << strrev(sum) << endl;


	return 0;
}
