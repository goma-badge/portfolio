class QuizTest {
	public static void main(String[] args) {
		Entry ent = new Entry("immediately", "without delay or hesitation");
		Quiz q = new MushikuiQuiz(ent, 3);
		System.out.println("<問題>");
		q.show();
		System.out.println("<回答>");
		boolean isCorrect = q.ask();
		if (isCorrect)
			System.out.println("Correct!");
		else
			System.out.println("Wrong..");
	}
}