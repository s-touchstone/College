
public class Circle extends Shape{

	private int radius;
	
	public int getRadius() {return radius;}
	public void setRadius(int radius) {this.radius = radius;}
	
	public Circle() {}
	public Circle(int x, int y, int radius){
		super(x, y);
		this.radius = radius;
	}
	
	public void display() {
		System.out.println("Circle: x-coordinate = " + getX() + ", y-coordinate " + getY() + ", radius = " + radius);
	}
	public double area() {return Math.PI * (radius * radius);}
}
