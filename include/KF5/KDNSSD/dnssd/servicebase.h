#include <kdnssd/kdnssd_export.h>

#if KDNSSD_ENABLE_DEPRECATED_SINCE(5, 84)
#   include <kdnssd/servicebase.h>
#   if KDNSSD_DEPRECATED_WARNINGS_SINCE >= 0x055400
#       pragma message("Deprecated header. Since 5.84, use #include <kdnssd/servicebase.h> instead")
#   endif
#else
#   error "Include of deprecated header is disabled"
#endif
