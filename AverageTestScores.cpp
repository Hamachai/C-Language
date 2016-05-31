#include <iostream>
using namespace std;

int main()
{
	double test1, test2, test3, test4, test5;
	double average;

	cout << "Welcome to the average calculator" << endl;
	cout << "Please enter 5 tests scores" << endl;
	cout << "1)";
	cin >> test1;
	cout << "2)";
	cin >> test2;
	cout << "3)";
	cin >> test3;
	cout << "4)";
	cin >> test4;
	cout << "5)";
	cin >> test5;
	cout << endl;

	average = (test1 + test2 + test3 + test4 + test5) / 5.0;

	cout << "Average test score: " << average << endl;

	return 0;
}