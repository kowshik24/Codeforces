#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[105];

    int n;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        scanf("%s",&str);

        int len = strlen(str);
        if(len==1)
            cout << "yes" << endl;
        else
        {
            int alp[200]= {0};

            sort(str,str+len);

            int count = 0;

            for(int j=0; j<len; j++)
            {
                // cout << str[j] << endl;

                alp[str[j]]++;

                if(str[j]==(str[j+1]-1))
                {
                    count++;
                    //cout << count << endl;
                }
            }
            if(count==len-1)
                cout << "yes" << endl;
            else
            {
                int f =0;

                for(int k=97; k<=123; k++)
                {

                    //cout << alp[k] << " " ;
                    if(alp[k]>1)
                    {
                        cout<< "no" << endl;
                        f=1;
                        break;
                    }
                }
                if(f==0)
                    cout << "no" << endl;
            }
        }
    }

    return 0;
}
