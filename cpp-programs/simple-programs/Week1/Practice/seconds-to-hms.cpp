#include <iostream>
using namespace std;

/* Prompt user for an input of seconds, output the time converted to hours/minutes/seconds */

// Declare variables 
int user_seconds, converted_seconds, converted_minutes, converted_hours, remaining_seconds,
remaining_minutes;

int main(void){

    // Prompt user for input 
    cout << "Enter of a number of seconds to be converted to hours, minutes, seconds: "; 
    cin >> user_seconds; 

    // Compute number of hours / minutes / seconds 
    converted_minutes = user_seconds / 60; // Time converted to minutes
    remaining_seconds = user_seconds % 60; // Seconds that can't be divided into minutes
    converted_hours = converted_minutes / 60; // Total minutes converted to hours 
    remaining_minutes = converted_minutes % 60; // Minutes that't be divided into hours

    cout << user_seconds << " seconds is " << converted_hours << " hours, " << remaining_minutes
    << " minutes, " << "and " << remaining_seconds << " seconds." << endl;
    }