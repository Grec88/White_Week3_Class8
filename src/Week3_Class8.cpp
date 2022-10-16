//============================================================================
// Name        : Week3_Class8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*class Incognizable{
private:
	int num1;
	int num2;
public:
	Incognizable() {
		num1 = 0;
		num2 = 0;
	}

	Incognizable(const int &a, const int &b){
		num1 = a;
		num2 = b;
	}

	Incognizable(const int &a){
			num1 = a;
			num2 = a;
		}
};*/

struct Incognizable {
  int x = 0;
  int y = 0;
};

int main() {
  Incognizable a;
  Incognizable b = {};
  Incognizable c = {0};
  Incognizable d = {0, 1};
  return 0;
}
