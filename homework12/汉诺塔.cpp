#include<iostream>
#include<string.h>
using namespace std;
int cnt=0;
void move(int x,int y)
{   cnt++;
    printf("Step%d:Move Disk from %c to %c\n",cnt,x,y);
}
void hanoi(int n,char a,char b,char c)
{
    if(n==1)
    {
        move(a,c);
    }
    else
    {
        hanoi(n-1,a,c,b);
        move(a,c);
        hanoi(n-1,b,a,c);
    }
}
int main()
{
    int n;
    cin>>n;
    hanoi(n,'A','B','C');
    return 0;
}