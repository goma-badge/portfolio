class ProductTest{
    public static void main(String[] args) {
        Product p1 =new Product(11,"Lenovo ThinkPad T14",false);
        System.out.println("p1の文字列表現は、「"+ p1 +"」です。");
        Product p2 =new Product(33,"NintendoSwitch",true);
        System.out.println(p2);
    }
}