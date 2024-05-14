/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 16:19:30 by fvoicu            #+#    #+#             */
/*   Updated: 2024/05/14 22:28:42 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/**
 * @brief 
*/
Point::Point() : _x(0), _y(0) {}

Point::Point(float x, float y) : _x(x), _y(y) {}

Point::Point(const Point& other) : _x(other._x), _y(other._y) {}

Point& Point::operator=(const Point& other) {
  if (this != &other) {
    this->_x = other._x;
    this->_y = other._y;
  }
  return *this;
}

// Destructor
Point::~Point() {}

// Get X coordinate
float Point::getX() const {
    return _x.toFloat();
}

// Get Y coordinate
float Point::getY() const {
    return _y.toFloat();
}
