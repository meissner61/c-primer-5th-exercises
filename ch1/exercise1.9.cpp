#include <iostream>

using namespace std;

int main()
{
	int i = 50;
	int counter = 0;

	while (i <= 100)
	{
		counter += i;
		i++;
	}

	//cout << "test" << endl;

	

	cout << counter << endl;
	cin.get();

	return 0;
} 