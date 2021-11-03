#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
    private:
        const static int IDEA_SIZE = 100;
        std::string m_ideas[IDEA_SIZE];
    public:
        Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);
        virtual ~Brain();

        int getIdeasSize() const;
};

#endif
