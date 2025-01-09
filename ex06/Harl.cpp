#include "Harl.hpp"

Harl::Harl() {
};

Harl::~Harl() {
};

void Harl::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
};

void Harl::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
};

void Harl::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for ";
	std::cout << "years whereas you started working here since last month." << std::endl;
};

void Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
};

void Harl::filter( std::string level ) {
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    int levelIndex = -1;

    for (int i = 0; i < 4; ++i) {
        if (levels[i] == level) {
            levelIndex = i;
            break;
        }
    }

    if (levelIndex == -1) {
        std::cout << "[ Probably complaining about insignificant problems]" << std::endl;
        return;
    }

    switch (levelIndex) {
        case 0: debug();
        case 1: info();
        case 2: warning();
        case 3: error(); break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
	}
}