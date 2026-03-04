module cn.edu.neu.demo {
    requires javafx.controls;
    requires javafx.fxml;


    opens cn.edu.neu.demo to javafx.fxml;
    exports cn.edu.neu.demo;
    exports cn.edu.neu.demo.controller;
    opens cn.edu.neu.demo.controller to javafx.fxml;
}