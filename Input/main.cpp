#include <iostream>
#include <fstream>
#include<bits/stdc++.h>

using namespace std;

int takeInput(string s) {
    int result = 0;

    cout << s << endl;
    cin >> result;

    while(cin.fail()) {
        cout << s << endl;

        cin.clear();
        cin.ignore(256,'\n');
        cin >> result;
    }
    return result;
}

int main () {

/*    string input;
    int lines;
	cout << "How many lines do you want to enter: ";
	cin >> lines;
    cin.ignore();

	for(int i = 0; i < lines; i++){

        cout << "Give text: ";
        getline(cin, input, '\n');
        cout << input << endl;
	}
*/


    ofstream myfile;
    myfile.open ("example.txt");

    string firstName, lastName, className, allStudents;

    string numStudents = "How many students would you like to add? PRESS 0 TO EXIT.";
    int students = 0;
    do {
    students = takeInput(numStudents);

        for (int x = 0; x < students; x++){

            cout << "Lets add the " << " Student number " << x + 1 << endl;
            cout << "What is the first name of the student: ";
            cin >> firstName;

            cout << "What is the second name of the student: ";
            cin >> lastName;

            cin.ignore();
            cout << "What is the class name: ";
            getline(cin, className, '\n');
            allStudents.append("First Name = " + firstName + " Last Name = " + lastName + " Class = " + className + "\n");


        }
        cout << allStudents;
        numStudents = "\nHow many more students would you like to add? PRESS 0 TO EXIT.";
    } while (students > 0);

    myfile << allStudents;
    cout << "Good bye.";
    myfile.close();

  return 0;
}
