package org.example.demo95;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.Pane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.stage.Stage;

public class TransformApp extends Application {

    @Override
    public void start(Stage primarystage) throws Exception {
        Rectangle box = new Rectangle(200, 100, Color.rgb(204,255,148));
        box.setTranslateX(200);
        box.setTranslateY(200);
        box.setScaleX(1.5);
        box.setScaleY(1.5);
        box.setRotate(30);
        Pane pane = new Pane(box);
        pane.getChildren().add(new Button("Click me!"));
        Scene scene = new Scene(pane, 1280, 768);
        primarystage.setScene(scene);
        primarystage.setTitle("Hello");
        primarystage.show();


    }
}
