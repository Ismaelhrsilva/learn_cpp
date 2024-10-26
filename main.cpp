/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:51:22 by ishenriq          #+#    #+#             */
/*   Updated: 2024/10/26 09:52:06 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// Declaring our base Vehicle class
class Vehicle
{
	public:
		Vehicle(std::string type);
		std::string type;
	private:
};

// Declaring our Car class that publicly extends our Vehicle class
class Car : public Vehicle
{
	public:
		Car(void);
	private:
};

// Simple operator overload for output stream
// as you can see, we say that we need a Vehicle on the right
// side of the << operator
std::ostream &operator<<(std::ostream &o, const Vehicle &v)
{
	o << "This is a vehicle of type " << v.type;
	return (o);
}

// Constructors
Vehicle::Vehicle(std::string type): type(type) {}
Car::Car(void) : Vehicle("Car") {}

int	main(void)
{
	Car car;
	std::cout << car << std::endl;
	return (0);
}
