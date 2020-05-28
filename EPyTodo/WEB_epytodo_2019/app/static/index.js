var login_button = document.getElementById('log_button');
var login_username = document.getElementById('log_username');
var login_password = document.getElementById('log_password');

var reg_button = document.getElementById('reg_button');
var reg_username = document.getElementById('reg_username');
var reg_password = document.getElementById('reg_password');

login_button.addEventListener("click", request_login);
reg_button.addEventListener("click", request_reg);

function request_login() {
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = recieve_login;
    xhttp.open("POST", "/signin", true);
    xhttp.setRequestHeader("Content-type", "application/json");
    xhttp.send('{"username": "' + login_username.value + '", "password":"' + login_password.value + '"}');
}

function request_reg() {
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = recieve_reg;
    xhttp.open("POST", "/register", true);
    xhttp.setRequestHeader("Content-type", "application/json");
    xhttp.send('{"username": "' + reg_username.value + '", "password":"' + reg_password.value + '"}');
}

function recieve_login() {
    if (this.readyState == 4 && this.status == 200) {
        var response = JSON.parse(this.responseText);
        if (response["result"] == "signin successful")
            document.location = "/tasks";
        else
            console.log(response["error"]);
    }
}

function recieve_reg() {
    if (this.readyState == 4 && this.status == 200) {
        var response = JSON.parse(this.responseText);
        if (response["result"] == "account created")
            console.log(response["result"]);
        else
            console.log(response["error"]);
    }
}
