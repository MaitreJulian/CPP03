/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:30:53 by julian            #+#    #+#             */
/*   Updated: 2026/02/18 19:10:09 by julian           ###   ########.fr       */
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
      int hitPoints;
      int energyPoints;
      int attackDamage;
   public:
      ClapTrap(std::string name);
      ClapTrap(const ClapTrap &copy);
      ClapTrap &operator=(const ClapTrap &copy);
      ~ClapTrap();
      void attack(const std::string &target);
      void takeDamage(unsigned int amount);
      void beRepaired(unsigned int amount);
};

#endif