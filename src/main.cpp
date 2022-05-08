#include "main.hpp"



// Called when app starts
void apf_template::start() {
    // versions can be converted to strings
    std::cout << "apf template " << apf_template_version << " for apf " << appframework_version << ".\n";
}

// Called infinitely until you return 1, its simmilar to a "game loop".
int apf_template::run() {
    return 1;   // Run only once.
}

// Called before your app finishes
void apf_template::end() {
    // apf::term::reset();      // Reset terminal if you used some fancy apf::term functions.
    std::cout << "\n";          // Its nice to put a new line at the end.
}


// This macro setsup main() function for us, you dont need to wory about it but if you need more control you can define main yourself. 
APF_MAIN(apf_template)