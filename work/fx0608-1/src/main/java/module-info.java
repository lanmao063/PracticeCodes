module cn.edu.neu.fx06081 {
    requires javafx.controls;
    requires javafx.fxml;
    requires java.desktop;


    opens cn.edu.neu.fx06081 to javafx.fxml;
    exports cn.edu.neu.fx06081;
}