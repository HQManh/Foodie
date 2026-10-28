// rea decompile_all
// name: thunk_FUN_03f72ddc
// address: 0x75fe004
// body: available
// range: 0x75fe004-0x75fe007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 thunk_FUN_03f72ddc(void)

{
  void *pvVar1;
  char *__s;
  undefined8 uVar2;
  char *pcStack_b0;
  undefined8 uStack_a8;
  char *pcStack_a0;
  size_t sStack_98;
  byte abStack_90 [8];
  ulong uStack_88;
  void *pvStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  byte abStack_68 [16];
  void *pvStack_58;
  byte abStack_50 [16];
  void *pvStack_40;
  byte abStack_38 [16];
  void *pvStack_28;
  void *pvStack_20;
  ulong uStack_18;
  
  __s = (char *)FUN_03fbca50();
  FUN_03fbca5c(abStack_50);
  puStack_78 = &DAT_01a3f346;
  uStack_70 = 4;
  sStack_98 = strlen(__s);
  pcStack_b0 = "machine.config";
  uStack_a8 = 0xe;
  pcStack_a0 = __s;
  FUN_03f67944(abStack_90,&pcStack_a0,&pcStack_b0);
  uStack_18 = (ulong)(abStack_90[0] >> 1);
  pvStack_20 = (void *)((ulong)abStack_90 | 1);
  if ((abStack_90[0] & 1) != 0) {
    uStack_18 = uStack_88;
    pvStack_20 = pvStack_80;
  }
  FUN_03f67944(abStack_68,&puStack_78,&pvStack_20);
  FUN_03f678ec(abStack_38,abStack_50,abStack_68);
  if ((abStack_68[0] & 1) != 0) {
    operator_delete(pvStack_58);
  }
  if ((abStack_90[0] & 1) != 0) {
    operator_delete(pvStack_80);
  }
  if ((abStack_50[0] & 1) != 0) {
    operator_delete(pvStack_40);
  }
  pvVar1 = (void *)((ulong)abStack_38 | 1);
  if ((abStack_38[0] & 1) != 0) {
    pvVar1 = pvStack_28;
  }
  uVar2 = FUN_03f967b4(pvVar1);
  if ((abStack_38[0] & 1) != 0) {
    operator_delete(pvStack_28);
  }
  return uVar2;
}

