#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Student{
	public:
		
		string m_name; 
		float m_partscore; //平时成绩 
		float m_finalscore;//期末成绩 
		float m_score;//总成绩 

	float Sumscore(float partscore,float finalscore){ //算出总成绩 
		return partscore*0.4+finalscore*0.6;
	}
	
};
int main()
{
	int i=0,t=0,q=0,j=0,k=0;
	string str;
	Student s[100];
	while(cin>>s[i].m_name){
		cin>>s[i].m_partscore;
		cin>>s[i].m_finalscore;
		s[i].m_score=s[i].Sumscore(s[i].m_partscore,s[i].m_finalscore);
		i++;
	}
	
	for(q=0;q<i;q++){
		for(j=0;j<i-q-1;j++){
		if(s[j].m_score<s[j+1].m_score)	{
        
		t=s[j+1].m_score;
        s[j+1].m_score=s[j].m_score;
		s[j].m_score=t;	
		
		t=0;
		t=s[j+1].m_partscore;
        s[j+1].m_partscore=s[j].m_partscore;
		s[j].m_partscore=t;	
		
		t=0;
		t=s[j+1].m_finalscore;
        s[j+1].m_score=s[j].m_finalscore;
		s[j].m_finalscore=t;
		
		str=s[j+1].m_name;
		s[j+1].m_name=s[j].m_name;
		s[j].m_name=str;
			
		}
	
		}
	}
	for(k=0;k<i;k++){
	cout<<setiosflags (ios::fixed)<<setprecision(2)<<s[k].m_name
	<<" "<<s[k].m_partscore<<"  "<<s[k].m_finalscore<<"  "
	<<s[k].m_score<<endl;
	}
	
	return 0;
}

