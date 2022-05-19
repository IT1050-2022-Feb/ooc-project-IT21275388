#include "CompletedReminders.h"
#include "UpcomingReminders.h"
#define SIZE1 5
#define SIZE2 5

class Report{
private:
//One way association with CompletedReminder class
CompletedReminders *compR[SIZE1];
//one way association with upcomingReminder class
UpcomingReminders *upcomR[SIZE2];

public:
Report();
Report(UpcomingReminders *pup[], CompletedReminders *pcom[]);
void completedReminderList();
void upcomingReminderList();
~Report();
};