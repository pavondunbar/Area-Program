#include <iostream>

using namespace std;

// This program calculates the area of a room in square feet
// This program is written by Pavon Dunbar

int main() {
    
    cout << "Please enter your first name: ";
    string first_name;
    cin >> first_name;
        
    cout << "Next, enter the width of the room in feet: ";
    int room_width {0};
    cin >> room_width;
    
    cout << "Finally, enter the length of the room in feet: ";
    int room_length {0};
    cin >> room_length;
    
    cout << "The area of the room, "<< first_name <<", is "<< room_width * room_length <<" SQUARE FEET" << endl;
   
    return 0;
}
