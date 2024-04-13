#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

bool checkfile (string name) {
    ifstream f(name.c_str());
    return f.good();
}

int main() {
  string seconds_txt = "time_seconds.txt";
  string minutes_txt = "time_minutes.txt";
  string hours_txt = "time_hours.txt";
  ifstream read_s(seconds_txt);
  ifstream read_m(minutes_txt);
  ifstream read_h(hours_txt);
  bool seconds, minutes, hours;
  
  //Check if file exists
  seconds = checkfile(seconds_txt);
  minutes = checkfile(minutes_txt);
  hours = checkfile(hours_txt);
  string sData, mData, hData;
  cout << seconds << endl;
  cout << minutes << endl;
  cout << hours << endl;
  string content;

  // get data from file
  if (seconds == 1) {
    while (getline(read_s, content)) {
      sData = content;
      cout << sData << endl;
    }
  } else if (minutes == 1) {
    while (getline(read_m, content)) {
      mData = content;
      cout << mData << endl;
    }
  } else if (hours == 1) {
    while (getline(read_h, content)) {
      hData = content;
      cout << hData << endl;
    }
  } else {
    while (getline(read_m, content)) {
      mData = content;
      cout << mData << endl;
    }
  }
  read_s.close();
  read_m.close();
  read_h.close();

  int sInt, mInt, hInt;
  istringstream ss(sData);
  istringstream sm(mData);
  istringstream sh(hData);
  ss >> sInt;
  sm >> mInt;
  sh >> hInt;
  int final_time;
  // Multiply time
    if (seconds == 1) {
      final_time = sInt;
    } else if (minutes == 1) {
      final_time = mInt * 60;
    } else if (hours == 1) {
      final_time = hInt * 60 * 60;
    } else {
      final_time = mInt * 60;
    }

    cout << final_time << endl;

    int full = 60;
    if (seconds == 1) {
      cout << "00" << ":" << sInt << endl; 
      for (int i=final_time+59;i>=0;i--) {
	this_thread::sleep_for(chrono::milliseconds(1000));
	sInt--;
	if (sInt >= 10) {
	  cout << "00" << ":" << sInt << endl;
	}
	if (sInt < 10) {
	  cout << "00" <<  ":" << "0" << sInt << endl;
	}
	if (sInt == 0) {
	  break;
	}
      }
    } else if (minutes == 1) {
      if ( mInt < 10) {
	  cout << "0" << mInt << ":" << "00" << endl;
	} else {
	  cout << mInt << ":" << "00" << endl;
	}
      
      for (int i=final_time+59;i>=0;i--) {
	this_thread::sleep_for(chrono::milliseconds(1000));
	full--;
	if (full >= 10 && mInt >= 10) {
	  cout << mInt-1 << ":" << full << endl;
	}
	if (full >= 10 && mInt < 10) {
	  cout << "0" << mInt-1 << ":" << full << endl;
	}
	if (full < 10 && mInt < 10) {
	  cout << "0" << mInt-1 << ":" << "0" << full << endl;
	}
	if (full == 0) {
	  full = 60;
	  mInt -= 1;
	}
	if (mInt == 0) {
	  break;
	}
      }
    } else if (hours == 1) {
      if ( hInt < 10) {
	  cout << "0" << hInt << ":00:00" << endl;
	} else {
	  cout << hInt << ":00:00" << endl;
	}
      
      for (int i=final_time+59;i>=0;i--) {
	this_thread::sleep_for(chrono::milliseconds(1000));
	full--;
	if (full >= 10 && hInt >= 10) {
	  cout << hInt-1 << ":" << fu << endl;
	}
	if (full >= 10 && mInt < 10) {
	  cout << "0" << mInt-1 << ":" << full << endl;
	}
	if (full < 10 && mInt < 10) {
	  cout << "0" << mInt-1 << ":" << "0" << full << endl;
	}
	if (full == 0) {
	  full = 60;
	  mInt -= 1;
	}
	if (mInt == 0) {
	  break;
	}
      }
    } else {
      cout << mInt << ":" << "00";
      for (int i=mInt;i>=0;i--) {
	this_thread::sleep_for(std::chrono::milliseconds(1000));
	full--;
	cout << mInt << ":" << full;
	if (full == 0) {
	  full = 60;
	  mInt -= 1;
	}
      }
    }
}
