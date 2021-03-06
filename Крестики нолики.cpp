#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <sstream>

using namespace sf;

int main() {
	int win = 0;
	int width = 3;
	int height = 3;
	int size = 32;
	int a[3][3];
	Texture texturemap;
	texturemap.loadFromFile("");
	Sprite spritemap(texturemap);
	RenderWindow window(VideoMode(width * size, height * size), L"0X", Style::close);
	Image icon;
	icon.loadFromFile("");
	window.setIcon(512, 512, icon.getPixelsPtr());
	for (int i = 0; i < width; i++)
		for (int j = 0; j < height; j++) {
			a[i][j] = 0;
		}
	while (window.isOpen()) {
		Vector2i mouse = Mouse::getPosition(window);
		int x = mouse.x / size;
		int y = mouse.y / size;
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::MouseButtunPressed) {
				if (event.key.code == Mouse::Left)
					a[x][y] = 1;
				if (event.key.code == Mouse::Right)
					a[x][y] = 2;
			}
			if (event.type == Event::Closed)
				window.close();
		}

		for (int i = 0; i < width; i++)
			for (int j = 0; j < height; j++) {
				if (a[0][0] == 1 && a[0][1] == 1 && a[0][2] == 1); //верт
				win = 1;
				if (a[1][0] == 1 && a[1][1] == 1 && a[1][2] == 1); //гориз
				win = 1;
				if (a[0][0] == 1 && a[1][1] == 1 && a[2][2] == 1); //диагональ
				win = 1;
			}
		if (win == 1) {
			window.clear();
			Font font;
			font.loadFromFile("");
			Text text("", font, 9);
			std::ostringStream winner;
			winner « win;
			text.setString("Ура, ты выиграл!" + winner.str());
			text.setPosition(5, height * size / 2);
			window.draw(text);
		}
		window.clear();
		for (int i = 0; i < width; i++)
			for (int j = 0; j < height; j++) {
				spritemap.setTextureRect(IntRect(a[i][j] * size, 0, size, size));
				spritemap.setPosition(i * size, j * size);
				window.draw(spritemap);
			}
		window.display();
	}
}
