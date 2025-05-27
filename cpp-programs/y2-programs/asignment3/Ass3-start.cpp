#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

class pixel_class {
private:
  int red, green, blue;
  bool exclude;  // if true, do not check this pixel
public:
  void loaddata(int v1, int v2, int v3);
  void datatofile(fstream & ppmfile);
  int getR() { return red; }
  int getG() { return green; }
  int getB() { return blue; }
  void setexclude(bool ex) { exclude = ex; }
  bool getexclude() { return exclude; }
};

void loadButtons();
void checkAdjacentPixels(int x, int y);
void clearBoxBounds();
void identifyButton(int x, int y);

int total, xmin, xmax, ymin, ymax;  // MUST be global if used
int screenx, screeny, maxcolours;   // you must use these
pixel_class picture[600][600];      // you must use this

int main() {

  // Step 1 : read in the image from Buttons.ppm
  loadButtons();

  // Step 2 : identify buttons and draw boxes
  // 2.1 Loop through pixels by row, until one has an R value > 128
  for (int i = 0; i < 600; i++){
	cout << "Searching for buttons on new row";
	for (int j = 0; j < 600; j++){
		if (picture[i][j].getR() > 128)	{
			clearBoxBounds();		
			identifyButton(i, j);
			return 0;
		}
	}
  }

  // Step 3 : output the final .ppm file
  return 0;
}

void loadButtons() {
  // load the picture from Buttons.ppm
  int x, y, R, G, B;
  fstream infile;
  string infilename, line;
  infilename = "Buttons.ppm";
  infile.open(infilename.c_str(), fstream::in);
  if (infile.is_open() == false) {
    cout << "ERROR: not able to open " << infilename << endl;
    exit(2);
  }
  getline(infile, line);  // this line is "P3"
  getline(infile, line);  // this line is "# filename"
  infile >> screenx >> screeny;  // this line is the size
  infile >> maxcolours;  // this line is 256
  for (y = 0; y < screeny; y++) {
    for (x = 0; x < screenx; x++) {
      infile >> R >> G >> B;
      picture[x][y].loaddata(R, G, B);
      picture[x][y].setexclude(false);
    }
  }
  infile.close();
}

void clearBoxBounds(){
	xmin = 0;
	xmax = 0;
	ymin = 0;
	ymax = 0;
	cout << "Cleared box boundaries\n";
}

void identifyButton(int x, int y){
	cout << "Pixel[" << y << "][" << x << "] is part of a button\n";
	checkAdjacentPixels(y, x);
	cout << "Finished button search\n";
}

void checkAdjacentPixels(int x, int y){
	cout << "Checking pixel[" << x << "][" << y << "]\n";
	//Base case
	if (picture[x][y].getR() < 128){
		//If the pixel is not grey, or has already been counted then count it and return
		cout << "Pixel is not connected\n";
		return;
	//Base case 2
	} else if (picture[x][y].getexclude()){
		cout << "Pixel already counted as connected\n";
		return;
	//Recursive case
	} else {
		//Set current pixel as connected
		picture[x][y].setexclude(true);
		//Check if values are greater than current x or y min/max
		if (x < xmin || xmin == 0) xmin = x;
		if (x > xmax ) xmax = x;
		if (y < ymin || ymin == 0) ymin = y;
		if (y > ymax ) ymax == y;
		cout << "Found new connected pixel, checking adjacent ones\n";
		//Check all adjacent pixels
		checkAdjacentPixels(x + 1, y); 
		checkAdjacentPixels(x - 1, y); 
		checkAdjacentPixels(x, y + 1); 
		checkAdjacentPixels(x, y - 1); 
	}
}


//--------------- methods for the pixel_class ------------
void pixel_class::loaddata(int v1, int v2, int v3) {
  red = v1;
  green = v2;
  blue = v3;
}

void pixel_class::datatofile(fstream & ppmfile) {
  // write the data for one pixel to the ppm file
  ppmfile << red << " " << green;
  ppmfile << " " << blue << "  ";
}
