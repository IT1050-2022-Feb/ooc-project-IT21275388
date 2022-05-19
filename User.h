#include "Account.h"
#include "Feedback.h"
#include "Reminder.h"
#define SIZE 10
class User {
private:
  char userName[20];
  int userID;
  char email[50];
  int contact;
  int noOfReminders;
  Reminder *rem[SIZE];
  Account *useraccount;
  Feedback *feed;

public:
  User();
  User(int id, char uName[], char Uemail[], int con, int pnoOfReminders);
  void addReminder(Reminder *r);
  void addAccount(Account *acc);
  void addFeedback(Feedback *userfeed);
  void setID(int id);
  void setDetails(char uName[], char Uemail[], int con);
  int getID();
  void displayDetails();
  void viewReminders();
  void giveFeedback();

  ~User();
};