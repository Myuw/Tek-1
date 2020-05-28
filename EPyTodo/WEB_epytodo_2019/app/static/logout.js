let signout_button = document.getElementById('signout_button');
signout_button.addEventListener("click", request_signout);

function request_signout() {
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = recieve_signout;
    xhttp.open("POST", "/signout", true);
    xhttp.send();
}

function recieve_signout() {
    if (this.readyState == 4 && this.status == 200) {
        var response = JSON.parse(this.responseText);
        if (response["result"] == "signout successful")
            document.location = "/";
        else
            console.log(response["error"]);
    }
}
