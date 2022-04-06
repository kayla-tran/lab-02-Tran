#include <iostream>

<<<<<<< HEAD
unsigned int count(const std::string& str) {
    unsigned int counter = 0;
    bool on_space = true;
    
    for(int i = 0; i < str.size(); i++) {
        if (std::isspace(str[i]))
            on_space = true;
        else if (on_space) {
            counter++;
            on_space = false;
        }
    }

    return counter;
=======

>>>>>>> df784f11131bb5e3e1ab56a5ce1ee1e29af0993f
}
