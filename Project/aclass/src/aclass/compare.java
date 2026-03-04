package aclass;

public class compare {
    public static boolean result(int[] userNumbers, int[] machineNumbers) {
        if (userNumbers == null || machineNumbers == null) {
            throw new IllegalArgumentException("Input arrays cannot be null");
        }
        
        if (userNumbers.length != machineNumbers.length) {
            throw new IllegalArgumentException("Input arrays must have the same length");
        }

        for (int i = 0; i < userNumbers.length; i++) {
            if (userNumbers[i] != machineNumbers[i]) {
                return false;
            }
        }
        return true;
    }
}

