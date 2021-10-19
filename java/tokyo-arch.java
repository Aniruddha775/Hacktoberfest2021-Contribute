
//Print the following solid rhombus pattern
//    * * * * * * 
//   * * * * * * 
//  * * * * * * 
// * * * * * * 
//* * * * * * 


public class SolidRhombus {

	public static void main(String[] args) {
		int n =5 ;
	for (int i = 1 ; i<= n ; i++ )	{
		for (int j = 1 ; j<= n-i ; j++) {
		System.out.print(" ");
	}
		for ( int k = 0 ; k<=n ; k++) {
			System.out.print("* ");
	}
		System.out.println();

} }}
	
