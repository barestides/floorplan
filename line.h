
#ifndef LINE_H
#define LINE_H
#include <vector>
 
class Line {
  public:
    Line();
    Line(double start_x, double start_y, double end_x, double end_y);
    void setStartPoint(double x, double y);
    void setEndPoint(double x, double y);
    std::vector<double> getStartPoint();
    std::vector<double> getEndPoint();
  private:
    std::vector<double> start_point, end_point;
};

#endif
