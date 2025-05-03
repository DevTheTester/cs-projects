
/*

ASSIGNMENT 3

Devon Campbell / Student ID: 24022715

ASSESSOR NOTE: 
Invalid data inputs weren't mentionined in the assignment instructions, there was 
also no mention of it in the marking criteria so I've ommited data validation on the 
voltage readings.

I've also used just one function

*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float getAverage(float array[], int size);

int main(){
    const int MAX = 6;
    float voltages[MAX];

    //read X voltages 
    cout << "Enter 6 voltages: ";
    for(int i = 0; i < MAX; i++){
        cin >> voltages[i];
    }

    //get and output average and percentages of average
    float average = getAverage(voltages, MAX);
    float average10 = average * 0.1;
    float average15 = average * 0.15;
    cout << fixed << setprecision(1)
        << "The average is " << average << " volts.\n"
        << "10% = " << average10 << " volts.\n"
        << "15% = " << average15 << " volts.\n"
        << endl;
    
    int total_problems = 0;
    //record readings 10 pct above average, store the index from original list and store voltage difference
    int gtr_10_pct_indices[MAX];
    float gtr_10_difference[MAX];
    int gtr_10_count = 0;
    float voltage_difference;
    for (int i = 0; i < MAX; i++){
        voltage_difference = fabs(voltages[i] - average);
        if(voltage_difference > average10){
            gtr_10_pct_indices[gtr_10_count] = i;
            gtr_10_difference[gtr_10_count] = voltage_difference;
            gtr_10_count++;
            total_problems++;
        }
    }

    //record readings where change to next is greater than 15%
    int gtr_15_pct_change_indices[MAX];
    float gtr_15_change[MAX];
    int gtr_15_count = 0;
    float voltage_change;
    for (int i = 0; i < MAX - 1; i++){
        voltage_change = fabs(voltages[i] - voltages[i+1]);
        if(voltage_change > average15){
            gtr_15_pct_change_indices[gtr_15_count] = i;
            gtr_15_change[gtr_15_count] = voltage_change;
            gtr_15_count++;
            total_problems++;
        }
    }

    //output problems
    if (total_problems > 0){
        cout << "The following problems occurred:\n";
        int current_problem = 1;
        for(int i = 0; i < gtr_10_count; i++){
            int voltages_index = gtr_10_pct_indices[i];
            cout << current_problem << ". Voltage at hour " << voltages_index + 1 << " was " << voltages[voltages_index] 
                << " (difference of " << gtr_10_difference[i] << " volts)." << endl;
            current_problem++;
        }
        for(int i = 0; i < gtr_15_count; i++){
            int voltages_index = gtr_15_pct_change_indices[i];
            cout << current_problem << ". Voltage change from hour " << voltages_index + 1 << " to hour " << voltages_index + 2 << " was " << gtr_15_change[i] << " volts. " << endl;
            current_problem++;
        }
    } else {
        cout << "No problems were encountered.";
    }
    return 0;
}

float getAverage(float array[], int size){
    float sum = 0.0;
    for (int i = 0; i < size; i++){
        sum += array[i];
    }
    return sum / size;
}
