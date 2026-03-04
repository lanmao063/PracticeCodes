package com.neusoft.neu.fy25g01.n92.dao;

import com.fasterxml.jackson.core.JsonProcessingException;
import com.fasterxml.jackson.databind.ObjectMapper;
import com.neusoft.neu.fy25g01.n92.entity.Supervisor;
import com.neusoft.neu.fy25g01.n92.util.FileTools;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class SupervisorDao {
    private static final String SUPERVISOR_FILE="supervisor.json";

    private static List<Supervisor> supervisors = null;

    public int addSupervisor(Supervisor supervisor) throws IOException {
        if (supervisors==null)
            readSupervisors();
        supervisors.add(supervisor);
        ObjectMapper mapper =new ObjectMapper();
        String  json = mapper.writeValueAsString(supervisors);
        int i = FileTools.writeStringToFile(SUPERVISOR_FILE,json);

        return i;
    }

    private void readSupervisors() {
        try {
            String json = FileTools.readFile(SUPERVISOR_FILE);
            ObjectMapper mapper =new ObjectMapper();
            supervisors = mapper.readValue(json,mapper.getTypeFactory().constructCollectionType(List.class,Supervisor.class));
        } catch (IOException e) {
            supervisors=new ArrayList<>();
        }
    }

    public Supervisor login(String logid, String logpwd) {
        if (supervisors==null)
            readSupervisors();
        for (int i = 0; i < supervisors.size(); i++ ) {
            Supervisor supervisor =  supervisors.get(i);
            if (supervisor.getTel().equals(logid) && supervisor.getPassword().equals(logpwd)){
                return supervisor;
            }
        }
        return  null;

    }
}
