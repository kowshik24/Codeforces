#include<bits/stdc++.h>
using namespace std;


int vao(string s1, int len, string s2)
{




    int count = 0;

    for(int i=0; i<len; i++)
    {
        if(s1[i]==s2[i])
            continue;
        else
        {
            for(int j=i+1; j<len; j++)
            {
                swap(s1[len-1],s1[j]);
                count++;
                if(s1==s2)
                {
                    return count;
                }
            }
        }
    }

    return -1;
}


int ulta(string s1, int len, string s2)
{

    int count = 0;


    for(int i=len-1 ; i>=0; i--)
    {
        if(s1[i]==s2[i])
            continue;
        else
        {
            for(int j=i-1; j>=0; j--)
            {
                swap(s1[0],s1[j]);
                count++;
                if(s1==s2)
                {
                    return count;
                }
            }
        }
    }

    return -1;

}


int main()
{

    string s1, s2 ;

    int t;

    cin >> t;


    while(t--)
    {
        int len;

        cin >> len;

        cin >> s1 >> s2;

        if(s1==s2)
        {
            cout << 0 << endl;
        }
        else
        {




            int ans1 = vao(s1,len,s2);

            int ans2 = ulta(s1,len,s2);



            if(ans1==-1 && ans2==-1)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << min(ans1,ans2) << endl;
            }
        }

    }






    return 0;
}
