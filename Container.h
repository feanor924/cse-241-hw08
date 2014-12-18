/* 
 * File:   Container.h
 * Author: caner
 *
 * Created on December 10, 2014, 9:03 PM
 */


#ifndef CONTAINER_H
#define	CONTAINER_H
#include <iostream>
#include <vector>

using namespace std;

namespace Contain{

    template<class T>
    class Container {

        public:
            
            Container ();
            virtual void add(const T& element)= 0;
            virtual void remove(const T& element)= 0;
            virtual int search(const T& element) = 0;
            virtual T first() = 0;
            virtual T next() = 0;
            virtual bool empty() = 0;
            virtual int size() = 0;
            vector<T> toVector();
            void addAll(const Container<T> &contain);
            void removeAll(const Container<T> &contain);
            bool isSorted();
        
        protected:
            
            vector<T> vec;
            void duplicate(vector<T> &vec2);
            int call;
    };
    
    class mistake{};
}

#endif	/* CONTAINER_H */

