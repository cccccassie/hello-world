#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int count=0;
        int n1,n2,b;
        cin>>n1>>n2>>b;
        while(count<=1)
        {  
         int a;
         if(count==0)
         {
            a=n1;
         }
         else
         a=n2;
          int c[100]={0};
       int x=0;
      while(a!=0)
    {
        c[x++]=a%b;
        a/=b;
    }
    for(int j=x-1;j>=0;j--)
    {
        if(c[j]>=0&&c[j]<=9)
        {cout<<c[j];}
        else
        {
            switch(c[j])
            {
                case 10:
                            cout<<'A';
                            break;
               case 11:
                            cout<<'B';
                            break;
             case 12:
                            cout<<'C';
                            break;    
            case 13:
                            cout<<'D';
                            break;
            case 14:
                            cout<<'E';
                            break;      
            case 15:
                            cout<<'F';
                            break;                     
                                               
            }
        }
       
    }
    cout<<endl;
    count++;
        }
    }
    return 0;
}
