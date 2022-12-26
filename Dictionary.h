#pragma once
#include <iostream>
#include <unordered_map>
#include <string>
#include <string.h>
using namespace std;
class Dictionary
{
public:
	unordered_map<string, string> dic;
public:
	void insert();
	void edit();
	void search();
	void diplay();
	Dictionary();
	~Dictionary();
};

