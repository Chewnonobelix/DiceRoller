#ifndef DICE_GLOBAL_H
#define DICE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DICE_LIBRARY)
#  define DICESHARED_EXPORT Q_DECL_EXPORT
#else
#  define DICESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // DICE_GLOBAL_H
