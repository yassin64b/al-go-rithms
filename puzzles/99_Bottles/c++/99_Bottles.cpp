// 99 Beer Bottle problem
//

#include <iostream>
#include <conio.h>
#include <stringstream>
using namespace std;

int main()
{
	int bottles = 99;
	while (bottles >= 0)
	{
		cout << "How many bottles of beer on that wall?" << endl;
		string s = "";
		cin >> s;
		stringstream sstr(s);
		sstr >> bottles;
	}

	while (bottles != 0)
	{
		  cout << bottles << " bottles of beer on the wall, " << bottles << " bottles of beer." << endl;
		  cout << "Take one down and pass it around, " << --bottles << " bottles of beer on the wall." << endl;
	}
	   cout << "No more bottles of beer on the wall, no more bottles of beer. " << endl;
	   cout << "Go to the store and buy some more, 99 bottles of beer on the wall." << endl;

      return 0;
}
