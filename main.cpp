#include <iostream>
#include <string>
#include "line.cpp"

using namespace std;

void outputLineInfo(Line ex_line);

int main() {
  cout << "What is the length of your layout?\n";
  double length;
  getline(cin, length);
  cout << "What is the width of your layout?\n";
  double width;
  getline(cin, width);
  cout << "How many partitions are in your layout\n";
  int partitions;
  getline(cin, partitions);
  
  for(int i = 0; i < partitions; i++){
      
  }
  Line ex_line(0,0,23,23); 
  outputLineInfo(ex_line);
  return 0;
}

void outputLineInfo(Line ex_line){
  cout << "Start:\nx: " << ex_line.getStartPoint().at(0) << "\ny: " << ex_line.getStartPoint().at(1) << "\n";
  cout << "End:\nx: " << ex_line.getEndPoint().at(0) << "\ny: " << ex_line.getEndPoint().at(1) << "\n";;
}

