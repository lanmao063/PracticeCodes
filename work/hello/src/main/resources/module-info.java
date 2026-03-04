module cn.edu.neu.hello {
    requires javafx.controls;
    requires javafx.fxml;


    opens cn.edu.neu.hello to javafx.fxml;
    exports cn.edu.neu.hello;
    opens cn.edu.neu.hello.controller to javafx.fxml;
    exports cn.edu.neu.hello.controller;

}