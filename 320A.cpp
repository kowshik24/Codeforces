#include<bits/stdc++.h>
using namespace std;

int main()
{
    string num;

    cin >> num;

    if(num[0]=='4')
    {
        cout << "NO" << endl;
        return 0;
    }

    for(int i=0; i<num.length(); i++)
    {

        if(num[i]=='1')
        {

            int count = 0;

            for(int j=i+1; j<num.length(); j++)
            {
                if(num[j]=='4')
                {
                    count++;
                }
                else
                {
                    break;
                }
            }

//            cout << count << endl;

            if(count==0 || count ==1 || count ==2)
            {
             count = 0;
             continue;
            }

            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }

        else if(num[i]=='0' || num[i]=='2' || num[i]=='3' || num[i]=='5' || num[i]=='6' || num[i]=='7' || num[i]=='8' || num[i]=='9')
        {
            cout << "NO" << endl;

            return 0;
        }
    }

    cout << "YES" << endl;
}
