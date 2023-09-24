#include <iostream>

using namespace std;

typedef enum { wood, stone } material;

struct tile {
    int x, y;
    bool isWall;
    material type;
};

#define NROWS 12
#define NCOLS 16

void displayPlayground(tile playground[NROWS][NCOLS], int x, int y) {
    for (int i = 0; i < NROWS; i++) {
        for (int j = 0; j < NCOLS; j++) {
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

bool movePlayer(tile playground[NROWS][NCOLS], int &x, int &y, char direction) {
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

    if (newX >= 0 && newX < NCOLS && newY >= 0 && newY < NROWS && !playground[newY][newX].isWall) {
        x = newX;
        y = newY;
    }

    return true;
}

int main() {
    tile playground[NROWS][NCOLS];
    int x = 5, y = 5;

    for (int i = 0; i < NROWS; i++) {
        for (int j = 0; j < NCOLS; j++) {
            playground[i][j].x = j;
            playground[i][j].y = i;
            playground[i][j].isWall = (j==0 || i==(NROWS-1) || (i==0 && j!=3) || j==(NCOLS-1));
            if (playground[i][j].isWall) {
                playground[i][j].type = stone;
            } else {
                playground[i][j].type = wood;
            }
        }
    }

    bool gameRunning = true;
    while (gameRunning) {
        displayPlayground(playground, x, y);
        char command;
        cin >> command;
        gameRunning = movePlayer(playground, x, y, command);
    }

    return 0;
}