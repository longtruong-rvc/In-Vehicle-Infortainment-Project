#include "Display.h"
Display::Display() {
	light_level = 0;
	screen_light_level = 0;
	taplo_light_level = 0;
}
Display::~Display() {
	//cout << "Display function destruction" << endl;
}
int Display::getLightLevel() {
	return light_level;
}
int Display::getScreenLightLevel() {
	return screen_light_level;
}
int Display::getTaploLightLevel() {
	return taplo_light_level;
}
void Display::setLightLevel(int data) {
	light_level = data;
}
void Display::setScreenLightLevel(int data) {
	screen_light_level = data;
}
void Display::setTaploLightLevel(int data) {
	taplo_light_level = data;
}

void Display::enterDisplayInfo() {
	string light_level, screen_light_level, taplo_light_level;

	/*			ENTER LIGHT LEVEL       */
	do {
		system("cls");
		cout << "SETTING DISPLAY INFORMATION\n" << endl;
		cout << "Light level: ";
		getline(cin, light_level);
	} while (!ValidateInput(light_level, VALIDATE_INPUT_DISPLAY_SOUND));
	setLightLevel(stoi(light_level));


	/*			ENTER SCREEN LIGHT LEVEL       */
	do {
		system("cls");
		cout << "SETTING DISPLAY INFORMATION\n" << endl;
		cout << "Light level: " << light_level << endl;
		cout << "Screen light level: ";
		getline(cin, screen_light_level);
	} while (!ValidateInput(screen_light_level, VALIDATE_INPUT_DISPLAY_SOUND));
	setScreenLightLevel(stoi(screen_light_level));


	/*			ENTER TAPLO LIGHT LEVEL       */
	do {
		system("cls");
		cout << "SETTING DISPLAY INFORMATION\n" << endl;
		cout << "Light level: " << light_level << endl;
		cout << "Screen light level: " << screen_light_level << endl;
		cout << "Taplo light level: ";
		getline(cin, taplo_light_level);
	} while (!ValidateInput(taplo_light_level, VALIDATE_INPUT_DISPLAY_SOUND));
	setTaploLightLevel(stoi(taplo_light_level));
}
void Display::printDisplayInfo() {
	cout << setw(20) << getLightLevel() << setw(25) << getScreenLightLevel() << setw(25) << getTaploLightLevel() << endl;
}