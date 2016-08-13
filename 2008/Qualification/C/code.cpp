#include <cmath>
#include <iostream>
#include <iomanip>

const double pi = 3.14159265358979323846;

double getArea(double chord_rad, double chord_len, double delta){
    double overlap = chord_rad;
    bool joint = false;
    double dist = chord_len/2 - overlap;
    while(dist > 0){
        if (joint){
            dist -= chord_rad*2;
            overlap += chord_rad*2;
        } else {
            dist -= delta;
        }
        joint = !joint;
    }
    if (joint){
        overlap += dist;
    }
    overlap /= chord_len;

    double temp = 2*chord_rad*chord_len;
    temp *= (1-overlap);
    return temp;
}

int main(){ 
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    uint N;
    double f,R,t,r,g;
    std::cin >> N;
    std::cout << std::setprecision(6) << std::fixed ;
    for (uint i = 1; i <= N; i++){ //Iterate through test cases
        std::cin >> f >> R >> t >> r >> g;
        
        if (g > 2*f) {
            double inner_rad = R-t-f;

            double chord_delta = g+2*r;
            double chord_len = 2*inner_rad;
            double chord_rad = r+f;

            double numerator = pi*(R*R-inner_rad*inner_rad);
            double denominator = pi*R*R;

            double pos = 0;
            while(pos+chord_rad < inner_rad){
                numerator += getArea(chord_rad, chord_len, g - 2*f)* (pos == 0 ? 2 : 4);
                pos += chord_delta;
                chord_len -= chord_delta*chord_delta/chord_len;
            }
            double new_rad = inner_rad-pos;
            chord_len += (2*chord_delta*new_rad-new_rad*new_rad)/chord_len;
            numerator += getArea(new_rad, chord_len, g - 2*f)* (pos == 0 ? 2 : 4);

            
            std::cout << "Case #" << i << ": " << numerator/denominator << "\n";
        } else {
            std::cout << "Case #" << i << ": " << 1.0f << "\n";
        }
    } 
}