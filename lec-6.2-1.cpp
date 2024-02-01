#include<iostream>
using namespace std;

class calculate{

	public :
		void divison(int a,int b){
			cout<<a/b<<endl;
	
		}
		void subtraction(int x,int y,int z){
			cout<<x-y-z<<endl;
			
			
		}
};
class calculate1{

	public :
		void muliplication(int p,int q,int r,int s){
			cout<<p*q*r*s<<endl;
	
		}
		void addition(int g,int h,int i,int j,int k){
			cout<<g+h+i+j+k<<endl;
			
			
		}
};

int main(){
	calculate c1;
	calculate1 c2;
	
	c1.divison(10,20);
	c1.subtraction(5,6,9);
	c2.muliplication(9,8,7,2);
	c2.addition(87,12,56,96,12);
	
	return 0;	
}