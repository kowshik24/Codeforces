#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100002];

    scanf("%s",&s);

    int len = strlen(s);


     int count_a = 0, not_a = 0;

     for(int i=0; i<len; i++)
     {
         if(s[i]=='a')
         {
             count_a++;
         }
         else
         {
             not_a++;
         }
     }

     if(not_a%2!=0)
     {
         cout << ":(" << endl;
         return 0;
     }
     else if(count_a==len)
     {
         cout << s << endl;
     }
     else
     {
         int t = len-(not_a / 2);
         int count = 0;

         string s1,s2;


         for(int i=0; i<t; i++)
         {
             if(s[i]!='a')
             {

             s1.push_back(s[i]);

             }

         }

         //cout << s1 << endl;


         for(int j=t; j<len; j++)
         {
             s2.push_back(s[j]);
         }



        // cout << s2 << endl;

         if(s1==s2)
         {
             for(int i=0; i<t; i++)
                cout << s[i];

             cout << endl;
         }

         else
         {
             cout << ":(" << endl;
            // cout << "not" << endl;
         }


     }




}
