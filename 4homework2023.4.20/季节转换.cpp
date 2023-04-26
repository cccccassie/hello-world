#include<iostream>
#include<string.h>
using namespace std;
class Season{
	public:
		int m_number;
	
		string Getseason(int number){
			if(number==1){
				cout<<"Spring"<<endl;
			}
			if(number==2){
				cout<<"Summer"<<endl;
			}
			if(number==3){
				cout<<"Fall"<<endl;
			}
			if(number==4){
				cout<<"Winter"<<endl;
			}
		}
		
};
int main()
{
	Season s;
	cin>>s.m_number;
	s.Getseason(s.m_number);
	
	return 0;
}
