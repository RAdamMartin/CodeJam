#include <string>
#include <vector>
#include <iostream>

int main(){ 
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;

    int size;
    std::vector<int> values;
    for (int i = 1; i <= T; i++){ //Iterate through test cases
        std::cout << "Case #" << i << ": ";
        
        std::cin >> size;
        values.resize(size);
        for (int j = 0; j < size; j++){
            int temp;
            std::cin >> temp;
            values[j] = temp;
        }
        bool done = false;
        while (!done){
            done = true;
            for (int j = 0; j < size - 2; j++){
                if (values[j] > values[j+2]){
                    std::swap(values[j], values[j+2]);
                    done = false;
                }
            }
        }
        std::string ret = "OK";
        for (int j = 0; j < size-1; j++){
            if (values[j] > values[j+1]){
                ret = std::to_string(j);
                break;
            }
        }
        std::cout << ret << "\n";
    } 
}
