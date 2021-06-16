/****************************************************************************
 *                                                                          *
 * Copyright (C) 2015 Neutrino International Inc.                           *
 *                                                                          *
 * Author : Brian Lin <lin.foxman@gmail.com>, Skype: wolfram_lin            *
 *                                                                          *
 ****************************************************************************/

#ifndef QT_AUTONOMY_H
#define QT_AUTONOMY_H

#include <QtFoundation>

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#    if defined(QT_BUILD_QTAUTONOMY_LIB)
#      define Q_AUTONOMY_EXPORT Q_DECL_EXPORT
#    else
#      define Q_AUTONOMY_EXPORT Q_DECL_IMPORT
#    endif
#else
#    define Q_AUTONOMY_EXPORT
#endif


namespace N {

class Q_AUTONOMY_EXPORT Lore ;

class Q_AUTONOMY_EXPORT Lore : public Object
{
  public:

    explicit Lore     (void) ;
             Lore     (const Lore   & lore  ) ;
             Lore     (      Lore   & lore  ) ;
             Lore     (const Object & object) ;
    virtual ~Lore     (void) ;

    Lore & operator = (const Lore & lore) ;

  protected:

  private:

};

}

QT_END_NAMESPACE

#endif
