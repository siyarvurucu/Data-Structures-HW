HW1 /
# Data-Structures-HW1

Implement a user interface and the corresponding database of students for a single
section course. The database entries will be instances of a custom-made Student class. The database
itself will be an instance of a Course class. Student and Course classes and the user interface will be
designed and implemented in this homework.

**Student Class:**

The class will have the following contents:

* Private Members:
  * ID
  * name
  * surname 
  * mt1_score
  * mt2_score
  * final_score
* Public Methods:
  * Constructor
  * Getter and setter methods for all members
  * overallScore (calculates overall score of a student considering exam scores and exam
weights)

**Course Class:**

* Private Members:
  * entries[MAX_SIZE] (an array for Student instances)
  * num (the current number of students in the course)
  * exam weights:
    * weight_mt1
    * weight_mt2
    * weight_final
* Public Methods:
  * Constructor
  * getNum
  * addStudent
  * changeWeights
  * getStudent (return a Student given an index)
  * calcAverage (calculates course averages for MT1, MT2, final and overall score)
  
**User Interface:**
* Functions:
  * showByID (show all information of a student given their ID)
  * showAbove (show all student information above a certain overall score threshold)
  * showBelow (show all student information below a certain overall score threshold)
  * showAverage (show classroom average for each exam and overall score)
  * updateStudentScore (change a student score given their ID and exam name)
  
The program should ask the user for his/her input by offering different options as a menu:
* Add a student
* Search a student by ID
* Show students with overall score above a threshold
* Show students with overall score below a threshold
* Show classroom average
* Change a student’s score
* Exit

**Remarks**
* Check for illogical (e.g. negative age) and invalid (e.g. invalid ID, insufficient
number of inputs) cases, and give appropriate warnings.
