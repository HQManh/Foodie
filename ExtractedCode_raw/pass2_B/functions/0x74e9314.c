// rea decompile_all
// name: System.Reflection.Assembly$$LoadFrom
// address: 0x74e9314
// body: available
// range: 0x74e9314-0x74e9317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Reflection_Assembly__LoadFrom(void)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  byte abStack_40 [16];
  void *pvStack_30;
  byte abStack_28 [16];
  void *pvStack_18;
  
  FUN_03f92aa4();
  FUN_03f926e8(abStack_28);
  FUN_03f923bc(abStack_40,abStack_28);
  pvVar1 = (void *)((ulong)abStack_40 | 1);
  if ((abStack_40[0] & 1) != 0) {
    pvVar1 = pvStack_30;
  }
  lVar2 = FUN_03fc37ec(pvVar1);
  if (lVar2 != 0) {
    uVar3 = FUN_03f9a678();
    if ((abStack_40[0] & 1) != 0) {
      operator_delete(pvStack_30);
    }
    if ((abStack_28[0] & 1) != 0) {
      operator_delete(pvStack_18);
    }
    return uVar3;
  }
  pvVar1 = (void *)((ulong)abStack_40 | 1);
  if ((abStack_40[0] & 1) != 0) {
    pvVar1 = pvStack_30;
  }
  uVar3 = FUN_03fa71b0(pvVar1);
                    /* WARNING: Subroutine does not return */
  FUN_03fa5c38(uVar3,0);
}

