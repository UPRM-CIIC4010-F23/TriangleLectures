#include <iostream>
#include <cmath>
#include <cctype>
#include <string>
#include<vector>
#include "include/Triangle.h"

using namespace std;


// Returns new string with all spaces replaced with '_'
string encodeSpaces(string unencoded) {

  string result = "";

  for (int i=0; i < unencoded.size(); i++) {

    if (isspace(unencoded[i])) {
      result = result + '_';
    } else {
      result = result + unencoded[i];
    }

  }
  return result;
}

// Returns a new string  removing all non-alpha chars
string removeNonAlpha(string sourceString) {

  string result = "";
  for (int i=0;  i<sourceString.size(); i++) {

    if (isalpha(sourceString[i])) {
      result = result + sourceString[i];
    }

  }
  return result;

}



int main() {

  Triangle t(10,10,10);

  cout << "Area of first triangle is: " << t.getArea() << endl;
  cout << "Area of second triangle is: " << Triangle(20,20,20).getArea() << endl;

  // double actual = getAlpha(Triangle(10,10,10));
  // double expected = (M_PI / 3.0);

  cout << ((Triangle(10,10,10).getAlpha() == (M_PI / 3.0)) ? "PASS" : "FAIL") << endl;


  cout << "Test#1 isLargerThan: "<< (Triangle(20,20,20).isLargerThan(Triangle(10,10,10)) ? "PASS" : "FAIL") << endl;
  cout << "Test#2 isLargerThan: "<< (Triangle(10,10,10).isLargerThan(Triangle(20,20,20)) ? "FAIL" : "PASS") << endl;
  cout << "Test#3 isLargerThan: "<< (Triangle(10,10,10).isLargerThan(Triangle(10,10,10)) ? "FAIL" : "PASS") << endl;

  string result = encodeSpaces("Goodbye Cruel World");

  cout << result << endl;

  string result2 = removeNonAlpha("jhfs8745&^$  \n");

  cout << result2 << endl;

  cout << "Goodbye Bienve" << endl;

  Triangle t2(10,10,10) ;
  cout << "Perimeter is: " << t2.getSide1() + t2.getSide2() + t2.getSide3() << endl ;

  vector<Triangle> triangleVector { Triangle(10,10,10), Triangle(20,20,20), Triangle(30,30,30)} ;

  cout <<"sumOfAreas is: " << Triangle::sumOfAreas(triangleVector) << endl ;
  cout <<"sumOfAreas is: " << Triangle::sumOfAreas(triangleVector) << endl ;
  
  return 0;
}
