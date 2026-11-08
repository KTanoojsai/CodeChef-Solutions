<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
        <title>Favorite Color</title>
        </head>
        <body>
            <h1>What is your favorite color?</h1>

                <form action="/favorite-color" method="POST">
                        <label for="color">Favorite Color:</label>
                                <input type="text" id="color" name="color" required>
                                        <button type="submit">Submit</button>
                                            </form>

                                                <% if (locals.favoriteColor) { %>
                                                        <p>Your favorite color is: <%= favoriteColor %></p>
                                                            <% } %>
                                                            </body>
                                                            </html>