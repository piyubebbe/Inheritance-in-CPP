Inheritance in C++

Name: Piyush Pawar

PRN: 24070123145

This file contains multiple programs demonstrating:
1. Single Inheritance
2. Multiple Inheritance
3. Multilevel Inheritance
4. Hierarchical Inheritance
*/

//----------------------------------------------------------
// 1. Single Inheritance
//----------------------------------------------------------
/*
Theory:
In single inheritance, a derived class inherits from only one base class.
The derived class can access public and protected members of the base class.

Algorithm:
1. Define a base class `vehicle` with members and methods.
2. Define a derived class `car` that inherits from `vehicle`.
3. Create an object of `car` in main().
4. Access base class methods and derived class members.

Conclusion:
This program demonstrates single inheritance, where `car` inherits properties
and methods from the `vehicle` class.
*/

//----------------------------------------------------------
// 2. Multiple Inheritance
//----------------------------------------------------------
/*
Theory:
In multiple inheritance, a class can inherit from more than one base class.
The derived class combines the features of all its parent classes.

Algorithm:
1. Define a base class `vehicle` with members and methods.
2. Define another base class `specs` with members and methods.
3. Define a derived class `car` that inherits from both `vehicle` and `specs`.
4. Create an object of `car` and access properties of both base classes.

Conclusion:
This program demonstrates multiple inheritance, where `car` inherits features
from both `vehicle` and `specs`.
*/

//----------------------------------------------------------
// 3. Multilevel Inheritance
//----------------------------------------------------------
/*
Theory:
In multilevel inheritance, a class is derived from another derived class,
forming a chain of inheritance.

Algorithm:
1. Define a base class `food` with members and methods.
2. Define a derived class `dish` inheriting from `food`.
3. Define another derived class `restaurant` inheriting from `dish`.
4. Create an object of `restaurant` and access properties from all levels.

Conclusion:
This program demonstrates multilevel inheritance,
where properties are passed through a chain of classes.
*/

//----------------------------------------------------------
// 4. Hierarchical Inheritance
//----------------------------------------------------------
/*
Theory:
In hierarchical inheritance, multiple classes are derived from the same base class.
Each derived class inherits the features of the common base class.

Algorithm:
1. Define a base class `jeans` with members and methods.
2. Define three derived classes: `bootcut`, `WL`, and `skinny`, each inheriting from `jeans`.
3. Each derived class contains its own specific data member.
4. Create objects of each derived class and display values.

Conclusion:
This program demonstrates hierarchical inheritance,
where multiple derived classes inherit from the same base class.
*/
