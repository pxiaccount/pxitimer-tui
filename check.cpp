#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool checkfile (string name) {
  ifstream f(name.c_str());
  return f.good();
}

int main() {
  string seconds_txt = "time_seconds.txt";
  string minutes_txt = "time_minutes.txt";
  string hours_txt = "time_hours.txt";
  bool seconds = checkfile(seconds_txt);
  bool minutes = checkfile(minutes_txt);
  bool hours = checkfile(hours_txt);
  if (seconds == 1) {
    system("rm time_seconds.txt");
  } else if (minutes == 1) {
    system("rm time_minutes.txt");
  } else if (hours == 1) {
    system("rm time_hours.txt");
  }
}
