enum MealType = {NO_PREF, REGULAR, LOW_FAT, VEGETARIAN};

class Passanger {
    public:
        Passanger();
        bool isFrequentFlyer() const;
        void makeFrequentFlyer(const string&, newFreqFlyerNo);

    private:
        string name;
        MealType mealPref;
        bool isFreqFlyer;
        string freqFlyerNo;
};

Passanger::Passanger() {
    name = "--NO NAME--";
    mealPref = NO_PREF;
    isFreqFlyer = false;
    freqFlyerNo = "NONE";
}

Passanger::Passanger(const string& nm, MealType mp, const string& ffn) {
    name = nm;
    mealPref = mp;
    isFreqFlyer = (ffn != "NONE");
    freqFlyerNo = ffn;
}

Passanger::Passanger(const Passanger& pass) {
    name = pass.name;
    mealPref = pass.mealPref;
    isFreqFlyer = pass.isFreqFlyer;
    freqFlyerNo = pass.freqFlyerNo;
}


bool Passanger::isFrequentFlyer() const {
    return isFreqFlyer;
}

void Passanger::makeFrequentFlyer(const string& newFreqFlyerNo) {
    isFreqFlyer = true;
    freqFlyerNo = newFreqFlyerNo;
}

