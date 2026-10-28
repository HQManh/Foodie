// rea decompile_all
// name: CakeOrder.CookingdomInappPackListDefinition$$GetDefaultCostValue
// address: 0x42706e8
// body: available
// range: 0x42706e8-0x42707c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
CakeOrder_CookingdomInappPackListDefinition__GetDefaultCostValue
          (undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 extraout_s0;
  undefined4 uVar3;
  undefined4 extraout_var;
  undefined4 uVar5;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  undefined4 local_14;
  
  if ((DAT_0951701a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091c8f98);
    FUN_03f5c2a4(&DAT_09205328);
    DAT_0951701a = 1;
  }
  local_14 = 0;
  if (*(int *)(DAT_09535470 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = FUN_04aaf4a8(param_2,&local_14,DAT_091c8f98);
  if ((uVar1 & 1) == 0) {
    uVar2 = System_String__Concat(DAT_09205328,param_2,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogError(uVar2,0);
    uVar3 = 0x411fd70a;
    uVar5 = 0;
    uVar2 = 0;
  }
  else {
    CakeOrder_CookingdomInappPackListDefinition__GetDefaultCostValue(uVar1,local_14);
    uVar3 = extraout_s0;
    uVar5 = extraout_var;
    uVar2 = extraout_var_00;
  }
  auVar4._4_4_ = uVar5;
  auVar4._0_4_ = uVar3;
  auVar4._8_8_ = uVar2;
  return auVar4;
}

