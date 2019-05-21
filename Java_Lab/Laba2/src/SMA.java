import java.util.Scanner;
import java.util.Random;

public class SMA {
    static Scanner scanner = new Scanner(System.in);
    Random random = new Random();
    public static void main(String[] args) {
        legth_data();

    }


    public static generate_array(int leght) {

}
    public static int legth_data() {
        System.out.println("Введите длину массива:");
        int data;
        if(scanner.hasNextInt()){
             data = scanner.nextInt();
        }else {
            System.out.println("Ошибка при вводе числа. Введите число сново.");
            scanner.next();
        }
        data = legth_data();
        return data;
    }

}