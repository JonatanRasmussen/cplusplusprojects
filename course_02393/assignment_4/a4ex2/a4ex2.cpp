#include <iostream>
#include <cmath>

using namespace std;

typedef enum { wood, stone } material;

struct tile {
    int x, y;
    bool isWall;
    material type;
};

void displayPlayground(tile **playground, int n, int m, int x, int y) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == y && j == x) {
                cout << "O";
            } else if (playground[i][j].isWall) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

bool movePlayer(tile **playground, int n, int m, int &x, int &y, char direction) {
    int newX = x, newY = y;
    switch (direction) {
        case 'l':
            newX--;
            break;
        case 'r':
            newX++;
            break;
        case 'u':
            newY--;
            break;
        case 'd':
            newY++;
            break;
        case 'q':
            return false;
        default:
            cout << "Invalid command." << endl;
            return true;
    }

    if (newX >= 0 && newX < m && newY >= 0 && newY < n && !playground[newY][newX].isWall) {
        x = newX;
        y = newY;
    }

    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    tile **playground = new tile*[n];
    for (int i = 0; i < n; ++i) {
        playground[i] = new tile[m];
    }

    int x = floor(m / 2), y = floor(n / 2);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            playground[i][j].x = j;
            playground[i][j].y = i;
            playground[i][j].isWall = (j==0 || i==(n-1) || (i==0 && j!=3) || j==(m-1));
            if (playground[i][j].isWall) {
                playground[i][j].type = stone;
            } else {
                playground[i][j].type = wood;
            }
        }
    }

    bool gameRunning = true;
    while (gameRunning) {
        displayPlayground(playground, n, m, x, y);
        char command;
        cin >> command;
        gameRunning = movePlayer(playground, n, m, x, y, command);
    }

    // Deallocate memory
    for (int i = 0; i < n; ++i) {
        delete [] playground[i];
    }
    delete [] playground;

    return 0;
}
