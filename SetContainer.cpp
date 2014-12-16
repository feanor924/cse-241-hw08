/* 
 * File:   SetContainer.cpp
 * Author: caner
 * 
 * Created on December 10, 2014, 9:03 PM
 */


#include "SetContainer.h"
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

namespace Contain{

    template<class T>
    void SetContainer<T>::add(const T& element) throw(mistake){
        
        int sizee=Container<T>::vec.size();
        
        Container<T>::vec.push_back(element);
        if ( sizee == Container<T>::vec.size() )
            throw mistake();
        
        Container<T>::duplicate(Container<T>::vec);
      
    }
    
    template<class T>
    void SetContainer<T>::remove(const T& element) throw(mistake){
       
        int sizee=Container<T>::vec.size();
        
        for (int i=0;i<Container<T>::vec.size(); ++i){
            if ( element == Container<T>::vec[i] )
                Container<T>::vec.erase(Container<T>::vec.begin()+i);
        }
        
        if ( sizee == Container<T>::vec.size() )
            throw mistake();
            
    }
    
    template<class T>
    int SetContainer<T>::search(const T& element){
        int s;
        int k=0;
        
        for (int i=0;i<Container<T>::vec.size(); ++i){
            if ( element == Container<T>::vec[i] ){
                s=i;
                ++k;
                break;
            }    
        }
        if ( k > 0)
            return s;
        else 
            return 0;
    }

    template<class T>
    T SetContainer<T>::first(){

        Container<T>::call += 1;
        return Container<T>::vec[0];
    }
    
    template<class T>
    T SetContainer<T>::next(){

        return Container<T>::vec[Container<T>::call]; 
    }
    
    template<class T>
    int SetContainer<T>::size(){
        return Container<T>::vec.size();
    }
    
    template<class T>
    bool SetContainer<T>::empty(){
        return Container<T>::vec.empty();
    }
    

}