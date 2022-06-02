public class StringChar{
    public static void main(String[] args){
        int len1=args.length;
        if(len1!=2){
            System.out.println("Too few arguments");
        }else{
            int string1=args[0].length();
            String s1=args[1];
            int i=Integer.parseInt(s1);

            if(i<string1){
                System.out.println(args[0].charAt(i));
            }else{
                System.out.println("Invalid input");        
                }
        }
    }
}
