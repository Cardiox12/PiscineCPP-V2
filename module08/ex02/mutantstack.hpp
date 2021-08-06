#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>


template<typename T>
class MutantStack : public std::stack<T> {
private:
    
public:
    MutantStack() : std::stack<T>() {}
    virtual ~MutantStack() {}
    MutantStack(const MutantStack &src) : std::stack<T>(src) {}
    MutantStack &operator=(const MutantStack &src) {
        std::stack<T>::operator=(src);
    }

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    iterator begin(){
        return std::stack<T>::c.begin();
    }

    iterator end(){
        return std::stack<T>::c.end();
    }

    const_iterator cbegin(){
        return std::stack<T>::c.cbegin();
    }

    const_iterator cend(){
        return std::stack<T>::c.cend();
    }
};


#endif