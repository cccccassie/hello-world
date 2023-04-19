#include<iostream>
#define PI 3.14 
using namespace std;
class Circle{
	public:
		float m_r;
		float m_d;
		float m_c;
		float m_s;
	float circu(float r){
		return 2*PI*r; 
	} 
	float score(float r){
		return PI*r*r; 
	}

};
int main()
{ 
   Circle c;
   cin>>c.m_r;
   c.m_d=2*c.m_r;
   c.m_c=c.circu(c.m_r);
   c.m_s=c.score(c.m_r);
	cout<<"圆的直径="<<c.m_d<<endl;
	cout<<"圆的周长="<<c.m_c<<endl;
	cout<<"圆的面积="<<c.m_s<<endl;
	return 0;
}
