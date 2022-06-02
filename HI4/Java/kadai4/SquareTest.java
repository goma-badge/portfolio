class SquareTest {

  public static void main(String[] args) {
    if (args.length < 1) {
      System.out.println("整数を引数で与えてください");
      System.exit(0);
    }
    int size = Integer.ParseInt(args[0]);
    Square r = new Square();
    r.setSize(size);
    r.draw();
  }
}
