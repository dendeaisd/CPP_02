/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:50:31 by fvoicu            #+#    #+#             */
/*   Updated: 2024/05/13 16:06:36 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_H
# define FIXED_H

class Fixed {
 private:
  int               value;
  static const int  frBits = 8;

 public:
  Fixed();
  Fixed(const int number);
  Fixed(float number);
  Fixed(const Fixed& other);
  Fixed& operator=(const Fixed& other);
  ~Fixed();
  int getRawBits(void) const;
  void setRawBits(int const raw);
  void printOutput();
  float toFloat(void) const;
  int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& number);

#endif
