#include <cmath>
#include <iostream>
#include <iomanip>

namespace cst{
    static constexpr double pi = acos(-1);
}

double getArea(double x, double y, double g, double rad){
    auto isOutsideCircle = [rad](double x, double y){
        return x*x+y*y >= rad*rad;
    };
    auto pythag = [rad](double len){
        return std::sqrt(rad*rad - len*len);
    };

    if (isOutsideCircle(x, y)){
        return 0.0d;
    }

    double x1 = x + g;
    double y1 = y + g;
    if (!isOutsideCircle(x1, y1)){
        return g*g;
    } 

    double a, b, area, theta;
    area = 0.0d;
    if (isOutsideCircle(x, y1)){
        theta = std::acos(x/rad);
        if (isOutsideCircle(x1, y)){   //Only bottom left corner inside
            theta -= std::asin(y/rad);
            a = pythag(y) - x;
            b = pythag(x) - y;
        } else {    //Only bottom half inside
            theta -= std::acos(x1/rad);
            a = pythag(x) + pythag(x1) - 2*y;
            b = g;
        }
    } else {
        theta = std::asin(y1/rad);
        if (isOutsideCircle(x1, y)){   //Only left half inside
            theta -= std::asin(y/rad);
            a = pythag(y) + pythag(y1) - 2*x;
            b = g;
        } else {      //All but top right corner inside
            theta -= std::acos(x1/rad);
            a = x1 - pythag(y1);
            b = pythag(x1) - y1;
            area += g*g;
        }
    }
    return area + a*b/2 + rad*rad*(theta - std::sin(theta))/2.0d;
}

double getSolution(double f, double R, double t, double r, double g){
    t = (t+f)/R;
    r = (r+f)/R;
    g = (g-2*f)/R;
    R = 1.0d-t;
    if (g <= 0.0d){
        return 1.0d;
    }

    double empty = 0.0d;
    double delta = g+2*r;
    double x, y;
    x = r;
    while (x < R){
        y = r;
        while (y < R){
            empty += getArea(x, y, g, R);
            y += delta;
        }
        x += delta;
    }
    return 1.0d - 4.0d*empty/cst::pi;
}

int main(){ 
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout << std::setprecision(6) << std::fixed;

    uint N;
    std::cin >> N;
    for (uint i = 1; i <= N; i++){ //Iterate through test cases
        double f,R,t,r,g;
        std::cin >> f >> R >> t >> r >> g;
        std::cout << "Case #" << i << ": " << getSolution(f,R,t,r,g) << "\n";
    } 
}