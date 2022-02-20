import java.time.*;
import java.util.Date;

public class date {
    public static void main(String[] args) {
        //        Q.1 Demonstrate the use java.util.Date class in your program

        Date d1 = new Date();
        System.out.println("Current date is " + d1);

        Date d2 = new Date(2023, 1, 5);

        boolean a = d2.after(d1);
        System.out.println("Date d2 comes after " + "date d1: " + a);

        //        Q.2. Demonstrate the use java.time.LocalDate in program

        LocalDate date = LocalDate.now();
        LocalDate yesterday = date.minusDays(1);
        LocalDate tomorrow = yesterday.plusDays(2);
        System.out.println("Today date: "+date);
        System.out.println("Yesterday date: "+yesterday);
        System.out.println("Tomorrow date: "+tomorrow);

        //        Q.3 Demonstrate the use java.time.LocalTime in program

        LocalTime nowtime = LocalTime.now();
        System.out.println(nowtime);
        //        Q.4.Demonstrate the use java.time.LocalDateTime in program

        LocalDateTime now = LocalDateTime.now();
        System.out.println("Local date time: " + now);


        //q5
        String timeZone1 = "Asia/Kolkata";
        String timeZone2 = "Europe/London";
        LocalDateTime dt = LocalDateTime.now();
        System.out.println("Time at "+timeZone1+ " is "+ LocalDateTime.now(ZoneId.of(timeZone1)));
        System.out.println("Time at "+timeZone2+ " is " + LocalDateTime.now(ZoneId.of(timeZone2)));
        System.out.println("");
        ZonedDateTime fromZonedDateTime = dt.atZone(ZoneId.of(timeZone1));
        ZonedDateTime toZonedDateTime = dt.atZone(ZoneId.of(timeZone2));
        long diff = Duration.between(fromZonedDateTime, toZonedDateTime).toMinutes();
        System.out.println("Time difference between timezones is " + diff + " minutes");
    }
}
