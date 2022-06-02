class PrintEachChar{
	public static void main(String[] args){
		String s ="この猫の名はMIkeです";

		char[] c1 = new char[s.length()];
		
		for(int i=0; i<s.length(); i++){
			c1[i]=s.charAt(i);
			System.out.println(c1[i]);
		}
	}
}
