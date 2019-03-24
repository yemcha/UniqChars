#include "pch.h"
#include <cstring> 
#include <iostream> 
#include <string>
using namespace std;

bool uniqChars(string str)
{

	// If at any time we encounter 2 
	// same characters, return false 
	for (int i = 0; i < str.length(); i++) {
		for (int j = i + 1; j < str.length(); j++) {
			if (str[i] == str[j]) {
				return false;
			}
		}
	}

	// If no duplicate characters encountered, 
	// return true 
	return true;
}

// driver code 
int main()
{
	string str = "XaticArt";

	if (uniqChars(str))
	{
		cout << "The String " << str
			<< " has all unique characters\n";
	}
	else 
	{
		cout << "The String " << str
			<< " has duplicate characters\n";
	}
	return 0;
}