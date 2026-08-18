    public void loadSongs() {
        try {
            File file = new File("songs.txt");
            Scanner scanner = new Scanner(file);
            while (scanner.hasNextLine()) {
                String song = scanner.nextLine();
                songs.add(song);
            }
            scanner.close();
            System.out.println("Songs loaded from songs.txt");
        } catch (Exception e) {
            System.out.println("No songs file found. Starting with an empty list.");
        }
    }

    public void printSongs() {
        if (songs.isEmpty()) {
            System.out.println("No songs in the list.");
        } else {
            System.out.println("Current songs:");
            for (int i = 0; i < songs.size(); i++) {
                System.out.println((i + 1) + ". " + songs.get(i));
            }
        }
    }
}

class Codechef {
    public static void main(String[] args) {
        // Create a FavoriteSongsList object
        FavoriteSongsList newMusic = new FavoriteSongsList();
        
        newMusic.printSongs();
    }
}