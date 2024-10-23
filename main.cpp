/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:51:22 by ishenriq          #+#    #+#             */
/*   Updated: 2024/10/17 20:37:48 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// Códigos de escape ANSI
const std::string _GREEN = "\033[42m"; // Verde
const std::string _RESET = "\033[0m";   // Reset
class Car
{
    public:
        Car(); // Constructor declaration
        Car(std::string pbrand, std::string pmodel, int pyear); // second constructor
        std::string brand;
        std::string model;
        int year;
};

Car::Car(void)
{
    std::cout << "Hello world !" << std::endl;
    brand = "";
    model = "";
    year= 0;
    return ;
}

Car::Car(std::string pbrand, std::string pmodel, int pyear)
{
    brand = pbrand;
    model = pmodel;
    year = pyear;
    return ;
}

int main() {
  // Create Car objects and call the constructor with different values
  Car car1;
  Car car2("Ford", "Mustang", 1969);

  // Print values
  std::cout << _GREEN << car1.brand << " " << car1.model << " " << car1.year << std::endl;
  std::cout << car2.brand << " " << _RESET << car2.model << " " << car2.year << std::endl;
  return 0;
}
