/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:28:49 by julian            #+#    #+#             */
/*   Updated: 2026/02/18 19:13:10 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Contructor called" << std::endl;
    this->name = name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}  

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        name = copy.name;
        hitPoints = copy.hitPoints;
        energyPoints = copy.energyPoints;
        attackDamage = copy.attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (hitPoints != 0 && energyPoints != 0)
        std::cout << name << " attacks " << target << " and makes " << attackDamage << " dammage" << std::endl;
    else if (energyPoints == 0)
        std::cout << name << " has no more energyPoints left !!" << std::endl;
    else
        std::cout << name << " has no more hitPoints left !!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitPoints -= amount;
    std::cout << name << " has taken " << amount << " point of damage" << std::endl;
    if (hitPoints <= 0)
    {
        hitPoints = 0;
        std::cout << name << " has no more hitPoints left !!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    hitPoints += amount;
    std::cout << name << " is healed and regained  " << amount << " hit points" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}