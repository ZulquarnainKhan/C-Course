/* ------------------ INHERITANCE IN C++ -----------------------
OVERVIEW :
1. Reusability is a very important feature in OOPs
2. In c++ we can reuse a class and add addition features to it
3. Reusing classes saves time and money
4. Reusing already tested and debuged class will save a lot of effort of developing and debugging 
   the same thing again.

WHAT IS INHERITANCE IN C++ :
1. The concept of reusability in C++ is supported using inheritance
2. We can reuse the properties of a existing class by inheriting from it
3. The existing class is called 'Base class'
4. The new class which is inherited is called 'Derived class'
5. Reusing classes saves money and time
6. There are different type of inheritance in C++

TYPES OF INHERITANCE IN C++ :
1. Single inheritance :
    --> A derived class from a single base class         (Employee -> Programmer)
2. Multiple inheritance :
    --> A derived class with several Base class          (Employee & Asistant -> Programmer)
3. Hierarachical inheritance :
    --> Several Derived class from single base class     (Employee -> Programmer & Manager)
4. Multilevel inheritance :
    --> Deriving a class from already derived class      (Animal -> Mammal -> Human)
5. Hybrid inheritance :
    --> Combination of multiple inheritance and multilevel inheritance 
        A class is derived from two classes as in multiple inheritance
        However one of the parent classes is not a base class          (Animal -> Mammal & Bird -> Bat)
*/

/*  VISIBILITY MODE:       Public Mode:       Private Mode:       Protected Mode:
    1. Private members     not inherited      not inherited       not inherited 
    2. Protected members   protected          private             protected
    3. Public members      public             private             protected
*/
