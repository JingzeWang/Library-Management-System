#ifndef TIMEDEAL_H
#define TIMEDEAL_H
#include <string>

bool compareDate(int date1[], int date2[]);
void spilit(std::string s, char by, std::string* sub);
int StringToInt(std::string s);
int comput(std::string borrowtime,std::string &shouldbacktime);
int comback(std::string &sdate1,std::string &sdate2,int a);

#endif // TIMEDEAL_H
