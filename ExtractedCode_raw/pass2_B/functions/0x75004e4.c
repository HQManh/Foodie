// rea decompile_all
// name: System.Globalization.CompareInfo$$get_UseManagedCollation
// address: 0x75004e4
// body: available
// range: 0x75004e4-0x750062f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 System_Globalization_CompareInfo__get_UseManagedCollation(void)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_0952166e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_09187d38);
    FUN_03f5c2a4(&DAT_09207468);
    FUN_03f5c2a4(&DAT_09225ce8);
    DAT_0952166e = 1;
  }
  if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = DAT_091827f8;
  if (*(char *)(*(long *)(DAT_091827f8 + 0xb8) + 0x11) == '\0') {
    uVar2 = System_Environment__internalGetEnvironmentVariable(DAT_09207468,0);
    uVar3 = System_String__op_Inequality(uVar2,DAT_09225ce8,0);
    if ((uVar3 & 1) == 0) {
      bVar1 = false;
    }
    else {
      if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09520f9d == '\0') {
        FUN_03f5c2a4(&DAT_09187d38);
        DAT_09520f9d = '\x01';
      }
      if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      bVar1 = *(char *)(*(long *)(DAT_09187d38 + 0xb8) + 0x90) != '\0';
    }
    if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = DAT_091827f8;
    lVar5 = *(long *)(DAT_091827f8 + 0xb8);
    *(bool *)(lVar5 + 0x10) = bVar1;
    *(undefined1 *)(lVar5 + 0x11) = 1;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar4 = DAT_091827f8;
  }
  return *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x10);
}

