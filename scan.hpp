#include <cstdio>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
struct scan {
public:
  scan(std::string PATH);
  void readFile();
  void setPath(std::string PATH);
  std::vector<std::string> getLog();
  std::string filePath = "";
  std::ifstream read;
  std::fstream write;
  std::string x;
  std::string a;
  std::vector<std::string> logLines;
};
