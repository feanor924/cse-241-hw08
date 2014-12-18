/* 
 * File:   main.cpp
 * Author: caner
 *
 * Created on December 10, 2014, 8:59 PM
 */
#include <iostream>
#include <vector>
#include "Container.cpp"
#include "SetContainer.cpp"
#include "SortedSetContainer.cpp"
#include "SortedContainer.cpp"

using Contain::Container;
using Contain::SetContainer;
using Contain::SortedContainer;
using Contain::SortedSetContainer;
using namespace std;

template<class T>
int totalNumber(Container<T> *con);

int main() {
    
    int index;    
    
    vector<int> caner;
    
    SetContainer<int> a1;
    
    SortedSetContainer<int> b1;
    
    SortedContainer<int> c1;
    
    Container<int> *c;
    
    Container<int> *b;
    
    Container<int> *a;
    
    Container<int> *a4;
    
    Container<int> *example;
    
    c = new SetContainer<int>[20];
    
    b = new SortedSetContainer<int>[20];
    
    a = new SortedContainer<int>[20];
    
    a4 = new SortedContainer<int>[20];
    
    example = new SortedContainer<int>[20];
    
    try
    {
        b1.add(2);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        b1.add(2);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        b1.add(4);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        b1.add(1);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        b1.add(4);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        b1.add(7);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        b1.add(6);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        b1.add(6);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        b1.add(8);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        b1.add(9);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    
    cout << "SORTED SET CONTAINER DRIVER"<<endl;
    cout <<endl;
    
    b->addAll(b1);
    
    caner=b->toVector();
    
    for (int i=0;i<caner.size();++i)
        cout << caner[i] <<"  ";
    
    caner.clear();
    
    cout << endl;
    cout <<endl;
    
    if ( b1.empty() )
        cout << "Its empty"<<endl;
    else 
        cout <<"Its not empty"<<endl;
    
    cout << "Size:" << b1.size()<<endl;
    
    cout <<"First Element(call(1)) :: "<< b1.first()<<endl;
    cout << "Now second :: "<<b1.next()<<endl;
    cout <<"First Element(call(2)) :: "<< b1.first()<<endl;
    cout << "Now third :: "<<b1.next()<<endl;
    
    index=b1.search(8);
    
    if ( index != 0)
        cout <<"Index :: " << b1.search(8) << endl;
    else 
        cout << "Not included"<<endl;
    
    b->addAll(b1);
    
    if ( totalNumber(b) != 0 )
        cout << "It's Sorted and Size :: " << b1.size()<<endl;
    else 
        cout << "It's not sorted"<<endl;
    
    try
    {
        b1.remove(8);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    
    index=b1.search(8);
    
    if ( index != 0)
        cout <<"Index :: " << b1.search(8) << endl;
    else 
        cout << "REMOVED, NOT INCLUDED"<<endl;
    
    
    cout << endl;
    cout << endl;
    
    try
    {
        c1.add(2);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        c1.add(2);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        c1.add(4);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        c1.add(1);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        c1.add(4);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        c1.add(7);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        c1.add(6);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        c1.add(6);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        c1.add(8);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        c1.add(9);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    
    cout << "SORTED CONTAINER DRIVER"<<endl;
    cout <<endl;
    
    a->addAll(c1);
    
    caner=a->toVector();
    
    for (int i=0;i<caner.size();++i)
        cout << caner[i] <<"  ";
    
    cout << endl;
    cout <<endl;
    
    if ( c1.empty() )
        cout << "Its empty"<<endl;
    else 
        cout <<"Its not empty"<<endl;
    
    cout << "Size:" << c1.size()<<endl;
    
    cout <<"First Element(call(1)) :: "<< c1.first()<<endl;
    cout << "Now second :: "<<c1.next()<<endl;
    cout <<"First Element(call(2)) :: "<< c1.first()<<endl;
    cout << "Now third :: "<<c1.next()<<endl;
    
    index=c1.search(8);
    
    if ( index != 0)
        cout <<"Index :: " << c1.search(8) << endl;
    else 
        cout << "Not included"<<endl;
            
    a4->addAll(c1);
    
    if ( totalNumber(a4) != 0 )
        cout << "It's Sorted and Size :: " << c1.size()<<endl;
    else 
        cout << "It's not sorted"<<endl;
    
    try
    {
        c1.remove(8);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    
    index=c1.search(8);
    
    if ( index != 0)
        cout <<"Index :: " << c1.search(8) << endl;
    else 
        cout << "REMOVED, NOT INCLUDED"<<endl;
    
    example->addAll(c1);
    
    caner=example->toVector();
    
    cout <<endl;
    for (int i=0; i<caner.size(); ++i)
        cout << caner[i]<<endl;
    
    cout << endl;
    
    example->removeAll(c1);
    
    
    cout << "ALL ELEMENTS REMOVED AND NOW  SIZEE::"<<example->size()<<endl;
    
    try
    {
        a1.add(2);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        a1.add(2);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        a1.add(4);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        a1.add(1);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        a1.add(4);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        a1.add(7);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        a1.add(6);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        a1.add(6);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        a1.add(8);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    try
    {
        a1.add(9);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    
    cout << endl;
    
    cout << "SET CONTAINER DRIVER"<<endl;
    cout <<endl;
    
    c->addAll(a1);
    
    caner=c->toVector();
    
    for (int i=0;i<caner.size();++i)
        cout << caner[i] <<"  ";
    
    caner.clear();
    
    cout << endl;
    cout <<endl;
    
    
    if ( a1.empty() )
        cout << "Its empty"<<endl;
    else 
        cout <<"Its not empty"<<endl;
    
    cout << "Size:" << a1.size()<<endl;
    
    //ILK BASTA toVector FONKSİYONUNU CAGIRDIGIM ICIN INDEXLER DEGISIYOR
    //VECTOR SIRASI BURDA DEGISIYOR O YUZDEN INDEX VE NEXT FONKSIYONUN 
    // DEGERLERINI ILK BASTA EKRANA BASTIGINDAN DAHA FARKLI VERIYOR
    //BIR TEK SETCONTAINER ICIN BOYLE. AMA FONKSIYONLAR DOGRU CALISIYOR
    
    cout <<"First Element(call(1)) :: "<< a1.first()<<endl;
    cout << "Now second :: "<<a1.next()<<endl;
    cout <<"First Element(call(2)) :: "<< a1.first()<<endl;
    cout << "Now third :: "<<a1.next()<<endl;
    
    index=a1.search(8);
    
    if ( index != 0)
        cout <<"Index :: " << a1.search(8) << endl;
    else 
        cout << "Not included"<<endl;
    
        
    c->addAll(a1);
    
    if ( totalNumber(c) != 0 )
        cout << totalNumber(c);
    else 
        cout << "It's not sorted"<<endl;
    
    try
    {
        a1.remove(8);
    }
    catch(Contain::mistake)
    {
        cout <<"Program aborted"<<endl;
        exit(0);
    }
    
    index=a1.search(8);
    
    if ( index != 0)
        cout <<"Index :: " << a1.search(8) << endl;
    else 
        cout << "REMOVED, NOT INCLUDED"<<endl;
   
    
    //delete []a;
    //delete []b;
    //delete []c;
    //delete []example;

    return 0;
}

template<class T>
int totalNumber(Container<T> *con){
    
    int value;
    
    value=con->isSorted();
    
    if (value == true )
        return con->size();
    else
        return 0;
}
