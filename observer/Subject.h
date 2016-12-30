#pragma once

#include <set>

class ObserverDisplay;

class Subject {
protected:
    std::set<ObserverDisplay*> m_observers;
public:
    void registerObserver(ObserverDisplay*);
    void removeObserver(ObserverDisplay*);
    virtual void notifyObserver() = 0;
    virtual ~Subject() { }
};

