import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

class Codechef {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        String line = br.readLine();
        if (line == null) return;
        st = new StringTokenizer(line);
        int T = Integer.parseInt(st.nextToken());
        StringBuilder sb = new StringBuilder();
        while (T-- > 0) {
            while (st == null || !st.hasMoreTokens()) {
                line = br.readLine();
                if (line == null) break;
                st = new StringTokenizer(line);
            }
            int N = Integer.parseInt(st.nextToken());
            int K = Integer.parseInt(st.nextToken());
            int[] C = new int[N + 1];
            for (int i = 1; i <= N; i++) {
                while (!st.hasMoreTokens()) {
                    st = new StringTokenizer(br.readLine());
                }
                C[i] = Integer.parseInt(st.nextToken());
            }
            int minCost = Integer.MAX_VALUE;
            for (int i = 1; i <= N; i++) {
                if (i > K + 1) break;
                for (int j = i + 1; j <= N; j++) {
                    if (j < N - K) continue;
                    if (j - i <= 2 * K + 1) {
                        minCost = Math.min(minCost, C[i] + C[j]);
                    }
                }
            }
            if (minCost == Integer.MAX_VALUE) {
                sb.append("-1\n");
            } else {
                sb.append(minCost).append("\n");
            }
        }
        System.out.print(sb);
    }
}