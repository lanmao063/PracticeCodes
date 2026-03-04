package cn.edu.neu.hello;

import cn.edu.neu.hello.util.GlobalData;
import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.layout.BorderPane;
import javafx.stage.Stage;

import java.io.IOException;

public class NEPApplication extends Application {
    @Override
    public void start(Stage stage) throws IOException {
        //FXMLLoader fxmlLoader = new FXMLLoader(NEPApplication.class.getResource("/cn.edu.neu.hello/hello.fxml"));
        FXMLLoader fxmlLoader = new FXMLLoader(NEPApplication.class.getResource("/cn/edu/neu/hello/Nep.fxml"));
        BorderPane root = (BorderPane) fxmlLoader.load();
        Scene scene = new Scene(root, GlobalData.width, GlobalData.height);
        GlobalData.primaryStage = stage;
        stage.setTitle("东软环保公众监督系统");
        stage.setWidth(GlobalData.width);
        stage.setHeight(GlobalData.height);
        stage.setScene(scene);
        stage.setResizable(false);
        stage.show();
    }

    public static void main(String[] args) {
        launch();
    }


}