/* 

Devon Campbell / Student ID: 24022715

ASSESSOR NOTE: 
I didn't exactly match the example output from the notes. I found while I was implementing
the instructions, these more verbose outputs made it easier for me to debug and understand, so 
I have left it this way. 

*/

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int readfileToMemory(string filename);
int outputRegisterValues();

const int MEM_SIZE = 256;
const int REG_SIZE = 16;
int memory[MEM_SIZE];
int reg[REG_SIZE]; // note: "register" is a reserved word
int pc, ir, op_code, xy, second_digit, third_digit, fourth_digit;
bool jump;

int main(){

    //Section 1

    //Declare variables
    string filename; int hexnumber, i; ifstream inputfile;

    //Prompt user for a filename
    cout << "Enter the file name of the MASSEY machine code: ";
    cin >> filename;

    readfileToMemory(filename);

    //Section 2

    //(Hint: get your program working for a few instructions, perhaps those in the input example. When these
    //instructions are working correctly, expand your horizons

    pc = 0;
    bool running = true;
    //Start executing program
    while (running) {
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
        jump = false;

        // Output Program Counter and instruction values
        cout << "PC: " << setw(2) << setfill('0') << hex << uppercase << pc << "  " 
            << "IR: " << hex << uppercase << ir << "  ";
        
        switch (op_code){
            case 1:
                reg[second_digit] = xy;
                cout << "Operation: 1RXY Load register R with the value XY\n" 
                << "Loading reg[" << second_digit << "] with the value from instruction: " << xy << endl;
                break;
           case 2:
                reg[third_digit] = reg[fourth_digit];
                cout << "Operation: 20RS Load register R with the number in register S\n"
                << "Loading reg[" << third_digit << "] with number from reg[" << fourth_digit << "]: " << reg[fourth_digit] << endl;
                break;
           case 3:
                reg[second_digit] = memory[xy];
                cout << "Operation: 3RXY Load register R with the number in the memory location at address XY\n"
                << "Loading reg[" << second_digit << "] with number from mem[" << xy << "]: " << memory[xy] << endl;
                break;
            case 4: 
                memory[xy] = reg[second_digit];
                cout << "Operation: 4RXY Store the number in register R in the memory location at address XY\n"
                << "Loading memory[" << xy << "] with number from reg[" << second_digit << "] " << reg[second_digit] << endl;
                break;
            case 5: 
                cout << "Operation 5 is not supported\n";
                break;
            case 6:
                reg[second_digit] = reg[third_digit] + reg[fourth_digit];
                cout << "Operation: 6RST Add the numbers in registers S and T and load the result into register R\n"
                << "Loading reg[" << second_digit << "] with " << reg[third_digit] << " + " << reg[fourth_digit] << endl;
                break;
            case 7:
                reg[third_digit] = reg[third_digit] * (-1);
                cout << "Operation: 70R0 Negate register R\n"
                << "Loading reg[" << third_digit << "] with " << reg[third_digit] * (-1) << " + " << reg[fourth_digit] << endl;
                break;
            case 8:
                cout << "Operation: 8R0X Shift the number in register R to the right X times\n"
                << "Shifting reg[" << second_digit << "] to the right " << fourth_digit << " times " << endl;
                reg[second_digit] = reg[second_digit] >> fourth_digit;
                break;
            case 9:
                cout << "Operation: 9R0X Shift the number in register R to the left X times\n"
                << "Shifting reg[" << second_digit << "] to the left " << fourth_digit << " times " << endl;
                reg[second_digit] = reg[second_digit] << fourth_digit;
                break;
            case 0xA:
                cout << "Operation: ARST AND the numbers in registers S and T and load the result into register R.\n"
                << "Performing bitwise & on reg[" << third_digit << "] and reg [" << fourth_digit << "]" << endl;
                reg[second_digit] = reg[third_digit] & reg[fourth_digit];
                break;
            case 0xB:
                cout << "Operation: BRST OR the numbers in registers S and T and load the result into register R\n"
                << "Performing bitwise | on reg[" << third_digit << "] and reg [" << fourth_digit << "]" << endl;
                reg[second_digit] = reg[third_digit] | reg[fourth_digit];
                break;
            case 0xC:
                cout << "Operation: CRST XOR the numbers in registers S and T and load the result into register R\n"
                << "Performing bitwise XOR on reg[" << third_digit << "] and reg [" << fourth_digit << "]" << endl;
                reg[second_digit] = reg[third_digit] ^ reg[fourth_digit];
                break;
            case 0xD:
                cout << "Operation: DRXY Jump to the instruction at address XY if the value in register R is equal to the value in register R0\n";
                if (reg[second_digit] == reg[0]){
                    jump = true;
                    pc = xy;
                    cout << "reg[" << second_digit << "] is equal to reg[" << fourth_digit << "] jumping to " << xy << endl;
                }
                break;
            case 0xE:
                cout << "Operation: E000 Halt\n";
                running = false;
                break;
        }
        //Increase program counter / loop to next instruction
        if (!jump)
            pc++;
    }
    //When program halts
    cout << endl;
    outputRegisterValues();
    return 0;
}

int readfileToMemory(string filename){
    //Declare variables
    int hexnumber;
    ifstream file;
    //Open and read file by line 
    file.open(filename.c_str(), fstream::in);
    // include code here to check if the file opened correctly
    if (file.is_open()) {
        cout << " file has opened successfully.\n";
        int i = 0;
        while (file >> hex >> hexnumber) {
        memory[i] = hexnumber;
        i++;
        }
        for (int i = 0; memory[i] != 0; i++) {
            cout << "Memory[" << setw(2) << setfill('0') <<  i << "] = " 
                << setw(4) << setfill('0') << hex << uppercase << memory[i] << endl;
        }
    } else {
        cout << "Failed to open file\n";
        return 1;
    }
    return 0;
}

int outputRegisterValues(){
    for (int i = 0; i < REG_SIZE; i++){
        cout << "reg[" << i << "] = " << hex << reg[i] << endl;
    }
    return 0;
}