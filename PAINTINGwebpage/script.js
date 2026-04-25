function openCategory(type) {
    // store selected category
    localStorage.setItem("category", type);
    // go to next page
    window.location.href = "category.html";
}

function goProfile() {
    alert("Profile page coming soon");
}
function goWishlist() {
    window.location.href = "wishlist.html";
}
function goCart() {
    window.location.href = "cart.html";
}
function logout() {
    localStorage.removeItem("loggedIn");
    alert("Logged out successfully 👋");
    window.location.href = "login.html";
}

document.querySelector(".search").addEventListener("keyup", function() {
    let value = this.value.toLowerCase();
    let cards = document.querySelectorAll(".card");

    cards.forEach(card => {
        let text = card.innerText.toLowerCase();
        card.style.display = text.includes(value) ? "block" : "none";
    });
});

let cart = JSON.parse(localStorage.getItem("cart")) || [];
document.getElementById("cart-count").innerText = cart.length;
