#include<cmath>
#include "include/Triangle.h"


// methods
  double Triangle::getArea() {
    double s = (this->getSide1() + this->getSide2() + this->getSide3()) / 2.0;
    double area = sqrt((s * (s - this->getSide1()) * (s - this->getSide2()) * (s - this->getSide3())));
    return area;
  }

  // Returns the angle in radians opposite to side a
  double Triangle::getAlpha() {

    double cosineAlpha = ((this->getSide1() * this->getSide1()) - (this->getSide2() * this->getSide2()) - (this->getSide3() * this->getSide3())) / (-2.0  * this->getSide2()  * this->getSide3());
    double alpha = acos(cosineAlpha);
    return alpha;

  }

bool Triangle::isLargerThan(Triangle t2) {

  return (this->getArea()  >  t2.getArea());

}

double Triangle::sumOfAreas(vector<Triangle> triangles) {

  double result =  0;
  for (int i=0; i<triangles.size(); i++) {
    result = result + triangles[i].getArea();
  }
  return result;

}

Triangle Triangle::findLargest(Triangle triangles[], int numTriangles) {

    Triangle largest = triangles[0];
    for (int i=1;  i<numTriangles; i++) {
      if (triangles[i].getArea() > largest.getArea())  {
        largest = triangles[i];
      }
    }
    return largest;

}