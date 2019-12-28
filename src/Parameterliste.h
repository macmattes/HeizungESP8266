#ifndef Parameterliste_h
#define Parameterliste_h

#include <arduino.h>
#include <Stream.h>
#include <string>

//Enum for holding the Type of parameter
enum Parametertyp {Keiner=0, Stat01, Stat0F, Analog1b, Analog2b, Analog2b_Sensor, Fehlerspeicher };
// Hplding the Name for the Enums
extern const char* ParametertypName[];
//Returning the Name of the Enum
const char* getParametertypName(Parametertyp parametertyp);

/*
/ returns length of the Parametertyp
/ 0 for undefined length
*/
byte getParametertypLenth(Parametertyp parametertyp);

//Structure holding the Parameter Number, its Name and the PArameter Type
struct Parameterelement{
  byte Nr;
  String Name;
  Parametertyp parametertyp;
};

//Array holding all parameteremlements
const Parameterelement parameterelements[] = {
  //{0,"Geraeteversion",Fehlerspeicher},
  //{1,"Wasserpumpennachlaufzeit_nach_Heizbetrieb",Analog1b},
  //{2,"Sollwert_Brauchwasser",Analog2b},
  //{3,"3",Stat0F},
  {4,"Sollwert_Speicher",Analog2b},
  {5,"Flammsignal",Stat0F},
  //{6,"Fehlerspeicher",Fehlerspeicher},
  //{7,"7",Stat0F},
  {8,"SommerWinter",Stat0F},
  //{9,"9",Analog2b},
  //{10,"10",Analog2b},
  //{11,"11",Analog2b},
  //{12,"12",Analog2b},
  {14,"Stat_Raumthermostat",Stat01},
  //{22,"Brauchwassersensor",Analog2b_Sensor},
  {23,"Speichertemperatur",Analog2b_Sensor},
  {24,"Vorlauftemperatur",Analog2b_Sensor},
  {31,"Anzahl_GFA_Stoerungen",Analog1b},
  {32,"Anzahl_STB_Abschaltungen",Analog1b},
  {34,"Betriebsstunden_Speicherladebetrieb",Analog2b},
  {35,"Brennerstarts_Speicherladebetrieb",Analog2b},
  //{36,"Drehzahlsollwert",Analog2b},
  {37,"Sollwert_Vorlauf_Ext_Regler",Analog2b},
  //{38,"Fehlerspeicher",Fehlerspeicher},
  {40,"Betriebsstunden_Heizbetrieb",Analog2b},
  {41,"Brennerstarts_Heizbetrieb",Analog2b},
  {56,"Verbleibende_Brennersperrzeit",Analog1b},
  {57,"Sollwert_Vorlauf",Analog2b},
  //{60,"60",Stat01},
  //{62,"62",Stat01},
  {63,"Externe_Heizungspumpe",Stat01},
  //{64,"64",Stat01},
  {66,"Stellung_VUV",Analog1b},
  //{67,"67",Stat01},
  {68,"Interne_Heizungspumpe",Stat01},
  //{69,"69",Stat01},
  //{70,"70",Stat0F},
  //{71,"71",Stat0F},
  //{72,"72",Stat0F},
  //{73,"73",Stat0F},
  {88,"Anforderung_Warmwasser_C1C2",Stat01},
  {99,"Wasserpumpennachlaufzeit_nach_Speicherladung",Analog1b},
  {100,"Wasserpumpennachlaufzeit_nach_Heizbetrieb",Analog1b},
  {101,"Korrekturwert_Aussentemperatur",Analog1b},
  {102,"Speicherladezeit",Analog1b},
  {105,"Status_DCF",Analog1b},
  {106,"Aussentemperatur",Analog2b_Sensor},
  //{107,"Ext_VorRuecklauftemp",Analog2b_Sensor},
  //{108,"Heizungsteillast",Analog1b},
  {111,"Zaehler_3_Zuendversuche",Analog1b},
  {113,"Speicherfreigabe_Schaltuhr",Stat01},
  //{131,"Drezahlistwert",Analog2b},
  {158,"Status_Speicherladepumpe",Stat01},
  //{161,"Sollwert_interne_Heizungspumpe",Stat01},
  {165,"max._Vorlaufsollwert_Heizbetrieb",Analog1b},
  {166,"max._Vorlaufsollwert_Speicherladebetrieb",Analog1b},
  //{172,"Sunden_bis_Wartung",Analog1b},
  {175,"Status_Zirkulationspumpe",Stat01},
  //{182,"Speichertemperatur_unten",Analog2b_Sensor},
  //{185,"185",Analog2b},
  {194,"min._Vorlaufsollwert_Heizbetrieb",Analog1b},
  {195,"Einschalthysterese",Analog1b},
  {196,"Ausschalthysterese",Analog1b},
  //{223,"223",Stat01},
  {225,"max._Speichersolleinstellung",Analog1b}
};
const byte parameterelementsSize = sizeof (parameterelements) / sizeof *(parameterelements);

/*
/ Searches the Parameterelements for the corresponding element
/ Returns NULL if not found
*/
const Parameterelement* getParameterelement(byte parameterNr);
#endif
