#include<bits/stdc++.h>
using namespace std;


int main()
{


    list<int>list1 = {2,6,7,8};




    list<int>list2 = {2,3,4,5};



    list1.splice(list1.begin() ,list2);


    for(auto &it:list1)
        cout <<  it << ' ';

        cout << endl;





}
