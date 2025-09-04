class Solution {
public:
    int closestPerson(int x, int y, int z) {
        int distX = abs(x - z);
        int distY = abs(y - z);

        if (distX < distY) return 1;  // x is closer
        if (distY < distX) return 2;  // y is closer
        return 0; // both are equally close
    }
};
