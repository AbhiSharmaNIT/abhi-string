// C++ Program to print string using pointers
#include <iostream>
using namespace std;

int main()
{

	string s = "AbhishekKumar";

	char* ptr = &s[0];

	while (*ptr != '\0') {
		cout << *ptr;
		ptr++;
	}
	cout << endl;

	return 0;
}
