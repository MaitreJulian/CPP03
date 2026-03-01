/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 19:27:22 by julian            #+#    #+#             */
/*   Updated: 2026/03/01 14:00:53 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
    : ClapTrap("Default Scavy")
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " constructed" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
    : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
    std::cout << "ScavTrap " << name << " charge its attack!" << std::endl;
    if (hitPoints != 0 && energyPoints != 0)
    {
        std::cout << name << " attacks " << target << " and makes " << attackDamage << " dammage" << std::endl;
        energyPoints --;
    }
    else if (energyPoints == 0)
        std::cout << name << " has no more energyPoints left !!" << std::endl;
    else
        std::cout << name << " has no more hitPoints left !!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "Guarded mode activated!" << std::endl;
}

ScavTrap::~ScavTrap(){}
