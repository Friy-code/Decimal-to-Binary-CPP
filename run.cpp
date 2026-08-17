#include <iostream>
#include <cstdlib>
typedef std::string str;
int main() {
    std::string file;
    std::cout << ">> FILE NAME\t: ";
    std::cin >> file;

    system("cls");
    str compile = "g++ -std=c++20 " + file + ".cpp -o " + file;
    str run = file + ".exe";              
    system(compile.c_str());
    std::cout << ">> COMPILED \n";
    char c;
    std::cout << ">> ENTER: ";
    std::cin.ignore();
    std::cin.get(c);
    system("cls");
    if(c != 'q' || c != '0'){
        system(run.c_str());
        std::cin.get();
    }
    system("cls");
    std::cout << ">> PROGRAM ENDS\n";
    return 0;
}