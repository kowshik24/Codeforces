#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;


   char name[10002];


   for(int i=0; i<700; i+=3)
   {
       name[i] = 'R';
       name[i+1] = 'G';
       name[i+2] = 'B';


   }
//
//    for(int i=0; i<name.size(); i++)
//        cout << name[i];


    int test , n , k;

    cin >> test;


    for(int i=0; i<test; i++)
    {

        vector<int>vc;

        cin >> n >> k;


        cin >> s;

        if(n==k)
        {
            if(s[0]=='B')
            {
                   int m = 2;
               int count1 = 0;

               for(int l=0; l<n; l++)
               {


                    if(s[l]!=name[m])
                   {
                       count1++;
                       m++;
                   }
                   else
                   {
                       m++;
                   }
               }

               cout << count1 << endl;


            }
            else if(s[0]=='R')
            {
                 int m = 0;
               int count1 = 0;

               for(int l=0; l<n; l++)
               {


                    if(s[l]!=name[m])
                   {
                       count1++;
                       m++;
                   }
                   else
                   {
                       m++;
                   }
               }

               cout << count1 << endl;

            }
            else
            {

                  int m = 1;
               int count1 = 0;

               for(int l=0; l<n; l++)
               {


                    if(s[l]!=name[m])
                   {
                       count1++;
                       m++;
                   }
                   else
                   {
                       m++;
                   }
               }

               cout << count1 << endl;



            }

        }

        else
        {



        for(int j=0; j<n; j++)
        {

           if(s[j]=='R')
           {
               int m = 0;
               int count = 0;
               int count1 = 0;

               for(int l=j; l<n; l++)
               {

                   if(count==k)
                   {
                       vc.push_back(count1);
                       break;
                   }
                   else if(s[l]!=name[m])
                   {
                       count++;
                       count1++;
                       m++;
                   }
                   else
                   {
                       count++;
                       m++;
                   }
               }
           }

           else if(s[j]=='G')
           {
               int m = 1;
               int count = 0;
               int count1 = 0;

               for(int l=j; l<n; l++)
               {

                   if(count==k)
                   {
                       vc.push_back(count1);
                       break;
                   }
                   else if(s[l]!=name[m])
                   {
                       count++;
                       count1++;
                       m++;
                   }
                   else
                   {
                       count++;
                       m++;
                   }
               }

           }
           else
           {
               int m = 2;
               int count = 0;
               int count1 = 0;

               for(int l=j; l<n; l++)
               {

                   if(count==k)
                   {
                       vc.push_back(count1);
                       break;
                   }
                   else if(s[l]!=name[m])
                   {
                       count++;
                       count1++;
                       m++;
                   }
                   else
                   {
                       count++;
                       m++;
                   }
               }

           }




        }


        sort(vc.begin(),vc.end());

//        for(int n=0; n<vc.size();n++)
//            cout << vc[n] << " ";

          cout << vc[0] << endl;
        }
    }

    return 0;
}
