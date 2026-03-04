module cn.edu.neu.test {
    requires javafx.controls;
    requires javafx.fxml;


    opens cn.edu.neu.test to javafx.fxml;
    exports cn.edu.neu.test;
}