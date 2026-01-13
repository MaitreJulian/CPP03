/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:28:49 by julian            #+#    #+#             */
/*   Updated: 2026/01/13 17:13:51 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Contructor called" << std::endl;
    this->name = name;
    hit_points = 10;
    energy_points = 10;
    attack_damage = 0;
}

void ClapTrap::attack(const std::string &target)
{
    if (hit_points != 0 && energy_points != 0)
        std::cout << name << " attacks " << target << " and makes " << attack_damage << " dammage" << std::endl;
    else if (energy_points == 0)
        std::cout << name << " has no more energy_points left !!" << std::endl;
    else
        std::cout << name << " has no more hit_points left !!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hit_points -= amount;
    std::cout << name << " has taken " << amount << " point of damage" << std::endl;
    if (hit_points <= 0)
    {
        hit_points = 0;
        std::cout << name << " has no more hit_points left !!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    hit_points += amount;
    std::cout << name << " is healed and regained  " << amount << " hit points" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}