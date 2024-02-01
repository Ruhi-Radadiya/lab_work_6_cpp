#include<iostream>
using namespace std;

class cricket{

	public :
		void T20match(){
			cout<<"136 runs"<<endl;
	
		}
};
class crickettest : public cricket
{

public :
		void testmatch(){
			cout<<"231 runs"<<endl;
		}
	};
	
	int main(){
		crickettest c1;
		c1.T20match();
		c1.testmatch();
		return 0;
	}