/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 16:19:33 by fvoicu            #+#    #+#             */
/*   Updated: 2024/05/14 22:29:56 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point {
 private:
  Fixed _x;
  Fixed _y;
 
 public:
  Point();
  Point(float x, float y);
  Point(const Point& other);
  Point& operator=(const Point& other);
  ~Point();

  float getX() const;
  float getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
