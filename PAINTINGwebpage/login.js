/*
function login() {
    let user = document.getElementById("username").value;
    let pass = document.getElementById("password").value;

    if(user === "JashanAnmol" && pass === "9121610") {
        window.location.href = "home.html";
    } else {
        alert("Wrong username or password");
    }
} */
function login() {
    let user = document.getElementById("username").value;
    let pass = document.getElementById("password").value;

    // ✅ Step 1: check empty fields
    if(user === "" || pass === "") {
        alert("Please fill all fields ❗");
        return;
    }

    // ✅ Step 2: get saved data
    let storedUser = localStorage.getItem("username");
    let storedPass = localStorage.getItem("password");

    // ✅ Step 3: compare
    if(user === storedUser && pass === storedPass) {
        alert("Login successful 🎉");

        // (optional but important)
        localStorage.setItem("loggedIn", "true");

        window.location.href = "home.html";
    } else {
        alert("Wrong username or password");
    }
}
document.addEventListener("keydown", function(e) {
    if(e.key === "Enter") {
        login();
    }
});
