
#ifndef LINE_H
#define LINE_H
 
class Line {
  public:
    Line();
    Line(double start_x, double start_y, double end_x, double end_y);
    void setStartPoint(double x, double y);
    void setEndPoint(double x, double y);
  private:
    double start_point[2], end_point[2];
};

#endif
