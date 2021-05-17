//
// Created by Akie on 2021/5/16.
//

#ifndef UNTITLED1_PERSON_H
#define UNTITLED1_PERSON_H

#endif //UNTITLED1_PERSON_H

#pragma once

template<class T1,class T2>
class Person{
public:
    Person(T1 name,T2 age);
    void showPerson();
    T1 m_Name;
    T2 m_Age;
};