#include <iostream>
#include <iomanip>
using namespace std;

float getAverage(float prices[], int n);

int main(){
    //Assuming a maximum of 10 but could easily be changed
    const int MAX_STATIONS = 10;

    float prices_akl[MAX_STATIONS];
    float prices_wlg[MAX_STATIONS];

    int n_akl = 0;
    int n_wlg = 0;

    int akl_code = 9;
    int wlg_code = 4;

    float price = 0.0;
    int region_code = 0;

    cout << "Enter code and petrol price for each region.\n"
        << "Wellington code is 4, Auckland code is 9, enter -1 to stop.\n";

    while(true){
        //read region code and price stop on -1 input
        cin >> region_code;
        if (region_code == -1){
            break;
        }
        cin >> price;
        //store in array based on region code, increment number of stations 
        if(region_code == wlg_code && n_wlg < MAX_STATIONS){
            prices_wlg[n_wlg] = price;
            n_wlg++;
        } else if (region_code == akl_code && n_akl < MAX_STATIONS){
            prices_akl[n_akl] = price;
            n_akl++;
        }
    }
    
    //print prices, check for 0 prices entered
    cout << fixed << setprecision(2);
    if(n_akl == 0){
        cout << "No prices entered for Auckland.\n";
    } else {
        cout << "Auckland average petrol price is $" << getAverage(prices_akl, n_akl) << "\n";
    }
    if(n_wlg == 0){
        cout << "No prices entered for Wellington.\n";
    } else {
        cout << "Wellington average petrol price is $" << getAverage(prices_wlg, n_wlg) << "\n";
    }
}

float getAverage(float prices[], int n){
    float sum = 0;
    float avg = 0.0;
    for(int i = 0; i < n; i++){
        sum += prices[i];
    }
    avg = sum / n; 
    return avg;
}