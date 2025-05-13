#include <iostream>
#include <cstdlib> // для rand()
using namespace std;

bool gameOver;
const int width = 30;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

void setup() {
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void Draw() {
    system("cls"); // для Windows (на Linux буде system("clear"))
    
    // Верхня стінка
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0)
                cout << "#"; // Ліва стінка

            if (i == y && j == x)
                cout << "O"; // Голова змійки
            else if (i == fruitY && j == fruitX)
                cout << "A"; // Фрукт
            else
                cout << " ";

            if (j == width - 1)
                cout << "#"; // Права стінка
        }
        cout << endl;
    }

    // Нижня стінка
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    cout << "Score: " << score << endl;
}

void Input() {
    // Поки що пусто
}

void Logic() {
    // Поки що пусто
}

int main() {
    setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
    }
    return 0;
}
