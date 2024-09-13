/*
Name: Humberto Espino
Lab: Oops Shall We Try Again
CSC122
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int validatorF();                   //overloaded function declarations
int validatorF(string, string);
int validatorF(int, string, string);
int validatorF(int, int, string, string);


int main() 
{

cout << "\nWelcome: \"Oops Shall We Try Again\" program running..." << endl; //message indicating start

//Driver tests the program under specific conditions.
cout << "\nDriver checks in progress....";
validatorF(); //no specified bounds or messages
validatorF("Input:", "Error.");   //no bounds with messages
validatorF(3, "Input:", "Error."); //lower bound with messages
validatorF(-10, 10, "Input:", "Error."); //upper and lower bound with messages

cout << "\nChecks completed successfully." << endl;

cout << "\nProgram completed. Good bye!\n\n"; //message indicating end of the program

}

int validatorF () //in the event there is no uppwer or lower bound specificed and no messages are defined, default messages are available
{
    int userChoice = 0;
    string promptMessage = "Input an integer: ";
    string invalidInput = "Invalid input received.";
    cout << "\nFunction Received no upper or lower bounds or prompt messages, and will return the input integer."<<endl;

    cout << "\n" << promptMessage << endl;
    cin >> userChoice;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore();
        cout << invalidInput;
        cout << promptMessage;
        cin >> userChoice;
    }
    cout << "\nYou entered: " << userChoice << endl;

    return userChoice;
}

int validatorF (string s1, string s2) //in the event there is no uppwer or lower bound specificed
{
    int userChoice = 0;
    string promptMessage = s1;
    string invalidInput = s2;

    cout << "\nFunction received no upper or lower bounds and will return the input integer." << "\nPrompt message: " << promptMessage << "\nError message: " << invalidInput << endl;

    cout << "\n" << promptMessage << endl;
    cin >> userChoice;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore();
        cout << invalidInput;
        cout << promptMessage;
        cin >> userChoice;
    }
    cout << "\nYou entered: " << userChoice << endl;

    return userChoice;
}

int validatorF (int a, string s1, string s2) //in the event the function receives only one integer and thus only a lower bound
{
    int lowerBound = a;
    int userChoice = 0;
    string promptMessage = s1;
    string invalidInput = s2;

    cout << "\nFunction Received no upper bound."<< "\nLower bound: " << lowerBound << "\nPrompt message: " << promptMessage << "\nError message: " << invalidInput << endl;

    cout << "\n" << promptMessage << endl;
    cin >> userChoice;

    while (cin.fail() || userChoice < lowerBound)
    {
        cin.clear();
        cin.ignore();
        cout << invalidInput;
        cout << promptMessage;
        cin >> userChoice;
    }
    cout << "\nYou entered: " << userChoice << endl;

    return lowerBound;
}

int validatorF (int a, int b, string s1, string s2)    //in the event the function receives both an upper and lower bound
{
    int lowerBound = a;
    int upperBound = b;
    int userChoice = 0;
    string promptMessage = s1;
    string invalidInput = s2;
    cout << "\nFunction Received Bounds."<< "\nLower bound: " << lowerBound << "\nUpper bound: " << upperBound << "\nPrompt message: " << promptMessage << "\nError message: " << invalidInput << endl;

    cout << "\n" << promptMessage << endl;
    cin >> userChoice;

    while (cin.fail() || userChoice < lowerBound || userChoice > upperBound)
    {
        cin.clear();
        cin.ignore();
        cout << invalidInput;
        cout << promptMessage;
        cin >> userChoice;
    }
    cout << "\nYou entered: " << userChoice<< endl;

    return upperBound;
}