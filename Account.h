#include "loginCredentials.h"
#include "User.h"
class Account
{
private:
char newName[20];
char newPassword[20];
char newEmail[50];
int newContact;
User *accountUser;

public:
Account();
Account(char name[],char nemail[],int nCon,char npwd[],User *puser);
void login(loginCredentials *p);//using loginCredentials class for validation
void deleteAccount();
void setNewDetails(char name[],char nemail[],int nCon,char npwd[]);
void editAccount();
~Account();
};
 