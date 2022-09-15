import java.util.Scanner;
 
public class Perfectly_Imperfect_Array {
    static boolean isperfect(int num) {
        for (int i = 1; i * i <= num; i++) {
            if ((num % i == 0) && (num / i == i)) {
                return true;
            }
        }
        return false;
    }
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        for (int i = 1; i <= tc; i++) {
            int n = sc.nextInt();
            boolean flag = false;
            for (int it = 0; it < n; it++) {
                int x = sc.nextInt();
                boolean ok = isperfect(x);
                if (ok == false) {
                    flag = true;
                }
            }
            if (flag == true)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
        sc.close();
    }
}