#include "UpcomingReminders.h"
#include <cstring>
#include <iostream>
using namespace std;

UpcomingReminders::UpcomingReminders() {
  status = 0;
  strcpy(newReminderTime, "");
  strcpy(newDate, "");
  strcpy(scheduledDate, "");
  strcpy(scheduledTime, "");
}

UpcomingReminders::UpcomingReminders(int Ustatus, char UnewReminderTime[],char UnewDate[], char UscheduledDate[], char UscheduledTime[]) {
  status = Ustatus;
  strcpy(newReminderTime, UnewReminderTime);
  strcpy(newDate, UnewDate);
  strcpy(scheduledDate, UscheduledDate);
  strcpy(scheduledTime, UscheduledTime);
}
void UpcomingReminders::setNewDetails(char UnewReminderTime[], char UnewDate[]) {}
void UpcomingReminders::setScheduledDetails(char schedDate[], char schedTime[]) {}
void UpcomingReminders::displayUpcomingReminders() {}
void UpcomingReminders::editUpcomingReminders() {}
int UpcomingReminders::checkStatus(char schedDate[], char schedTime) {}
UpcomingReminders::~UpcomingReminders() {
  cout << "destructor activated!" << endl;
}