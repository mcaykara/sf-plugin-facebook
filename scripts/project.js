var fs = require("fs");
var projectJSONPath = "/home/ubuntu/workspace/config/project.json";
var project = require(projectJSONPath);


if (!project.build.input.ios.plugins.facebookios)
    project.build.input.ios.plugins.facebookios = {
        url: "",
        path: "plugins/iOS/facebookios.zip",
        active: true
    };

if (!project.build.input.android.plugins.facebookandroid)
    project.build.input.android.plugins.facebookandroid = {
        url: "",
        path: "plugins/Android/facebookandroid.zip",
        active: true
    };
    
var output = JSON.stringify(project, null, "\t");
fs.writeFileSync(projectJSONPath, output, "utf8");
