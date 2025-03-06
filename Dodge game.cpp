#include <iostream>
#include <conio.h>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <windows.h>
using namespace std;

const int WIDTH = 20;
const int HEIGHT = 10;

struct Player {
    int x, y;
    int health;
    bool invincible;
};

struct Bullet {
    int x, y;
};

void draw(Player player, vector<Bullet>& bullets) {
    system("cls");
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i == player.y && j == player.x) {
                cout << "P";
            } else {
                bool printed = false;
                for (auto& b : bullets) {
                    if (b.x == j && b.y == i) {
                        cout << "*";
                        printed = true;
                        break;
                    }
                }
                if (!printed) cout << " ";
            }
        }
        cout << endl;
    }
    cout << "Health: " << player.health << "\n";
    cout << "Press 'F' to become invincible for a short time." << endl;
}

void updateBullets(vector<Bullet>& bullets) {
    for (auto& b : bullets) {
        b.y++;
    }
    bullets.erase(remove_if(bullets.begin(), bullets.end(), [](Bullet& b) { return b.y >= HEIGHT; }), bullets.end());
}

void spawnBullet(vector<Bullet>& bullets, int difficulty) {
    if (rand() % (10 - difficulty) == 0) {
        bullets.push_back({rand() % WIDTH, 0});
    }
}

bool checkCollision(Player& player, vector<Bullet>& bullets) {
    if (player.invincible) return false;
    for (auto& b : bullets) {
        if (b.x == player.x && b.y == player.y) {
            player.health--;
            return true;
        }
    }
    return false;
}

void showInstructions() {
    system("cls");
    cout << "DODGE GAME - Instructions\n";
    cout << "Use 'WASD' to move the character\n";
    cout << "Press 'F' to become invincible for a short time\n";
    cout << "Avoid bullets (*) while surviving as long as possible\n";
    cout << "Press any key to start...\n";
    _getch();
}

bool gameOverMenu() {
    system("cls");
    cout << "Game Over!\n";
    cout << "1. Restart\n";
    cout << "2. Exit\n";
    cout << "Choose an option: ";
    char choice;
    cin >> choice;
    return choice == '1';
}

int main() {
    srand(time(0));
    showInstructions();
    
    while (true) {
        Player player = {WIDTH / 2, HEIGHT - 1, 5, false};
        vector<Bullet> bullets;
        int difficulty;
        
        cout << "Select difficulty (1 - Easy, 2 - Medium, 3 - Hard): ";
        cin >> difficulty;
        difficulty = max(1, min(3, difficulty));
        
        while (player.health > 0) {
            if (_kbhit()) {
                char ch = _getch();
                if (ch == 'a' && player.x > 0) player.x--;
                if (ch == 'd' && player.x < WIDTH - 1) player.x++;
                if (ch == 'w' && player.y > 0) player.y--;
                if (ch == 's' && player.y < HEIGHT - 1) player.y++;
                if (ch == 'f') {
                    player.invincible = true;
                    Sleep(500);
                    player.invincible = false;
                }
            }
            
            spawnBullet(bullets, difficulty);
            updateBullets(bullets);
            checkCollision(player, bullets);
            draw(player, bullets);
            Sleep(100);
        }
        
        if (!gameOverMenu()) break;
    }
    return 0;
}
