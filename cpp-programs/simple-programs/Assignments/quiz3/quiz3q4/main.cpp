#include <iostream>
#include <string> // FIX HERE 
using namespace std;

class shop_item {
    private:
        string name;
        float price; // FIX HERE
        float profit;
        int number_sold;
    public: // FIX HERE
        void loaddata();
        float getprofit() { return profit; } // FIX HERE
        void display();
};

int total;
shop_item item_list[200];

int main() {

  int i, highindex;
  float temp, highest;

  cout << "Enter how many items you sold: ";
  cin >> total;
  getchar();

  for (i = 0; i < total; i++) {
    item_list[i].loaddata(); // FIX HERE
  }

  //Set highest to be first
  highest = item_list[0].getprofit(); 
  highindex = 0;
  
  // loop through all replace highest and high index with new king
  for (i = 0; i < total; i++) {
    temp = item_list[i].getprofit();
    if (temp > highest) {
      highindex = i;
      highest = temp; // FIX HERE
    }
  }

  cout << "\nItem with the highest profit is:\n";
  item_list[highindex].display();
  cout << endl;
}
//------------ methods for the shop_item class -----------
void shop_item::loaddata() {
  cout << "Enter the name of this item: ";
  getline(cin, name);
  cout << "Enter the price of the item: ";
  cin >> price;
  cout << "Enter how many items were sold: ";
  cin >> number_sold;
  getchar();
  profit = price * number_sold; // FIX HERE
}
void shop_item::display() { // FIXED 
  cout << "Item name is: "<< name << endl;
  cout << "Item price is $"<< price << endl;
  cout << number_sold << " of this item was sold.\n";
  cout << "Profit for this item is $" << profit << endl;
}