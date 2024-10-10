// Camila Ramirez Mendoza
// csc 321
public class cramirezmendoza6a
{
    public static void main(String[] args)
    {
   
        int x = 7;
        int y = 2;

        double result = 0;

        result = x + y * x / y - x;
        System.out.printf("Your first result using int is: %.2f%n", result);

        result = -x - y / x * y + x;
        System.out.printf("Your second result using int is: %.2f%n", result);

        result = x + y - x / y;
        System.out.printf("Your third result using int is: %.2f%n", result);

        double a = 7.0;
        double b = 2.0;

        result = a + b * a / b - a;
        System.out.printf("Your first result using double is: %.2f%n", result);

        result = -a - b / a * b + a;
        System.out.printf("Your second result using double is: %.2f%n", result);

        result = a + b - a / b;
        System.out.printf("Your third result using double is: %.2f%n", result);
	/*
	 * Since the underlying arithmetic operations yield equal outputs in both Java and C, the programs evaluate to the same results. The formatting and floating-point precision issues that each language has are the cause of the differences in the result. Whereas C displays more decimal places by default, Java rounds the output to two decimal places when required. As a result, the format of the results rather than the evaluation itself is causing the differences.	
	 */
    }
}


