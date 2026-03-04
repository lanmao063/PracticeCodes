package com.neusoft.neu.fy25g01.n92;

import com.neusoft.neu.fy25g01.n92.util.GlobalData;
import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.HBox;
import javafx.stage.Stage;

import java.io.IOException;

public class NepApplication extends Application {
    @Override
    public void init() throws Exception {
        System.out.println("NepApplication.init");
    }

    @Override
    public void start(Stage primaryStage) throws IOException {
        GlobalData.primaryStage = primaryStage;

        primaryStage.setTitle("东软环保公众监督系统!");

      //  primaryStage.setFullScreen(true);
        Button button = new Button("测试");

//        primaryStage.setOpacity(0.5);
//        primaryStage.setAlwaysOnTop(true);
//        primaryStage.setResizable(false);
//        设置场景
//        打开第一个窗口
        FXMLLoader loader =new FXMLLoader(getClass().getResource("/view/login-view.fxml"));
        HBox box =  loader.load();
        Scene scene =new Scene(box,  GlobalData.LOGIN_WIDTH, GlobalData.LOGIN_HEIGHT);
        primaryStage.setWidth(GlobalData.LOGIN_WIDTH);
        primaryStage.setHeight(GlobalData.LOGIN_HEIGHT);
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    public static void main(String[] args) {
        launch();
    }
}