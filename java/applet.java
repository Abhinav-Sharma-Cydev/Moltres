import java.awt.*;
import java.applet.*;

public class applet extends Applet {
    TextField text1, text2;

    public void init() {
        text1 = new TextField();
        text2 = new TextField();
        add(text1);
        add(text2);
        text1.setText("0");
        text2.setText("0");
    }

    public void paint(Graphics obj) {
        int x = 0, y = 0, z = 0;
        String strx, stry;
        obj.drawString("Enter the numbers: ", 15, 15);
        try {
            strx = text1.getText();
            stry = text2.getText();
            x = Integer.parseInt(strx);
            y = Integer.parseInt(stry);
        } catch (Exception e) {
            System.out.print(e);
        }
        z = x + y;
        String sum = String.valueOf(z);
        obj.drawString("sum = " + sum, 15, 30);
        obj.drawString("sum = " + sum, 22, 30);
    }

    public boolean action(Event event, Object obj) {
        repaint();
        return true;
    }
}
