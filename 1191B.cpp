#include<bits/stdc++.h>
using namespace std;

int main()
{
   char s1[3],s2[3],s3[3];



   scanf("%s%s%s",&s1,&s2,&s3);



     if((s1[1]==s2[1]) && (s2[1]==s3[1]) && (s1[1]==s3[1]))
     {
         cout << 0 << endl;
         return 0;

     }

    else if((s1[1]!=s2[1]) && (s2[1]!=s3[1]) && (s1[1]!=s3[1]))
    {


//        vector<int>v;
//
//        ///3tai alada
//
//        int count = 0;
//
//        int sum = 0;
//
//        for(int i=1; i<=9;i++)
//        {
//
//            if(count==2)
//                break;
//
//            else if((s1[0]-'0') == i)
//                continue;
//            else
//            {
//                sum += i;
//                count++;
//            }
//        }
//
//
//        v.push_back(sum);
//
//
//        int count1 = 0;
//        int sum1 = 0;
//
//         for(int i=1; i<=9;i++)
//        {
//
//            if(count1==2)
//                break;
//
//            else if((s2[0]-'0')==i)
//                continue;
//            else
//            {
//                sum1 += i;
//                count1++;
//            }
//        }
//
//        v.push_back(sum1);
//
//
//        int sum2 = 0;
//        int count2 = 0;
//
//
//
//         for(int i=1; i<=9;i++)
//        {
//
//            if(count2==2)
//                break;
//
//            else if((s3[0]-'0')==i)
//                continue;
//            else
//            {
//                sum2 += i;
//                count2++;
//            }
//        }
//
//        v.push_back(sum2);
//
//        sort(v.begin(),v.end());
//
//        for(int i=0; i<v.size(); i++)
//            cout << v[i] << endl;


//        cout << v[0] << endl;

           int a = s1[0]-'0';
           int b = s2[0]-'0';
           int c = s3[0] - '0';

           cout << min(a,min(b,c)) << endl;



    }

    else if(s1[1]==s2[1])
    {
        ///1st 2ta


        int sum1 = 0;


        for(int i=1; i<=9; i++)
        {
            if((s1[0]-'0')==i || (s2[0]-'0')==i)
                continue;
                else
                {
                    sum1 += i;
                    break;
                }
        }


        int sum = 0;

        int count = 0;

        for(int i=1; i<=9; i++)
        {

            if(count==2)
                break;
            if((s3[0]-'0')==i)
                continue;
            else
            {
                sum += i;
                count++;
            }
        }

        cout << min(sum , sum1) << endl;

    }

    else if(s1[1]==s3[1])
    {
        ///1st and 3rd


        int sum1 = 0;


        for(int i=1; i<=9; i++)
        {
            if((s1[0]-'0')==i || (s3[0]-'0')==i)
                continue;
                else
                {
                    sum1 += i;
                    break;
                }
        }


        int sum = 0;

        int count = 0;

        for(int i=1; i<=9; i++)
        {

            if(count==2)
                break;
            if((s2[0]-'0')==i)
                continue;
            else
            {
                sum += i;
                count++;
            }
        }

        cout << min(sum , sum1) << endl;
    }
    else if(s2[1]==s3[1])
    {
        ///2nd and 3rd

        int sum1 = 0;



        for(int i=1; i<=9; i++)
        {
            if((s2[0]-'0')==i || (s3[0]-'0')==i)
                continue;
                else
                {
                    sum1 += i;
                    break;
                }
        }


        int sum = 0;

        int count = 0;

        for(int i=1; i<=9; i++)
        {

            if(count==2)
                break;
            if((s1[0]-'0')==i)
                continue;
            else
            {
                sum += i;
                count++;
            }
        }

        cout << min(sum , sum1) << endl;
    }


    return 0;
}
