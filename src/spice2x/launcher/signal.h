#pragma once

namespace launcher::signal {

    // settings
    extern bool DISABLE;
    extern bool USE_VEH_WORKAROUND;

    //void print_stacktrace();
    void attach();
    void init();
}
