
#include <iostream>
using namespace std;
#include <iomanip>
#include <vector>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // For std::fixed and std::setprecision
#include <limits>  // For clearing the buffer

using namespace std; // Using namespace std for simplicity in this small example

int main() {
    // Corrected declarations:
    // price should store doubles for currency.
    vector<string> names; 
    vector<double> prices; 
    
    // String variable to capture name input
    string expenseName; 
    
    // Variables used for the menu and data handling
    int chosenNum;
    double expenseAmount = 0.0;
    double total = 0.0; 
    
    // Set up output formatting for currency
    cout << fixed << setprecision(2);
    
    // Use a do-while loop to keep the menu running until the user exits
    do {
        cout << "\n--------------------------\n";
        cout << " =====Expense Tracker====\n";
        cout << "--------------------------\n";
        cout << "1. Add Expense\n";
        cout << "2. View Expenses\n";
        cout << "3. View Total Expenses\n";
        cout << "4. EXIT\n";
        cout << "===========================\n";
        cout << "Enter Choice: ";
        cin >> chosenNum;
        
        // This is CRITICAL after reading a number (like chosenNum) to clear the newline.
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        // --- 1. Add Expense Logic ---
        if (chosenNum == 1) {
            cout << "\n--- ADD EXPENSE ---\n";
            while(true){
                cout << "Type 'Done' as the name when finished.\n";
                cout << "Name of Expense: ";
                // Use getline for names (to allow spaces)
                getline(cin, expenseName); 
                
                // Check stop condition
                if (expenseName == "Done" || expenseName == "done" || expenseName == "DONE"){
                    break;
                }
                
                // Skip empty input
                if (expenseName.empty()){
                    continue;
                }
                
                // Input for Price/Amount
                cout << "Price: $";
                // Use cin for the number
                if (!(cin >> expenseAmount)) {
                    cout << "Invalid amount entered. Stopping input." << endl;
                    break;
                }
                
                // CRITICAL: Clear the leftover newline after reading the number (expenseAmount)
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                
                // Store the collected data in the vectors
                names.push_back(expenseName);
                prices.push_back(expenseAmount);
                cout << "Added: " << expenseName << " ($" << expenseAmount << ")" << endl;
            }
        }
        
        // --- 2. View Expenses Logic ---
        else if (chosenNum == 2){
            cout << "\n--- VIEW EXPENSES ---\n";
            if (names.empty()){
                cout << "The expense list is currently empty.\n";
            }
            else {
                int count = 1;
                // Correct way to iterate over two vectors simultaneously using index
                for (size_t i = 0; i < names.size(); ++i){
                    cout << count++ << ". " << names[i] << ": $" << prices[i] << endl;
                }
            }
            cout << "--------------------------\n";
        }
        
        // --- 3. View Total Expenses Logic ---
        else if (chosenNum == 3) {
            total = 0.0;
            for (double price : prices) {
                total += price;
            }
            cout << "\n--- TOTAL EXPENSE ---\n";
            cout << "Total Expenses: $" << total << endl;
            cout << "---------------------\n";
        }
        
        // --- 4. Exit Logic ---
        else if (chosenNum == 4) {
            cout << "\nExiting Expense Tracker. Goodbye!\n";
        } 
        
        // --- Invalid Choice ---
        else {
            cout << "\nInvalid choice. Please enter a number between 1 and 4.\n";
        }

    } while (chosenNum != 4); // Loop continues as long as the choice is not 4
    
    return 0;
}
