package cn.edu.neu.test;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.layout.Border;
import javafx.scene.layout.BorderPane;
import javafx.stage.Stage;

import java.io.IOException;

import javafx.scene.control.Label;
public class HelloApplication extends Application {
    @Override
    public void start(Stage stage) throws IOException {
        Label label=new Label("Hello World");
        BorderPane pane=new BorderPane(label);
        Scene scene = new Scene(pane, 320, 240);
        stage.setTitle("Hello!");
        stage.setScene(scene);
        stage.show();
    }

    public static void main(String[] args) {
        launch();
    }
}