package com.neusoft.neu.fy25g01.n92.entity;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

import java.util.Date;
@Data //  get 和set方法
@ToString
@NoArgsConstructor
@AllArgsConstructor
public class Supervisor {
    private String tel;
    private String name;
    private String password;
    private Date birthday;
    private String sex;
    private String remark;


    public static void main(String[] args) {
        Supervisor supervisor =new Supervisor();


    }
}
