#include "Dictionary.h"
#include <iostream>

Dictionary::Dictionary()
{
	dic.insert(make_pair("play", "playing"));
	dic.insert(make_pair("go", "gone play to"));
	dic.insert(make_pair("study", "work"));
	dic.insert(make_pair("success", "successfull"));
}
void Dictionary::insert()
{
	string s1, s2;
	cout << "Enter your word" << endl;
	cin >> s1;
	cout << "Enter the meaning:" << endl;
	cin.ignore();
	getline(cin, s2);
	dic.insert(make_pair(s1,s2));
}
void Dictionary::edit()
{
	string s;
	cout << "Enter the word" << endl;
	cin >> s;
	unordered_map<string, string>::iterator it = dic.find(s);
	if (it == dic.end())
		cout << "word not found " << endl;
	else
	{
		cout << "the meaning before edit is " << it->second << endl;
		cout << "Enter the meaning after edit: " << endl;
		cin.ignore();
		string c;
		getline(cin, c);
		it->second = c;
	}
}
void Dictionary::search()
{
	cout << "Enter the word " << endl;
	string s;
	cin >> s;
	unordered_map<string, string>::iterator it = dic.find(s);
	if (it == dic.end())
		cout << "word not found " << endl;
	else
	{
		cout << "The meaning of word is: " << it->second << endl;
	}
}
void Dictionary::diplay()
{
	for (int i = 97; i <= 122; i++)
	{
		unordered_map<string, string>::iterator it1 = dic.begin();
		for (int a = 0; a < dic.size(); a++)
		{
			if (int(it1->first[0]) == i)
				cout << it1->first << "  " << it1->second << endl;
			it1++;
		}
	}
}
Dictionary::~Dictionary()
{
}
