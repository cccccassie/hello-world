#include<iostream>
using namespace std;
class Score{
	public:
	int m_count;
	void Get(int s){
		if(s>=90){
			cout<<"A"<<endl;
		}else if(s>=80){
			cout<<"B"<<endl;
		}else if(s>=70){
			cout<<"C"<<endl;
		}else if(s>=60){
			cout<<"D"<<endl;
		}else cout<<"E"<<endl;
	}
};
int main()
{
	Score sco;
	cin>>sco.m_count;
	sco.Get(sco.m_count);
	return 0;
}
