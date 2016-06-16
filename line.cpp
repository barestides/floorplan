#include "line.h"

Line::Line(){
  start_point.push_back(0);
  start_point.push_back(0);
  end_point.push_back(0);
  end_point.push_back(0);

}

Line::Line(double start_x, double start_y, double end_x, double end_y){
  start_point.push_back(start_x);
  start_point.push_back(start_y);
  end_point.push_back(end_x);
  end_point.push_back(end_y);
}

void Line::setStartPoint(double x, double y){
  start_point[0] = x;
  start_point[1] = y;
}

void Line::setEndPoint(double x, double y){
  end_point[0] = x;
  end_point[1] = y;
}

std::vector<double> Line::getStartPoint(){
  return start_point;
}

std::vector<double> Line::getEndPoint(){
  return end_point;
}
