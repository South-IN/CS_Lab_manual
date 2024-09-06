import java.util.*;

public class w6q3 {
    public static void main(String[] args) {
        // Define jobs with arrival times as keys and (process_name, burst_time) as values
        Scanner sc = new Scanner(System.in);
        int n = 4;
        Map<Integer, Pair<String, Integer>> jobs = new HashMap<>();
        for (int i=0;i<n;i++){
            String id = "p"+(i+1);
            System.out.println("Arrival time for process : "+id);
            int at = sc.nextInt();
            int bt = sc.nextInt();
            jobs.put(at,new Pair<>(id,bt));
        }




        PriorityQueue<Triple<Integer, Integer, String>> heap = new PriorityQueue<>(Comparator.comparingInt(a -> a.first));
        Set<String> seen = new HashSet<>();
        List<Triple<Integer, Integer,String>> completed = new ArrayList<>();
        int time = 0;

        while (!heap.isEmpty() || seen.size() < jobs.size()) {
            if (jobs.containsKey(time) && !seen.contains(jobs.get(time).first)) {
                Pair<String, Integer> job = jobs.get(time);
                heap.offer(new Triple<>(job.second, time, job.first));
                seen.add(job.first);
            }
            if (!heap.isEmpty()) {
                Triple<Integer, Integer, String> current = heap.poll();
                int burst = current.first;
                String process_name = current.third;

                burst -= 1;
                time += 1;
                if (burst == 0) {
                    completed.add(new Triple<>(time,current.second ,process_name));
                } else {
                    heap.offer(new Triple<>(burst, current.second, process_name));
                }
            } else {
                time += 1;
            }
        }

        // Calculate waiting times
        Map<String, Integer> waiting_times = new HashMap<>();
        int total_waiting_time = 0;
        for (Triple<Integer,Integer,String> completion : completed) {
            int completion_time = completion.first;
            int arrival_time = completion.second;
            String process_name = completion.third;

            waiting_times.put(process_name, completion_time - arrival_time - jobs.get(arrival_time).second);
            total_waiting_time += waiting_times.get(process_name);
        }

        // Output the results
        System.out.println("Completed Processes: " + completed);
        System.out.println("Waiting Times: " + waiting_times);
        System.out.println("Average waiting time: " + (total_waiting_time / (double) jobs.size()));
        System.out.println("Total Time: " + time);
    }

    static class Pair<K, V> {
        K first;
        V second;

        Pair(K first, V second) {
            this.first = first;
            this.second = second;
        }

        @Override
        public String toString() {
            return "(" + first + ", " + second + ")";
        }
    }

    static class Triple<K, V, T> {
        K first;
        V second;
        T third;

        Triple(K first, V second, T third) {
            this.first = first;
            this.second = second;
            this.third = third;
        }
        @Override
        public String toString() {
            return "(" + first + ", " + second + ", "+ third +")";
        }
    }
}

