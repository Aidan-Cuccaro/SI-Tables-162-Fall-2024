/* INSTRUCTIONS: Create a template class called Pair that stores two values,
 * potentially of different types, and provides various functionalities on these
 * two values. Follow the comments below for the implementation.
 */

#include <iostream>
#include <type_traits> // For std::is_same (more on this later)

/* STEP 1: Define Template class
 * Define the Pair class template that takes two type parameters,
 * 'T1' and 'T2' (or however you would like to name them). Make
 * sure your class name is uppercase -_-
 */


/* STEP 2: Implement the contructor
 * Create a constructor for the Pair class that initalizes member values
 */


/* STEP 3: Create getters and setters
 * Add methods to get and set the values of first and second.
 */


/* STEP 4: Implement a display method
 * Create a method to display the values of the pair.
 */

/* STEP 5: Implement the swap method
 * Add a method to swap the values of the pair, if and only if 
 * both types are the same. This is where std::is_same<>::value comes in.
 * Example if statement: if constexpr (std::is_same<value1, value2>::value){} 
 * (cough cough, this is literally the if statement, just change it to fit your needs)
 */

/* STEP 6: Overload the equality operator
 * Overload the equality operator to compare two Pair objects.
 * Hint: Think back to AOO! The declaration is very similar.
 */

/* STEP 7: Implement isEqual()
 * Add a method to check if two values are equal, giventhe types
 * are the same.
 * Hint: you'll need std::is_same<>::value again!
 */


// UNCOMMENT THE STEP YOU ARE ON FOR TESTING
int main() {
    // STEP 2&4
    // Pair<int, string> p1(1, "One");
    // p1.display();

    // Pair<double, double> p2(3.14, 2.71);
    // p2.display();

    // STEP 3&4
    // p1.setFirst(2);
    // p1.setSecond("Two");
    // p1.display();

    // STEP 5
    // Pair<int, int> p3(100, 200);
    // p3.display();
    // p3.swap(); // This should work
    // p3.display();

    // Pair<int, string> p4(10, "Ten");
    // p4.swap(); // This should fail

    // STEP 6-7
    // Pair<int, string> p5(10, "Ten");
    // cout << (p4 == p5 ? "Pairs are equal" : "Pairs are not equal") << endl;

    // Pair<int, int> p6(50, 50);
    // cout << (p6.isEqual() ? "Values are equal" : "Values are not equal") << endl;

    // Pair<int, string> p7(1, "One");
    // p7.isEqual(); // Should print a message about inapplicability

    return 0;
}