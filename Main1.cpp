/*
IF YOU CODE IN VSCODE AND CURRENTLY USE C++20:
TO AVOID ANY ERROR CAUSED BY INTELLISENSE OR ANY STRICT 
TERM AND CONDITION FROM VSCODE, PLEASE RUN THIS "Main1.cpp"
FROM "run.cpp".
BY DOING SO, YOU CAN SPESIFY A FILE YOU'D LIKE TO RUN
*/

#include <iostream>
#include <sstream>
#include <format>
using namespace std;

class Binary{
    public:
        int number;
        string bit;
    public:
        void setNumber();
        void convert_to_binary(int num);
        void getBit() {
            cout << bit << endl;
        }
};

void Binary::setNumber() {
    int dec;
    cout << "Enter a decimal number: ";
    cin >> dec;
    this->number = dec;
}

void Binary::convert_to_binary(int num) {
    string result = "";
    string tempStr = "";
    if (num == 0) {
        this->bit = "0";
    } else {
        int temp = num;
        while (temp > 0) {
            int mod = temp % 2;
            tempStr += format("{}", mod);
            result += tempStr;
            int tmp = temp / 2;
            temp = tmp;
            string().swap(tempStr);
        }

        std::string temps = "";
        for (int i = result.size() - 1; i >= 0 ; i--) {
            temps += result[i];
        }
        string().swap(result);
        result = temps;

        if(result.size() < 8) {
            for (size_t i = 0; i < (8 - result.size()); i++) {
                tempStr += "0";
            }
            tempStr += result;
            string().swap(result);
            result = tempStr;
        }
        this->bit = result;
    }
}

int main() {
    Binary obj;
    obj.setNumber();
    obj.convert_to_binary(obj.number);

    cout << "Binary number of " << obj.number << " is " << obj.bit << endl;
    return 0; 
}