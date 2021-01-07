/* Steven Touchstone
 * Advanced Programming Language (Java)
 * Prof. Jalal Omer
 * Assignment 5 
 * 04/28/2020
 * Subclass Inheritance from Abstract Superclass
 * Input: NONE
 * Output: Details about given shapes and the total area of all the shapes
*/
// ****************************************************************
// Assignment5.java
// Practice on how to use abstract superclasses and subclasses
// ****************************************************************

public class Assignment5 {
	
	private Shape [] ArrOfShapes = new Shape[100]; // 100 Shapes, circle's, tri's and rects
	
	public static void main (String [] args) {
		Assignment5 assign5= new Assignment5 ();
		assign5.testshapes();
	} // end of main

	public void testshapes () {
		int count = 0;
		// ------------------------ Fill the array section ----------------------
		ArrOfShapes[count++] = new Circle(20, 20, 40);
		ArrOfShapes[count++] = new Triangle(70, 70, 20, 30);
		ArrOfShapes[count++] = new Rectangle(150, 150, 40, 40);
		// ------------------------------ array fill done ------------------------
		//--------------------------- loop through the array --------------------
		for (int i = 0; i < count; i ++ ) { // loop through all objects in the array
			ArrOfShapes[i].display(); // don’t care what kind of object, display it
		} // end for loop
		int offset = 0;
		double totalarea = 0.0;
		while (ArrOfShapes[offset] != null) { // loop through all objects in the array
			totalarea = totalarea + ArrOfShapes[offset].area(); // get area for this object
			offset++;
		} // end while loop
		System.out.println("The total area for " + offset + " Shape objects is " + totalarea);
	} // end of testshapes
} // end of class Assignment5