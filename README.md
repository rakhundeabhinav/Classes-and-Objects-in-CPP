

# 📘 Classes and Objects in C++

## 🎯 Aim

To study and implement **classes and objects** in C++, understand the difference between **inside vs outside class definitions**, and explore the role of **public/private access specifiers** in encapsulation.

---

## 📚 Theory

* 🏗️ **Class** → Blueprint containing data members + functions.
* 🧑‍🤝‍🧑 **Object** → Instance of a class, stores actual values.
* 🔒 **Encapsulation** → Achieved via access specifiers:

  * `public` → Accessible outside the class.
  * `private` → Accessible only inside the class.
* ✍️ **Function Definitions**:

  * Inside class → Function body written in class.
  * Outside class → Declared inside, defined outside using `::` (scope resolution).

---

## 📊 Comparison Table

| ⚙️ Feature        | 🏗️ Class            | 🧑‍🤝‍🧑 Object       |
| ----------------- | -------------------- | --------------------- |
| Definition        | Blueprint/template   | Instance of a class   |
| Contains          | Data + Functions     | Real values + Actions |
| Memory Allocation | ❌ No                 | ✅ Yes (when created)  |
| Example           | `class Student {}`   | `Student s1;`         |
| Purpose           | Structure definition | Work with data        |

---

## 📋 Algorithms

### 🔹 Cube Volume (Outside Class)

1. Define class `Cube` with private: `side, volume`.
2. Public functions: `input()`, `calculateVolume()`, `output()`.
3. In `main()`: create object, call all functions.

---

### 🔹 Cuboid Volume (Inside Class)

1. Define class `Cuboid` with `length, breadth, height`.
2. Functions: `input()`, `Volume()`, `Output()`.
3. In `main()`: create object, call functions.

---

### 🔹 Reverse Array (Outside Class)

1. Define class `ArrayOps` with `reverseArray(arr, size)`.
2. Loop from last index → 0 and print elements.
3. In `main()`: declare array, find size, call function.

---

### 🔹 Simple Calculator

1. Define class `Calculator` with `num1, num2`.
2. Functions: `add()`, `subtract()`, `multiply()`, `divide()`.
3. In `main()`: input values, call all functions.

---

### 🔹 Student Details

1. Define class `Student` with `name, branch, subject, year, result`.
2. Create multiple objects and assign details.
3. Print details as required.

---

## 🧠 Conclusion

* 🏗️ **Class** → Defines structure + behavior.
* 🧑‍🤝‍🧑 **Object** → Real entity with data + functionality.
* ✅ **Key Insights**:

  * Inside-class methods → simpler.
  * Outside-class methods → better organization.
  * Classes & objects enable **encapsulation, reusability, and real-world modeling**.

