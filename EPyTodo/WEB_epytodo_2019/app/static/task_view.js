class task {
    constructor(title, begin, end, stat, tid) {
        this.title = title;
        this.begin = begin;
        this.end = end;
        this.stat = stat;
        this.tid = tid;
    }
}

let table = document.getElementById('check_list');
let add_button = document.getElementById('add_button');
let add_title = document.getElementById('tk_title');
let add_begin = document.getElementById('tk_begin');
let add_end = document.getElementById('tk_end');
let add_stat = document.getElementById('tk_status');
let tasks = [];

add_button.addEventListener("click", add_and_reload);

function append_task(title, begin, end, stat, tid) {
    tasks.push(new task(title, begin, end, stat, tid));
}

function add_task_to_table(task) {
    var row = table.insertRow(-1);
    var title_cell = row.insertCell(0);
    var begin_cell = row.insertCell(1);
    var end_cell = row.insertCell(2);
    var status_cell = row.insertCell(3);
    var del_cell = row.insertCell(4);
    var del_button = document.createElement("button");
    del_button.id = task.tid;
    del_button.addEventListener("click", function() {
        del_and_reload(del_button.id);
    })
    del_button.appendChild(document.createTextNode("delete"));
    del_cell.appendChild(del_button);
    title_cell.appendChild(document.createTextNode(task.title));
    begin_cell.appendChild(document.createTextNode(task.begin));
    end_cell.appendChild(document.createTextNode(task.end));
    status_cell.appendChild(document.createTextNode(task.stat));
}

function update_tasks_table(array) {
    for (let i = 0; i < array.length; i++) {
        add_task_to_table(array[i]);
    }
}

function print_tasks() {
    if (this.readyState == 4 && this.status == 200) {
        var response = JSON.parse(this.responseText);
        for (var i = 0; i < response["result"]["tasks"].length; i++) {
            var current_id = 0;
            var current_task = response["result"]["tasks"][i];
            for (var key in current_task) {
                current_id = key;
            }
           append_task(response["result"]["tasks"][i][key]["title"],
                        response["result"]["tasks"][i][key]["begin"],
                        response["result"]["tasks"][i][key]["end"],
                        response["result"]["tasks"][i][key]["status"],
                        current_id);
        }
        update_tasks_table(tasks);
    }
}

function request_task_list() {
    var xhttp2 = new XMLHttpRequest();
    xhttp2.open("GET", "/user/task", true);
    xhttp2.onreadystatechange = print_tasks;
    xhttp2.send();
}

function reload() {
    if (this.readyState == 4 && this.status == 200) {
        location.reload()
    }
}

function del_and_reload(tid) {
    var xhttp2 = new XMLHttpRequest();
    xhttp2.open("POST", "/user/task/del/" + tid, true);
    xhttp2.onreadystatechange = reload;
    xhttp2.send();
}

function add_and_reload() {
    var stat = "w"
    switch(add_stat.value) {
        case "wip":
            stat = "w";
            break;
        case "not started":
            stat = "n";
            break;
        case "done":
            stat = "d";
            break;
    }
    var xhttp2 = new XMLHttpRequest();
    xhttp2.open("POST", "/user/task/add", true);
    xhttp2.onreadystatechange = reload;
    xhttp2.setRequestHeader("Content-type", "application/json");
    xhttp2.send('{"title" : \"' + add_title.value + '\", "begin" : \"' + add_begin.value + '\", "end" : \"' + add_end.value + '\", "status" : \"' + stat + '\"}');
}

request_task_list();
