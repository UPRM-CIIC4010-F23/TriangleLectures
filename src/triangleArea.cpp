#include <iostream>
#include <cmath>
#include <cctype>
#include <string>
#include "include/Triangle.h"

using namespace std;



// Returns the angle in radians opposite to side a
double getAlpha(Triangle  t) {

  double cosineAlpha = ((t.getSide1() * t.getSide1()) - (t.getSide2() * t.getSide2()) - (t.getSide3() * t.getSide3())) / (-2.0  * t.getSide2()  * t.getSide3());
  double alpha = acos(cosineAlpha);
  return alpha;

}

bool isLargerThan(Triangle t1, Triangle t2) {

  return (t1.getArea()  >  t2.getArea());

}

double sumOfAreas(Triangle triangles[],  int numTriangles) {

  double result =  0;
  for (int i=0; i<numTriangles; i++) {
    result = result + triangles[i].getArea();
  }
  return result;

}

Triangle findLargest(Triangle triangles[], int numTriangles) {

    Triangle largest = triangles[0];
    for (int i=1;  i<numTriangles; i++) {
      if (triangles[i].getArea() > largest.getArea())  {
        largest = triangles[i];
      }
    }
    return largest;

}

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

  // Triangle t(10,10,10);

  cout << "Area of first triangle is: " << Triangle(10,10,10).getArea() << endl;
  cout << "Area of second triangle is: " << Triangle(20,20,20).getArea() << endl;

  // double actual = getAlpha(Triangle(10,10,10));
  // double expected = (M_PI / 3.0);

  cout << ((getAlpha(Triangle(10,10,10)) == (M_PI / 3.0)) ? "PASS" : "FAIL") << endl;


  cout << "Test#1 isLargerThan: "<< (isLargerThan(Triangle(20,20,20),Triangle(10,10,10)) ? "PASS" : "FAIL") << endl;
  cout << "Test#2 isLargerThan: "<< (isLargerThan(Triangle(10,10,10),Triangle(20,20,20)) ? "FAIL" : "PASS") << endl;
  cout << "Test#3 isLargerThan: "<< (isLargerThan(Triangle(10,10,10),Triangle(10,10,10)) ? "FAIL" : "PASS") << endl;

  string result = encodeSpaces("Goodbye Cruel World");

  cout << result << endl;

  string result2 = removeNonAlpha("jhfs8745&^$  \n");

  cout << result2 << endl;

  cout << "Goodbye Bienve" << endl;
  
  return 0;
}
