/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 16:19:30 by fvoicu            #+#    #+#             */
/*   Updated: 2024/05/13 19:28:26 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point() : x(0), y(0) {}

Point::Point(float x, float y) : x(x), y(y) {}

Point::Point(const Point& other) : x(other.x), y(other.y) {}

// Point& Point::operator=(const Point& other) {
//     // Since x and y are const, they cannot be assigned new values
//     // This is actually redundant in this scenario since we cannot assign const members
//     return *this;
// }

// Destructor
Point::~Point() {}

// Get X coordinate
float Point::getX() const {
    return x.toFloat();
}

// Get Y coordinate
float Point::getY() const {
    return y.toFloat();
}
