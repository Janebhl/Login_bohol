//Outcomes Evaluation 7:
//Description: Implement login credentials to any of your lab activity using C-string. 
//User will input username and password
// A c++ program that will manipulate a string and unsigned int by using a
// a void function such that the input will be displayed in reverse order.
//Name: Jane Cristel Bohol
//Date: December 12, 2021

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include <bits/stdc++.h>

using namespace std;
void promptAndWait ();
void reverseString (string drow);
void reverseUnsigned (unsigned n, int remain, int reversedNum);\
void login();
int main() {
    string wordIn;
    unsigned int numIn;
    int ch, ans = 0;
    int r, reversedUn = 0;


    cout<<"Welcome!!";
    cout<<"\nPlease enter yourusername and password.";
    login();
    cout<<"\nYou have successfully logged in!!";
    cout<<"\nPress enter or return to continue...";
    cin.get();

    do{
        system("cls");
        cout << endl;
        cout << "Message Decryptor" << endl << endl;
        cout << "[1] Reverse a String" << endl;
        cout << "[2] Reverse Unsigned Integer" << endl;
        cout << "[3] Exit" << endl;
        cout << "Select Function : ";
        cin >> ch;

        switch (ch) 
        {
            case 1: 
            {
                cout <<"\n << Reverse a String >>" << endl;
                cout << "Enter a word or a phrase : ";
                cin >> wordIn;
                reverseString (wordIn);
                promptAndWait();
                break;
            }
            case 2: 
            {
                cout << "\n << Reverse Unsigned Integer >>" << endl;
                cout << "Enter a number : ";
                cin >> numIn;
                reverseUnsigned (numIn, r, reversedUn);
                promptAndWait();
                break;
            }
            case 3: 
            {
                promptAndWait();
                cout << "\nDecryptor App Terminated \nThank you for using the app!";
                return 0;
            }

            default: {
                cout << "Invalid Input!";
                promptAndWait();
            }
        }
    }while (ans == 0);

    
    return 0;
}

void login()
{
    char login_un[20], login_pw[20];
    
            while (strcmp(login_un, "janebhl0116") !=0)
            {
                cin.get();
                cout<<"Username: ";
                cin.getline(login_un, 20);
                if (strcmp(login_un, "janebhl0116") ==0) break;
                else
                    cout<<"\nInvalid Username.\n";
            }     
            while (strcmp(login_pw, "jungwheein_loml") !=0)
            {
                cin.get();
                cout<<"Password: ";
                cin.getline(login_pw, 20);
                if (strcmp(login_pw, "jungwheein_loml") == 0) break;
                else
                    cout<<"\nInvalid Password\n";
            }  
}

    
void promptAndWait(){
    cin.ignore (100, '\n');
    cout << "\nPress Enter or Return to continue...";
    cin.get();
    }

void reverseString (string drow){
    reverse(drow.begin(),drow.end());
    cout << "Reversed word or phrase : " << drow << endl;
    }
    
void reverseUnsigned (unsigned n, int remain, int reversedNum){
    while(n != 0) {
        remain = n%10;
        reversedNum = reversedNum * 10 + remain;
        n /= 10;
        }
    cout << "Reversed Number : " << reversedNum;
    }
