#include <iostream>
#include <cmath>
#include <cctype>
#include <string>
#include "include/Triangle.h"

using namespace std;

double getArea(Triangle t) {
  double s = (t.s1 + t.s2 + t.s3) / 2.0;
  double area = sqrt((s * (s-t.s1)*(s-t.s2)*(s-t.s3)));
  return area;
}

// Returns the angle in radians opposite to side a
double getAlpha(Triangle  t) {

  double cosineAlpha = ((t.s1 * t.s1) - (t.s2 * t.s2) - (t.s3 * t.s3)) / (-2.0  * t.s2  * t.s3);
  double alpha = acos(cosineAlpha);
  return alpha;

}

bool isLargerThan(Triangle t1, Triangle t2) {

  return (getArea(t1)  >  getArea(t2));

}

double sumOfAreas(Triangle triangles[],  int numTriangles) {

  double result =  0;
  for (int i=0; i<numTriangles; i++) {
    result = result + getArea(triangles[i]);
  }
  return result;

}

Triangle findLargest(Triangle triangles[], int numTriangles) {

    Triangle largest = triangles[0];
    for (int i=1;  i<numTriangles; i++) {
      if (getArea(triangles[i]) > getArea(largest))  {
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

  cout << "Area of first triangle is: " << getArea(Triangle(10,10,10)) << endl;
  cout << "Area of second triangle is: " << getArea(Triangle(20,20,20)) << endl;

  // double actual = getAlpha(Triangle(10,10,10));
  // double expected = (M_PI / 3.0);

  cout << ((getAlpha(Triangle(10,10,10)) == (M_PI / 3.0)) ? "PASS" : "FAIL") << endl;

  string result = encodeSpaces("Goodbye Cruel World");

  cout << result << endl;

  string result2 = removeNonAlpha("jhfs8745&^$  \n");

  cout << result2 << endl;

  cout << "Goodbye" << endl;
  
  return 0;
}
