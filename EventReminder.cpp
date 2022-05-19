#include <cstring>
#include <iostream>
#include "EventReminder.h"
#include "BillReminder.h"
#include "User.h"
#include "Reminder.h"

using namespace std;
// defualt constructor
EventReminder:: EventReminder() {
  strcpy(venue, "");
  duration = 0;
  strcpy(description, "");
  strcpy(dueDate, "");
  strcpy(dueTime, "");
}
// overload constructor
EventReminder::EventReminder(char ven[], int dur, char desc[], char dDate[],
                             char dTime[], char type[], int id, char time[],
                             char date[], char title[], int fre, User *puser)
    : Reminder(type, id, time, date, title, fre,NULL) // attributes that inherits from the parent
{
  strcpy(venue, ven);
  duration = dur;
  strcpy(description, desc);
  strcpy(dueDate, dDate);
  strcpy(dueTime, dTime);
}
void EventReminder::setDetails(char ven[], int dur, char desc[], char dDate[],
                               char dTime) {}
void EventReminder::deleteEventDetails() {}
void EventReminder::receiveEventReminders() {}
// destructor
EventReminder::~EventReminder() {
  cout << "desctuctor for the event activated" << endl;
}