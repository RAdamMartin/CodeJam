#include <iostream>
#include <string>
// #include <gflags/gflags.h>

constexpr auto dynamicFlag = "-d";

void quit(std::string msg = "",
          int status = 1){
    if (msg == ""){
        msg = "Jammer takes up to 3 arguments; an optional flag ("+std::string(dynamicFlag)+") and a number";
    }
    std::cerr << msg << std::endl;
    std::exit(status);
}

int main(int argc, char* argv[]){
    bool dynamic = false;
    int numTests, numLines, numDim;
    if (argc == 3) {
        std::string temp(argv[1]);
        if (temp == dynamicFlag){
            dynamic = true;
        } else {
            quit("Invalid flag");
        }
    } else if (argc > 3){
        quit();
    }

    try {
        std::string temp(argv[argc-1]);
        if (dynamic){
            numDim = std::stoi(temp);
        } else {
            numLines = std::stoi(temp);
        }
    } catch (...){
        quit("Invalid Number");
    }

    std::cin >> numTests;
    int caseNum = 1;
    while (caseNum <= numTests){
        std::cout << "Case #" << numTests << ": ";

        caseNum++;
    }
}