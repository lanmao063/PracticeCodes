module org.example.demo98 {
    requires javafx.controls;
    requires javafx.fxml;


    opens org.example.demo98 to javafx.fxml;
    exports org.example.demo98;
}