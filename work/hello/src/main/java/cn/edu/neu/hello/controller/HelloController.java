package cn.edu.neu.hello.controller;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Button;

public class HelloController {

    @FXML
    private Button he;

    @FXML
    void action(ActionEvent event) {
        System.out.println("Hello, World!");
    }

}