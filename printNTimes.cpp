#include <iostream>
using namespace std;
#include <string>
int x;
int n;
string message;

void main()


{
	cout<<"What message would you like to repeat?";
	cin>>message;
	cout<<"How many times would you like this message to be repeated";
	cin>> n;
	
	if(n<=0)
	{
		cout<<"Please pick a number that is greater than 0!";
	}
	else

	for(int x=0 ; x < n; x++)
		
	{
		cout << message << endl;
	}
}