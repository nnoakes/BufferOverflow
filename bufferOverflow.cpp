
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>
using namespace std;


void getInfo(float bookPrice) {
	char name[11];
    char info[8];
    char address[60];
    char lastName[16];
    char ccNum[17];
    cout << "Please enter your first name: ";
    cin.ignore();
    cin.getline(name, 11);
    cout << "Please enter your last name: ";
    cin.ignore();
    cin.getline(lastName, 16);
    cout << "Please enter your full address: ";
    cin.ignore();
    cin.getline(address, 60);
    cout << "Shipping and handling will be $2.50." << endl;
    cout << "Please enter your credit card number: ";
    cin.ignore();
    cin.getline(ccNum, 17);
    char purchaseInfo[27] = "online purchase ";
    float price = bookPrice + 2.50;
    strcat(purchaseInfo, name);
    strcpy(info, purchaseInfo);
    cout << "Final price: $" << round(price * 100) /100 << endl;
    cout << "Thank you for your purchase!" << endl;
}

int main() {
    cout << "----------------------" << endl;
    cout << "Welcome to The Bookstore!" << endl;
    cout << "----------------------" << endl;
    cout << "Available books: " << endl;
    cout << "----------------------" << endl;
    cout << "1. How to Kill a Mockingbird" << endl;
    cout << "By: Harper Lee" << endl;
    cout << "Price: $12.99" << endl;
    cout << "----------------------" << endl;
    cout << "2. Gone with the Wind" << endl;
    cout << "By: Margaret Mitchell" << endl;
    cout << "Price: $14.99" << endl;
    cout << "----------------------" << endl;
    cout << "3. East of Eden" << endl;
    cout << "By: John Steinbeck" << endl;
    cout << "Price: $9.99" << endl;
    cout << "----------------------" << endl;
    cout << "4. The Hunger Games" << endl;
    cout << "By: Suzanne Collins" << endl;
    cout << "Price: $16.99" << endl;
    cout << "----------------------" << endl;
    int option = 0;
    float bookPrice = 0.0;
    cout << "Please input the number of the book you want: ";
    cin >> option;
    if(option == 1){
    	bookPrice = 12.99;
    }else if(option == 2){
    	bookPrice = 14.99;
    }else if(option == 3){
    	bookPrice = 9.99;
    }else if(option == 4){
    	bookPrice = 16.99;
    }else {
	cout << "That is not an option" << endl;
    	return 0;
    }
    getInfo(bookPrice);
}



