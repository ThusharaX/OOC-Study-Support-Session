#include <iostream>

using namespace std;

// Part
class Artist
{
private :
	string name;

public :
	Artist(string pname) {
		name = pname;
	}

	void displayArtist() {
		cout << "Artist Name : " << name << endl;
	}

	~Artist(){
		cout<< "Artist destroyed : " << name << endl;
	}
};


// Whole

class Band
{
private:
	Artist *art[2];

public:
	Band() {};

	void addArtist(Artist *art1, Artist *art2){
		art[0] = art1;
		art[1] = art2;
	}

	void displayBand(){
		for(int i = 0; i < 2; i++) {
			art[i]->displayArtist();
		}
	}

	~Band(){
		cout << "Band is destroyed!" << endl;
	}
};

//main

int main() {

	Band *theScript = new Band();

	Artist *a1 = new Artist("Danny");
	Artist *a2 = new Artist("Mark");

	theScript->addArtist(a1, a2);

	theScript->displayBand();

	// Destroy the Band
	delete theScript;

	a1->displayArtist();
	a2->displayArtist();
	
	return 0;
}