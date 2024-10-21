#include "MeanVector.h"
#include <vector>


template <typename T> 
double MeanVector::meanVector(const std::vector<T> v){
    int sum = 0;
    for (T item : v) {
        sum += item;
    }
    return sum / v.size();
}

// int main() {
//     std::vector<int> v;

//     v.push_back(2);
//     v.push_back(4);

//     std::cout << meanVector(v) << std::endl;
//     return 0;
// }

