NAME         = QtAutonomy
TARGET       = $${NAME}

QT           = core
QT          -= gui
QT          += QtFoundation

load(qt_build_config)
load(qt_module)

INCLUDEPATH += $${PWD}/../../include/$${NAME}

HEADERS     += $${PWD}/../../include/$${NAME}/qtautonomy.h

include ($${PWD}/Lore/Lore.pri)

OTHER_FILES += $${PWD}/../../include/$${NAME}/headers.pri

include ($${PWD}/../../doc/Qt/Qt.pri)

TRNAME       = $${NAME}
include ($${PWD}/../../Translations.pri)
