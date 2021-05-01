#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ,num[100] = {0};

    string st;

    int store[100]= {0} , sum = 0;

    int a1=0,b1=0,c1=0,d1=0,e1=0,f1=0,g1=0,h1=0,i1=0,j1=0,k1=0,l1=0,m1=0,n1=0,o1=0,p1=0,q1=0,r1=0,s1=0,t1=0,u1=0,v1=0,w1=0,x1=0,y1=0,z1=0;

    char team_name[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};


    char a[100];

    cin >> n;

    for(int i=0; i<n; i++)
    {

        scanf("%s",&a);

        st = a;

        int len = strlen(a);

        sum = sum + len;

        for(int i=0; i<len ; i++)
        {

            if(a[i]=='A')
            {
                num[0] = ++a1;

            }
            else if(a[i]=='B')
            {
                num[1] = ++b1;
            }

            else if(a[i]=='C')
            {
                num[2] = ++c1;
            }

            else if(a[i]=='D')
            {
                num[3] = ++d1;
            }

            else if(a[i]=='E')
            {
                num[4] = ++e1;
            }

            else if(a[i]=='F')
            {
                num[5] = ++f1;
            }

            else if(a[i]=='G')
            {
                num[6] = ++g1;
            }

            else if(a[i]=='H')
            {
                num[7] = ++h1;
            }

            else if(a[i]=='I')
            {
                num[8] = ++i1;
            }

            else if(a[i]=='J')
            {
                num[9] = ++j1;
            }

            else if(a[i]=='K')
            {
                num[10] = ++k1;
            }

            else if(a[i]=='L')
            {
                num[11] = ++l1;
            }

            else if(a[i]=='M')
            {
                num[12] = ++m1;
            }

            else if(a[i]=='N')
            {
                num[13] = ++n1;
            }

            else if(a[i]=='O')
            {
                num[14] = ++o1;
            }

            else if(a[i]=='P')
            {
                num[15] = ++p1;
            }

            else if(a[i]=='Q')
            {
                num[16] = ++q1;
            }

            else if(a[i]=='R')
            {
                num[17] = ++r1;
            }

            else if(a[i]=='S')
            {
                num[18] = ++s1;
            }

            else if(a[i]=='T')
            {
                num[19] = ++t1;
            }

            else if(a[i]=='U')
            {
                num[20] = ++u1;
            }

            else if(a[i]=='V')
            {
                num[21] = ++v1;
            }

            else if(a[i]=='W')
            {
                num[22] = ++w1;
            }

            else if(a[i]=='X')
            {
                num[23] = ++x1;
            }

            else if(a[i]=='Y')
            {
                num[24] = ++y1;
            }

            else if(a[i]=='Z')
            {
                num[25] = ++z1;
            }
        }


    }

    int sum1 = 0;
     for(int i=0; i<26; i++)
       {
           store[i] = num[i];

           sum1 = sum1+ store[i];
       }



    int count = 0;

   for(int i=0; i<26; i++)
    {
        if(num[i]==store[i])
        {
            count++;
        }
    }

    if(count==sum)
    {

        for(int i=0; i<26; i++)
        {
            if(store[i]>=1)
            {
           cout << st << endl;
            }
        }

        cout << "tyf  " << endl;
    }

    else
    {
      sort(num , num+26);

    int maximum = num[25];

  //  cout << "MAX  " << maximum << endl;

    int flag = 0;

    int check = 1;

    for(int i=0 ; i<25 ; i++)
    {
        if(store[i]==maximum)
        {
            cout << team_name[i];
            flag = 1;
        }

    }

    }


    return 0;
}
