package cn.edu.neu.fx06081;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.image.Image;
import javafx.scene.layout.AnchorPane;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

import javax.swing.*;

public class Scenedemo extends Application {
    @Override
    public void start(Stage stage) throws Exception {
        stage.setTitle("Hello JavaFX");
        Button button0 = new Button("Start");
        button0.setLayoutX(200);
        button0.setLayoutY(200);
        AnchorPane pane0=new AnchorPane();
        pane0.getChildren().addAll(button0);
        Scene scene0 =new Scene(pane0,300,300);
        stage.setScene(scene0);
        Button button1 = new Button("Back");
        button1.setLayoutX(200);
        button1.setLayoutY(200);
        Label label=new Label("Hello,World!");
        label.setLayoutX(100);
        label.setLayoutY(100);
        AnchorPane pane1=new AnchorPane();
        pane1.getChildren().addAll(button1,label);
        Scene scene1=new Scene(pane1,300,300);
        button0.setOnAction(e -> {
            stage.setScene(scene1);
        });
        button1.setOnAction(e -> {
            stage.setScene(scene0);
        });
        stage.show();

    }

    public static void main(String[] args) {
        launch(args);
    }
}
