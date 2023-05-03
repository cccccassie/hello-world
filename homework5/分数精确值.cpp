#include<iostream>
using namespace std;
class fenshu{
    private:
    int a,b;
    public:
    fenshu(int c,int d):a(c),b(d)
    {

    }
    ~fenshu(){};
    int execute();
    int judge(){
        return a;
    }
};
int fenshu::execute()
{
    int x;
    a=a*10;
    x=a/b;
    a=a%b;
    return x;
}
int main()
{
    int c,d;
    scanf("%d/%d",&c,&d);
    fenshu n(c,d);
    cout<<"0.";
    for(int i=0;i<200;i++)
    {
        int num=n.execute();
        cout<<num;
        if(n.judge()==0)
        break;
    }
    cout<<endl;
    return 0;
}