module com.neusoft.neu.fy25g01.n92 {
    requires javafx.controls;
    requires javafx.fxml;
    requires static lombok;
    requires com.fasterxml.jackson.databind;

    opens com.neusoft.neu.fy25g01.n92 to javafx.fxml;
    exports com.neusoft.neu.fy25g01.n92;

    opens com.neusoft.neu.fy25g01.n92.controller to javafx.fxml;
    exports com.neusoft.neu.fy25g01.n92.controller;

    opens com.neusoft.neu.fy25g01.n92.entity to javafx.fxml;
    exports com.neusoft.neu.fy25g01.n92.entity;





}