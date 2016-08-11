#include <algorithm>
#include <iostream>
#include <set>
#include <sstream>
#include <string>

//Class that maintains a list of arrival and departure times (in minutes).
//When the user calls calculateNumRequired, the manager erases all departures
//covered by arrivals, and returns the number of remaining departures. 
class ScheduleManager {
    private:
        std::multiset<uint> arrivals_;
        std::multiset<uint> departures_;
        uint turnaround_;
    public:
        ScheduleManager(uint turnaround=0) : turnaround_(turnaround){};
        void addArrival(uint minutes){
            arrivals_.emplace(minutes + turnaround_);
        };
        void addDeparture(uint minutes){
            departures_.emplace(minutes);
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

//Function to convert datetime input to minutes and pass to managers.
void processLine(uint numLines, ScheduleManager& departs, ScheduleManager& arrives){
    auto getMinutes = [](std::string str) 
                        {return std::stoi(str.substr(0,2))*60
                                + std::stoi(str.substr(3,2));};
    while(numLines-- > 0){
        std::string temp;
        std::getline(std::cin, temp);
        departs.addDeparture(getMinutes(temp.substr(0,5)));
        arrives.addArrival(getMinutes(temp.substr(6)));
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