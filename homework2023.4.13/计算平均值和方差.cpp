#include<iostream>
#include<iomanip>
using namespace std;
class Number{
	public:

		float a[6];
		float m_average;
		float m_fc;

	float Average(float a[]){
		int i=0;
		float sum=0.0;
		for(i=0;i<6;i++){
			sum=a[i]+sum;
		}
		return sum/6;
	}

	float FC(float a[],float average){
		int i=0;
		float t=0.0;
	for(i=0;i<6;i++){
		t=t+(a[i]-average)*(a[i]-average);
	}
	return t/6;
	}
};
int main()
{
	int n=0;
	int q=0,p=0;
	cin>>n;
	Number m;
	for(q=0;q<n;q++){
	   for(p=0;p<6;p++){
	   	cin>>m.a[p];
	   }
	   m.m_average=m.Average(m.a);
	   m.m_fc=m.FC(m.a,m.m_average);
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<m.m_average<<endl;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<< m.m_fc<<endl;   //控制小数点后的位置 

	}
	
	return 0;
}
