#include "Reminder.h"
#include "User.h"

class EventReminder : public Reminder
{
private:
  char venue[20];
  int duration;
  char description[100];
  char dueDate[10];
  char dueTime[10];

public:
  EventReminder();
  EventReminder(char ven[], int dur, char desc[], char dDate[], char dTime[],
                char type[], int id, char time[], char date[], char title[],
                int fre, User *puser);
  void setDetails(char ven[], int dur, char desc[], char dDate[], char dTime);
  void deleteEventDetails();
  void receiveEventReminders();
  ~EventReminder();
};