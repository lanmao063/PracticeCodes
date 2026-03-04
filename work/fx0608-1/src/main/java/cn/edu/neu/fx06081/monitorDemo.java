package cn.edu.neu.fx06081;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.AnchorPane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.stage.Stage;

public class monitorDemo extends Application {
    @Override
    public void start(Stage stage) throws Exception {
        AnchorPane pane=new AnchorPane();
        Scene scene = new Scene(pane, 500, 500);
        Circle circle=new Circle();
        circle.setCenterX(250);
        circle.setCenterY(250);
        circle.setRadius(100);
        circle.setStroke(Color.BLACK);
        circle.setFill(Color.GREY);
        circle.centerXProperty().bind(scene.widthProperty().divide(2));
        circle.centerYProperty().bind(scene.heightProperty().divide(2));
        circle.centerXProperty().addListener((observable, oldValue, newValue) -> {
            System.out.println("Circle center X changed from " + oldValue + " to " + newValue);
        });
        pane.getChildren().add(circle);

        stage.setScene(scene);
        stage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}
