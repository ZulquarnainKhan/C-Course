/*
TEMPLATES (PARAMETURISED CLASSES):
    class --> object   // objects are made from classes and thus classes are templates of objects 
    templates --> class  // classes are made from templates and thus templates are templates of classes

WHY WE USE TEMPLATES:
    -> It represents many classes
    -> DRY (donot repeat yourself)
    -> Generic Programming
    -> Competative pogramming

SYNTAX FOR TAMPLATES:
template<class T>      // T can be int,float,char,double,string etc datatypes at the same time
class vector{
    T *arr;         
    public:
        vector(T *a){
            // [ BODY ]
        }
    //  And many other functions or methords
};

int main(){
    vector<int> intVec(ptr1);      // constructor is invoked of class having datatype as 'int' with object 'intvec'
    vector<float> floatVec(ptr2);  // constructor is invoked of class having datatype as 'float' with object 'intvec'


    return 0;
}


