public static List<Long> findSuperstarDishes(List<Long> a, int n) {
    // write your code here 
    Map<Long, Integer> frequency = new HashMap<>();
    for (Long dish : a) {
        frequency.put(dish, frequency.getOrDefault(dish, 0) + 1);
    }
    int limit = n / 3;
    List<Long> result = new ArrayList<>();
    for (Map.Entry<Long, Integer> entry : frequency.entrySet()) {
        if (entry.getValue() > limit) {
            result.add(entry.getKey());
        }
    }
    result.sort((x, y) -> {
        int frequencyComparison =
            Integer.compare(frequency.get(x), frequency.get(y));
        if (frequencyComparison != 0) {
            return frequencyComparison;
        }
        return Long.compare(x, y);
    });
    return result; 
}