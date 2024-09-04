import java.util.Arrays;

class HelloWorld {
    public static void main(String[] args) {
        String name = "SVD:GOD:OOK";
        
        // Corrected the syntax for the split method
        String[] arrname = name.split(":");
        
        // Corrected the syntax for the print statement
        System.out.println("Substring of name: " + Arrays.toString(arrname));
    }
}
