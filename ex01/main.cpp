/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 19:53:53 by julian            #+#    #+#             */
/*   Updated: 2026/01/13 19:53:53 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Test de construction ===" << std::endl;
    {
        ScavTrap a("Guardian");
    }

    std::cout << "\n=== Test des actions ===" << std::endl;

    ScavTrap b("Bob");

    b.attack("Enemy");
    b.takeDamage(30);
    b.beRepaired(10);
    b.guardGate();

    std::cout << "\n=== Test épuisement énergie ===" << std::endl;

    for (int i = 0; i < 60; i++)
        b.attack("Dummy");

    return 0;
}
