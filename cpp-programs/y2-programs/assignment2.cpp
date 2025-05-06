// TODOS 
// Input validation on filename cin
// Remove iomanip

// Take input from user 
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int printRegisterValues();

int memory[256];
int reg[16]; // note: "register" is a reserved word
int pc, ir, op_code, xy, second_digit, third_digit, fourth_digit;

int main(){

    //Section 1

    //Declare variables
    string filename; int hexnumber, i; ifstream inputfile;

    //Prompt user for a filename
    cout << "Hi, this is the MASSEY MACHINE, please enter the filename of the assembly language program you wish to run: ";
    cin >> filename;

    //Open and read file by line 
    inputfile.open(filename.c_str(), fstream::in);
    // include code here to check if the file opened correctly
    if (inputfile.is_open()) {
        cout << filename << " file has opened successfully.\n";
        i = 0;
        while (inputfile >> hex >> hexnumber) {
        memory[i] = hexnumber;
        i++;
        }
        for (int i = 0; i < 256; i++) {
            if (memory[i] != 0) {
                cout << "memory location " << i << "  = " 
                    << setw(4) << setfill('0') << hex << uppercase << memory[i] << endl;
            }
        }
    } else {
        cout << "Failed to open file\n";
        return 1;
    }

    //Section 2

    //(Hint: get your program working for a few instructions, perhaps those in the input example. When these
    //instructions are working correctly, expand your horizons

    pc = 0;
    //Start executing program
    while (true) {
        cout << endl;
        // Get instruction using program counter
        ir = memory[pc];
        // Get operation code from instruction
        op_code = ir >> 12 & 0xF;
        // Get last three digits from instruction individually
        second_digit = ir >> 8 & 0xF;
        third_digit = ir >> 4 & 0xF;
        fourth_digit = ir & 0xF;
        xy = ir & 0xFF;

        // Print instruction
        cout << "Instruction = " << memory[pc] << endl;

        switch (op_code){
            case 1:
                reg[second_digit] = xy;
                cout << "Operation: 1RXY Load register R with the value XY\n" 
                << "Loading reg[" << second_digit << "] with " << xy << endl;
                break;
           case 2:
                reg[third_digit] = reg[fourth_digit];
                cout << "Operation: 20RS Load register R with the number in register S\n"
                << "Loading reg[" << third_digit << "] with " << reg[fourth_digit] << endl;
                break;
           case 3:
                reg[second_digit] = memory[xy];
                cout << "Operation: 3RXY Load register R with the number in the memory location at address XY\n"
                << "Loading reg[" << second_digit << "] with " << memory[xy] << endl;
                break;
            case 4: 
                memory[xy] = reg[second_digit];
                cout << "Operation: 4RXY Store the number in register R in the memory location at address XY\n"
                << "Loading memory[" << xy << "] with " << reg[second_digit] << endl;
                break;
            case 5: 
                cout << "Operation 5 is not supported\n";
                break;
            case 6:
                reg[second_digit] = reg[third_digit] + reg[fourth_digit];
                cout << "Operation: 6RST Add the numbers in registers S and T and load the result into register R\n"
                << "Loading reg[" << second_digit << "] with " << reg[third_digit] << " + " << reg[fourth_digit] << endl;
                break;
        }
        //Increase program counter / loop to next instruction
        pc++;
        if (pc > 6){
            cout << endl;
            printRegisterValues();
            break;
        }
    }
}

int printRegisterValues(){
    for (int i = 0; i < 16; i++){
        cout << "reg[" << i << "] = " << hex << reg[i] << endl;
    }
    return 0;
}