#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    const int dx = 5, dy = 5, dz = 5;

    int xyz[dx][dy][dz];

    int xy[dx][dy];
    int xz[dx][dz];
    int yz[dy][dz];

    for (int x = 0; x < dx; x++) {
        for (int y = 0; y < dy; y++) {
            for (int z = 0; z < dz; z++) {
                if (xyz[x][y][z] == 0) continue;
                if (xy[x][y] == 0) xy[x][y] = 1;
                if (xz[x][z] == 0) xz[x][z] = 1;
                if (yz[y][z] == 0) yz[y][z] = 1;
            }
        }
    }
    return 0;
}
