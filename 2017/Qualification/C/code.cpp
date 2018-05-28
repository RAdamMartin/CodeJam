#include <string>
#include <sstream>
#include <iostream>
#include <queue>

typedef uint_fast64_t u64;
struct Result{
    u64 y; u64 z;
};

struct Stall{
    u64 I;
    u64 L;
    u64 R;
    bool occupied;
    Stall() : I(0), L(0), R(0), occupied(false){};
    u64 min() const{
        return std::min(L,R);
    };
    u64 max() const{
        return std::max(L,R);
    };
    bool operator>(const Stall& other) const{
        if (min() != other.min()) return min() > other.min(); //Goal is to maximize min
        if (max() != other.max()) return max() > other.max(); //Goal is to maximimize max
        return I < other.I; //Goal is to minimize I
    };
    bool operator<(const Stall& other) const{
        return other > &this;
    };
    bool operator==(const Stall& other) const {
        return L == other.L && R == other.R && I == other.I;
    }
    bool operator!=(const Stall& other) const {
        return !(this == other);
    }
};

void fillStalls (u64 N, u64 K, Result& res){
    Stall stalls[N+2];
    std::priority_queue<Stall> queue;
    
    stalls[0].I = 0;
    stalls[0].L = 0;
    stalls[0].R = 0;
    stalls[0].occupied = true;

    stalls[N+1].I = N+1;
    stalls[N+1].L = N;
    stalls[N+1].R = 0;
    stalls[N+1].occupied = true;
    
    for (u64 i = 1; i <= N; i++){
        stalls[i].I = i;
        stalls[i].L = i - 1;
        stalls[i].R = N - i;
        queue.push(stalls[i]);
    }

    u64 L,R;
    while (K > 0 && !queue.empty()){
        auto next = queue.top();
        std::cout << next.L << " " << next.R << "\n";
        queue.pop();
        
        if (stalls[next.I].occupied) continue;
        
        //recalc(&stalls, next.I);
        
        if (next == stalls[next.I]) {
            L = next.L;
            R = next.R;
            stalls[next.I].occupied = true;
            K--;
        } else {
            queue.push(stalls[next.I]);
        }
    }

    res.y = L;
    res.z = R;
}

int main(){ 
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    u64 T;
    Result result;

    std::cin >> T;
    for (u64 i = 1; i <= T; i++){ //Iterate through test cases
        std::cout << "Case #" << i << ": ";
        
        u64 N,K;
        std::cin >> N >> K;

        fillStalls(N, K, result);

        std::cout << result.y << " " << result.z << "\n";
    } 
}
