# operator-new-overloading

This exercise is about a class that overrides the new and delete operators. 
In this exercise, actualy, I practice two Issues:
The overriding in C++, and the 'operator new', and I'l explain:

In C++, for every type of struct, there is some functions the compiler provides us: default CTOR, DTOR, operator functions, and more. 
But, I - as the developer - can change them behavior by overriding them.
In this exercise I choose override the new and delete operators (not the delete[] operator).
why exactly them? so with the answer take us to the second Issue of the exercise:

what is the different between operator new of C++, and malloc of C?
the question is, actualy, why does the malloc function of C is not enough, to the extent that needed to develope the new 'operator new'?
so the answer is because in the new operator integrate two differences from the malloc function:
1. the malloc function, if failed, returns NULL, and operator new if failed throws an exeption (C does'nt has exeptions anymore).
2. 'operator new' is activate the suitable CTOR for the object we allocate him a place! and every developer knows the importance of that..


It is not dramatic or something like that, but it is important for the understendation of this concept of the language.