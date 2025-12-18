//Jacob Taylor
//12/08/2025
//Prof. Chan
//Project 3

//Necessary files used for file handling, 
//string manipulation, and the map data structures.
#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;
//Create a class to handle the functionality of the code.
class GroceryTracker {
//Private class memeber that stores the frequency of each item in the input file
private:
    map<string, int> itemFrequency;
    string dataFilePath;
//Public class memeber that stores the path of the backup data file.
public:
    //Constructor that initializes the file path with the frequency path.
    GroceryTracker() {
        dataFilePath = "frequency.dat";
    }
    //Function used to read the input file and update the frequency
    void processInputFile(const string& filePath) {
        ifstream inputFile(filePath);
        string item;
        //If/else statement to test to make sure that the input file opens properly
        if (inputFile.is_open()) {
            //While statement that keeps the file open and usable then closes it when no longer needed
            while (getline(inputFile, item)) {
                itemFrequency[item]++;
            }
            inputFile.close();
        }
        else {
            cout << "Error: input file was not able to be created  " << filePath << endl;
        }
    }
    //Function that creates an output file and saves the data pulled from the input file to the output file
    void saveDataToFile() {
        ofstream outputFile(dataFilePath);
        //If/else statement to test to make sure that the input file opens properly
        if (outputFile.is_open()) {
            //For statement that keeps the output file open to have data written to it.
            // Also closes the output file once the process has concluded.
            for (const auto& pair : itemFrequency) {
                outputFile << pair.first << " " << pair.second << endl;
            }
            outputFile.close();
            cout << "Data has been saved to " << dataFilePath << endl;
        }
        else {
            cout << "Error: output file was not able to be created " << dataFilePath << endl;
        }
    }
    //Prints each item and it's frequency in a "*" form.
    void printHistogram() {
        for (const auto& pair : itemFrequency) {
            cout << pair.first << " ";
            for (int i = 0; i < pair.second; i++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    // Prints each item's frequency to the console
    void printItemFrequency() {
        for (const auto& pair : itemFrequency) {
            cout << pair.first << " " << pair.second << endl;
        }
    }
    //Run function that displays the menu options and allows the user to select which path they want to take.
    void run() {
        string userInput;
        int choice;
        //Do statement that prints the menu to the console for the user to see.
        do {
            cout << "Menu Options:" << endl;
            cout << "1. Look up item frequency" << endl;
            cout << "2. Print item frequency list" << endl;
            cout << "3. Print item frequency histogram" << endl;
            cout << "4. Exit" << endl;
            cout << "What would you like to do? (1-4)";
            cin >> choice;
            //Switch statement that allows the user to choose what they want to do.
            switch (choice) {
            case 1:
                cout << "Which item are you looking for?";
                cin.ignore();
                getline(cin, userInput);
                cout << "The frequency of " << userInput << "is " << itemFrequency[userInput] << endl;
                break;
            case 2:
                printItemFrequency();
                break;
            case 3:
                printHistogram();
                break;
            case 4:
                saveDataToFile();
                break;
            default:
                cout << "Invalid choice. Please pick a number 1 through 4" << endl;
                break;
            }
        } while (choice != 4);
    }
};
//Main function that runs the program
int main() {
    string inputFile = "CS210_Project_Three_Input_File.txt";
    GroceryTracker tracker;
    tracker.processInputFile(inputFile);
    tracker.run();

    return 0;
}