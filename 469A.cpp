#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q;
    int a[103],X[303],L[303];
    cin >> n;
    cin >> p;
    for(int i=0; i<p; i++)
        cin >> L[i];
    cin >> q;

    int s=0;
    for(int i=p; ; i++)
    {
        if(s==q)
            break;
        cin >> L[i];
        s++;

    }


    for(int i=0; i<n; i++)
    {
        a[i]=i+1;
        //cout << a[i] << endl;
    }

    int m = p+q;

    //for(int i=0; i<m; i++)
        //cout << L[i] << endl;

    sort(L,L+m);

   // for(int i=0; i<m; i++)
        //cout << L[i] << endl;

    int j=0;

    for(int i=0; i<m ; i++)
    {
        if(L[i]==L[i+1])
        {
            continue;
        }
        else
        {
            X[j]=L[i];
            j++;
        }
    }
    //for(int i=0; i<j; i++)
      //  cout << X[i] << endl;

    int count =0;

    for(int i=0; i<n; i++)
    {
        if(a[i]==X[i])
        {
            count++;
        }
    }

    if(count==n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;

}
