#pragma once
#include <iostream>     // Not realy needed, its included by apf/all.hpp

#include "apf/all.hpp"  // Includes every part of apf.



// This is your main app class.
class apf_template : public apf::app {
public:
    void start();
    int run();
    void end();

    // Your app class inherits these members from apf::app.
    // args arguments;                  Holds command line arguments and can parse them, look apf::args class for more info.
    // version appframework_version;    Holds version of appframework, i think its obvious.

    // version is struct that can hold version information, it can also be printed using cout and converted to string.
    version apf_template_version = {0,4,2};
};