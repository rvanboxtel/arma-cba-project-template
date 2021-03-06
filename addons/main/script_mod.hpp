
// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX z
#define PREFIX proj_templ

#include "script_version.hpp"

#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

#define PROJ_TEMPL_TAG PROJ_TEMPL

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 0.1
#define REQUIRED_CBA_VERSION {3,15,0}

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(proj_templ - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(proj_templ - COMPONENT)
#endif
