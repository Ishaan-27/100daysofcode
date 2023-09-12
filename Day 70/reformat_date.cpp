#include <string>
#include <sstream>

class Solution {
public:
    string reformatDate(string date) {
        stringstream ss(date);
        string day, month, year;
        char discard; // To discard "st", "nd", "rd", or "th" from the day string
        
        // Read the day, month, and year from the input string
        ss >> day >> month >> year;
        
        // Remove the "st", "nd", "rd", or "th" from the day
        day.erase(day.size() - 2);
        
        int monthNumber = getMonthNumber(month);
        
        if (monthNumber == -1) {
            return "Invalid Month";
        }
        
        // Format the date in YYYY-MM-DD
        stringstream formattedDate;
        formattedDate << year << '-';
        if (monthNumber < 10) {
            formattedDate << '0';
        }
        formattedDate << monthNumber << '-';
        if (day.size() == 1) {
            formattedDate << '0';
        }
        formattedDate << day;
        
        return formattedDate.str();
    }
    
private:
    // Function to get the month number from the month string
    int getMonthNumber(const string& month) {
        if (month == "Jan") return 1;
        if (month == "Feb") return 2;
        if (month == "Mar") return 3;
        if (month == "Apr") return 4;
        if (month == "May") return 5;
        if (month == "Jun") return 6;
        if (month == "Jul") return 7;
        if (month == "Aug") return 8;
        if (month == "Sep") return 9;
        if (month == "Oct") return 10;
        if (month == "Nov") return 11;
        if (month == "Dec") return 12;
        return -1; // Invalid month
    }
};

int main() {
    string inputDate;
    cout << "Enter a date in the format 'Day Month Year': ";
    getline(cin, inputDate);
    
    Solution solution;
    string formattedDate = solution.reformatDate(inputDate);
    
    cout << "Formatted date in YYYY-MM-DD format: " << formattedDate << endl;
    
    return 0;
}
