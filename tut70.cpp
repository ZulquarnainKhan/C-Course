//------------------ CONTAINERS IN STL -----------------------
/*
Containers:
    objects which store data

Types of Containers:
    1. Sequence Contaiers: Data stored in Linear fashion Eg. Vector , List , Deque
    2. Associative Contaiers: Direct Access and data stored in tree-like fashion eg. set ,multiset,map ,multimap
    3. Derived Contaiers: Real world modelling eg. stack(LIFO) , que(FIFO) ,priority-que 

When to use which one:
    Sequence container:
        1. Vector -> Random access is comparitively fast
                     insertion and deletion at middle is comparitively slow
                     Insertion and deletion at the end is fast

        2. List -> Random access is slow 
                   Insertion or deletion in middle is fast
                   Insertion or deletion at the end is also fast

    Associative Containers:
        - except Random access
        - All operation are fast 

    Derived containers:
        - Depends on different derived containers 
        - for more information view DSA course

*/