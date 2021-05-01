#include<bits/stdc++.h>
using namespace std;

int ar2[100001];

int ar1[100001];

int main()
{
    int n , m;

    cin >> n >> m;

    char ar[n][m];



    vector<int>v;


    for(int i=0; i<n; i++)
    {
        int count = 0;

        for(int j=0; j<m; j++)
        {


            cin >> ar[i][j];
            if(ar[i][j]=='1')
            {
                count++;
            }
        }

      //  cout << count << endl;


//        maxi = max(maxi,count);
      v.push_back(count);

      if(count>0)
      {


      ar1[count]++;
      ar2[count]++;
      }




    }



    sort(v.begin(),v.end());

    int maxi = v[v.size()-1];

    int mini = v[0];
//
//    cout << maxi << " " << mini << endl;



//     for(int i=0; i<=maxi; i++)
//        cout << ar2[i] << " ";
//
//        cout << endl;

    sort(ar1,ar1+maxi);

    int maxi1 = ar1[maxi-1];

//    cout << maxi1 << endl;
//

    for(int i=0; i<maxi; i++)
    {
        if(ar2[i]==maxi1)
        {
            cout << i+1 << endl;
            break;
        }

    }



//    vector<int>v1;
//
//
//    for(int i=0; i<v.size(); i++)
//    {
//        if(v[i]==v[i+1])
//        {
//            int sum = v[i];
//
//            for(int j=i; j<v.size(); j++)
//            {
//                if(v[j]==v[j+1])
//                {
//                    sum += v[j+1];
//                }
//                else
//                {
//                    v1.push_back(sum);
//                    break;
//                }
//
//            }
//
//        }
//        else
//        {
//            v1.push_back(v[i]);
//
//        }
//    }
//    sort(v1.begin(),v1.end());
//
//    cout << v1[v1.size()-1] << endl;
//

    return 0;
}
