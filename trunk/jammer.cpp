#include <iostream>
#include <string>
#include <gflags/gflags.h>

DEFINE_bool(d, false, "Flag indicating whether the test sizes are read from file or not.");

void quit(std::string msg = "",
          int status = 1){
    if (msg == ""){
        msg = "Jammer takes up to 3 arguments; an optional flag (-d), a number, and the executable to run.";
    }
    std::cerr << msg << std::endl;
    std::exit(status);
}

int main(int argc, char* argv[]){
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    bool dynamic = FLAGS_d;
    
    std::string executable;
    int numTests, size;
    if (argc == 3) {
        executable = std::string(argv[2]);
    } else if (argc != 3){
        quit();
    }

    try {
        // std::string temp(argv[argc-1]);
        size = std::stoi(std::string(argv[1]));
    } catch (...){
        quit("Invalid Number");
    }

    std::cin >> numTests;
    for (int i = 1; i <= numTests; i++){
        std::cout << "Case #" << i << ": ";
        
        std::cout << "\n";
    }
}