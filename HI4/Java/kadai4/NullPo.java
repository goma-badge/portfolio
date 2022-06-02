class NullPo{

  public static void main(String[] args) {
    System.out.println("NullPointerExceptionを発生させます.");
    StringLength(null);
  }

  static void StringLength(String str) {
    int strlen = str.length();
  
  }
}
