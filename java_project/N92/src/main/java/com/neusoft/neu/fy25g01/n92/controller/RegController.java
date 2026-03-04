package com.neusoft.neu.fy25g01.n92.controller;

import com.neusoft.neu.fy25g01.n92.dao.SupervisorDao;
import com.neusoft.neu.fy25g01.n92.entity.Supervisor;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.PasswordField;
import javafx.scene.control.TextField;

import java.io.IOException;

public class RegController {
    @FXML
    private TextField tf_logid;

    @FXML
    private TextField tf_logpwd;

    @FXML
    private TextField tf_name;

    @FXML
    private TextField tf_tel;

    @FXML
    void doSave(ActionEvent event) {
//        提取页面数据
        String logid = tf_logid.getText();
        String logpwd = tf_logpwd.getText();
        String name = tf_name.getText();
        String tel = tf_tel.getText();
// 页面数据封装成对象
        Supervisor  supervisor =new Supervisor();
        supervisor.setTel(tel);
        supervisor.setName(name);
        supervisor.setPassword(logpwd);

        SupervisorDao dao =new SupervisorDao();
        try {
            int i = dao.addSupervisor(supervisor);
            if (i > 0)
                System.out.println("OK");
            else System.out.println("NO");
        } catch (IOException e) {
            throw new RuntimeException(e);
        }


    }


}
