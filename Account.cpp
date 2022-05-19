#include "Account.h"
#include "User.h"
#include <iostream>
#include <cstring>
using namespace std;

Account ::Account()
{

}
Account ::Account(char name[],char nemail[],int nCon,char npwd[],User *puser)
{
strcpy(newName,name);
strcpy(newPassword,npwd);
strcpy(newEmail,nemail);
newContact=nCon;
accountUser=puser;
}
void Account ::login(loginCredentials *p)
{
  
}
void Account ::deleteAccount()
{
  
}
void Account ::setNewDetails(char name[],char nemail[],int nCon,char npwd[])
{
  
}
void Account ::editAccount()
{
  
}
Account ::~Account()
{
  
}