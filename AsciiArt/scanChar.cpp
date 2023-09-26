/*
Ascii::printchar displays exactly one ASCII character from A to Z (inclusive) on multiple rows and columns.
Now, we want to do the reverse operation: to get a character from its graphic representation. 
Implement the method scanChar(strings) so that returns the character associated to the graphic representation provided by AsciiArt::printChar(char c)
*/

#include <string>
#include "AsciiArt.h"


using namespace std;

class Answer {
public:
	/* @return the character for which str is the representation */
	static char scanChar(string str) {
		for (char c = 'A'; c <= 'Z'; c++) {
			if (AsciiArt::printChar(c) == str) {
				return c;
			}
		}
		return '?';
	}

};