#include <qtautonomy.h>

N::Lore:: Lore   ( void            )
        : Object ( 0 , Types::None )
{
}

N::Lore:: Lore (const Lore & lore)
{
  ME = lore ;
}

N::Lore:: Lore (Lore & lore)
{
  ME = lore ;
}

N::Lore:: Lore   (const Object & object)
        : Object (object               )
{
}

N::Lore::~Lore (void)
{
}

N::Lore & N::Lore::operator = (const Lore & lore)
{
  nMemberCopy ( lore , uuid ) ;
  nMemberCopy ( lore , type ) ;
  return ME                   ;
}
