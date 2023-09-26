/*
ASCII art allows you to represent forms by using characters. To be precise, in our case, these forms are words. For example, the word "MANHATTAN" could be displayed as follows in ASCII art:


# #  #  ### # #  #  ### ###  #  ###
### # # # # # # # #  #   #  # # # #
### ### # # ### ###  #   #  ### # #
# # # # # # # # # #  #   #  # # # #
# # # # # # # # # #  #   #  # # # #

​Your mission is to write a program that can display a line of text in ASCII art in a style you are given as input.

*/


/*Input
Line 1: the width l of a letter represented in ASCII art. All letters are the same width.

Line 2: the height h of a letter represented in ASCII art. All letters are the same height.

Line 3: The line of text t, composed of N ASCII characters.

Following lines: the string of characters ABCDEFGHIJKLMNOPQRSTUVWXYZ? Represented in ASCII art.

Output
The text t in ASCII art.
The characters a to z are shown in ASCII art by their equivalent in upper case.
The characters that are not in the intervals [a-z] or [A-Z] will be shown as a question mark in ASCII art.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
/*
* input:
* 
4
5
MANHATTAN
 #  ##   ## ##  ### ###  ## # # ###  ## # # #   # # ###  #  ##   #  ##   ## ### # # # # # # # # # # ### ### 
# # # # #   # # #   #   #   # #  #    # # # #   ### # # # # # # # # # # #    #  # # # # # # # # # #   #   # 
### ##  #   # # ##  ##  # # ###  #    # ##  #   ### # # # # ##  # # ##   #   #  # # # # ###  #   #   #   ## 
# # # # #   # # #   #   # # # #  #  # # # # #   # # # # # # #    ## # #   #  #  # # # # ### # #  #  #       
# # ##   ## ##  ### #    ## # # ###  #  # # ### # # # #  #  #     # # # ##   #  ###  #  # # # #  #  ###  # 

output:
# #  #  ### # #  #  ### ###  #  ###
### # # # # # # # #  #   #  # # # #
### ### # # ### ###  #   #  ### # #
# # # # # # # # # #  #   #  # # # #
# # # # # # # # # #  #   #  # # # #


*/

//write a program that can display a line of text in ASCII art in a style you are given as input.

int main()
{
    int l;
    cin >> l; cin.ignore();
    int h;
    cin >> h; cin.ignore();
    string t;
    getline(cin, t);
    vector<string> asciiArt;
    for (int i = 0; i < h; i++) {
        string row;
        getline(cin, row);
        asciiArt.push_back(row);
    }
    // write a program that can display a line of text in ASCII art in a style you are given as input.
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < t.length(); j++) {
			int index = 0;
            if (t[j] >= 'a' && t[j] <= 'z') {
				index = t[j] - 'a';
			}
            else if (t[j] >= 'A' && t[j] <= 'Z') {
				index = t[j] - 'A';
			}
            else {
				index = 26;
			}
			cout << asciiArt[i].substr(index * l, l);
		}
	
	cout << endl;
	}

}