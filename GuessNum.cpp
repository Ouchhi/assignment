#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include<conio.h>
#include<stdlib.h>
#include <Windows.h>
#include <iomanip>
#include <thread>
#include <chrono>
#include <fstream>
#include <vector>
using namespace std;
////Create Function///////

void rules();
void level();
void easyMode();
void normalMode();
void hardMode();
void addCoins();
void withdraw();
void Menu();
void Loading();
void setColor(int text, int background);
void gotoxy(int x, int y);
void drawBorder(int x, int y, int width, int height);

// Custom stream buffer class that centers text

int balance = 100;


void games(){
	system("cls");
string line1 = "  _____                      ";
string line2 = " / ____|                     ";
string line3 = "| |  __  __ _ _ __ ___   ___ ";
string line4 = "| | |_ |/ _` | '_ ` _ \\ / _ \\";
string line5 = "| |__| | (_| | | | | | |  __/";
string line6 = " \\_____ |\\__,_|_| |_| |_|\\___|";




    int consoleWidth = 170;

    // Calculate the amount of padding needed to center the ASCII art
    int asciiArtPadding = (consoleWidth - line1.length()) / 2;

    // Display the centered ASCII art
    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line1 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line2 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line3 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line4 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line5 << endl;
    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line6 << endl;
    // Text below ASCII art
    string gameRules[] = {
    	"",
    };

    // Calculate the amount of padding needed to center each line of text
    int textPadding = (150 - gameRules[0].length()) / 2;

    // Display the centered text
    for (const string& rule : gameRules) {
        for (int i = 0; i < textPadding; i++) {
            cout << " ";
        }
        cout << rule << endl;
    }
}
void chhin() {
	setColor(0, BACKGROUND_BLUE);
	
	drawBorder(65, 8, 36, 7);
	
	setColor(11, 0);
}
void setColor(int text, int background) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text | (background << 4));
}

void resetColor() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // Reset to default colors
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void drawBorder(int x, int y, int width, int height) {
    // Draw top border
    gotoxy(x, y);
    setColor(15, BACKGROUND_GREEN); // White text on green background
    cout << char(201); // Top-left corner
    for (int i = 1; i < width; i++) {
        cout << char(205); // Horizontal line
    }
    cout << char(187); // Top-right corner

    // Draw sides
    for (int i = 1; i < height; i++) {
        gotoxy(x, y + i);
        cout << char(186); // Vertical line
        gotoxy(x + width, y + i);
        cout << char(186); // Vertical line
    }

    // Draw bottom border
    gotoxy(x, y + height);
    cout << char(200); // Bottom-left corner
    for (int i = 1; i < width; i++) {
        cout << char(205); // Horizontal line
    }
    cout << char(188); // Bottom-right corner
    resetColor();
}
void Loading() {
    std::cout << "Loading ";
    char x = 219;
    for (int i = 0; i < 20; i++) {
        std::cout << x;
        if (i < 10)
            std::this_thread::sleep_for(std::chrono::milliseconds(300));
        if (i >= 10 && i < 20)
            std::this_thread::sleep_for(std::chrono::milliseconds(150));
        if (i >= 10)
            std::this_thread::sleep_for(std::chrono::milliseconds(25));
    }
    std::cout << "\n";
}



void withdraw(){
	system("cls");
string line1 = " __    __  ____  ______  __ __  ___    ____    ____  __    __ ";
string line2 = "|  T__T  Tl    j|      T|  T  T|   \\  |    \\  /    T|  T__T  T";
string line3 = "|  |  |  | |  T |      ||  l  ||    \\ |  D  )Y  o  ||  |  |  |";
string line4 = "|  |  |  | |  | l_j  l_j|  _  ||  D  Y|    / |     ||  |  |  |";
string line5 = "l  `  '  ! |  |   |  |  |  |  ||     ||    \\ |  _  |l  `  '  !";
string line6 = " \\      /  j  l   |  |  |  |  ||     ||  .  Y|  |  | \\      / ";
string line7 = "  \\_/\\_/  |____j  l__j  l__j__jl_____jl__j\\_jl__j__j  \\_/\\_/  ";




    int consoleWidth = 170;

    // Calculate the amount of padding needed to center the ASCII art
    int asciiArtPadding = (consoleWidth - line1.length()) / 2;

    // Display the centered ASCII art
    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line1 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line2 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line3 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line4 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line5 << endl;
    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line6 << endl;
    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line7 << endl;
    // Text below ASCII art
    string gameRules[] = {
    	"",
    };

    // Calculate the amount of padding needed to center each line of text
    int textPadding = (150 - gameRules[0].length()) / 2;

    // Display the centered text
    for (const string& rule : gameRules) {
        for (int i = 0; i < textPadding; i++) {
            cout << " ";
        }
        cout << rule << endl;
    }
    setColor(0, BACKGROUND_BLUE);
	
	drawBorder(53, 8, 63, 6);
	
	setColor(11, 0);
	gotoxy(58, 10);
	cout<<"[+]Your current coins is "<<balance<<endl;
	gotoxy(58, 11);
	cout<<"[+]Enter amount to withdraw(coins): ";
	int withdraw;
	cin>>withdraw;
	
	if( withdraw > balance ){ 
	gotoxy(70, 15);
	setColor(12, 0);
	cout<<"[!]You have insufficent coins!\n\n";
	gotoxy(70, 16);
	setColor(9, 0);
	cout<<"Returning To Menu.....";
	sleep(7);
	system("cls");
	Menu();
	}
	gotoxy(58, 12);
	cout<<"[+]Enter Your ABA Bank Number: ";
	string aba;
	cin>>aba;
	gotoxy(58, 16);
	Loading();

	if( withdraw > 1000000){
		gotoxy(58, 16);
		cout<<"[x]You can't withdraw with this amount.\nTry again\n";
		sleep(3);
		while (withdraw > 100000);
	}
	else{
		sleep(2);
		gotoxy(57, 16);
		setColor (11, 0);
		cout<<"[$]Successfully withdrawed "<<withdraw/100.0<<"$ and have been sent to "<<aba<<endl;
		balance -= withdraw;
		sleep(1);
		gotoxy(57, 17);
		setColor (9, 0);
		cout<<"[x]Returning To Menu.....";
		sleep(7);
		system("cls");
		Menu();
	}
}
void addCoins(){
	system("cls");
string line1 = " _____                       _ _   ";
string line2 = "|  __ \\                     (_) |  ";
string line3 = "| |  | | ___ _ __   ___  ___ _| |_ ";
string line4 = "| |  | |/ _ \\ '_ \\ / _ \\/ __| | __|";
string line5 = "| |__| |  __/ |_) | (_) \\__ \\ | |_ ";
string line6 = "|_____/ \\___| .__/ \\___/|___/_|\\__|";
string line7 = "            | |                    ";
string line8 = "            |_|                    ";


    int consoleWidth = 170;

    // Calculate the amount of padding needed to center the ASCII art
    int asciiArtPadding = (consoleWidth - line1.length()) / 2;

    // Display the centered ASCII art
    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line1 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line2 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line3 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line4 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line5 << endl;
    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line6 << endl;
    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line7 << endl;
    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line8 << endl;
    // Text below ASCII art
    string gameRules[] = {
    	"",
    };

    // Calculate the amount of padding needed to center each line of text
    int textPadding = (150 - gameRules[0].length()) / 2;

    // Display the centered text
    for (const string& rule : gameRules) {
        for (int i = 0; i < textPadding; i++) {
            cout << " ";
        }
        cout << rule << endl;
    }
    setColor(0, BACKGROUND_BLUE);
	
	drawBorder(53, 8, 63, 7);
	
	setColor(11, 0);
	gotoxy(58, 9);
	cout<<"[+]Enter coins to deposit (100coins = 1.2$): ";
	int inputCoins;
	cin>>inputCoins;
	if ( inputCoins <= 0 ){
		cout<<"Please Enter a Valid Number!";
	}
	gotoxy(58, 10);
	cout<<"[+]Enter Your Credit Card Number: ";
	string cardNum;
	cin>>cardNum;
	int month;
	gotoxy(58, 11);
	cout<<"[+]MM: ";
	cin>>month;
	if ( month > 12 ){
		gotoxy(71, 16);
		setColor(12, 0);
		cout<<"Please Enter Valid Month";
		sleep(6);
		addCoins();
	}
	else if (month < 1){
		gotoxy(71, 16);
		setColor(12, 0);
		cout<<"Please Enter Valid Month";
		sleep(6);
		addCoins();
	}
	int years;
	gotoxy(58, 12);
	cout<<"[+]Years: ";
	cin>>years;
	if ( years > 2029 ){
		gotoxy(71, 16);
		setColor(12, 0);
		cout<<"Please Enter valid Year";
		sleep(6);
		addCoins();
	}
	else if ( years < 2023 ){
		gotoxy(71, 16);
		setColor(11, 0);
		cout<<"Please Enter Valid Year";
		sleep(6);
		addCoins();
	}
	int cvc;
	gotoxy(58, 13);
	cout<<"[+]CVC: ";
	cin>>cvc;
	if ( cvc > 999 ){
		gotoxy(71, 16);
		setColor(12, 0);
		cout<<"Please Enter Valid CVC";
	}
	else if ( cvc < 100 ){
		gotoxy(71, 16);
		setColor(12, 0);
		cout<<"Please Enter Valid CVC";
	}
	string type;
	char firstDigit = cardNum[0];
	if( firstDigit == '4' ){
		type = "Visa Card\n" ;
	}
	else if ( firstDigit == '5' ){
		type = "Master Card\n";
	}
	gotoxy(58, 14);
	cout<<"Card Type: "<<type<<endl;
	gotoxy(58, 16);
	Loading();
if ( (cardNum == "4242424242424242" || cardNum == "5555555555554444")){
	gotoxy(58, 18);
    cout<<"[$]You have been charged for "<<inputCoins/80.0<<"$";
    balance += inputCoins;
    gotoxy(58, 19);
    cout<<"Returning To Menu.......\n";
    sleep(8);
    system("cls");
    Menu();
}
	else if ( cardNum != "4242424242424242" && cardNum != "5555555555554444"){
		cout<<"\n[X]Your Card Has Been Decline!\n";
		addCoins();
	}
	else if ( month <= 0 ){
		cout<<"\nPlease Enter A Valid Month\n";
		addCoins();
	}
	else if ( years <= 0 ){
		cout<<"\nPlease Enter A Valid Years\n";
		addCoins();
	}
	else if ( cvc <= 0){
		cout<<"\nPlease Enter A Valid CVC\n";
		addCoins();
	}
	else{
		cout<<"Error Please Try Again\n";
		addCoins();
	}
}
void level(){
system("cls");
setColor(12, 0);
string line1 = "  _____                      __  __                  ";
string line2 = " / ____|                    |  \\/  |                 ";
string line3 = "| |  __  __ _ _ __ ___   ___| \\  / | ___ _ __  _   _ ";
string line4 = "| | |_ |/ _` | '_ ` _ \\ / _ \\ |\\/| |/ _ \\ '_ \\| | | |";
string line5 = "| |__| | (_| | | | | | |  __/ |  | |  __/ | | | |_| |";
string line6 = " \\_____|\\__,_|_| |_| |_|\\___|_|  |_|\\___|_| |_|\\__,_|";
    int consoleWidth = 170;

    // Calculate the amount of padding needed to center the ASCII art
    int asciiArtPadding = (consoleWidth - line1.length()) / 2;

    // Display the centered ASCII art
    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line1 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line2 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line3 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line4 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line5 << endl;
    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line6 << endl;
	setColor(0, BACKGROUND_BLUE);
    drawBorder(60.7, 7.5, 48, 9);
    setColor(11, 0);
	gotoxy(64, 9);
	cout<<"Your current coins is "<<balance<<endl;
	gotoxy(64, 10);
	cout <<"1.Easy Mode";
	gotoxy(64, 11);
	cout <<"2.Normal Mode";
	gotoxy(64, 12);
	cout <<"3.Hard Mode";
	gotoxy(64, 13);
	cout <<"4.Exit";
	gotoxy(64, 14);
	cout <<"[+]Select the Difficulty Levels or Exit: ";
	int choice;
	cin >> choice;
	switch(choice){
		case 1:
			system("cls");
			setColor(0, BACKGROUND_BLUE);
		    drawBorder(60.7, 7.5, 48, 9);
		    setColor(11, 0);
		    gotoxy(65, 10);
			cout<<"[$]You selected Easy Mode";
			gotoxy(65, 11);
			cout<<"[+]Press Number 0 To Exit To Menu";
			gotoxy(65, 12);
			cout<<"[+]Press Number 1 To Start";
			gotoxy(65, 13);
			cout<<"[~]Choose Option: ";
			int changeLevel1;
			cin>>changeLevel1;
			if (changeLevel1 == 0){
				level();
			}
			else if (changeLevel1 == 1){
				system("cls");
				easyMode();	
			}
			break;
		case 2:
			system("cls");
			setColor(0, BACKGROUND_BLUE);
		    drawBorder(60.7, 7.5, 48, 9);
		    setColor(11, 0);
		    gotoxy(65, 10);
			cout<<"[$]You selected Normal Mode";
			gotoxy(65, 11);
			cout<<"[+]Press Number 0 To Exit To Menu";
			gotoxy(65, 12);
			cout<<"[+]Press Number 1 To Start";
			gotoxy(65, 13);
			cout<<"[~]Choose Option: ";
			int changeLevel2;
			cin>>changeLevel2;
			if (changeLevel2 == 0){
				level();
			}
			else if (changeLevel2 == 1){
				system("cls");
				normalMode();	
			}
			break;
		case 3:
			system("cls");
			setColor(0, BACKGROUND_BLUE);
		    drawBorder(60.7, 7.5, 48, 9);
		    setColor(11, 0);
		    gotoxy(65, 10);
			cout<<"[$]You selected Hard Mode";
			gotoxy(65, 11);
			cout<<"[+]Press Number 0 To Exit To Menu";
			gotoxy(65, 12);
			cout<<"[+]Press Number 1 To Start";
			gotoxy(65, 13);
			cout<<"[~]Choose Option: ";
			int changeLevel3;
			cin>>changeLevel3;
			if (changeLevel3 == 0){
				level();
			}
			else if (changeLevel3 == 1){
				gotoxy(65, 17);
				cout << "[+]Starting Hard Mode....." << endl;
				gotoxy(65, 18);
				Loading();
				hardMode();
			}
			break;
		case 4:
			Menu();	
	}
}
void easyMode(){
	while(1){
	system("cls");
	srand(time(0));
	int r1 = rand() % 30 + 1;
	int r2 = rand() % 20 + 1;
	int r3 = rand() % 10 + 1;
	int money;
	if (balance == 0) {
		setColor(0, BACKGROUND_BLUE);
		drawBorder(65, 3, 36, 7);
		setColor(11, 0);
		gotoxy(68, 5.5);
	    cout << "[+]You don't have enought coin!\n" << endl;
	    gotoxy(68, 8);
	    cout<<"[+]Enter number 1 To Deposit: ";
	    int both;
	    cin>>both;
	    if ( both == 1 ){
	    	addCoins();
		}
		else{
			exit(1);
		}
	    }
    	do {
    	games();
    	int bets;
		setColor(0, BACKGROUND_BLUE);
		drawBorder(64, 7, 40, 7);
		setColor(11, 0);
		gotoxy(73, 9);
    	cout<<"1.All-In Bets";
    	gotoxy(73, 10);
		cout<<"2.Custom Amount Bet";
		gotoxy(73, 11);
		cout<<"3.Exit To Game Menu";
		gotoxy(73, 12);
    	cout<<"Choose Option: ";
    	cin>>bets;
    	switch(bets){
    		case 1:
        		money = balance;
        		break;
        	case 2:
        		gotoxy(70, 15);
        		Loading();
        		gotoxy(70, 16);
        		cout << "[+]Enter coins to bet: ";
        		cin >> money;
        		break;
        	case 3:
        		return;
        		break;
    }
        
        if (money > balance) {
        	setColor(12, 0);
        	gotoxy(70, 17);
            cout << "You have insufficient coins." << endl;
            sleep(5);
            setColor(11, 0);
        }
    	} while (money > balance);
    system("cls");
    gotoxy(72, 4);
    int num;
    cout << "[+]Guess number(1-20): ";
    cin >> num;
    gotoxy(72, 6);
	Loading();
    if (r1 == num || r2 == num || r3 == num) {
    	gotoxy(73, 10);
    	setColor(10, 0);
        cout << 0.5 * money << " coins" << " has been added ";
        gotoxy(77, 11);
		cout<<"to your balance!"<<endl;
		gotoxy(71, 12);
        cout << "Result number is: " <<r1<<" - "<<r2<<" - "<<r3<<endl<<endl;
        drawBorder(64, 8, 40, 6);
        balance += 0.5 * money;
        gotoxy(76, 16);
    	sleep(5);
	    system("cls");
    } else if (num > 6 || num < 1) {
        cout << "[+]Please enter a valid number!" << endl;
        sleep(5);
	    system("cls");
    } else {
    	drawBorder(64, 8, 40, 6);
    	setColor(12, 0);
    	gotoxy(72, 10);
        cout << money << " coins" <<" has been removed";
        gotoxy(75, 11);
		cout <<"from your balance";
        balance -= money;
        gotoxy(71, 12);
        cout << "Correct number is: " <<r1<<" - "<<r2<<" - "<<r3<<endl<<endl;
	    sleep(7);
	    system("cls");
    }
	    }
}

void normalMode(){
	while(1){
	system("cls");
	srand(time(0));
	int r1 = rand() % 20 + 1;
	int r2 = rand() % 10 + 1;
	int money;
	if (balance == 0) {
		setColor(0, BACKGROUND_BLUE);
		drawBorder(65, 3, 36, 7);
		setColor(11, 0);
		gotoxy(68, 5.5);
	    cout << "[+]You don't have enought coin!\n" << endl;
	    gotoxy(68, 8);
	    cout<<"[+]Enter number 1 To Deposit: ";
	    int both;
	    cin>>both;
	    if ( both == 1 ){
	    	addCoins();
		}
		else{
			exit(1);
		}
	    }
    	do {
    	games();
    	int bets;
		setColor(0, BACKGROUND_BLUE);
		drawBorder(64, 7, 40, 7);
		setColor(11, 0);
		gotoxy(73, 9);
    	cout<<"1.All-In Bets";
    	gotoxy(73, 10);
		cout<<"2.Custom Amount Bet";
		gotoxy(73, 11);
		cout<<"3.Exit To Game Menu";
		gotoxy(73, 12);
    	cout<<"Choose Option: ";
    	cin>>bets;
    	switch(bets){
    		case 1:
        		money = balance;
        		break;
        	case 2:
        		gotoxy(70, 15);
        		Loading();
        		gotoxy(70, 16);
        		cout << "[+]Enter coins to bet: ";
        		cin >> money;
        		break;
        	case 3:
        		return;
        		break;
    }
        
        if (money > balance) {
        	setColor(12, 0);
        	gotoxy(70, 17);
            cout << "You have insufficient coins." << endl;
            sleep(5);
            setColor(11, 0);
        }
    	} while (money > balance);
    system("cls");
    gotoxy(72, 4);
    int num;
    cout << "[+]Guess number(1-20): ";
    cin >> num;
    gotoxy(72, 6);
	Loading();
    if (r1 == num || r2 == num ) {
    	gotoxy(73, 10);
    	setColor(10, 0);
        cout << 0.75 * money << " coins" << " has been added ";
        gotoxy(77, 11);
		cout<<"to your balance!"<<endl;
		gotoxy(73, 12);
        cout << "Result number is: " <<r1<<" - "<<r2<<endl<<endl;
        drawBorder(64, 8, 40, 6);
        balance += 0.75 * money;
        gotoxy(76, 16);
    	sleep(5);
	    system("cls");
    } else if (num > 6 || num < 1) {
        cout << "[+]Please enter a valid number!" << endl;
        sleep(5);
	    system("cls");
    } else {
    	drawBorder(64, 8, 40, 6);
    	setColor(12, 0);
    	gotoxy(72, 10);
        cout << money << " coins" <<" has been removed";
        gotoxy(75, 11);
		cout <<"from your balance";
        balance -= money;
        gotoxy(72, 12);
        cout << "Correct number is: " <<r1<<" - "<<r2<<endl<<endl;
	    sleep(7);
	    system("cls");
    }
	    }
}

void hardMode(){
	while(1){
	system("cls");
	srand(time(0));
	int r1 = rand() % 10 + 1;
	int money;
	if (balance == 0) {
		setColor(0, BACKGROUND_BLUE);
		drawBorder(65, 3, 36, 7);
		setColor(11, 0);
		gotoxy(68, 5.5);
	    cout << "[+]You don't have enought coin!\n" << endl;
	    gotoxy(68, 8);
	    cout<<"[+]Enter number 1 To Deposit: ";
	    int both;
	    cin>>both;
	    if ( both == 1 ){
	    	addCoins();
		}
		else{
			exit(1);
		}
	    }
    	do {
    	games();
    	int bets;
		setColor(0, BACKGROUND_BLUE);
		drawBorder(64, 7, 40, 7);
		setColor(11, 0);
		gotoxy(73, 9);
    	cout<<"1.All-In Bets";
    	gotoxy(73, 10);
		cout<<"2.Custom Amount Bet";
		gotoxy(73, 11);
		cout<<"3.Exit To Game Menu";
		gotoxy(73, 12);
    	cout<<"Choose Option: ";
    	cin>>bets;
    	switch(bets){
    		case 1:
        		money = balance;
        		break;
        	case 2:
        		gotoxy(70, 15);
        		Loading();
        		gotoxy(70, 16);
        		cout << "[+]Enter coins to bet: ";
        		cin >> money;
        		break;
        	case 3:
        		return;
        		break; 
    }
        
        if (money > balance) {
        	setColor(12, 0);
        	gotoxy(70, 17);
            cout << "You have insufficient coins." << endl;
            sleep(5);
            setColor(11, 0);
        }
    	} while (money > balance);
    system("cls");
    gotoxy(72, 4);
    int num;
    cout << "[+]Guess number(1-10): ";
    cin >> num;
    gotoxy(72, 6);
	Loading();
    if (r1 == num ) {
    	gotoxy(73, 10);
    	setColor(10, 0);
        cout << 1.5 * money << " coins" << " has been added ";
        gotoxy(77, 11);
		cout<<"to your balance!"<<endl;
		gotoxy(75, 12);
        cout << "Result number is: " <<r1<<endl<<endl;
        drawBorder(64, 8, 40, 6);
        balance += 1.5 * money;
        gotoxy(76, 16);
    	sleep(5);
	    system("cls");
    } else if (num > 6 || num < 1) {
        cout << "[+]Please enter a valid number!" << endl;
        sleep(5);
	    system("cls");
    } else {
    	drawBorder(64, 8, 40, 6);
    	setColor(12, 0);
    	gotoxy(72, 10);
        cout << money << " coins" <<" has been removed";
        gotoxy(76, 11);
		cout <<"from your balance";
        balance -= money;
        gotoxy(75, 12);
        cout << "Correct number is: " <<r1<<endl<<endl;
	    sleep(7);
	    system("cls");
    }
	    }
}
void rules(){
    // ASCII art lines
    setColor(10, 0);
    string line1 = "  ____                      ____        _           ";
    string line2 = " / ___| __ _ _ __ ___   ___|  _ \\ _   _| | ___  ___ ";
    string line3 = "| |  _ / _` | '_ ` _ \\ / _ \\ |_) | | | | |/ _ \\/ __|";
    string line4 = "| |_| | (_| | | | | | |  __/  _ <| |_| | |  __/\\__ \\";
    string line5 = " \\____|\\__,_|_| |_| |_|\\___|_| \\_\\__,_|_|\\___||___/";
    int consoleWidth = 170;

    // Calculate the amount of padding needed to center the ASCII art
    int asciiArtPadding = (consoleWidth - line1.length()) / 2;

    // Display the centered ASCII art
    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line1 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line2 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line3 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line4 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line5 << endl;

	setColor(0, BACKGROUND_BLUE);
	
	drawBorder(65, 7, 40, 11);
	
	setColor(11, 0);
	gotoxy(71, 9);
	cout<<"[+]Easy Mode (x0.5 coins)";
	gotoxy(71, 10);
	cout<<"[+]Guess Number From 1-30";
	gotoxy(71, 11);
	cout<<"[+]Normal Mode(x1 coins)";
	gotoxy(71, 12);
	cout<<"[+]Guess Number From 1-20";
	gotoxy(71, 13);
	cout<<"[+]Hard Mode(x1.5 coins)";
	gotoxy(71, 14);
	cout<<"[+]Guess Number From 1-10";
	gotoxy(71, 15);
	cout<<"[+]No Toxic";
	gotoxy(71, 16);
	cout<<"[+]No Refund";
		
	gotoxy(67, 19);	
	cout<<"You must follow the rule before start!";
	gotoxy(67, 20);
	cout<<"1.Agree";
	gotoxy(67, 21);
	cout<<"2.Disagree";
	gotoxy(67, 22);
	cout<<"Choose your option: ";
    	int rule;
    	cin>>rule;
    	switch(rule){
    		case 1:
    			gotoxy(67, 24);
    			Loading();
    			sleep(1);
				Menu();
			case 2:
				system("cls");
				cout<<"Disagree The Rule, Exiting The Game!";
				exit(0);
		}
}

void Menu(){
	system("cls");
	setColor(11, 0);
string line1 = " ___  ___      _      ___  ___                 ";
string line2 = "|  \\/  |     (_)     |  \\/  |                 ";
string line3 = "| .  . | __ _ _ _ __ | .  . | ___ _ __  _   _ ";
string line4 = "| |\\/| |/ _` | | '_ \\| |\\/| |/ _ \\ '_ \\| | | |";
string line5 = "| |  | | (_| | | | | | |  | |  __/ | | | |_| |";
string line6 = "\\_|  |_|\\__,_|_|_| |_|_|  |_|\\___|_| |_|\\__,_|";

    int consoleWidth = 170;

    // Calculate the amount of padding needed to center the ASCII art
    int asciiArtPadding = (consoleWidth - line1.length()) / 2;

    // Display the centered ASCII art
    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line1 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line2 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line3 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line4 << endl;

    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line5 << endl;
    for (int i = 0; i < asciiArtPadding; i++) {
        cout << " ";
    }
    cout << line6 << endl;
    setColor(0, BACKGROUND_BLUE);
    drawBorder(65, 8, 36, 7);
    setColor(11, 0);  
	gotoxy(68, 10);
	cout<<"1.Enter Game"<<endl;
	gotoxy(68, 11);
	cout<<"2.Deposit"<<endl;
	gotoxy(68, 12);
	cout<<"3.Withdraw"<<endl;
    gotoxy(68, 13);
    cout<<"Choose your option: ";
	int menu;
	cin>>menu;
	switch (menu){
		case 1:
			gotoxy(70, 16);
			cout<<"You Seleted Game";
			gotoxy(70, 17);
			Loading();
			sleep(0);
			level
			();
			break;
		case 3:
			gotoxy(70, 16);
			cout<<"You Seleted Withdraw!\n";
			gotoxy(70, 17);
			Loading();
			sleep(3);
			withdraw();
			break;
		case 2:
			gotoxy(70, 16);
			cout<<"You seleted Deposit!\n";
			gotoxy(70, 17);
			Loading();
			addCoins();
			break;
		case 4:
			gotoxy(70, 17);
			cout<<"Exiting Game.....";
			exit(0);	
	}
}

int main() {
	SetConsoleTitleA("Lok Lak Game");
	system("COLOR 3");
	rules();
    return 0;
}
