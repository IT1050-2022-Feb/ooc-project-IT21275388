#include "loginCredentials.h"
#include "User.h"
#include <cstring>
#include <iostream>
using namespace std;

loginCredentials::loginCredentials() {
  strcpy(userName, "");
  strcpy(password, "");
  userID = 0;
  validation = 0;
}
loginCredentials::loginCredentials(int id, char name[], char pwd[], int valid) {
  strcpy(userName, name);
  strcpy(password, pwd);
  userID = id;
  validation = valid;
}
int loginCredentials::getValidation() { return validation; }
void loginCredentials::setCredentials(char name[], char pwd[], int valid) {}
void loginCredentials::setID(int id) {}
int loginCredentials::getID() {}
loginCredentials::~loginCredentials() {}