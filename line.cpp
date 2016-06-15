#include "line.h"

Line::Line(){
  double start_point[2], end_point[2] = {0, 0};
}

Line::Line(double start_x, double start_y, double end_x, double end_y){
  double start_point[2] = {start_x, start_y};
  double end_point[2] = {end_x, end_y};
}
