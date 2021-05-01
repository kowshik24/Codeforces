#include<bits/stdc++.h>
using namespace std;


char en[20002],de[20002];


int main()
{

    int n;

    cin >> n;

    scanf("%s",&en);


    if(n==1 || n==2)
    {
        cout << en << endl;
    }
    else
    {
        if(n%2)
        {
            int mid = (n/2);

            de[mid] = en[0];

            int nw_len = n-1;

            int l_pos = mid;

            int r_pos = mid;


            for(int i=1; i<n; i++)
            {
                if(nw_len%2)
                {
                    r_pos++;
                    de[r_pos] = en[i];
                    nw_len--;

                }
                else
                {
                    l_pos--;
                    de[l_pos] = en[i];
                    nw_len--;
                }

            }

            printf("%s\n",de);


        }
        else
        {
             int mid = (n/2)-1;

            de[mid] = en[0];

            int nw_len = n-1;

            int l_pos = mid;

            int r_pos = mid;


            for(int i=1; i<n; i++)
            {
                if(nw_len%2)
                {
                    r_pos++;
                    de[r_pos] = en[i];
                    nw_len--;

                }
                else
                {
                    l_pos--;
                    de[l_pos] = en[i];
                    nw_len--;
                }

            }

            printf("%s\n",de);


        }
    }

}
