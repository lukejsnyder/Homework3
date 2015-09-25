#include <iostream>
using namespace std;
//put special case 0
int main()

{
	int input, factorial = 1;

cout<<"Find the factorial of N";

cin>>input;

	if(input<0)
	{
		cout<<"Please use a non negative number ";
	}

	else
	{


	for(int i=1;i<=input;i++)
	{
		factorial=factorial*i;
	}

cout<<"The factorial of "<<input<<"="<<factorial<<endl;
	
	}

}
