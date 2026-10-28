// rea decompile_all
// name: System.RuntimeType$$getFullName
// address: 0x75f8910
// body: available
// range: 0x75f8910-0x75f8913 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_RuntimeType__getFullName(long param_1,ulong param_2,uint param_3)

{
  byte bVar1;
  ulong uVar2;
  void *pvVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  byte abStack_38 [8];
  ulong uStack_30;
  void *pvStack_28;
  
  uVar5 = 2;
  if ((param_3 & 1) != 0) {
    uVar5 = 3;
  }
  if ((param_2 & 1) == 0) {
    uVar5 = 1;
  }
  FUN_03fb7b60(abStack_38,*(undefined8 *)(param_1 + 0x10),uVar5);
  bVar1 = abStack_38[0] & 1;
  uVar2 = (ulong)(abStack_38[0] >> 1);
  if ((abStack_38[0] & 1) != 0) {
    uVar2 = uStack_30;
  }
  if (uVar2 == 0) {
    uVar6 = 0;
    bVar1 = abStack_38[0] & 1;
  }
  else {
    if ((param_2 & 1) != 0) {
      uVar6 = 0;
      cVar4 = *(char *)(*(long *)(param_1 + 0x10) + 10);
      if ((cVar4 == '\x13') || (cVar4 == '\x1e')) goto joined_r0x03f6eaa4;
    }
    pvVar3 = (void *)((ulong)abStack_38 | 1);
    if ((abStack_38[0] & 1) != 0) {
      pvVar3 = pvStack_28;
    }
    uVar6 = FUN_03f967b4(pvVar3);
    bVar1 = abStack_38[0] & 1;
  }
joined_r0x03f6eaa4:
  if (bVar1 != 0) {
    operator_delete(pvStack_28);
  }
  return uVar6;
}

