class Number{

  public static void main(String[] args) {
    System.out.println("NumberFormatExceptionを発生させます.");
    String str = "あいう";
    int i = Integer.parseInt(str); // NumberFormatException
    System.out.println(i);
  }
}
