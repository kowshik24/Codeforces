#include<bits/stdc++.h>
using namespace std;


int main()
{

    char s[100002];


    gets(s);

    int  len = strlen(s);

    int num [150] ={0};

//    cout << len << endl;

    for(int i=0; i<len ; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {

//            cout << s[i]-'a'+97 << endl;
            num[s[i]-'a'+97]++;
        }
    }

    int count = 0;

    for(int i=97; i<124; i++)
    {
        if(num[i]>0)
        {
            count++;
        }
    }

    cout << count << endl;


    return 0;
}
