// rea decompile_all
// name: FUN_040241bc
// address: 0x40241bc
// body: available
// range: 0x40241bc-0x402467f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_040241bc(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  
  if (((bRam000000000974a560 & 1) == 0) && (iVar1 = __cxa_guard_acquire(0x974a560), iVar1 != 0)) {
    __cxa_atexit(FUN_0402c580,0,&PTR_LOOP_089e1d70);
    __cxa_guard_release(0x974a560);
  }
  if ((bRam000000000974a8a8 & 1) == 0) {
    bRam000000000974a8a8 = 0xc;
    puVar3 = (undefined4 *)0x974a8a9;
  }
  else {
    uRam000000000974a8b0 = 6;
    puVar3 = puRam000000000974a8b8;
  }
  *(undefined1 *)((long)puVar3 + 6) = 0;
  *(undefined2 *)(puVar3 + 1) = 0x7961;
  *puVar3 = 0x646e7553;
  if ((bRam000000000974a8c0 & 1) == 0) {
    bRam000000000974a8c0 = 0xc;
    puVar3 = (undefined4 *)0x974a8c1;
  }
  else {
    uRam000000000974a8c8 = 6;
    puVar3 = puRam000000000974a8d0;
  }
  *(undefined1 *)((long)puVar3 + 6) = 0;
  *(undefined2 *)(puVar3 + 1) = 0x7961;
  *puVar3 = 0x646e6f4d;
  if ((bRam000000000974a8d8 & 1) == 0) {
    bRam000000000974a8d8 = 0xe;
    puVar3 = (undefined4 *)0x974a8d9;
  }
  else {
    uRam000000000974a8e0 = 7;
    puVar3 = puRam000000000974a8e8;
  }
  *(undefined1 *)((long)puVar3 + 7) = 0;
  *(undefined4 *)((long)puVar3 + 3) = 0x79616473;
  *puVar3 = 0x73657554;
  if ((bRam000000000974a8f0 & 1) == 0) {
    bRam000000000974a8f0 = 0x12;
    pcVar2 = (char *)0x974a8f1;
  }
  else {
    uRam000000000974a8f8 = 9;
    pcVar2 = pcRam000000000974a900;
  }
  builtin_strncpy(pcVar2,"Wednesday",10);
  if ((bRam000000000974a908 & 1) == 0) {
    bRam000000000974a908 = 0x10;
    puVar4 = (undefined8 *)0x974a909;
  }
  else {
    uRam000000000974a910 = 8;
    puVar4 = puRam000000000974a918;
  }
  *(undefined1 *)(puVar4 + 1) = 0;
  *puVar4 = 0x7961647372756854;
  if ((bRam000000000974a920 & 1) == 0) {
    bRam000000000974a920 = 0xc;
    puVar3 = (undefined4 *)0x974a921;
  }
  else {
    uRam000000000974a928 = 6;
    puVar3 = puRam000000000974a930;
  }
  *(undefined1 *)((long)puVar3 + 6) = 0;
  *(undefined2 *)(puVar3 + 1) = 0x7961;
  *puVar3 = 0x64697246;
  if ((bRam000000000974a938 & 1) == 0) {
    bRam000000000974a938 = 0x10;
    puVar4 = (undefined8 *)0x974a939;
  }
  else {
    uRam000000000974a940 = 8;
    puVar4 = puRam000000000974a948;
  }
  *(undefined1 *)(puVar4 + 1) = 0;
  *puVar4 = 0x7961647275746153;
  if ((bRam000000000974a950 & 1) == 0) {
    bRam000000000974a950 = 6;
    uRam000000000974a951 = 0x6e7553;
  }
  else {
    uRam000000000974a958 = 3;
    *puRam000000000974a960 = 0x6e7553;
  }
  if ((bRam000000000974a968 & 1) == 0) {
    bRam000000000974a968 = 6;
    uRam000000000974a969 = 0x6e6f4d;
  }
  else {
    uRam000000000974a970 = 3;
    *puRam000000000974a978 = 0x6e6f4d;
  }
  if ((bRam000000000974a980 & 1) == 0) {
    bRam000000000974a980 = 6;
    uRam000000000974a981 = 0x657554;
  }
  else {
    uRam000000000974a988 = 3;
    *puRam000000000974a990 = 0x657554;
  }
  if ((bRam000000000974a998 & 1) == 0) {
    bRam000000000974a998 = 6;
    uRam000000000974a999 = 0x646557;
  }
  else {
    uRam000000000974a9a0 = 3;
    *puRam000000000974a9a8 = 0x646557;
  }
  if ((bRam000000000974a9b0 & 1) == 0) {
    bRam000000000974a9b0 = 6;
    uRam000000000974a9b1 = 0x756854;
  }
  else {
    uRam000000000974a9b8 = 3;
    *puRam000000000974a9c0 = 0x756854;
  }
  if ((bRam000000000974a9c8 & 1) == 0) {
    bRam000000000974a9c8 = 6;
    uRam000000000974a9c9 = 0x697246;
  }
  else {
    uRam000000000974a9d0 = 3;
    *puRam000000000974a9d8 = 0x697246;
  }
  if ((bRam000000000974a9e0 & 1) != 0) {
    uRam000000000974a9e8 = 3;
    *puRam000000000974a9f0 = 0x746153;
    return;
  }
  bRam000000000974a9e0 = 6;
  uRam000000000974a9e1 = 0x746153;
  return;
}

