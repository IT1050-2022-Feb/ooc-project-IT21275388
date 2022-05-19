#include <iostream>
#include <cstring>
#include "Feedback.h"
#include "User.h"
using namespace std;

Feedback::Feedback()
{
strcpy(comments,"");
strcpy(name,"");
commentID=0;
}
Feedback::Feedback(char com[], char comname[], int comID,User *puser)
{
strcpy(comments,com);
strcpy(name,comname);
commentID=comID;
user2=puser;
}
void Feedback:: displayFeedback()
{
  
}
void Feedback:: setDetails(char com[],char comname[],int comID)
{
  
}
Feedback::~Feedback()
{
  cout << " desctuctor activated " << endl;
}