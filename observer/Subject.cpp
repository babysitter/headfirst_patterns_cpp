#include "Subject.h"

void Subject::registerObserver(ObserverDisplay* o) {
    m_observers.insert(o);
}

void Subject::removeObserver(ObserverDisplay* o) {
    m_observers.erase(o);
}

