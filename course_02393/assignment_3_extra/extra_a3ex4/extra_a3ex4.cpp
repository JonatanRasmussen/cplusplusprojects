#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int numIntervals, numValues;
    cin >> numIntervals >> numValues;

    vector<int> intervals(numIntervals, 0);

    int maxInterval = 0;
    int maxValue = -1;
    for (int i = 0; i < numValues; ++i) {
        int value;
        cin >> value;
        int intervalIndex = value / 10;
        intervals[intervalIndex]++;
        if (intervalIndex > maxInterval) {
            maxInterval = intervalIndex;
        }
        if (value > maxValue) {
            maxValue = value;
        }
    }

    if (maxValue % 10 == 0) {
        intervals[maxInterval]++;
    }

    for (int i = 0; i <= maxInterval; ++i) {
        int lowerBound = i * 10;
        int upperBound = (i + 1) * 10;
        if (i == maxInterval && maxValue % 10 == 0) {
            cout << lowerBound << ": " << intervals[i] - 1 << endl;
        } else {
            cout << lowerBound << ": " << intervals[i] << endl;
        }
    }

    return 0;
}
