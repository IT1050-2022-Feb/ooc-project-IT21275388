#include "CompletedReminders.h"
#include <cstring>
#include <iostream>
using namespace std;

// defualt constructor
CompletedReminders::CompletedReminders() {
  status = 0;
  strcpy(scheduledDate, "");
  strcpy(scheduledTime, "");
  rID = 0;
}
// overload constructor
CompletedReminders::CompletedReminders(int Cstatus, char CscheduledDate[], char CscheduledTime[], int CrID) {
  status = Cstatus;
  strcpy(scheduledDate, CscheduledDate);
  strcpy(scheduledTime, CscheduledTime);
  rID = CrID;
}

void CompletedReminders::displayCompletedReminders() {}
int CompletedReminders::checkStatus(char schedDate[], char schedTime[]) {}
// destructor
CompletedReminders::~CompletedReminders() {
  cout << "destructor activated!" << endl;
}