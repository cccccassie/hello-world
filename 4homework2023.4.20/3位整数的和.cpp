#include<iostream>
using namespace std;
class Number{
	public:
		int m_count;//数值大小
	    int m_sum;
	int Get(int count){
	
	return count%10;
	
	}	
		 
};
int main()
{
	Number m;
	int i=0;

	cin>>m.m_count;
m.m_sum=0;
	for(i=0;i<3;i++){
		m.m_sum=m.m_sum+m.Get(m.m_count);
			m.m_count=m.m_count/10;	
	}
	cout<<m.m_sum<<endl;
	return 0;
	
}
