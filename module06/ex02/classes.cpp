#include "classes.hpp"

Base::~Base() {}

Base *gen_a(){ return new A(); }

Base *gen_b(){ return new B(); }

Base *gen_c(){ return new C(); }

