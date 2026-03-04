package aclass;

/**
 * 提供冒泡排序功能的工具类
 */
public class rank {
    private final int[] array;

    /**
     * 初始化排序数组
     * @param array 待排序的数组（复制入参避免修改原始数据）
     */
    public rank(int[] array) {
        this.array = array.clone();
    }

    /**
     * 执行冒泡排序
     * @param ascending 排序方向 true为升序，false为降序
     * @return 排序后的数组副本
     */
    public int[] bubbleSort(boolean ascending) {
        int[] sortedArray = array.clone();
        int n = sortedArray.length;
        
        for (int i = 0; i < n - 1; i++) {
            boolean swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                // 根据排序方向决定比较条件
                boolean shouldSwap = ascending ? 
                    sortedArray[j] > sortedArray[j + 1] : 
                    sortedArray[j] < sortedArray[j + 1];
                
                if (shouldSwap) {
                    int temp = sortedArray[j];
                    sortedArray[j] = sortedArray[j + 1];
                    sortedArray[j + 1] = temp;
                    swapped = true;
                }
            }
            // 如果没有发生交换说明已经有序，提前终止
            if (!swapped) break;
        }
        return sortedArray;
    }
}
