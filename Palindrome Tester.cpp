// Palindrome checker.cpp :
#include <iostream>
using namespace std;
int main()
{
	cout << "Palindrome checker." << endl;
	cout << "Enter number: ";
	char arr[100] = { 0 };
	cin >> arr;
	int j = 0;
	while (arr[j++]);
	j--;
	j--;
	bool match = false;
	for (int g = 0; g < j; g++)
	{
		
		if (arr[g] == arr[j])
			{
			match = true;
			}
		else
		{
			cout << "Not a palindrome number.";
			match = false;
				break;
		}
		j--;
	}
	if (match == true)
	{
		cout << "It is a palindrome number.";
	}
}

