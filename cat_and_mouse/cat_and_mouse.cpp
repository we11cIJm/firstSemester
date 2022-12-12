#include "VectorLib.hpp"
#include <iostream>
#include <cmath>
#include <fstream>

int main()
{
	vector r_cat{10, 0}; // radius-vector of cat
	vector r_mouse{0, -10}; // radius-vector of mouse
	double v_cat = 5; // cat speed 
	double v_mouse = 4; // mouse speed
	vector h{ 0, 0 }; // hole
	double r = 0.3; // radius of attack
	vector vec_cat; // cat movement vector
	vector vec_mouse; // mouse movement vector
	double dt = 0.05; // delta
	vector vec_h{ 0, 1 }; // vector to hole
	std::ofstream file;
	double sum = 0; // end distance
	double distance = 10; // distance at which mouse start to accelerate
	double a_cat = 1; // start cat acceleration 
	double a_mouse = 1; // start mouse acceleration 
	double a_const = 1.1; // mouse acceleration
	double sum_dt = dt; 
	file.open("results.txt");
	while (r_mouse.y <= 0 && Norm(r_mouse + r_cat) - r > 0) // while mouse doesn't cross an abscissa and distance between cat and mouse isn't so close
	{
		/* vec_cat = (-r_cat + r_mouse) / Norm(-r_cat + r_mouse) * S */
		vec_cat = UnitVector(-r_cat + r_mouse) * (v_cat * dt + a_cat * dt * dt / 2); // cat movement vector = sum of vectors / vector length * uniformly accelerated movement
		r_cat = r_cat + vec_cat; // new cat radius-vector
		v_cat = v_cat + a_cat * dt; // new cat speed
		if (Norm(r_mouse + r_cat) - distance < 0) // if cat is near to mouse, than mouse accelerate * a_const
			a_mouse = a_mouse * a_const;
		if (Norm(r_mouse + r_cat) - distance < 0) 
		{ /* if cat is near to mouse, calculate new mouse vector, which is equal to sum of mouse vector to abscissa and mouse vector of running from cat multiplied by uniformly accelerated movement*/
			/*vec_mouse = (vec_cat + vec_h) / Norm(vec_cat + vec_h) * S */
			vec_mouse = UnitVector(vec_cat + vec_h) * (v_mouse * dt + a_mouse * dt * dt / 2);
		}
		else vec_mouse = (-r_mouse) / Norm(r_mouse) * (v_mouse * dt + a_mouse * dt * dt / 2); // if not, mouse moving toward to abscissa
		r_mouse = r_mouse + vec_mouse; // new mouse radius-vector
		v_mouse = v_mouse + a_mouse * dt; // new mouse speed 

		sum += Norm(vec_cat); // count the distance traveled by a cat

		//std::cout << r_mouse.x << " " << r_mouse.y << "\n";
		//file << r_cat.x << " " << r_cat.y << " " << r_mouse.x << " " << r_mouse.y << "\n";
		//std::cout << Norm(r_cat + r_mouse) << "\n";
		//std::cout << "\n";
		/*if (Norm(r_mouse + r_cat) - distance < 0)
		{
			vec_mouse = (vec_cat + vec_h) / Norm(vec_cat + vec_h) * v_mouse * dt;
		}
		else vec_mouse = (-r_mouse) / Norm(r_mouse) * v_mouse * dt;*/
		//vec_mouse = (-r_mouse) / Norm(r_mouse) * v_mouse * dt;
		//vec_cat = (-r_cat + r_mouse) / Norm(-r_cat + r_mouse) * v_cat * dt;

	}
	std::cout << sum; // all distance traveled by a cat
}
