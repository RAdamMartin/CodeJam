#include "cjfw.h"
#include <string>

std::string run(){
    return "test";
}

int main(){
    pretty_print<3>(run);
}
