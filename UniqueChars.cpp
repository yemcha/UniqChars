// UniqueChars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

// C++ program to illustrate string 
// with unique characters using 
// brute force technique 
#include <bits/stdc++.h> 
using namespace std;

bool uniqueCharacters(string str)
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