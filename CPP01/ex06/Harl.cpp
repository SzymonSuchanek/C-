/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:41:48 by ssuchane          #+#    #+#             */
/*   Updated: 2025/01/04 17:50:07 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" 
			  << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"
			  << std::endl;
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" 
			  << std::endl;
}

void Harl::error(void) {
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" 
			  << std::endl;
}

void Harl::complain(std::string level) 
{
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};

    int levelIndex = -1;
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            levelIndex = i;
            break;
        }
    }
    switch (levelIndex) {
        case 0:
            this->debug();
			this->info();
			this->warning();
			this->error();
            break;
        case 1:
            this->info();
			this->warning();
			this->error();
            break;
        case 2:
            this->warning();
            this->error();
            break;
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
}
