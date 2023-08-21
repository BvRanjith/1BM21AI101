#include "StringMatcher.h"
#include <fstream>
#include <string>
#include <iomanip>
#include <iostream>
#include <istream>
#include <cstdlib>
#include <vector>

using namespace std;

int main(int argc, char ** argv) {

     int comparisons=0;
     StringMatcher matcher("Text.txt");

     // Find the first match, if any:

     size_t position = matcher.FindMatch("Discipline", comparisons);
     cout << position << endl;

     while ( position != string::npos ) {
     // process the search result...
     // Now find the next match, if any:
          position = matcher.FindMatch("Discipline",position + 1,comparisons);
          cout << position << endl;
     }
     return 0;
}
