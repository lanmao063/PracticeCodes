package com.neusoft.neu.fy25g01.n92.controller;

import com.neusoft.neu.fy25g01.n92.dao.SupervisorDao;
import com.neusoft.neu.fy25g01.n92.entity.Supervisor;
import com.neusoft.neu.fy25g01.n92.util.GlobalData;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.control.PasswordField;
import javafx.scene.control.TextField;
import javafx.scene.layout.AnchorPane;

import java.io.IOException;

public class LoginController {
    @FXML

    private PasswordField pf_logpwd;

    @FXML
    private TextField tf_login;

    @FXML
    void doLogin(ActionEvent event) {
        String  logid =  tf_login.getText();
        String  logpwd =  pf_logpwd.getText();
        SupervisorDao  supervisorDao = new SupervisorDao();
        Supervisor supervisor =  supervisorDao.login(logid,logpwd);

    }
    @FXML
    void doReg(ActionEvent event) throws IOException {
        FXMLLoader loader =new FXMLLoader(getClass().getResource("/view/reg-view.fxml"));
        AnchorPane pane =  loader.load();
        Scene scene =new Scene(pane,  GlobalData.WIDTH, GlobalData.HEIGHT);
        // 切换舞台的场景
        GlobalData.primaryStage.setTitle("用户注册");
        GlobalData.primaryStage.setWidth(1000);
        GlobalData.primaryStage.setScene(scene);

    }

}
