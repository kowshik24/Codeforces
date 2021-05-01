#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2;

    scanf("%d : %d",&h1, &m1);

    scanf("%d : %d",&h2, &m2);

    int m = h1 * 60 + m1;

    int n = h2 *60 +  m2;

    int p = (n+m) / 2;

    printf("%02d:%02d",p / 60 , p%60);


    return 0;
}
