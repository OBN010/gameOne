
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int height = 20, width = 20, i, j, gameOver, score, userInput;


//Function to draw a boundary
void draw() {
	for (i = 0; i < height; ++i) {
		for (j = 0; j < width; j++) {
			if (i == 0 || i == width - 1 || j == 0 ||j == height - 1) {
				printf("#");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
void setup() {



OSKAR



}
int main() {
	
	cout << "To start the game type 1 followed by ENTER." << endl;
	cin >> userInput;
	if (userInput == 1) {
		draw();
		}
			

	return 0;
}
