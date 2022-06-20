import java.util.*;

public class Problem1 {
    public static void main(String[] args) {
        System.out.println("Hello World!");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a length of array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the array: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int size = arr.length;
        // System.out.println(size);
        int min = arr[0];
        int max = arr[0];
        for (int min_ele = 1; min_ele < size; min_ele++) {

            if (min > arr[min_ele]) {
                min = arr[min_ele];
            }
            if (max < arr[min_ele]) {
                max = arr[min_ele];
            }
        }
        System.out.println("Minimum element is: " + min);
        System.out.println("Maximum element is: " + max);
    }
}