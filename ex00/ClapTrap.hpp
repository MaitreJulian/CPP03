/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:30:53 by julian            #+#    #+#             */
/*   Updated: 2026/01/13 16:41:24 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
 #define CLAPTRAP_HPP

 #include <string>
 #include <iostream>
    
 class ClapTrap
 {
 private:
    std::string name;
    int hit_points;
    int energy_points;
    int attack_damage;
 public:
    ClapTrap(std::string name);
    ~ClapTrap();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif