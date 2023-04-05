#include<iostream>
using namespace std;

class thnum
{
    private:
    int bai;
    int shi;
    int ge;

    public:
    void setbai(int num)
    {
        bai=num;
    }
    void setshi(int num)
    {
        shi=num;
    }
    void setge(int num)
    {
        ge=num;
    }
    int getbai()
    {
        return bai;
    }
    int getshi()
    {
        return shi;
    }
    int getge()
    {
        return ge;
    }

    
};
int main()
{
    thnum num1;
    int num;
    cin>>num;
    
    num1.setbai(num/100);
    num%=100;
    num1.setshi(num/10);
    num%=10;
    num1.setge(num);

    cout<<num1.getbai() + num1.getshi() + num1.getge();
}

