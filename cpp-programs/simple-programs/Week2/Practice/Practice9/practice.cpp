#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std; 

int user_choice, cpu_choice, winner;
time_t current_time = time(NULL);

int main(void){
    cout << "Choose Rock, Paper, or Scissors by entering 0, 1, or 2: "; 
    cin >> user_choice;
    cout << endl;

    srand(current_time);
    cpu_choice = rand() % 3;
    // cpu_choice = 0;

    if(cpu_choice > user_choice){
        if(cpu_choice == 2 && user_choice == 0){
            winner = 0; // User wins
        } else {
            winner = 1; // CPU wins
        }
    } else if (user_choice > cpu_choice){
        if (user_choice == 2 && cpu_choice == 0){
            winner = 1; // CPU wins
        } else {
            winner = 0; // User wins
        }
    } else if (user_choice == cpu_choice){
        winner = 2;
    }

    if (winner == 0){
        cout << "You chose " << user_choice << ", CPU chose " << cpu_choice << ".\n" << "You win!";
    } else if (winner == 1){
        cout << "You chose " << user_choice << ", CPU chose " << cpu_choice << ".\n" << "You lose!";
    } else if (winner == 2){
        cout << "You chose " << user_choice << ", CPU chose " << cpu_choice << ".\n" << "It's a tie!";
    }
    return 0;

    // Test data 
    // 0 0 - PASS 
    // 0 1 - PASS
    // 0 2 - PASS
    // 1 0 - PASS
    // 1 1 - n/a
    // 1 2 - PASS
    // 2 0 - PASS
    // 2 1 - n/a
    // 2 2 - n/a 
    
}