/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:50:45 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/16 15:23:07 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number) {
  std::cout << "Int constructor called" << std::endl;
  value = number << frBits;
}

Fixed::Fixed(float number) {
  std::cout << "Float constructor called" << std::endl;
  value = roundf(number * (1 << frBits));
}

Fixed::Fixed(const Fixed& other) : value(other.value) {
  std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
  if (this != &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = other.getRawBits();
  }
  return *this;
}

Fixed::~Fixed() {
  std::cout << "Destructor called" <<std::endl;
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;
  return value;
}

void Fixed::setRawBits(int const raw) {
  value = raw;
}

void Fixed::printOutput() {
  std::cout << value << std::endl;
  std::cout << frBits << std::endl;
}

float Fixed::toFloat(void) const {
  return (float)value / (1 << frBits);
}

int Fixed::toInt(void) const {
  return value >> frBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& number){
  os << number.toFloat();
  return os;
}
