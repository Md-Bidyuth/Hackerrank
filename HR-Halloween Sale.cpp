#include<iostream>
using namespace std;
int main()
{
    int b,p,d,m,s;
    cin>>p>>d>>m>>s;
    int count=0;
    b=p;
    while(b<=s)
    {
        if(p-d>m)
        p=p-d;
        else
        p=m;

    b=b+p;
    count++;
    }
    cout<<count;



    return 0;
}

/*#include<stdio.h>
int main()
{
    int ct=0,i,p,d,m,s;
    scanf("%d %d %d %d",&p,&d,&m,&s);
    i=p;
    while(i<=s)
    {
        if(p-d>m) p-=d;
        else p=m;
        i+=p;
        ct+=1;
    }
    printf("%d",ct);

    return 0;
}*/

