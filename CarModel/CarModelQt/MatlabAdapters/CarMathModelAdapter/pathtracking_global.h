#ifndef PATHTRACKING_GLOBAL_H
#define PATHTRACKING_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PATHTRACKING_LIBRARY)
#  define DECLAR_LIB PATHTRACKINGSHARED_EXPORT
#  define PATHTRACKINGSHARED_EXPORT Q_DECL_EXPORT
#else
#  define DECLAR_LIB
#  define PATHTRACKINGSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PATHTRACKING_GLOBAL_H
