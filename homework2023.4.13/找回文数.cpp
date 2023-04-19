#include<iostream>
#include<string>
int Judge(int a[],int length);
using namespace std;
class Number{
	public:
	
	int m_length;
	int m_count;	
	
	int Length(int x){
		int p=0;
		for(p=0;x!=0;p++)
		{x=x/10;}
		return p;
		
	}
	

};
int main()
{
	int n=0,m=0,k=0;
	int sum=0;
	int q=0,p=0;
	int t=0;
	int a[99]; 
	cin>>n;
	for(q=0;q<n;q++){
		cin>>m;
		cin>>k;
		Number x;
	    x.m_count=m;
	    sum=0;
  
	   
	    for(;sum<k;x.m_count++){
	    	x.m_length=x.Length(x.m_count);
	    t=0;
	    t=x.m_count;	
		for(p=0;t!=0;p++){
			a[p]=t%10;
		t=t/10;
		}
	    	if(Judge(a,x.m_length)==1){
	    		sum++;
	    		cout<<x.m_count<<endl;
	    	}
	    }
		
	}
	
	return 0;
}
int Judge(int a[],int length)
{
	int i=0;
	int amount=0;;
	
		for(i=0;i<(length/2);i++){
			if(a[i]==a[length-1-i]){
			amount++;	
			}
			else{
				break;
			}
		}
  
    
		if(amount==length/2){
			return 1;
		}
		else return 0;	
}
