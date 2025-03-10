#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
bool gameOver;
const int height = 16, width = 35, gapSize = 6;
int x, y, score, n = 0;
vector<pair<int, int>> towers;
void SetUp() {
	gameOver = false;
	score = 0;
	x = width / 2 - 5;
	y = height / 2 - 1;
	for (int i = 0; i < 5; i++) {
		int towerX = width - 1 + i * 8;
		int towerHeight = rand() % (height / 2 - 2);
		towers.push_back({ towerX, towerHeight });
	}
}
void Draw() {
	system("cls");
	for (int i = 0; i < width + 1; i++) cout << '#';
	cout << endl;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (j == 0 || j == width - 1) {
				cout << '#';
			}
			if (i == y && j == x)
				cout << '0';
			else {
				bool isPipe = false;
				for (auto& tower : towers) {
					int towerX = tower.first;
					int towerHeight = tower.second;
					if (j == towerX - 1) {
						if (i <= towerHeight || i >= towerHeight + gapSize) {
							cout << 'L';
							isPipe = true;
							break;
						}
					}
				}

				if (!isPipe) cout << ' ';
			}
		}
		cout << endl;
	}
	for (int i = 0; i < width + 1; i++) cout << '#';
	cout << endl << "Score: " << score << endl;
	n++;
	if (n == 4) {
		n = 0;
		y++;
	}
}
void Input() {
	if (_kbhit()) {
		switch (_getch()) {
		case 'w':
			y--;
			break;
		case 'x':
			gameOver = true;
			break;
		}
	}
}
void Logic() {
	if (y == height || y == 0)
		gameOver = true;
	for (auto& tower : towers) {
		tower.first--;
	}
	if (towers[0].first == 0) {
		towers.erase(towers.begin());
		int lastTowerX = towers.back().first;
		int newTowerX = lastTowerX + 8;
		int newTowerY = rand() % (height / 2 - 2);
		towers.push_back({ newTowerX, newTowerY });
	}
	for (auto& tower : towers) {
		int towerX = tower.first;
		int towerY = tower.second;

		if (x == towerX) {
			if (y <= towerY || y >= towerY + gapSize) {
				gameOver = true;
			}
			else {
				score++;
			}
		}
	}
}
int main() {
	SetUp();
	while (!gameOver) {
		Draw();
		Input();
		Logic();
	}
	return 0;
}