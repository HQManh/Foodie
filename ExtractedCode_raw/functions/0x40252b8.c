// rea decompile_all
// name: FUN_040252b8
// address: 0x40252b8
// body: available
// range: 0x40252b8-0x40257df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_040252b8(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((bRam000000000974a578 & 1) == 0) && (iVar1 = __cxa_guard_acquire(0x974a578), iVar1 != 0)) {
    __cxa_atexit(FUN_0402cd0c,0,&PTR_LOOP_089e1d70);
    __cxa_guard_release(0x974a578);
  }
  FUN_03fe4308(0x974ad88,L"January",7);
  FUN_03fe4308(0x974ada0,L"February",8);
  FUN_03fe4308(0x974adb8,L"March",5);
  FUN_03fe4308(0x974add0,L"April",5);
  if ((bRam000000000974ade8 & 1) == 0) {
    bRam000000000974ade8 = 6;
    puVar2 = (undefined8 *)0x974adec;
  }
  else {
    uRam000000000974adf0 = 3;
    puVar2 = puRam000000000974adf8;
  }
  *puVar2 = 0x610000004d;
  puVar2[1] = 0x79;
  if ((bRam000000000974ae00 & 1) == 0) {
    bRam000000000974ae00 = 8;
    puVar2 = (undefined8 *)0x974ae04;
  }
  else {
    uRam000000000974ae08 = 4;
    puVar2 = puRam000000000974ae10;
  }
  *(undefined4 *)(puVar2 + 2) = 0;
  puVar2[1] = 0x650000006e;
  *puVar2 = 0x750000004a;
  if ((bRam000000000974ae18 & 1) == 0) {
    bRam000000000974ae18 = 8;
    puVar2 = (undefined8 *)0x974ae1c;
  }
  else {
    uRam000000000974ae20 = 4;
    puVar2 = puRam000000000974ae28;
  }
  puVar2[1] = 0x790000006c;
  *puVar2 = 0x750000004a;
  *(undefined4 *)(puVar2 + 2) = 0;
  FUN_03fe4308(0x974ae30,L"August",6);
  FUN_03fe4308(0x974ae48,L"September",9);
  FUN_03fe4308(0x974ae60,L"October",7);
  FUN_03fe4308(0x974ae78,L"November",8);
  FUN_03fe4308(0x974ae90,L"December",8);
  if ((bRam000000000974aea8 & 1) == 0) {
    bRam000000000974aea8 = 6;
    puVar2 = (undefined8 *)0x974aeac;
  }
  else {
    uRam000000000974aeb0 = 3;
    puVar2 = puRam000000000974aeb8;
  }
  *puVar2 = 0x610000004a;
  puVar2[1] = 0x6e;
  if ((bRam000000000974aec0 & 1) == 0) {
    bRam000000000974aec0 = 6;
    puVar2 = (undefined8 *)0x974aec4;
  }
  else {
    uRam000000000974aec8 = 3;
    puVar2 = puRam000000000974aed0;
  }
  *puVar2 = 0x6500000046;
  puVar2[1] = 0x62;
  if ((bRam000000000974aed8 & 1) == 0) {
    bRam000000000974aed8 = 6;
    puVar2 = (undefined8 *)0x974aedc;
  }
  else {
    uRam000000000974aee0 = 3;
    puVar2 = puRam000000000974aee8;
  }
  *puVar2 = 0x610000004d;
  puVar2[1] = 0x72;
  if ((bRam000000000974aef0 & 1) == 0) {
    bRam000000000974aef0 = 6;
    puVar2 = (undefined8 *)0x974aef4;
  }
  else {
    uRam000000000974aef8 = 3;
    puVar2 = puRam000000000974af00;
  }
  *puVar2 = 0x7000000041;
  puVar2[1] = 0x72;
  if ((bRam000000000974af08 & 1) == 0) {
    bRam000000000974af08 = 6;
    puVar2 = (undefined8 *)0x974af0c;
  }
  else {
    uRam000000000974af10 = 3;
    puVar2 = puRam000000000974af18;
  }
  *puVar2 = 0x610000004d;
  puVar2[1] = 0x79;
  if ((bRam000000000974af20 & 1) == 0) {
    bRam000000000974af20 = 6;
    puVar2 = (undefined8 *)0x974af24;
  }
  else {
    uRam000000000974af28 = 3;
    puVar2 = puRam000000000974af30;
  }
  *puVar2 = 0x750000004a;
  puVar2[1] = 0x6e;
  if ((bRam000000000974af38 & 1) == 0) {
    bRam000000000974af38 = 6;
    puVar2 = (undefined8 *)0x974af3c;
  }
  else {
    uRam000000000974af40 = 3;
    puVar2 = puRam000000000974af48;
  }
  *puVar2 = 0x750000004a;
  puVar2[1] = 0x6c;
  if ((bRam000000000974af50 & 1) == 0) {
    bRam000000000974af50 = 6;
    puVar2 = (undefined8 *)0x974af54;
  }
  else {
    uRam000000000974af58 = 3;
    puVar2 = puRam000000000974af60;
  }
  *puVar2 = 0x7500000041;
  puVar2[1] = 0x67;
  if ((bRam000000000974af68 & 1) == 0) {
    bRam000000000974af68 = 6;
    puVar2 = (undefined8 *)0x974af6c;
  }
  else {
    uRam000000000974af70 = 3;
    puVar2 = puRam000000000974af78;
  }
  *puVar2 = 0x6500000053;
  puVar2[1] = 0x70;
  if ((bRam000000000974af80 & 1) == 0) {
    bRam000000000974af80 = 6;
    puVar2 = (undefined8 *)0x974af84;
  }
  else {
    uRam000000000974af88 = 3;
    puVar2 = puRam000000000974af90;
  }
  *puVar2 = 0x630000004f;
  puVar2[1] = 0x74;
  if ((bRam000000000974af98 & 1) == 0) {
    bRam000000000974af98 = 6;
    puVar2 = (undefined8 *)0x974af9c;
  }
  else {
    uRam000000000974afa0 = 3;
    puVar2 = puRam000000000974afa8;
  }
  *puVar2 = 0x6f0000004e;
  puVar2[1] = 0x76;
  if ((bRam000000000974afb0 & 1) == 0) {
    bRam000000000974afb0 = 6;
    puVar2 = (undefined8 *)0x974afb4;
  }
  else {
    uRam000000000974afb8 = 3;
    puVar2 = puRam000000000974afc0;
  }
  *puVar2 = 0x6500000044;
  puVar2[1] = 99;
  return;
}

