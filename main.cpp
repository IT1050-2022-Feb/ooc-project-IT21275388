#include "Account.h"
#include "BillReminder.h"
#include "CompletedReminders.h"
#include "EventReminder.h"
#include "Feedback.h"
#include "Reminder.h"
#include "Report.h"
#include "UpcomingReminders.h"
#include "User.h"
#include "loginCredentials.h"

#include <iostream>

using namespace std;
int main() {
  // object creation
  Reminder *BR = new Reminder();    // object of BillReminder class
  Reminder *ER = new Reminder();    // object of EventReminder class
  Account *acc = new Account();     // object of Account class
  User *usr = new User();           // object of User class
  Feedback *fBack = new Feedback(); // object of Feedback class
  Reminder *upRem = new Reminder(); // object of UpcomingReminder class
  Reminder *compR = new Reminder(); // object of CompletedReminder class
  loginCredentials *lgn = new loginCredentials(); // object of loginCrerdentials class
  Report *rpt = new Report(); // object of Report class

  // deleting dynamic objects
  delete BR;
  delete ER;
  delete acc;
  delete usr;
  delete fBack;
  delete upRem;
  delete compR;
  delete lgn;
  delete rpt;

  return 0;
}