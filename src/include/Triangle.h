
class Triangle {

  private:
  int sides[3];
  // int s1;
  // int s2;
  // int s3;

  public:
  int getSide1() { return sides[0]; }
  int getSide2() { return sides[1]; }
  int getSide3() { return sides[2]; }

  void setSide1(int s) { sides[0] = s; }
  void setSide2(int s) { sides[1] = s; }
  void setSide3(int s) { sides[2] = s; }

  Triangle(int a, int  b, int c) {
    sides[0] = a;
    sides[1] = b;
    sides[2] = c;
  }

  double getArea() {
    double s = (this->getSide1() + this->getSide2() + this->getSide3()) / 2.0;
    double area = sqrt((s * (s - this->getSide1()) * (s - this->getSide2()) * (s - this->getSide3())));
    return area;
  }

};
