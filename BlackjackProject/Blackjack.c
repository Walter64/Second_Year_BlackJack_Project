#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int displayMenu();
void validateChoice(int choice);
int numberOfPlayers();
void newGame();
void resumeGame();
void saveGameExit();
void exitGame();


void main() {

	int choice;
	
	choice = displayMenu();
	validateChoice(choice);
	
	printf("\n\nPress any key to exit...");

	_getch();
}

int displayMenu() {
	
	int choice;

	printf("\n************************");
	printf("\n* Blackjack Game Menu  *");
	printf("\n************************");
	printf("\n* New Game...........1 *");
	printf("\n* Resume Game........2 *");
	printf("\n* Save Game & Exit...3 *");
	printf("\n* Exit Game..........4 *");
	printf("\n************************");
	printf("\n\nPlease make selection....");
	scanf("%d", &choice);

	while (choice < 1 || choice > 4) {		
		printf("Must chose between 1 and 4 inclusive...\n");
		scanf("%d", &choice);
	}

	return choice;
}

void validateChoice(int choice) {
	char ch;
	int newChoice;

	if (choice == 1) {
		printf("\nIs \"New Game\" correct choice? (Y/N)...");
		scanf(" %c", &ch);

		if (toupper(ch) == 'Y') {
			newGame();			
		}
		else {
			newChoice = displayMenu();
			validateChoice(newChoice);
		}		
	}
	else if (choice == 2) {
		printf("\nIs \"Resume Game\" correct choice? (Y/N)...");
		scanf(" %c", &ch);
				
		if (toupper(ch) == 'Y') {
			resumeGame();
		}
		else {
			newChoice = displayMenu();
			validateChoice(newChoice);
		}		
	}
	else if (choice == 3) {
		printf("\nIs \"Save Game & Exit\" correct choice? (Y/N)...");
		scanf(" %c", &ch);

		if (toupper(ch) == 'Y') {
			saveGameExit();
		}
		else {
			newChoice = displayMenu();
			validateChoice(newChoice);
		}		
	}
	else {
		printf("\nIs \"Exit Game\" correct choice? (Y/N)...");
		scanf(" %c", &ch);

		if (toupper(ch) == 'Y') {
			exitGame();
		}
		else {
			newChoice = displayMenu();
			validateChoice(newChoice);
		}		
	}	
}

void newGame() {
	printf("\n**************");
	printf("\n*  New Game  *");
	printf("\n**************");
	numberOfPlayers();
}

void resumeGame() {
	printf("Resume Game");
}

void saveGameExit() {
	printf("Save Game and Exit");
}

void exitGame() {
	printf("Exit Game");
}

int numberOfPlayers() {
	int numOfPlayers;

	printf("\nHow many Players?\n");
	scanf("%d", &numOfPlayers);
	printf("Number of players is %d", numOfPlayers);
}
