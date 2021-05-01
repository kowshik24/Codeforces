

/** Seek God..Trust God..Praise God..**/

#include<bits/stdc++.h>
using namespace std;







int a[5005];

int main()
{


    int n;

    cin >> n;

    printf("? 1 2\n");
    fflush(stdout);

    int x;

    cin >> x;

    printf("? 1 3\n");
    fflush(stdout);

    int y;

    cin >> y;


    printf("? 2 3\n");
    fflush(stdout);

    int z;

    cin >> z;


    a[1] = (x+y-z)/2;
    a[2] = (x-y+z)/2;
    a[3] = (y-x+z)/2;

    for(int i=4; i<=n; i++)
    {
        printf("? 1 %d\n",i);
        fflush(stdout);

        int xx;

        cin >> xx;

        a[i] = (xx-a[1]);
    }

    printf("! ");
    fflush(stdout);


    for(int i=1; i<=n; i++)
    {
        printf("%d ",a[i]);
        fflush(stdout);
    }

    printf("\n");
    fflush(stdout);





    return 0;
}
