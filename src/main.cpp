#include "main.hpp"



// This is called when your application starts
// Init everything you need here
void apf_template::start() {
    // versions can be converted to strings
    std::cout << "apf template " << apf_template_version << " for apf " << appframework_version << ".\n";
}

// Called after start
// Do whatever you want
void apf_template::run() {

}

// Called at the end
// Deinit everything and reset terminal if you were using some fancy term functions
void apf_template::end() {
    // apf::term::reset();
    std::cout << "\n"; // its also nice to add aditional newline after your program closes.
}


// This macro creates main() function for us.
// This default main function creates apf_template object passes arguments to it and calls start(); run(); and end();.
APF_MAIN(apf_template)

// This is how default main() looks like, if you need little bit more control of main you can uncomment this and comment out APF_MAIN macro.
/*
int main(int argc, char const *argv[]) {
    apf::app* app_ptr = new apf_template;
    app_ptr->arguments = apf::args(argc, argv);
    app_ptr->start();
    app_ptr->run();
    app_ptr->end();
    delete app_ptr;
}
*/