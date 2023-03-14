#include<iostream>
#include<string.h>

using namespace std;

class message
{
	private :
		char v[];
		public :
			message(char r[])
			{
				strcpy(v,r);
			}
			
			void print()
			{
				cout<<"cinema"<<endl;
			}
			
			void print(char r[])
			{
				cout<<v<<" "<<r;
			}
};

int main()
{
	message obj("inox");
	obj.print();
	obj.print("pvr");
	
	return 0;
	

}
