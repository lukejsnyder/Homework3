int main(int [] list, int length)
{
	int largeno = 0;
	int smallno = 0;
	int temp;
	
	smallno = list[0];
	largeno = list[0];

	for(int i = 1; i < length; i++)

	{
		temp = list[i];
		if(temp <smallno)
			smallno = temp;
		if(temp > largeno)
			largeno = temp;
	}

		cout << "The largest number in the array is" <<largeno<< endl;

	return 0;
}