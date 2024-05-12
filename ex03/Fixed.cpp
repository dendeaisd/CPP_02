/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:26:09 by fvoicu            #+#    #+#             */
/*   Updated: 2024/05/12 16:44:22 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
  // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number) {
  // std::cout << "Int constructor called" << std::endl;
  value = number << frBits;
}

Fixed::Fixed(float number) {
  // std::cout << "Float constructor called" << std::endl;
  value = roundf(number * (1 << frBits));
}

Fixed::Fixed(const Fixed& other) : value(other.value) {
  // std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
  // std::cout << "Destructor called" <<std::endl;
}

/*Assignment operator*/
Fixed& Fixed::operator=(const Fixed& other) {
  if (this != &other) {
    // std::cout << "Copy assignment operator called" << std::endl;
    this->value = other.getRawBits();
  }
  return *this;
}

/*Comparison operators*/

bool Fixed::operator>(const Fixed& other) const {
  return this->value > other.value;
}

bool Fixed::operator<(const Fixed& other) const {
  return this->value < other.value;
}

bool Fixed::operator>=(const Fixed& other) const {
  return this->value >= other.value;
}

bool Fixed::operator<=(const Fixed& other) const {
  return this->value <= other.value;
}

bool Fixed::operator==(const Fixed& other) const {
  return this->value == other.value;
}

bool Fixed::operator!=(const Fixed& other) const {
  return this->value != other.value;
}

/*Arithmetic operators*/

Fixed Fixed::operator+(const Fixed& other) const {
  return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const{
  return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
  return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
  return Fixed(this->toFloat() / other.toFloat());
}

/*Increment/Decrement Operators*/

Fixed& Fixed::operator++() {
    this->value++;
    return *this;
}

Fixed Fixed::operator++(int) {
  Fixed tmp= *this;
  this->value++;
  return tmp;
}

Fixed& Fixed::operator--() {
    this->value--;
    return *this;
}

Fixed Fixed::operator--(int) {
  Fixed tmp= *this;
  this->value++;
  return tmp;
}

/*Overloaded methods*/
const Fixed& Fixed::min(Fixed& a, Fixed& b) {
  return a < b ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
  return a < b ? a : b;
}

const Fixed& Fixed::max(Fixed& a, Fixed& b) {
  return b > a ? b : a;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
  return b > a ? b : a;
}

int Fixed::getRawBits(void) const {
    // std::cout << "getRawBits member function called" << std::endl;
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