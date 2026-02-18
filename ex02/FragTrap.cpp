/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 01:32:03 by julian            #+#    #+#             */
/*   Updated: 2026/02/18 19:26:51 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

void FragTrap::attack(const std::string &target)
{
    std::cout << "FragTrap " << name << " charge its attack!" << std::endl;
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

void FragTrap::highFiveGuys()
{
    std::cout << this->name << " ask you to make a high five!!" << std::endl;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor callled" << std::endl;
}