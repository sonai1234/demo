#include<iostream>
using namespace std;
#include<string>
class myclass   //the class
{
	public:   //access specificer
	int mynum;   //attribute (int variable)
	string mystring;   //attribute (string variable)
};
int main()
{
	cout<<"\n\t\tc++ program to demostrate the class and objects"<<endl;
	myclass myobj;   //create an object of myclass
	//access attribute and set values
	myobj.mynum=15;
	myobj.mystring="this is class and object program example";
	// print values
	cout<<"Numbers="<<myobj.mynum<<"\n";
	cout<<"String="<<myobj.mystring;
	return 0;
}
