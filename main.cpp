#include <iostream>
#include <string>
#include <sstream>
#include "VectorTemplate.h"

//change every conversion from int to respective type.
//try not to cry about it

// figure out insert for double and the rest.

using namespace std;

void intVector(int starting_cap){
    bool status = true;
    string input;
    string var1, var2;

    VectorTemplate<int> Vector(starting_cap);

    // make sure to account for error messages that need to be put in class!!
    cout << endl << "Now accepting commands (quit to exit program)\nNote: Indexing for get, at and insert commands starts at 1.\n" << endl;
    string T;
    while(status){


        cout << ">";

        string test2;

        std::getline(cin, input);

        stringstream stream(input);


        std::getline(stream, test2, ' ');

        std::getline(stream, var1, ' '); // var1 is a string with the first number

        std::getline(stream, var2, ' '); // var2 is a string with second number if needed


        if(input.find("at") != string::npos){
            int var3 = std::stoi(var1);

            cout << Vector.at(var3) << endl; // :)
        }
        if(input.find("get") != string::npos){
            int var3 = std::stoi(var1);
            cout << Vector[var3 - 1] << endl;
        }
        if(input.find("front") != string::npos){
            cout << Vector.front() << endl;
        }
        if(input.find("back") != string::npos){
            cout << Vector.back() << endl;
        }
        if(input.find("insert") != string::npos){
            int var3 = std::stoi(var1);
            int var4 = std::stoi(var2);
            Vector.insert(var3, var4);
        }
        if(input.find("push") != string::npos){
            int var3 = std::stoi(var1);
            Vector.push_back(var3);
        }
        if(input.find("pop") != string::npos){
            Vector.pop_back();
        }
        if(input.find("size") != string::npos){
            cout << Vector.size() << endl;
        }
        if(input.find("capacity") != string::npos){
            cout << Vector.capacity()<< endl;
        }
        if(input.find("print") != string::npos){
            Vector.print();
        }
        if(input.find("quit") != string::npos){
            status = false;
        }

    }
}

void floatVector(int starting_cap){
    bool status = true;
    string input;
    string var1, var2;

    VectorTemplate<float> Vector(starting_cap);

    // make sure to account for error messages that need to be put in class!!
    cout << endl << "Now accepting commands (quit to exit program)\nNote: Indexing for get, at and insert commands starts at 1.\n" << endl;

    string T;
    while(status){


        cout << ">";

        string test2;

        std::getline(cin, input);

        stringstream stream(input);


        std::getline(stream, test2, ' ');

        std::getline(stream, var1, ' '); // var1 is a string with the first number

        std::getline(stream, var2, ' '); // var2 is a string with second number if needed


        if(input.find("at") != string::npos){
            int var3 = std::stoi(var1);

            cout << Vector.at(var3) << endl; // :)
        }
        if(input.find("get") != string::npos){
            int var3 = std::stoi(var1);
            cout << Vector[var3 - 1] << endl;
        }
        if(input.find("front") != string::npos){
            cout << Vector.front() << endl;
        }
        if(input.find("back") != string::npos){
            cout << Vector.back() << endl;
        }
        if(input.find("insert") != string::npos){
            int var3 = std::stoi(var1);
            float var4 = std::stof(var2);
            Vector.insert(var3, var4);
        }
        if(input.find("push") != string::npos){
            float var3 = std::stof(var1);
            Vector.push_back(var3);
        }
        if(input.find("pop") != string::npos){
            Vector.pop_back();
        }
        if(input.find("size") != string::npos){
            cout << Vector.size() << endl;
        }
        if(input.find("capacity") != string::npos){
            cout << Vector.capacity()<< endl;
        }
        if(input.find("print") != string::npos){
            Vector.print();
        }
        if(input.find("quit") != string::npos){
            status = false;
        }

    }
}

void doubleVector(int starting_cap){bool status = true;
    string input;
    string var1, var2;

    VectorTemplate<double> Vector(starting_cap);

    // make sure to account for error messages that need to be put in class!!
    cout << endl << "Now accepting commands (quit to exit program)\nNote: Indexing for get, at and insert commands starts at 1.\n" << endl;

    string T;
    while(status){


        cout << ">";

        string test2;

        std::getline(cin, input);

        stringstream stream(input);


        std::getline(stream, test2, ' ');

        std::getline(stream, var1, ' '); // var1 is a string with the first number

        std::getline(stream, var2, ' '); // var2 is a string with second number if needed


        if(input.find("at") != string::npos){
            int var3 = std::stoi(var1);

            cout << Vector.at(var3) << endl; // :)
        }
        if(input.find("get") != string::npos){
            int var3 = std::stoi(var1);
            cout << Vector[var3 - 1] << endl;
        }
        if(input.find("front") != string::npos){
            cout << Vector.front() << endl;
        }
        if(input.find("back") != string::npos){
            cout << Vector.back() << endl;
        }
        if(input.find("insert") != string::npos){
            int var3 = std::stoi(var1);
            double var4 = std::stod(var2);
            Vector.insert(var3, var4);
        }
        if(input.find("push") != string::npos){
            double var3 = std::stod(var1);
            Vector.push_back(var3);
        }
        if(input.find("pop") != string::npos){
            Vector.pop_back();
        }
        if(input.find("size") != string::npos){
            cout << Vector.size() << endl;
        }
        if(input.find("capacity") != string::npos){
            cout << Vector.capacity()<< endl;
        }
        if(input.find("print") != string::npos){
            Vector.print();
        }
        if(input.find("quit") != string::npos){
            status = false;
        }

    }}

void stringVector(int starting_cap){bool status = true;
    string input;
    string var1, var2;

    VectorTemplate<string> Vector(starting_cap);

    // make sure to account for error messages that need to be put in class!!
    cout << endl << "Now accepting commands (quit to exit program)\nNote: Indexing for get, at and insert commands starts at 1.\n" << endl;

    string T;
    while(status){


        cout << ">";

        string test2;

        std::getline(cin, input);

        stringstream stream(input);


        std::getline(stream, test2, ' ');

        std::getline(stream, var1, ' '); // var1 is a string with the first number

        std::getline(stream, var2, ' '); // var2 is a string with second number if needed


        if(input.find("at") != string::npos){
            int var3 = std::stoi(var1);

            cout << Vector.at(var3) << endl; // :)
        }
        if(input.find("get") != string::npos){
            int var3 = std::stoi(var1);
            cout << Vector[var3 - 1] << endl;
        }
        if(input.find("front") != string::npos){
            cout << Vector.front() << endl;
        }
        if(input.find("back") != string::npos){
            cout << Vector.back() << endl;
        }
        if(input.find("insert") != string::npos){
            int var3 = std::stoi(var1);

            Vector.insert(var3, var2);
        }
        if(input.find("push") != string::npos){
            Vector.push_back(var1);
        }
        if(input.find("pop") != string::npos){
            Vector.pop_back();
        }
        if(input.find("size") != string::npos){
            cout << Vector.size() << endl;
        }
        if(input.find("capacity") != string::npos){
            cout << Vector.capacity()<< endl;
        }
        if(input.find("print") != string::npos){
            Vector.print();
        }
        if(input.find("quit") != string::npos){
            status = false;
        }

    }}

void boolVector(int starting_cap){bool status = true;
    string input;
    string var1, var2;

    VectorTemplate<bool> Vector(starting_cap);

    // make sure to account for error messages that need to be put in class!!
    cout << endl << "Now accepting commands (quit to exit program)\nNote: Indexing for get, at and insert commands starts at 1.\n" << endl;

    string T;
    while(status){


        cout << ">";

        string test2;

        std::getline(cin, input);

        stringstream stream(input);


        std::getline(stream, test2, ' ');

        std::getline(stream, var1, ' '); // var1 is a string with the first number

        std::getline(stream, var2, ' '); // var2 is a string with second number if needed


        if(input.find("at") != string::npos){
            int var3 = std::stoi(var1);

            cout << Vector.at(var3) << endl; // :)
        }
        if(input.find("get") != string::npos){
            int var3 = std::stoi(var1);
            cout << Vector[var3 - 1] << endl;
        }
        if(input.find("front") != string::npos){
            cout << Vector.front() << endl;
        }
        if(input.find("back") != string::npos){
            cout << Vector.back() << endl;
        }
        if(input.find("insert") != string::npos){
            int var3 = std::stoi(var1);

            bool info;
            if(var2 == "true"){
                info = true;
            }if(var2 == "false") info = false;

            Vector.insert(var3, info);
        }
        if(input.find("push") != string::npos){

            bool info;
            if(var2 == "true"){
                info = true;
            }if(var2 == "false") info = false;
            Vector.push_back(info);
        }
        if(input.find("pop") != string::npos){
            Vector.pop_back();
        }
        if(input.find("size") != string::npos){
            cout << Vector.size() << endl;
        }
        if(input.find("capacity") != string::npos){
            cout << Vector.capacity()<< endl;
        }
        if(input.find("print") != string::npos){
            Vector.print();
        }
        if(input.find("quit") != string::npos){
            status = false;
        }

    }}

int main() {

    string input;
    string var1, var2;

    int choice;

    cout << "Data Type Index: " << endl
    << "1) int\n2) float\n3) double\n4) string\n5) bool\n"
    << "Specify what data type to store in vector: " << endl;
    cin >> choice;

    int starting_cap;



    if(choice == 1){

        cout << "Enter starting capacity of integer vector: ";
        cin >> starting_cap;
        intVector(starting_cap);
    }
    if(choice == 2){
        cout << "Enter starting capacity of float vector: ";
        cin >> starting_cap;
        floatVector(starting_cap);
    }
    if(choice == 3){

        cout << "Enter starting capacity of double vector: ";
        cin >> starting_cap;
        doubleVector(starting_cap);
    }
    if(choice == 4){

        cout << "Enter starting capacity of string vector: ";
        cin >> starting_cap;
        stringVector(starting_cap);
    }
    if(choice == 5){

        cout << "Enter starting capacity of bool vector: ";
        cin >> starting_cap;
        boolVector(starting_cap);
    }



    return 0;
}
