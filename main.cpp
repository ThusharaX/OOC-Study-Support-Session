#include <iostream>
#include <cstring>

using namespace std;

// Part
class Room {

private:
  	int roomNo;

public:
	Room() {}

	Room(int no) {
		roomNo = no;
	}

	void Display() {
		cout << "Room : " << roomNo << endl;
	}

	~Room() {
		cout << "Destroying Room : " << roomNo << endl;
	}

};


// Whole
class House {

private:
  	Room *room[2];

public:
	House() {//Constructore
		room[0] = new Room(101);
		room[1] = new Room(102);
	}

	House(int no1, int no2) {
		room[0] = new Room(no1);
		room[1] = new Room(no2);
	}

	void DisplayClassRooms() {
		for (int i=0; i<2; i++) {
			room[i]->Display();
		}
	}

	~House() {//Ditructore
		cout << "House is destroyed!" << endl;
		for (int i=0; i < 2; i++) {
			delete room[i];
		}
	}
};


// main
int main() {
  
	House *myHouse1;

	myHouse1 = new House();
	myHouse1->DisplayClassRooms();
	delete myHouse1;
	
	// House *myHouse2;
	
	// myHouse2 = new House(501, 502);
	// myHouse2->DisplayClassRooms();
	// delete myHouse2;

	return 0;
}