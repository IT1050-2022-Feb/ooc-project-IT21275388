class UpcomingReminders {
private:
  int status;
  char newReminderTime[10];
  char newDate[10];
  char scheduledDate[10];
  char scheduledTime[10];

public:
  UpcomingReminders();
  UpcomingReminders(int Ustatus, char UnewReminderTime[10], char UnewDate[10],
                    char UscheduledDate[10], char UscheduledTime[10]);
  void setNewDetails(char UnewReminderTime[], char UnewDate[]);
  void setScheduledDetails(char schedDate[], char schedTime[]);
  void displayUpcomingReminders();
  void editUpcomingReminders();
  int checkStatus(char schedDate[], char schedTime);
  ~UpcomingReminders();
};
