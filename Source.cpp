#include<iostream>
#include<string>
#include<unordered_map>
#include"Dictionary.h"
#include <string.h>
using namespace std;
int main()
{
	Dictionary d;
	cout << d.dic.size() << endl;
	while (true)
	{
		cout << "Welcome! \n Please select what you want to do: \n";
		cout << "To insert aword press 1: \nTo Edit the meaning of a certain word press 2: \nTo Search for the meaning of a word press 3: \nTo Display all words sorted,with their corresponding meanings Press 4: \nTo exit press 0: \n";
		int a;
		cin >> a;
		switch (a)
		{
		case 1:
			d.insert();
			break;
		case 2:
			d.edit();
			break;
		case 3:
			d.search();
			break;
		case 4:
			d.diplay();
			break;
		default:
			cout << "error " << endl;
			break;
		}
		cout << endl;
		if (a == 0)
			break;
	}
	return 0;
}
