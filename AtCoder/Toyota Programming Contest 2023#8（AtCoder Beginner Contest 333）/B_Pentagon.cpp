#include <iostream>
#include <map>

int main() {
    // Read input
    char S1, S2, T1, T2;
    std::cin >> S1 >> S2 >> T1 >> T2;

    // Create a map to store the counts of each point
    std::map<char, int> pointCount;
    pointCount[S1]++;
    pointCount[S2]++;
    pointCount[T1]++;
    pointCount[T2]++;

    // Check if the lengths are equal
    if (pointCount.size() == 2) {
        // Check if one of the points has a count of 2
        auto it = pointCount.begin();
        std::pair<char, int> firstPoint = *it;
        ++it;
        std::pair<char, int> secondPoint = *it;

        if (firstPoint.second == 2 || secondPoint.second == 2) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
