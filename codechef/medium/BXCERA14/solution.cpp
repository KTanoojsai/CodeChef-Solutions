
    public FavoriteSongsList() {
        // Initialize the list of songs
        songs = new ArrayList<>();
    }

    public void addSong(String song) {
        songs.add(song);
    }

    public void saveSongs() {
        try {
            File file = new File("songs.txt");
            FileWriter writer = new FileWriter(file);
            for (String song : songs) {
                writer.write(song + System.lineSeparator());
            }
            writer.close();
            System.out.println("Songs saved to songs.txt");
        } catch (Exception e) {
            System.out.println("An error occurred while saving songs.");
        }
    }
}

class Codechef {
    public static void main(String[] args) {
        FavoriteSongsList myMusic = new FavoriteSongsList();
        myMusic.addSong("Bohemian Rhapsody");
        myMusic.addSong("Imagine");

        // Save the songs to the file
        myMusic.saveSongs();
    }
}