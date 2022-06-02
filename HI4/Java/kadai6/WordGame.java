import java.util.*;
import java.io.*;
class WordGame{

	//文字色変更
	public static final String ANSI_RESET = "\u001B[0m";
	public static final String ANSI_BLACK = "\u001B[30m";
	public static final String ANSI_RED = "\u001B[31m";
	public static final String ANSI_GREEN = "\u001B[32m";
	public static final String ANSI_YELLOW = "\u001B[33m";
	public static final String ANSI_BLUE = "\u001B[34m";
	public static final String ANSI_PURPLE = "\u001B[35m";
	public static final String ANSI_CYAN = "\u001B[36m";
	public static final String ANSI_WHITE = "\u001B[37m";


    public static void main(String[] args){
		//タイトルロゴ
		System.out.println();
		System.out.println(ANSI_GREEN+"                              #                     #            #");
        System.out.println("                              #                                  #");
        System.out.println("#     #   ####   # ###    ### #     ### #  #    #  ##   ######   #");
        System.out.println("#  #  #  #    #  ##   #  #   ##    #   ##  #    #   #       #    #");
        System.out.println("#  #  #  #    #  #       #    #    #   ##  #    #   #     ##     ");
        System.out.println("#  #  #  #    #  #       #   ##     ### #  #   ##   #    #");
        System.out.println(" ## ##    ####   #        ### #         #   ### #  ###  ######   #");
        System.out.println("                                        #"+ANSI_RESET);
		
		//ルール説明
		System.out.println(ANSI_BLUE+"ルール");
		System.out.println("ジャンルを選んで英単語のクイズに答えましょう");
		System.out.println("解答となる選択肢が最初に提示されます。その選択肢の中から単語を選択して入力してください"+ANSI_RESET);
		System.out.println();


		while(true){
			int score=0;
			//CSV
			QuizSet qset1=readCSV("fruit.csv");
			QuizSet qset2=readCSV("stationery.csv");
			QuizSet qset3=readCSV("inst.csv");
			QuizSet qset4=readCSV("animal.csv");

			System.out.println("ジャンル:   [1] fruit  [2] stationery  [3] instrument  [4] animal\n");
			System.out.print("ジャンルを選択してください:");
			Scanner scanner = new Scanner(System.in);
			int in = scanner.nextInt();
			System.out.println();
			QuizSet qsetall=null;
			
			switch(in){
				case 1:
					System.out.println("ジャンル:"+" fruit "+"が選択されました");
					System.out.println();
					System.out.println("選択肢は以下の通りです");
					System.out.println(ANSI_GREEN+"[ orange  apple  grape  strawberry  cherry ]"+ANSI_RESET);
					System.out.println();
					qsetall=qset1;
					break;
				case 2:
					System.out.println("ジャンル:" + " stationery " +"が選択されました");
					System.out.println();
					System.out.println("選択肢は以下の通りです");
					System.out.println(ANSI_GREEN+"[ pen  eraser  ruler  pencil  notebook  compass  protractor  stapler ]"+ANSI_RESET);
					System.out.println();
					qsetall=qset2;
					break;
				
				case 3:
					System.out.println("ジャンル:" + " instrument " +"が選択されました");
					System.out.println();
					System.out.println("選択肢は以下の通りです");
					System.out.println(ANSI_GREEN+"[ piano  taiko  violin  guitar  trumpet  harp ]"+ANSI_RESET);
					System.out.println();
					qsetall=qset3;
					break;
				case 4:
					System.out.println("ジャンル:" + " animal " +"が選択されました");
					System.out.println();
					System.out.println("選択肢は以下の通りです");
					System.out.println(ANSI_GREEN+"[ lion  pig  cat  giraffe  elephant  rabbit  horse ]"+ANSI_RESET);
					System.out.println();
					qsetall=qset4;
					break;
				}

			System.out.println("全 "+ qsetall.getSize() +" 問です");
			System.out.println();
			qsetall.shuffle();
			for (int i = 0; i < qsetall.getSize(); i++){
				int mon=i+1;
				System.out.println("<問題"+mon+">");
				Quiz q=qsetall.getNextQuiz();
				q.show();
				System.out.println("<回答>");
				if (q.ask()){
					System.out.println("Correct!");
					System.out.println();
					score++;
				}
				else{
					System.out.println("Wrong..");
					System.out.println();
				}
			}

			System.out.println();
			System.out.println();
			System.out.println();
			System.out.println("finish!!");
			System.out.println("Your Score: "+score+"/"+qsetall.getSize());
			
			//終了確認
			System.out.print(ANSI_CYAN+"もう一度遊びますか？"+ANSI_RESET+" 1:はい  1以外の数字:終了  : ");
			int select = scanner.nextInt();
			
			if(select==1){
				System.out.println(ANSI_CYAN+"もう一度プレイします"+ANSI_RESET);
			}else{
				System.out.println(ANSI_RED+"ゲームを終了します"+ANSI_RESET);
				break;
			}
		}
	}

	//CSV読み込み
	static QuizSet readCSV(String filename){
		QuizSet qsetall=new QuizSet(filename);
		try {
			BufferedReader br = new BufferedReader(new FileReader(new File(filename)));
			
			String line = "";
			while ((line = br.readLine()) != null) { //ファイル終端まで1行ずつ読む
				String[] tokens = line.split(","); 
			  	qsetall.add(new Quiz(new Entry(tokens[0],tokens[1])));
				// カンマ区切りの各データがString[] tokensに得られる．
				// (ここにtokensを使った処理を記述)
			}
			br.close();
		
		} catch (FileNotFoundException e) {
			System.out.println("File not found.");
		} catch (IOException e) {
			System.out.println("IOException.");
		}
		return qsetall;
	}
}
