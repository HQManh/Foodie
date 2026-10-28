// rea decompile_all
// name: FUN_04024a50
// address: 0x4024a50
// body: available
// range: 0x4024a50-0x4025227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_04024a50(void)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  
  if (((bRam000000000974a570 & 1) == 0) && (iVar1 = __cxa_guard_acquire(0x974a570), iVar1 != 0)) {
    __cxa_atexit(FUN_0402c998,0,&PTR_LOOP_089e1d70);
    __cxa_guard_release(0x974a570);
  }
  if ((bRam000000000974ab48 & 1) == 0) {
    bRam000000000974ab48 = 0xe;
    puVar2 = (undefined4 *)0x974ab49;
  }
  else {
    uRam000000000974ab50 = 7;
    puVar2 = puRam000000000974ab58;
  }
  *(undefined1 *)((long)puVar2 + 7) = 0;
  *(undefined4 *)((long)puVar2 + 3) = 0x79726175;
  *puVar2 = 0x756e614a;
  if ((bRam000000000974ab60 & 1) == 0) {
    bRam000000000974ab60 = 0x10;
    puVar4 = (undefined8 *)0x974ab61;
  }
  else {
    uRam000000000974ab68 = 8;
    puVar4 = puRam000000000974ab70;
  }
  *(undefined1 *)(puVar4 + 1) = 0;
  *puVar4 = 0x7972617572626546;
  if ((bRam000000000974ab78 & 1) == 0) {
    bRam000000000974ab78 = 10;
    puVar2 = (undefined4 *)0x974ab79;
  }
  else {
    uRam000000000974ab80 = 5;
    puVar2 = puRam000000000974ab88;
  }
  *(undefined2 *)(puVar2 + 1) = 0x68;
  *puVar2 = 0x6372614d;
  if ((bRam000000000974ab90 & 1) == 0) {
    bRam000000000974ab90 = 10;
    puVar2 = (undefined4 *)0x974ab91;
  }
  else {
    uRam000000000974ab98 = 5;
    puVar2 = puRam000000000974aba0;
  }
  *(undefined2 *)(puVar2 + 1) = 0x6c;
  *puVar2 = 0x69727041;
  if ((bRam000000000974aba8 & 1) == 0) {
    bRam000000000974aba8 = 6;
    uRam000000000974aba9 = 0x79614d;
  }
  else {
    uRam000000000974abb0 = 3;
    *puRam000000000974abb8 = 0x79614d;
  }
  if ((bRam000000000974abc0 & 1) == 0) {
    puVar2 = (undefined4 *)0x974abc1;
    bRam000000000974abc0 = 8;
  }
  else {
    uRam000000000974abc8 = 4;
    puVar2 = puRam000000000974abd0;
  }
  *(undefined1 *)(puVar2 + 1) = 0;
  *puVar2 = 0x656e754a;
  if ((bRam000000000974abd8 & 1) == 0) {
    bRam000000000974abd8 = 8;
    puVar2 = (undefined4 *)0x974abd9;
  }
  else {
    uRam000000000974abe0 = 4;
    puVar2 = puRam000000000974abe8;
  }
  *(undefined1 *)(puVar2 + 1) = 0;
  *puVar2 = 0x796c754a;
  if ((bRam000000000974abf0 & 1) == 0) {
    bRam000000000974abf0 = 0xc;
    puVar2 = (undefined4 *)0x974abf1;
  }
  else {
    uRam000000000974abf8 = 6;
    puVar2 = puRam000000000974ac00;
  }
  *(undefined1 *)((long)puVar2 + 6) = 0;
  *(undefined2 *)(puVar2 + 1) = 0x7473;
  *puVar2 = 0x75677541;
  if ((bRam000000000974ac08 & 1) == 0) {
    bRam000000000974ac08 = 0x12;
    pcVar3 = (char *)0x974ac09;
  }
  else {
    uRam000000000974ac10 = 9;
    pcVar3 = pcRam000000000974ac18;
  }
  builtin_strncpy(pcVar3,"September",10);
  if ((bRam000000000974ac20 & 1) == 0) {
    bRam000000000974ac20 = 0xe;
    puVar2 = (undefined4 *)0x974ac21;
  }
  else {
    uRam000000000974ac28 = 7;
    puVar2 = puRam000000000974ac30;
  }
  *(undefined1 *)((long)puVar2 + 7) = 0;
  *(undefined4 *)((long)puVar2 + 3) = 0x7265626f;
  *puVar2 = 0x6f74634f;
  if ((bRam000000000974ac38 & 1) == 0) {
    bRam000000000974ac38 = 0x10;
    puVar4 = (undefined8 *)0x974ac39;
  }
  else {
    uRam000000000974ac40 = 8;
    puVar4 = puRam000000000974ac48;
  }
  *(undefined1 *)(puVar4 + 1) = 0;
  *puVar4 = 0x7265626d65766f4e;
  if ((bRam000000000974ac50 & 1) == 0) {
    bRam000000000974ac50 = 0x10;
    puVar4 = (undefined8 *)0x974ac51;
  }
  else {
    uRam000000000974ac58 = 8;
    puVar4 = puRam000000000974ac60;
  }
  *(undefined1 *)(puVar4 + 1) = 0;
  *puVar4 = 0x7265626d65636544;
  if ((bRam000000000974ac68 & 1) == 0) {
    bRam000000000974ac68 = 6;
    uRam000000000974ac69 = 0x6e614a;
  }
  else {
    uRam000000000974ac70 = 3;
    *puRam000000000974ac78 = 0x6e614a;
  }
  if ((bRam000000000974ac80 & 1) == 0) {
    bRam000000000974ac80 = 6;
    uRam000000000974ac81 = 0x626546;
  }
  else {
    uRam000000000974ac88 = 3;
    *puRam000000000974ac90 = 0x626546;
  }
  if ((bRam000000000974ac98 & 1) == 0) {
    bRam000000000974ac98 = 6;
    uRam000000000974ac99 = 0x72614d;
  }
  else {
    uRam000000000974aca0 = 3;
    *puRam000000000974aca8 = 0x72614d;
  }
  if ((bRam000000000974acb0 & 1) == 0) {
    bRam000000000974acb0 = 6;
    uRam000000000974acb1 = 0x727041;
  }
  else {
    uRam000000000974acb8 = 3;
    *puRam000000000974acc0 = 0x727041;
  }
  if ((bRam000000000974acc8 & 1) == 0) {
    bRam000000000974acc8 = 6;
    uRam000000000974acc9 = 0x79614d;
  }
  else {
    uRam000000000974acd0 = 3;
    *puRam000000000974acd8 = 0x79614d;
  }
  if ((bRam000000000974ace0 & 1) == 0) {
    bRam000000000974ace0 = 6;
    uRam000000000974ace1 = 0x6e754a;
  }
  else {
    uRam000000000974ace8 = 3;
    *puRam000000000974acf0 = 0x6e754a;
  }
  if ((bRam000000000974acf8 & 1) == 0) {
    bRam000000000974acf8 = 6;
    uRam000000000974acf9 = 0x6c754a;
  }
  else {
    uRam000000000974ad00 = 3;
    *puRam000000000974ad08 = 0x6c754a;
  }
  if ((bRam000000000974ad10 & 1) == 0) {
    bRam000000000974ad10 = 6;
    uRam000000000974ad11 = 0x677541;
  }
  else {
    uRam000000000974ad18 = 3;
    *puRam000000000974ad20 = 0x677541;
  }
  if ((bRam000000000974ad28 & 1) == 0) {
    bRam000000000974ad28 = 6;
    uRam000000000974ad29 = 0x706553;
  }
  else {
    uRam000000000974ad30 = 3;
    *puRam000000000974ad38 = 0x706553;
  }
  if ((bRam000000000974ad40 & 1) == 0) {
    bRam000000000974ad40 = 6;
    uRam000000000974ad41 = 0x74634f;
  }
  else {
    uRam000000000974ad48 = 3;
    *puRam000000000974ad50 = 0x74634f;
  }
  if ((bRam000000000974ad58 & 1) == 0) {
    bRam000000000974ad58 = 6;
    uRam000000000974ad59 = 0x766f4e;
  }
  else {
    uRam000000000974ad60 = 3;
    *puRam000000000974ad68 = 0x766f4e;
  }
  if ((bRam000000000974ad70 & 1) != 0) {
    uRam000000000974ad78 = 3;
    *puRam000000000974ad80 = 0x636544;
    return;
  }
  bRam000000000974ad70 = 6;
  uRam000000000974ad71 = 0x636544;
  return;
}

