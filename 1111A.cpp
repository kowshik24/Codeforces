#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1005];
    char t[1005];

    scanf("%s",&s);
    scanf("%s",&t);

    int len_s = strlen(s);
    int len_t = strlen(t);
    if(len_s!=len_t)
    {
        cout << "No" << endl;
    }



    else
    {

        int v=0,c=0;

        for(int i=0; i<len_s; i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                if(t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u')
                {
                    v++;
                }
                else
                    c++;
            }
            else
            {
              if(t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u')
                c++;
            }
        }

        if(c==0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
