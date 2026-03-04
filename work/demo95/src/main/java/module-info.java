module org.example.demo95 {
    requires javafx.controls;
    requires javafx.fxml;


    opens org.example.demo95 to javafx.fxml;
    exports org.example.demo95;
}