#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){

    fstream equipment_file;
    string word;
    string equipment_filename = "equipment.txt";
    char delim = ';';

    equipment_file.open(equipment_filename.c_str(), fstream::in);

    //Use techinque to handle error used in programming practice
    if (equipment_file.is_open() == false){
        cout << "Error: couldn't open file " << equipment_filename << endl;
        exit(1);
    }

    //Output first line before looping through lines
    cout << "Items to be supplied to each hospital:\n";

    //Loop through lines in equipment file
    while (getline(equipment_file, word)){
        // cout << word << endl;
        // Find the index of first second sections to extract strings
        int index1 = 0;
        int index2 = 0;
        for (int i = 0; i < word.length(); i++){
            if (word[i] == delim){
                if (index1 == 0){
                    index1 = i;
                } else {
                    index2 = i;
                }
            }
        }

        // Get lengths of sections and create strings from sections of line
        int section1 = index1;
        int section2 = index2 - index1 - 1; // Length of section is difference between first and second semicolon excluding the semicolon
        string hospital = word.substr(0, index1); //From first char, length of first section
        string masks = word.substr(index1 + 1, section2); //From first semicolon length of second section
        string gowns = word.substr(index2 + 1); //From start of 3rd section to end of string

        // Get number of gowns and masks from strings
        int n_masks = stoi(masks);
        int n_gowns = stoi(gowns);

        //If number of gowns is greater output the amount of masks needed 
        if (n_gowns > n_masks){
            cout << hospital << " " << n_gowns - n_masks << " masks";
        } else if (n_masks > n_gowns){
            cout << hospital << " " << n_masks - n_gowns << " gowns";
        } else {
            cout << hospital << " no items needed";
        }

        cout << endl;
    }
    equipment_file.close();
    return 0;
}