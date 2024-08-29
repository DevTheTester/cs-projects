/* 
Devon Campbell / Student ID: 24022715

ASSESSOR NOTE: 
I opted not to use cout.width and fill to format the output date to be in the standard format of dd-mm-yyyy
as the instructions on the assignment clearly stated that the output should be similar to the examples which
don't format the date.

TESTING:              (Date / Difference | Expected Date Output)
Year is not divisible by 4        ( 1 28 02 1997 | 1/3/1997) PASS
Year is divisible by 4:           ( 1 28 02 1996 | 29/2/1996) PASS
Year is divisible by 100 not 400: ( 1 28 02 1800 | 1/3/1800) PASS
Year is divisible by 400: 1600    ( 1 28 02 1600 | 29/2/1600) PASS
Changing day forward (Difference  ( 7 24 12 2024 | 31/12/2024) PASS
Changing day backwards            (-7 31 05 2024 | 24/5/2024) PASS
Changing month backwards          (-1 01 12 2024 | 30/11/2024) PASS
Changing year forwards            ( 1 31 12 2024 | 1/1/2025) PASS
Changing year backwards           (-1 01 01 2025 | 31/12/2024) PASS
Example 1                         ( 2 14 05 2019 | 16/5/2019) PASS
Example 2                         (-3 08 11 2020 | 5/11/2020) PASS
Example 3                         ( 1 31 12 2017 | 1/1/2018) PASS
*/

const int MONTHS_IN_YEAR = 12;

#include <iostream>
using namespace std;

bool isLeapYear(int); //Function to determine if year is leap year

int main(){
    // Declare variables
    int difference, day_in, month_in, year_in; //Difference and date Inputs (day month year)
    int days_month, days_previous_month; //Days current and previous month based on input
    int day_out, month_out, year_out; //Date outputs
    int n_days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31 ,30 ,31 ,30 ,31}; //Define days in months w/o leap year

    //Read difference and date (day month year)
    cout << "Enter difference: "; 
    cin >> difference;
    cout << "Enter a date in the form day month year: ";
    cin >> day_in >> month_in >> year_in;

    //Check if it's leap year, if true adjust febuary
    if (isLeapYear(year_in)){
        n_days_in_month[1] += 1;
    }

    //Set date outputs with difference added to day
    day_out = day_in + difference;
    month_out = month_in;
    year_out = year_in;

    //Handle going forward months and years
    days_month = n_days_in_month[month_in - 1];
    if (day_out > days_month){ //If difference in days moves to next month restart day count and increment month
        month_out++;
        day_out -= days_month;
        if (month_out > MONTHS_IN_YEAR){ //If incremented month is greater than months in year, restart month count and increment year
            month_out -= MONTHS_IN_YEAR; 
            year_out++;
        }
    }

    //Handle going backward months and years
    if (month_in == 1){
        days_previous_month = n_days_in_month[11]; //If month is Jan borrow from Dec days
    } else {
        days_previous_month = n_days_in_month[month_in - 2]; //else borrow from month - 1
    }
    if (day_out < 1){ //If days are less than days in month take days from previous month and decrement month
        month_out--;
        if (month_out < 1){ //If decremented month is less than 1 take months from previous year and decrement year
            month_out += MONTHS_IN_YEAR;
            year_out--;
        }
        day_out += days_previous_month;
    }

    //Output final date (day/month/year)
    cout << "The final date is: " << day_out << "/" << month_out << "/" << year_out;
    return 0;
}

bool isLeapYear(int year){
    bool is_leap_year = false; //Assume it's not a leap year
    if (year % 4 == 0) { //If year is divisible by 4 it's a leap year
        is_leap_year = true;
        if (year % 100 == 0) { // Unless it's also divisible by 100
            is_leap_year = false;
        }
        if (year % 400 == 0) { //Unless year it's also divisible by 400
            is_leap_year = true;
        }
    }
    return is_leap_year;
}