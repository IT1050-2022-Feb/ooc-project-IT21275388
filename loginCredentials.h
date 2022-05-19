class loginCredentials {
private:
  char userName[20];
  char password[20];
  int validation;
  int userID;

public:
  loginCredentials();
  loginCredentials(int id, char name[], char pwd[], int valid);
  void setCredentials(char name[], char pwd[], int valid);
  void setID(int id);
  void setValidation(int valid);
  int getID();
  int getValidation();
  ~loginCredentials();
};