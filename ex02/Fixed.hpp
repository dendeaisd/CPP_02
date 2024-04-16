/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:26:20 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/16 15:35:37 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed {
  int               value;
  static const int  frBits = 8;

 public:
  Fixed();
  Fixed(const int number);
  Fixed(float number);
  Fixed(const Fixed& other);
  ~Fixed();

  Fixed& operator=(const Fixed& other);
  Fixed& operator>(const Fixed& other);
  Fixed& operator<(const Fixed& other);
  Fixed& operator>=(const Fixed& other);
  Fixed& operator<=(const Fixed& other);
  Fixed& operator==(const Fixed& other);
  Fixed& operator!=(const Fixed& other);

  Fixed& operator+(const Fixed& other);
  Fixed& operator-(const Fixed& other);
  Fixed& operator*(const Fixed& other);
  Fixed& operator/(const Fixed& other);

  Fixed& operator++();
  Fixed& operator++(int);
  Fixed& operator--();
  Fixed& operator--(int);

  static Fixed& min(Fixed& a, Fixed& b);
  static Fixed& min(const Fixed& a, const Fixed& b);
  static Fixed& max(Fixed& a, Fixed& b);
  static Fixed& max(const Fixed& a, const Fixed& b);

  int getRawBits(void) const;
  void setRawBits(int const raw);
  void printOutput();
  float toFloat(void) const;
  int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& number);

#endif
