
#include <string>
#include <set>
#include <iostream>

class ScheduleManager {
    private:
        std::multiset<uint> arrivals_;
        std::multiset<uint> departures_;
        uint turnaround_;
        uint getMinutes(std::string times){
            std::stringstream ss(times);
            uint ret, temp;
            ss >> ret;
            first *= 60;
            ss >> temp;
            ret += temp;
            return ret;
        }
    public:
        ScheduleManager(uint turnaround=0) : turnaround_(turnaround)}{};
        void addArrival(std::string time){
            arrivals_.emplace(getMinutes(time) + turnaround_);
        };
        void addDeparture(std::string time){
            departures_.emplace(getMinutes(time));
        };
        uint calculateNumRequired(){
            return 0;
        };
}

void processLine(uint numLines, ScheduleManager& departs, ScheduleManager& arrives){
    while(numLines-- > 0){
        std::string temp;
        std::getline(std::cin, temp);
        departs.addDeparture(temp.substr(0,5));
        arrives.addArrival(temp.substr(5));
    }
}

int main(){ 
    std::string temp;
    const uint N,T,A,B;
    std::cin >> N >> T >> A >> B;
    std::getline(std::cin, temp);

    for (uint i = 1; i <= N; i++){ //Iterate through test cases
        std::cout << "Case #" << i << ": ";
        
        ScheduleManager station_A(T);
        ScheduleManager station_B(T);
        processLine(A, station_A, station_B);
        processLine(B, station_B, station_A);
        
        std::cout << station_A << " " << station_B << "\n";
    } 
}