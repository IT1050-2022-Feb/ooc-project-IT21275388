#include "Report.h"
#define SIZE1 5
#define SIZE2 5

Report::Report() {
  for (int i = 0; i < SIZE1; i++) {
    compR[i] = 0;
  }
  for (int j = 0; j < SIZE2; j++) {
    upcomR[j] = 0;
  }
}
Report::Report(UpcomingReminders *pup[], CompletedReminders *pcom[]) {
  for (int i = 0; i < SIZE1; i++) {
    compR[i] = pcom[i];
  }
  for (int j = 0; j < SIZE2; j++) {
    upcomR[j] = pup[j];
  }
}
void Report::completedReminderList()
{
  
}
void Report::upcomingReminderList()
{
  
}
Report::~Report() {
 for (int i = 0; i < SIZE1; i++) {
    delete compR[i];
  }
  for (int j = 0; j < SIZE2; j++) {
    delete upcomR[j];
  }
}