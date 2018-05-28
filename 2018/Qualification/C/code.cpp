#include <string>
#include <vector>
#include <iostream>
#include <set>
#include <queue>
#include <algorithm>

std::set<std::pair<int, int> > targets;

int neighbours(const std::pair<int, int> &cell){
    int ret = 0;
    ret += targets.find(std::make_pair(cell.first - 1, cell.second - 1)) != targets.end() ? 1 : 0;
    ret += targets.find(std::make_pair(cell.first - 1, cell.second    )) != targets.end() ? 1 : 0;
    ret += targets.find(std::make_pair(cell.first - 1, cell.second + 1)) != targets.end() ? 1 : 0;
    ret += targets.find(std::make_pair(cell.first    , cell.second - 1)) != targets.end() ? 1 : 0;
    ret += targets.find(std::make_pair(cell.first    , cell.second + 1)) != targets.end() ? 1 : 0;
    ret += targets.find(std::make_pair(cell.first + 1, cell.second - 1)) != targets.end() ? 1 : 0;
    ret += targets.find(std::make_pair(cell.first + 1, cell.second    )) != targets.end() ? 1 : 0;
    ret += targets.find(std::make_pair(cell.first + 1, cell.second + 1)) != targets.end() ? 1 : 0;
    return ret;
}

class ComparePairs
{
    public:
        bool operator()(const std::pair<int, int> &lhs, const std::pair<int, int> &rhs)
        {
            return neighbours(lhs) < neighbours(rhs);
        }
};

int clamp (int val, int min, int max){
    if (val < min) return min;
    if (val > max) return max;
    return val;
}

int main(){ 
    int T;
    std::cin >> T;

    for (int i = 1; i <= T; i++){ //Iterate through test cases
        int A, x_in, y_in, x_out, y_out;
        std::cin >> A;
        targets.clear();
        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int> >, ComparePairs> queue;
        for (int x = 2; x < A + 2; x++){
            for (int y = 2; y < A + 2; y++){
                targets.emplace(x,y);
                queue.emplace(x, y);
            }
        }
        int attempts = 0;
        auto pair = queue.top();
        x_out = clamp(pair.first, 3, A);
        y_out = clamp(pair.second, 3, A);
        std::cout << x_out << ' ' << y_out << std::endl;
        std::cerr << ++attempts << ": " << x_out << ' ' << y_out << std::endl;
        std::cin >> x_in >> y_in;
        while (x_in > 0 || y_in > 0){
            targets.erase(std::make_pair(x_in, y_in));
            if (targets.size() > 0){
                pair = queue.top();
                while (targets.find(pair) == targets.end()){
                    queue.pop();
                    pair = queue.top();
                }
                x_out = clamp(pair.first, 3, A);
                y_out = clamp(pair.second, 3, A);
            }
            
            std::cout << x_out << ' ' << y_out << std::endl;
            std::cerr << ++attempts << ": " << x_out << ' ' << y_out << ' ' << queue.top().first << ' ' << queue.top().second << std::endl;
            std::cin >> x_in >> y_in;
            std::cerr << "ret: " << x_in << ' ' << y_in << std::endl;
        }
    } 
}
