#pragma once

#include<vector>

using namespace std;
class Triangle {

  private:
  // members
  int sides[3];
  // int s1;
  // int s2;
  // int s3;

  public:
  // getters
  int getSide1() const { return sides[0]; }
  int getSide2() const { return sides[1]; }
  int getSide3() const { return sides[2]; }
  
  // setters
  void setSide1(int s) { sides[0] = s; }
  void setSide2(int s) { sides[1] = s; }
  void setSide3(int s) { sides[2] = s; }

  // constructor
  Triangle(int a, int  b, int c) {
    sides[0] = a;
    sides[1] = b;
    sides[2] = c;
  }

  // instance methods
  double getArea()  const ; 
  double getAlpha() ; 
  bool isLargerThan(Triangle t2) ;

  // static methods
  static double sumOfAreas (const vector<Triangle> &triangles) ;
  static Triangle findLargest(Triangle triangles[], int numTriangles) ;

  static void scaleSides(vector<Triangle> &triangles, double factor) ;
  static void scaleSides(vector<Triangle> &triangles) ;

};
