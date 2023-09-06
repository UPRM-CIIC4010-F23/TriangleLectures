
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

  Triangle(int a, int  b, int c) {
    sides[0] = a;
    sides[1] = b;
    sides[2] = c;
  }

};
