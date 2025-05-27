/* 

Devon Campbell / Student ID: 24022715

ASSESSOR NOTE: 

*/

//Includes
#include <iostream>
#include <fstream>
#include <cstdlib>
using anmespace std;

//Classes
class Pixel {
	private:
		int red, green, blue;
	public: 
		//Method headers and small methods
		void loaddate(int v1, int v2, int v3);
		void datatofile(fstream & ppmfile);
		int getR() { return red; }
		int getG() { return green; }
		int getB() { return blue; }
		//Define bigger methods
		void pixel::loaddata(int v1, int v2, int v3) {
			red = v1;
			green = v2;
			blue = v3;
		}

		void pixel::datatofile(fstream & ppmfile) {
			//Write RGB values for one pixel to the ppm file
			//
		}
}

	

int main() {

//Step 1: Open the ppm file and output the rgb values to the terminal? 

	
}


