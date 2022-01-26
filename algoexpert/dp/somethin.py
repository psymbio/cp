public static int nod(int num) {
        int digits = 0;
        while (num > 0) {
            num /= 10
            digits++;
        }
        return digits;
    }

public static boolean armstrong(int num) {
        int nod_num = nod(num);
        int sum = 0;
        int copy = num;
        while (num > 0) {
            int rem = num % 10;
            sum += Math.pow(rem, nod_num);
            num /= 10;
        }
        if (num == sum) {
            return true;
        } 
        return false;
    }
