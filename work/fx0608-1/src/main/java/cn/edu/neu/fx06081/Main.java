package cn.edu.neu.fx06081;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.BorderPane;
import javafx.stage.Stage;

public class Main extends Application {
    public static void main(String[] args) {
        Application.launch(args);
    }
    @Override
    public void start(Stage stage) throws Exception {
        Button button = new Button("Click Me");
        BorderPane pane = new BorderPane(button);
        button.setOnAction(e -> {
            getHostServices().showDocument("https://eone.neu.edu.cn/");
        });
        Scene scene = new Scene(pane,300,300);
        stage.setTitle("Hello JavaFX");
        stage.setScene(scene);
        stage.show();
    }

}
