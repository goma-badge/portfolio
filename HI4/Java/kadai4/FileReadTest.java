import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

class FileReadTest {

  public static void main(String[] args) {
    if (args.length < 1) System.exit(0); //コマンドライン引数がない場合終了
    String filename = args[0];

    try {
      FileReader reader = new FileReader(filename);
      int ch = reader.read();
      System.out.println((char) ch);
      reader.close();
    } catch (FileNotFoundException e) {
      System.out.println("File not found.");
    } catch (IOException e) {
      System.out.println("cannot open the file.");
    }
  }
}
