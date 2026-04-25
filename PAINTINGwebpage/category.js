console.log("JS Loaded");
console.log("Button test ready");
let category = localStorage.getItem("category");

// Set title
document.getElementById("category-title").innerText = category + " Paintings";

// Sample data (you can change images later)
let data = {
    nature: [
        {img: "images/birds nature.jpg", name: "Sunset View", price: 1500},
        {img: "images/Mountain paintings.jpg", name: "Montophile", price: 1000},
        {img: "images/Acrylic Painting.jpg", name: "Moon & Flowers", price: 1800}
    ],

    abstract: [
        {img: "images/Mountain Sunset Abstract Wall Art.jpg", name: "Color Storm", price: 2000},
        {img: "images/abstract art 1.jpg", name: "lined Emotion", price: 1000},
        {img: "images/lil pinky fool.jpg", name: "kudi vibes", price: 1000}
    ],

    mandala: [
        {img: "images/lippan art1.jpg", name: "Mandala Peace", price: 6500},
        {img: "images/black and aqua lippan.jpg", name: "Black and Aqua mandala", price: 7000},
        {img: "images/pastel pink lippan.png", name: "Pastel lippan Art", price: 5000}
    ]
};

let gallery = document.getElementById("gallery");

// Load paintings
data[category].forEach(item => {
    gallery.innerHTML += `
        <div class="painting-card">
            <img src="${item.img}">
            <h3>${item.name}</h3>
            <p>₹${item.price}</p>
            <button class="buy-btn add-btn"
                data-name="${item.name}"
                data-price="${item.price}"
                data-img="${item.img}">
                Add to Cart
            </button>
            <button class="wishlist-btn"
                data-name="${item.name}"
                data-price="${item.price}"
                data-img="${item.img}">
                ❤️ Wishlist
            </button>
        </div>
    `;
});

// Cart logic
function addToCart(name, price, img) {

    let cart = JSON.parse(localStorage.getItem("cart")) || [];

    // check if item already exists
    let existingItem = cart.find(item => item.name === name);

    if (existingItem) {
        // increase quantity
        existingItem.quantity += 1;
    } else {
        // add new item
        cart.push({
            name: name,
            price: Number(price),
            img: img,
            quantity: 1
        });
    }
    localStorage.setItem("cart", JSON.stringify(cart));
    alert("Added to cart 🛒");
    updateCartCount();
}
//wishlist logic
updateCartCount();
function updateCartCount() {
    let cart = JSON.parse(localStorage.getItem("cart")) || [];
    document.getElementById("cart-count").innerText = cart.length;
}

function addToWishlist(name, price, img) {

    let wishlist = JSON.parse(localStorage.getItem("wishlist")) || [];

    wishlist.push({
        name: name,
        price: price,
        img: img
    });

    localStorage.setItem("wishlist", JSON.stringify(wishlist));
    alert("Added to Wishlist ❤️");
}
// its with cart
document.querySelectorAll(".add-btn").forEach(button => {
    button.addEventListener("click", function() {

        let name = this.getAttribute("data-name");
        let price = this.getAttribute("data-price");
        let img = this.getAttribute("data-img");

        addToCart(name, price, img);
    });
});
//its with wishlist
document.querySelectorAll(".wishlist-btn").forEach(button => {
    button.addEventListener("click", function() {

        let name = this.getAttribute("data-name");
        let price = this.getAttribute("data-price");
        let img = this.getAttribute("data-img");

        addToWishlist(name, price, img);
    });
});