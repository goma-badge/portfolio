class arrayex{
    public static void main(String[] args){
        System.out.println("ArrayIndexOutofBoundsExceptionを発生させます");
        int[] a = new int[3]; //要素数３の配列としてメモリを確保
        System.out.println(a[4]);
    }
}