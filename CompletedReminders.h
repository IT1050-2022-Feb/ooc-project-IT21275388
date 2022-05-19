// A part of the reminder class
class CompletedReminders {
private:
  int status;
  char scheduledDate[10];
  char scheduledTime[10];
  int rID;

public:
  // constructor
  CompletedReminders();
  // overload constructor
  CompletedReminders(int Cstatus, char CscheduledDate[], char CscheduledTime[],
                     int CrID);
  void displayCompletedReminders();
  int checkStatus(char schedDate[], char schedTime[]);
  // destructor
  ~CompletedReminders();
};
