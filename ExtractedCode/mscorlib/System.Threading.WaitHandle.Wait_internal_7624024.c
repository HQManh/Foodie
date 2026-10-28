// rea decompile_all
// name: thunk_FUN_03f6a71c
// address: 0x7624024
// body: available
// range: 0x7624024-0x7624027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 thunk_FUN_03f6a71c(undefined8 *param_1,int param_2,ulong param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *pvStack_58;
  void *pvStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0x20;
  uVar3 = FUN_03faa828();
  uStack_38 = uVar3;
  FUN_03faf464(uVar3,0x20);
  if (param_2 == 1) {
    iVar1 = (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,param_4,1);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 0x102;
    }
  }
  else {
    pvStack_58 = (void *)0x0;
    pvStack_50 = (void *)0x0;
    uStack_48 = 0;
    FUN_03f6a8e8(&pvStack_58,param_1,param_1 + param_2,(long)param_2);
    if ((param_3 & 1) == 0) {
      uVar2 = FUN_03f89340(&pvStack_58,param_4);
    }
    else {
      uVar4 = FUN_03f893dc(&pvStack_58,param_4);
      uVar2 = 0;
      if ((uVar4 & 1) == 0) {
        uVar2 = 0x102;
      }
    }
    if (pvStack_58 != (void *)0x0) {
      pvStack_50 = pvStack_58;
      operator_delete(pvStack_58);
    }
  }
  FUN_03faf5e0(uVar3,0x20);
  return uVar2;
}

