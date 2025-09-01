# Inheritance in C++

**Name:** Piyush Pawar  
**PRN:** 24070123145  

This repository contains multiple C++ programs demonstrating different types of inheritance.  

---

## 📌 Topics Covered
- **Single Inheritance**  
- **Multiple Inheritance**  
- **Multilevel Inheritance**  
- **Hierarchical Inheritance**  

---

## 📖 Explanation

### 1️⃣ Single Inheritance
- **Theory:**  
  In single inheritance, a derived class inherits from only one base class. The derived class can access public and protected members of the base class.  

- **Algorithm:**  
  1. Define a base class `Vehicle` with members and methods.  
  2. Define a derived class `Car` that inherits from `Vehicle`.  
  3. Create an object of `Car` in `main()`.  
  4. Access base class methods and derived class members.  

- **Conclusion:**  
  This program demonstrates **single inheritance**, where `Car` inherits properties and methods from the `Vehicle` class.  

---

### 2️⃣ Multiple Inheritance
- **Theory:**  
  In multiple inheritance, a class can inherit from more than one base class. The derived class combines the features of all its parent classes.  

- **Algorithm:**  
  1. Define a base class `Vehicle` with members and methods.  
  2. Define another base class `Specs` with members and methods.  
  3. Define a derived class `Car` that inherits from both `Vehicle` and `Specs`.  
  4. Create an object of `Car` and access properties of both base classes.  

- **Conclusion:**  
  This program demonstrates **multiple inheritance**, where `Car` inherits features from both `Vehicle` and `Specs`.  

---

### 3️⃣ Multilevel Inheritance
- **Theory:**  
  In multilevel inheritance, a class is derived from another derived class, forming a chain of inheritance.  

- **Algorithm:**  
  1. Define a base class `Food` with members and methods.  
  2. Define a derived class `Dish` inheriting from `Food`.  
  3. Define another derived class `Restaurant` inheriting from `Dish`.  
  4. Create an object of `Restaurant` and access properties from all levels.  

- **Conclusion:**  
  This program demonstrates **multilevel inheritance**, where properties are passed through a chain of classes.  

---

### 4️⃣ Hierarchical Inheritance
- **Theory:**  
  In hierarchical inheritance, multiple classes are derived from the same base class. Each derived class inherits the features of the common base class.  

- **Algorithm:**  
  1. Define a base class `Jeans` with members and methods.  
  2. Define three derived classes: `Bootcut`, `WL`, and `Skinny`, each inheriting from `Jeans`.  
  3. Each derived class contains its own specific data member.  
  4. Create objects of each derived class and display values.  

- **Conclusion:**  
  This program demonstrates **hierarchical inheritance**, where multiple derived classes inherit from the same base class.  

---
