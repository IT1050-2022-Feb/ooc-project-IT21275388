#include "Account.h"
#include "Reminder.h"
#include "User.h"
#include <cstring>
using namespace std;

User::User() 
{
  strcpy(userName, "");
  userID = 0;
  strcpy(email, "");
  contact = 0;
  noOfReminders = 0;
}
User::User(int id, char uName[], char Uemail[], int con, int pnoOfReminders) 
{
  strcpy(userName, uName);
  userID = id;
  strcpy(email, Uemail);
  contact = con;
  noOfReminders = pnoOfReminders;
}
void User::addReminder(Reminder *r) 
{
  if (noOfReminders < SIZE) {
    rem[noOfReminders] = r;
    noOfReminders++;
  }
}
void User::addAccount(Account *acc)
{
  
}
void User::addFeedback(Feedback *userfeed)
{
  
}
void User::setID(int id) 
{
  
}
void User::setDetails(char uName[], char email[], int con) 
{
  
}
int User::getID()
{
  
}
void User::displayDetails()
{
  
}
void User::viewReminders() 
{
  
}
void User::giveFeedback() 
{
  
}
User::~User()
{
  // Destructor
  for (int i = 0; i < SIZE; i++) 
  {
    delete rem[i];
  }
}