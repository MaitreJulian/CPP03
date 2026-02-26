/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 19:53:53 by julian            #+#    #+#             */
/*   Updated: 2026/01/14 01:44:25 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "===== CLAPTRAP =====" << std::endl;
    {
        ClapTrap clap("Clappy");
        clap.attack("Target");
        clap.takeDamage(5);
        clap.beRepaired(3);
    }

    std::cout << "\n===== SCAVTRAP =====" << std::endl;
    {
        ScavTrap scav("Scavy");
        scav.attack("Target");
        scav.takeDamage(20);
        scav.beRepaired(10);
        scav.guardGate();
    }

    std::cout << "\n===== FRAGTRAP =====" << std::endl;
    {
        FragTrap frag("Fraggy");
        frag.attack("Target");
        frag.takeDamage(40);
        frag.beRepaired(20);
        frag.highFiveGuys();
    }

    return 0;
}

