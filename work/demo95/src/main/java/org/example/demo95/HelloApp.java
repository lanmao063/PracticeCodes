package org.example.demo95;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

public class HelloApp extends Application {
    @Override
    public void start(Stage primaryStage) throws Exception {
        primaryStage.setTitle("My Application");
        Label label = new Label("Hello World");
        //StackPane stackPane = new StackPane(label);
        primaryStage.show();//渲染窗口
        Button button = new Button("Click");
        StackPane root = new StackPane(button);
        Scene scene= new Scene(root,1280,960);
        primaryStage.setScene(scene);
    }
    public static void main(String[] args) {
        launch(args);
    }

}
