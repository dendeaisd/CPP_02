/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 16:19:26 by fvoicu            #+#    #+#             */
/*   Updated: 2024/05/14 22:37:08 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath> // Include cmath for std::abs

// Function to calculate the area of a triangle given by three points
float area(const Point& p1, const Point& p2, const Point& p3) {
    return std::abs((p1.getX() * (p2.getY() - p3.getY()) +
                     p2.getX() * (p3.getY() - p1.getY()) +
                     p3.getX() * (p1.getY() - p2.getY())) / 2.0);
}

bool bsp(Point const a, Point const b, Point const c, \
        Point const point) {
    float totalArea = area(a, b, c);
    float area1 = area(point, b, c);
    float area2 = area(a, point, c);
    float area3 = area(a, b, point);

    // Check if sum of areas of sub-triangles equals to the area of the main triangle
    return (area1 + area2 + area3 == totalArea) && area1 > 0 && area2 > 0 && area3 > 0;
}

