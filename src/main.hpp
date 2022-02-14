#include <iostream>             // for std::cout

#include "appframework.hpp"     // main header with app class and some other common things
// #include "apf/term.hpp"      // terminal functions
// #include "apf/logs.hpp"      // logging



class apf_template : public apf::app {
public:
    void start();
    void run();
    void end();

    version apf_template_version = {0,3,0};
};