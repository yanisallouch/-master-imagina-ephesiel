#ifndef COURBE_H 
#define COURBE_H 

#include <GL/glut.h> 
#include <iostream>
#include <cmath>
#include <vector>
#include "Point3.h"
#include "Vector3.h"

void draw_point(const Point3& point);

void draw_line(const Point3& start, const Point3& end);

void draw_curve(const std::vector<Point3>& points);

std::vector<Point3> hermite_cubic_curve(Point3 P0, Point3 P1, Vector3 V0, Vector3 V1, long nb_u);

std::vector<Point3> bezier_curve_bernstein(const std::vector<Point3>& control_points, long nb_u);

std::vector<Point3> bezier_curve_casteljau(const std::vector<Point3>& control_points, long nb_u);

#endif