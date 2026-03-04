module cn.edu.neu.demo1 {
    requires javafx.controls;
    requires javafx.fxml;


    opens cn.edu.neu.demo1 to javafx.fxml;
    exports cn.edu.neu.demo1;
}