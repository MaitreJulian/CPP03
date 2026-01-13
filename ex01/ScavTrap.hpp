/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 19:27:56 by julian            #+#    #+#             */
/*   Updated: 2026/01/13 19:32:58 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    // Constructeurs
    ScavTrap();
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& other);

    // Opérateur d’affectation
    ScavTrap& operator=(const ScavTrap& other);

    // Destructeur
    ~ScavTrap();

    // Méthodes
    void attack(const std::string& target);
    void guardGate();
};

#endif

