#include <iostream>
using namespace std;

int n_tickets, ticket_price, final_cost;

int main(void){
    cout << "Enter number of tickets: ";
    cin >> n_tickets;

    if (n_tickets < 5){
        ticket_price = 100;
        cout << endl << "Ticket price = " << ticket_price;
    } else {
        ticket_price = 75;
        cout << endl << "Ticket price = " << ticket_price;
    }

    final_cost = n_tickets * ticket_price;

    if (final_cost % 100 < 10){
        cout << endl << "Final cost is " << " $" << final_cost / 100 << "." << final_cost % 100 << "0";
    }else {
        cout << endl << "Final cost is " << " $" << final_cost / 100 << "." << final_cost % 100;
    }
    return 0;
}