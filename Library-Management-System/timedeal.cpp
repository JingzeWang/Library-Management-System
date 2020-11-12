#include "timedeal.h"
#include <stdio.h>
#include <string>
#include <QDebug>

#include <stdlib.h>

bool compareDate(int date1[], int date2[])
{
	if (date1[0] > date2[0])
		return true;
	else if (date1[0] < date2[0])
		return false;
	else if (date1[0] == date2[0])
	{
		if (date1[1] > date2[1])
			return true;
		else if (date1[1] < date2[1])
			return false;
		else if (date1[1] == date2[1])
		{
			if (date1[2] > date2[2])
				return true;
			else
				return false;
		}
	}
}

//字符串分割
void spilit(std::string s, char by, std::string* sub)
{
	//字符串分割,分割符by,得到的字串为sub
	int n = 0;
	int last = 0;
	int len = s.length();
	for (int i = 0; i < len; i++)
	{
		if (s[i] == by)
		{
			sub[n] = s.substr(last, i - last);
			n++;
			last = i + 1;
		}
	}
	sub[n] = s.substr(last, len - last);
}

//字符串转为整型，字符串必须全为整型字符0-9
int StringToInt(std::string s)
{
	int len = s.length();
	int a = 0;
	int num = 0;
	for (int i = 0; i < len; i++)
	{
		a = s[i] - '0';
		num *= 10;
		num += a;
	}
	return num;
}

int comback(std::string& sdate1, std::string& sdate2, int a)
{

	std::string d1[3], d2[3];
	spilit(sdate1, '-', d1);
	spilit(sdate2, '-', d2);
	int date1[3], date2[3];
	for (int i = 0; i < 3; i++)
	{
		date1[i] = StringToInt(d1[i]);

		date2[i] = StringToInt(d2[i]);

	}
	if (compareDate(date1, date2))
	{
		return 0;
	}
	else
	{
		return 1;
	}

}


int comput(std::string borrowtime, std::string& shouldbacktime)
{

	int year, month, day;
	std::string syear, smonth, sday, s5, s7;
	syear = borrowtime.substr(0, 4);
	year = StringToInt(syear);
	s5 = borrowtime.substr(5, 10);
	smonth = s5.substr(0, 2);
	month = StringToInt(smonth);
	s7 = borrowtime.substr(8, 10);
	sday = s7.substr(0, 2);
	day = StringToInt(sday);
	/*
	qDebug() <<"year:"<<year;
	  qDebug() <<"month:"<<month;
	  qDebug() <<"day:"<<day;
	*/
	int leapyear = 0;
	int daytime = 30;
	int sum;
	static int month_date[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };


	sum = daytime + day;
	do
	{
		if (month == 2)
		{
			month_date[month - 1] += leapyear;

		}
		if (sum > month_date[month - 1])
		{
			sum -= month_date[month - 1];
			month++;
			if (month == 13)
			{
				year++;
				if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
				{
					leapyear = 1;
				}
				else
				{
					leapyear = 0;
				}
				month = 1;
			}
		}
	} while (sum > month_date[month - 1]);
	day = sum;
	//printf("\n第%d天后是%d-%d-%d",daytime,year,month,day);



	syear = std::to_string(year);

	smonth = std::to_string(month);
	if (month < 10)smonth = '0' + smonth;
	sday = std::to_string(day);
	if (day < 10)sday = '0' + sday;
	shouldbacktime = syear + '-' + smonth + '-' + sday;
	return 0;
}