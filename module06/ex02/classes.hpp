#ifndef CLASSES_HPP
#define CLASSES_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdexcept>

struct Base {
	virtual ~Base();
};

struct A : public Base {};

struct B : public Base {};

struct C : public Base {};

typedef Base* (*gen_fn)();

Base *generate();
void identify_from_pointer(Base * p);
void identify_from_reference( Base & p);

Base *gen_a();
Base *gen_b();
Base *gen_c();

#endif
