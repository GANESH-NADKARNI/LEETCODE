class Solution {
public:
    double angleClock(int hour, int minutes) {
        double Hour_angle = (hour % 12) * 30 + minutes * 0.5; //1 hour 360/12 = 30 => degree
        double Minute_angle = minutes * 6; // 360/60 = 6 => degree

        double diffrence = abs(Hour_angle - Minute_angle);

        return min(diffrence, 360 - diffrence);
    }
};