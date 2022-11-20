# What is Polymorphism (easy explanation)
Polymorphism is to take more than one form.

In real life, we, humans do it all the time. We become 'Brother', 'Father', 'Son', 'Husband'... etc. And all these have forms have different attributes associated.

Brother has an attribute of Understanding you.
Father has an attribute of Maturity
Son has an attribute of Responsibility
Husband has an attribute of Love (like love for spouse)

But all these are utilimately forms of 'You'. Or it can be said that they are derived from 'You'. You become these (Father, Son..etc) depending upon what is required.

In OOPs, the concept is no different. It is the ability of an object to take more than one forms (just like you in real life).

So an object like a Shape can be a Rectangle, Circle or Hexagon. Each of these are different forms (or kinds) of Shape.

Shape can have a method draw(), but it would draw (circle / rectangle / hexagon) depnding upon need. It will call the draw method of respective shape when it it in respective form. If Shape is a circle. It will call draw() of circle..so on.

This ability to call the method or refer to property of an object depending on actual underlying type is called Polymorphism
# What is a Virtual Function in C++?
A virtual function in C++ is a base class member function that you can redefine in a derived class to achieve polymorphism. You can declare the function in the base class using the virtual keyword. Once you declare the function in the base class, you can use a pointer or reference to call the virtual class and execute its virtual version in the derived class. Thus, it asks the compiler to determine the object’s type during run-time and create a function bind (late binding or dynamic linkage).

A virtual function in C++ helps ensure you call the correct function via a reference or pointer. The C++ programming language allows you only to use a single pointer to refer to all the derived class objects. Since the pointer refers to all the derived objects, calling it will consistently execute the function in the base class. You can overcome this challenge with a virtual function in C++ as it helps execute the virtual version of the derived class, which is done at the run-time.
# What is Abstract Class
Think of a pencil and a pen. A pencil is an object of type "Pencil", and a pen is an object of type "Pen". Both "Pencil" and "Pen" are classes with various attributes, but both are subclasses derived from the class "WritingUtensil" and share the properties and methods shared by all writing utensils.

You can't actually have a physical object that is of type "WritingUtensil". Any physical object you create will always be of a subclass of "WritingUtensil" -- such as "Pencil" or "Pen" or something else. Nevertheless, "WritingUtensil" does define some properties that are shared by all it's subclasses -- properties that all such objects share.

Thus, "WritingUtensil" is an abstract class, and you cannot .

Hope that helps.
