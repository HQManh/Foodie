// rea decompile_all
// name: System.Runtime.InteropServices.GCHandle$$GetTargetHandle
// address: 0x74cd58c
// body: available
// range: 0x74cd58c-0x74cd58f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_InteropServices_GCHandle__GetTargetHandle
          (undefined8 *param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 auStack_78 [2];
  byte abStack_70 [8];
  undefined8 uStack_68;
  void *pvStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  byte bStack_40;
  undefined8 uStack_38;
  void *pvStack_30;
  undefined4 uStack_28;
  
  if (((param_1 != (undefined8 *)0x0) && (param_3 == 3)) &&
     (uVar1 = FUN_03fc1748(*param_1), (uVar1 & 1) != 0)) {
    uVar2 = FUN_03fa673c(0,"Object contains references.");
                    /* WARNING: Subroutine does not return */
    FUN_03fa5c38(uVar2,0);
  }
  FUN_03f5e330(&uStack_50,param_1,param_2,param_3);
  auStack_78[0] = uStack_48;
  if ((bStack_40 & 1) == 0) {
    abStack_70[0] = bStack_40;
    uStack_68 = uStack_38;
    pvStack_60 = pvStack_30;
  }
  else {
    FUN_03f5d0a4(abStack_70,pvStack_30,uStack_38);
  }
  uStack_58 = uStack_28;
  FUN_03fa5764(auStack_78);
  if ((abStack_70[0] & 1) != 0) {
    operator_delete(pvStack_60);
  }
  if ((bStack_40 & 1) != 0) {
    operator_delete(pvStack_30);
  }
  return uStack_50;
}

