#include <iostream>
using namespace std;

 int readinnumberinrange(int from , int to)
{

	int number;
	cout << "enter your number: " << from << "and" << to << endl;
	cin >> number;
	while (number < from ||  number>to)
	{
		cout << "wrong number";
		cout << "enter your number" << from << "and" << to << endl;
		cin >> number;
	}

  return number;
}
 int main() {

	 cout << "the number is " << readinnumberinrange(18 , 45) << endl;
	 return 0;
 }