#include<iostream>
using namespace std;
int runnian(int y)
{
    int flag=0;
    if((y%4==0&&y%100!=0)||(y%100==0&&y%400==0))
    flag=1;
    return flag;
}

int main()
{
    int y,m,d;
    scanf("%d-%d-%d",&y,&m,&d);
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int count=0;
    int d1=0;
    for(int i=1990;i<y;i++)
    {
        if(runnian(i))
        count++;
    }
    d1=365*(y-1990)+count;
    int d2=0;
    
    if(m==2)
    {
        d2=a[1];
    }
    else
    if(m>2)
    {
        for(int i=1;i<m;i++)
        {
            d2+=a[i];
        }
        if(runnian(y))
        d2++;
    }
    int total_day=d1+d2+d;
    int week=total_day%7;
    switch(week){
    case 0:
            cout<<"Sunday"<<endl;
            break;
    case 1:
            cout<<"Monday"<<endl;
            break;
    case 2:
            cout<<"Tuesday"<<endl;
            break;
    case 3:
            cout<<"Wednesday"<<endl;
            break;
    case 4:
            cout<<"Thursday"<<endl;
            break;
    case 5:
            cout<<"Friday"<<endl;
            break;
    case 6:
            cout<<"Saturday"<<endl;
            break;
    
    }

    return 0;
}
