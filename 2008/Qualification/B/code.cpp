#include <algorithm>
#include <iostream>
#include <set>
#include <sstream>
#include <string>

class ScheduleManager {
    private:
        std::multiset<uint> arrivals_;
        std::multiset<uint> departures_;
        uint turnaround_;
        uint getMinutes(std::string times){
            std::stringstream ss(times);
            uint ret, temp;
            ss >> ret;
            ret *= 60;
            ss >> temp;
            ret += temp;
            return ret;
        };
    public:
        ScheduleManager(uint turnaround=0) : turnaround_(turnaround){};
        void addArrival(std::string time){
            arrivals_.emplace(getMinutes(time) + turnaround_);
        };
        void addDeparture(std::string time){
            departures_.emplace(getMinutes(time));
        };
        uint calculateNumRequired(){
            for(const auto &a : arrivals_){
                auto match = departures_.lower_bound(a);
                if (match != departures_.end()){
                    departures_.erase(match);
                }
            }
            return departures_.size();
        };
};

void processLine(uint numLines, ScheduleManager& departs, ScheduleManager& arrives){
    while(numLines-- > 0){
        std::string temp;
        std::getline(std::cin, temp);
        std::replace(temp.begin(), temp.end(), ':', ' ');
        departs.addDeparture(temp.substr(0,5));
        arrives.addArrival(temp.substr(5));
    }
}

int main(){ 
    std::string temp;
    uint N,T,A,B;
    std::cin >> N;

    for (uint i = 1; i <= N; i++){ //Iterate through test cases
        std::cin >> T >> A >> B;
        std::getline(std::cin, temp);
        
        ScheduleManager station_A(T);
        ScheduleManager station_B(T);
        processLine(A, station_A, station_B);
        processLine(B, station_B, station_A);

        std::cout << "Case #" << i << ": "        
                  << station_A.calculateNumRequired() << " " << station_B.calculateNumRequired() << "\n";
    } 
}