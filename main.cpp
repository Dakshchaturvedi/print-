#include <iostream>
using namespace std;
void printSubstrings(string str)
{   for (int i = 0; i < str.length(); i++) {
		string subStr;
		for (int j = i; j < str.length(); j++) {
			subStr += str[j];
	         cout << subStr << endl;
            }
	}
}

int main()
{
	string str = "abcdabc";
	printSubstrings(str);
	return 0;
}

// time Complexity =O(N2)
