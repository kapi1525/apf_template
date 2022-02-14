#pragma once
#include <iostream>             // for std::cout

#include "appframework.hpp"     // main header with app class and some other common things
// Uncoment these if you want some extra features.
// #include "apf/term.hpp"      // terminal functions.
// #include "apf/logs.hpp"      // logging.



// This is main app class, you can add here what ever you want.
class apf_template : public apf::app {
public:
    void start();
    void run();
    void end();

    // These are inherited from base apf::app class
    // args arguments;                  // Holds command line arguments and can parse them, look apf::args class for more info.
    // version appframework_version;    // Holds version of appframework, i think its obvious.

    // version is struct that can hold version information, it can also be printed using cout and converted to string.
    version apf_template_version = {0,3,0};     // Version "v0.3.0"
};