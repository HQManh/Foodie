// rea decompile_all
// name: FUN_04024710
// address: 0x4024710
// body: available
// range: 0x4024710-0x40249e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_04024710(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((bRam000000000974a568 & 1) == 0) && (iVar1 = __cxa_guard_acquire(0x974a568), iVar1 != 0)) {
    __cxa_atexit(FUN_0402c78c,0,&PTR_LOOP_089e1d70);
    __cxa_guard_release(0x974a568);
  }
  FUN_03fe4308(0x974a9f8,L"Sunday",6);
  FUN_03fe4308(0x974aa10,L"Monday",6);
  FUN_03fe4308(0x974aa28,L"Tuesday",7);
  FUN_03fe4308(0x974aa40,L"Wednesday",9);
  FUN_03fe4308(0x974aa58,L"Thursday",8);
  FUN_03fe4308(0x974aa70,L"Friday",6);
  FUN_03fe4308(0x974aa88,L"Saturday",8);
  if ((bRam000000000974aaa0 & 1) == 0) {
    bRam000000000974aaa0 = 6;
    puVar2 = (undefined8 *)0x974aaa4;
  }
  else {
    uRam000000000974aaa8 = 3;
    puVar2 = puRam000000000974aab0;
  }
  *puVar2 = 0x7500000053;
  puVar2[1] = 0x6e;
  if ((bRam000000000974aab8 & 1) == 0) {
    bRam000000000974aab8 = 6;
    puVar2 = (undefined8 *)0x974aabc;
  }
  else {
    uRam000000000974aac0 = 3;
    puVar2 = puRam000000000974aac8;
  }
  *puVar2 = 0x6f0000004d;
  puVar2[1] = 0x6e;
  if ((bRam000000000974aad0 & 1) == 0) {
    bRam000000000974aad0 = 6;
    puVar2 = (undefined8 *)0x974aad4;
  }
  else {
    uRam000000000974aad8 = 3;
    puVar2 = puRam000000000974aae0;
  }
  *puVar2 = 0x7500000054;
  puVar2[1] = 0x65;
  if ((bRam000000000974aae8 & 1) == 0) {
    bRam000000000974aae8 = 6;
    puVar2 = (undefined8 *)0x974aaec;
  }
  else {
    uRam000000000974aaf0 = 3;
    puVar2 = puRam000000000974aaf8;
  }
  *puVar2 = 0x6500000057;
  puVar2[1] = 100;
  if ((bRam000000000974ab00 & 1) == 0) {
    bRam000000000974ab00 = 6;
    puVar2 = (undefined8 *)0x974ab04;
  }
  else {
    uRam000000000974ab08 = 3;
    puVar2 = puRam000000000974ab10;
  }
  *puVar2 = 0x6800000054;
  puVar2[1] = 0x75;
  if ((bRam000000000974ab18 & 1) == 0) {
    bRam000000000974ab18 = 6;
    puVar2 = (undefined8 *)0x974ab1c;
  }
  else {
    uRam000000000974ab20 = 3;
    puVar2 = puRam000000000974ab28;
  }
  *puVar2 = 0x7200000046;
  puVar2[1] = 0x69;
  if ((bRam000000000974ab30 & 1) == 0) {
    bRam000000000974ab30 = 6;
    puVar2 = (undefined8 *)0x974ab34;
  }
  else {
    uRam000000000974ab38 = 3;
    puVar2 = puRam000000000974ab40;
  }
  *puVar2 = 0x6100000053;
  puVar2[1] = 0x74;
  return;
}

