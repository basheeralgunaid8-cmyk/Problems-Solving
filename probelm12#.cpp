#include <iostream>
using namespace std;
struct stDate
{
    short year;
    short month;
    short day;
};
short ReadYear()
{
    short year;
    cout << "Please enter a year: ";
    cin >> year;
    return year;
}
short ReadMonth()
{
    short month;
    cout << "Please enter a month: ";
    cin >> month;
    return month;
}
short ReadDay()
{
    short day;
    cout << "Please enter a day: ";
    cin >> day;
    return day;
}
short AddDays()
{
    short addDay;
    cout << "How many days to add : ";
    cin >> addDay;

    return addDay;
}

bool isLeapYear(short year)
{
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}
short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month>12)
        return  0;
    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}
short DayFromBeginningOfYear(short day, short Month, short year)
{

    short totalDays = 0;

    for (int j = 1; j <= Month - 1; j++)
    {
        totalDays += NumberOfDaysInAMonth(j, year);
    }
    totalDays += day;
    return totalDays;
}
stDate ReadFullDate()
{ 
stDate Date;
Date.day = ReadDay(); 
Date.month = ReadMonth();    
Date.year = ReadYear(); 
return Date;
}

stDate DateAddDays(short Days, stDate Date)
{
    
    short RemaingDays = Days + DayFromBeginningOfYear(Date.day, Date.month, Date.year);
    short MonthsDays = 0;
 
    short MonthDays = 0;
    Date.month = 1;
    while (true)
    {
        MonthsDays = NumberOfDaysInAMonth(Date.month, Date.year);
        if (RemaingDays > MonthsDays)
        {
            RemaingDays -= MonthsDays;
            Date.month++;

            if (Date.month > 12)
            {
                Date.month = 1;
                Date.year++;
            }
        }
        else
        {
            Date.day = RemaingDays;
            break;
        }
    }

    return Date;

}


int main()
{

    stDate Date = ReadFullDate();
    short Days = AddDays();
   
    Date = DateAddDays(Days, Date);
    cout << "\nDate after adding[" << Days << "] is: ";
    cout << Date.day << "/" << Date.month << "/" << Date.year;

    system("pause>0");

    return 0;
}
