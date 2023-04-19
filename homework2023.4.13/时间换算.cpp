#include<iostream>
using namespace std;
class Time{
	public:
		int m_count; //用整数表示这个时间
		int m_h;//表示小时的部分
		int m_m;//表示分钟的部分
	
		int Gethour (int count){
			return count/100;
		}
		int Getminute(int count){
			return count%100;
		}
		
};
int main()
{
	Time bjt;
	Time utc;

	cin>>bjt.m_count;
	bjt.m_h=bjt.Gethour(bjt.m_count);
	bjt.m_m=bjt.Getminute(bjt.m_count);

	utc.m_h=bjt.m_h-8;
	utc.m_m=bjt.m_m;
	
	if(utc.m_h==0){
		cout<<utc.m_m<<endl;
	}
	else{
	cout<<utc.m_h;
	if(utc.m_m<10){
		cout<<"0"<<utc.m_m<<endl;
	}
	else{
		cout<<utc.m_m<<endl;
	}
		
	}	
	return 0;
}
