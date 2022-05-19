#include "User.h"
class Feedback {
private:
  char comments[20];
  char name[20];
  int commentID;
  User *user2;
public:
  Feedback();
  Feedback(char com[], char comname[], int comID,User *puser);
  void displayFeedback();
  void setDetails(char com[], char comname[], int comID);
  ~Feedback();
};