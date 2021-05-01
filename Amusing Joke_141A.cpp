#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[105],s1[105],s2[105];
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i3=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s3=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;

    int a1=0,b1=0,c1=0,d1=0,e1=0,f1=0,g1=0,h1=0,i12=0,j1=0,k1=0,l1=0,m1=0,n1=0,o1=0,p1=0,q1=0,r1=0,s12=0,t1=0,u1=0,v1=0,w1=0,x1=0,y1=0,z1=0;

    int a2=0,b2=0,c2=0,d2=0,e2=0,f2=0,g2=0,h2=0,i22=0,j2=0,k2=0,l2=0,m2=0,n2=0,o2=0,p2=0,q2=0,r2=0,s22=0,t2=0,u2=0,v2=0,w2=0,x2=0,y2=0,z2=0;


    scanf("%s",s);

    scanf("%s",s1);

    scanf("%s",s2);


    int len_1 = strlen(s);

    int len_2 = strlen(s1);

    int len_3 = strlen(s2);

    //cout<< len_1 <<endl;

    for(int i=0; i<len_1; i++)
    {
        if(s[i]=='A')
            a++;
        else if(s[i]=='B')
            b++;
        else if(s[i]=='C')
            c++;
        else if(s[i]=='D')
            d++;
        else if(s[i]=='E')
            e++;
        else if(s[i]=='F')
            f++;
        else if(s[i]=='G')
            g++;
        else if(s[i]=='H')
            h++;
        else if(s[i]=='I')
            i3++;
        else if(s[i]=='J')
            j++;
        else if(s[i]=='K')
            k++;
        else if(s[i]=='L')
            l++;
        else if(s[i]=='M')
            m++;
        else if(s[i]=='N')
            n++;
        else if(s[i]=='O')
            o++;
        else if(s[i]=='P')
            p++;
        else if(s[i]=='Q')
            q++;
        else if(s[i]=='R')
            r++;
        else if(s[i]=='S')
            s3++;
        else if(s[i]=='T')
            t++;
        else if(s[i]=='U')
            u++;
        else if(s[i]=='V')
            v++;
        else if(s[i]=='W')
            w++;
        else if(s[i]=='X')
            x++;
        else if(s[i]=='Y')
            y++;
        else if(s[i]=='Z')
            z++;
    }



    for(int i=0; i<len_2; i++)
    {

        if(s1[i]=='A')
            a1++;
        else if(s1[i]=='B')
            b1++;
        else if(s1[i]=='C')
            c1++;
        else if(s1[i]=='D')
            d1++;
        else if(s1[i]=='E')
            e1++;
        else if(s1[i]=='F')
            f1++;
        else if(s1[i]=='G')
            g1++;
        else if(s1[i]=='H')
            h1++;
        else if(s1[i]=='I')
            i12++;
        else if(s1[i]=='J')
            j1++;
        else if(s1[i]=='K')
            k1++;
        else if(s1[i]=='L')
            l1++;
        else if(s1[i]=='M')
            m1++;
        else if(s1[i]=='N')
            n1++;
        else if(s1[i]=='O')
            o1++;
        else if(s1[i]=='P')
            p1++;
        else if(s1[i]=='Q')
            q1++;
        else if(s1[i]=='R')
            r1++;
        else if(s1[i]=='S')
            s12++;
        else if(s1[i]=='T')
            t1++;
        else if(s1[i]=='U')
            u1++;
        else if(s1[i]=='V')
            v1++;
        else if(s1[i]=='W')
            w1++;
        else if(s1[i]=='X')
            x1++;
        else if(s1[i]=='Y')
            y1++;
        else if(s1[i]=='Z')
            z1++;

    }

    for(int i=0; i<len_3; i++)
    {
         if(s2[i]=='A')
            a2++;
        else if(s2[i]=='B')
            b2++;
        else if(s2[i]=='C')
            c2++;
        else if(s2[i]=='D')
            d2++;
        else if(s2[i]=='E')
            e2++;
        else if(s2[i]=='F')
            f2++;
        else if(s2[i]=='G')
            g2++;
        else if(s2[i]=='H')
            h2++;
        else if(s2[i]=='I')
            i22++;
        else if(s2[i]=='J')
            j2++;
        else if(s2[i]=='K')
            k2++;
        else if(s2[i]=='L')
            l2++;
        else if(s2[i]=='M')
            m2++;
        else if(s2[i]=='N')
            n2++;
        else if(s2[i]=='O')
            o2++;
        else if(s2[i]=='P')
            p2++;
        else if(s2[i]=='Q')
            q2++;
        else if(s2[i]=='R')
            r2++;
        else if(s2[i]=='S')
            s22++;
        else if(s2[i]=='T')
            t2++;
        else if(s2[i]=='U')
            u2++;
        else if(s2[i]=='V')
            v2++;
        else if(s2[i]=='W')
            w2++;
        else if(s2[i]=='X')
            x2++;
        else if(s2[i]=='Y')
            y2++;
        else if(s2[i]=='Z')
            z2++;

    }


   if(a2==(a+a1) && b2==(b+b1) && c2==(c+c1) && d2==(d+d1) && e2==(e+e1) && f2==(f+f1) && g2==(g+g1) && h2==(h+h1) && i22==(i3+i12) && j2==(j+j1) && k2==(k+k1) && l2==(l+l1) && m2==(m+m1) && n2==(n+n1) && o2==(o+o1) && p2==(p+p1) && q2==(q+q1) && r2==(r+r1) && s22==(s12+s3) && t2==(t+t1) && u2==(u+u1) && v2==(v+v1) && w2==(w+w1) && x2==(x+x1) && y2==(y+y1) && z2==(z+z1))
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout<< "NO"<<endl;
    }
    return 0;
}

