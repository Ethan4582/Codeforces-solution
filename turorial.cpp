#include <iostream>
#include <string>

using namespace std;

string below_20[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", 
                        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", 
                        "seventeen", "eighteen", "nineteen"};

string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string convert(int n) {
    if (n < 20) {
        return below_20[n];
    }
    else if (n < 100) {
        return tens[n / 10] + (n % 10 != 0 ? " " + below_20[n % 10] : "");
    }
    else if (n < 1000) {
        return below_20[n / 100] + " hundred" + (n % 100 != 0 ? " and " + convert(n % 100) : "");
    }
    else if (n < 1000000) {
        return convert(n / 1000) + " thousand" + (n % 1000 != 0 ? " " + convert(n % 1000) : "");
    }
    else if (n < 1000000000) {
        return convert(n / 1000000) + " million" + (n % 1000000 != 0 ? " " + convert(n % 1000000) : "");
    }
    return "";
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num == 0) {
        cout << "zero" << std::endl;
    }
    else if (num < 0) {
        cout << "minus " << convert(-num) << std::endl;
    }
    else {
        cout << convert(num) << std::endl;
    }

    return 0;
}
