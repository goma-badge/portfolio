import java.util.Calendar;

class Hello{
	public static void main(String[] args){
		System.out.println("Hello!");	//Hello!と出力する

		//Calendarクラスを使って、現在の時刻を取得する
		Calendar calendar =Calendar.getInstance();
		int hour = calendar.get(Calendar.HOUR_OF_DAY);
		int min = calendar.get(Calendar.MINUTE);

		//取得した時刻（時間と分）を出力する
		System.out.println("It's"+hour+":"+min+"now.");
	}
}
