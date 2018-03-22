#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	
  ifstream in("hello.txt"); // include the which needed to be read

  if(!in) {
    cout << "Cannot open input file.\n";
    return 1;
  }

  char str[255];

  while(in) {
    in.getline(str, 255);  // delim defaults to '\n'
    if(in) cout << str << endl;
  }

  in.close();

  return 0;
}
