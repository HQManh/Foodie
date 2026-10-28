// rea decompile_all
// name: CakeOrder.SkinRemoteConfig$$RollGradingSkinOnHomeEnter
// address: 0x42717b4
// body: available
// range: 0x42717b4-0x42718bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42718bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_SkinRemoteConfig__RollGradingSkinOnHomeEnter(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if ((DAT_09517022 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0921ff18);
    FUN_03f5c2a4(&DAT_09222dc0);
    DAT_09517022 = 1;
  }
  lVar5 = CakeOrder_SkinRemoteConfig__get_Config(param_1);
  CakeOrder_SkinRemoteConfig__set_GradingSkin(param_1,DAT_0921ff18);
  if (lVar5 != 0) {
    uVar6 = System_String__op_Equality(*(undefined8 *)(lVar5 + 0x10),DAT_0921ff18,0);
    if (((uVar6 & 1) == 0) &&
       (uVar6 = CakeOrder_SkinRemoteConfig__IsSkinUnlocked(param_1,*(undefined8 *)(lVar5 + 0x10)),
       (uVar6 & 1) != 0)) {
      uVar7 = System_String__Concat(DAT_09222dc0,*(undefined8 *)(lVar5 + 0x10),0);
      iVar3 = UnityEngine_PlayerPrefs__GetInt(uVar7,0,0);
      if (iVar3 < 1) {
        uVar1 = *(uint *)(lVar5 + 0x1c) & ((int)*(uint *)(lVar5 + 0x1c) >> 0x1f ^ 0xffffffffU);
        uVar2 = uVar1;
        if ((int)uVar1 <= (int)*(uint *)(lVar5 + 0x20)) {
          uVar2 = *(uint *)(lVar5 + 0x20);
        }
        uVar4 = UnityEngine_Random__Range(uVar1,uVar2 + 1,0);
        UnityEngine_PlayerPrefs__SetInt(uVar7,uVar4,0);
        CakeOrder_SkinRemoteConfig__set_GradingSkin(param_1,*(undefined8 *)(lVar5 + 0x10));
      }
      else {
        UnityEngine_PlayerPrefs__SetInt(uVar7,iVar3 + -1,0);
      }
    }
    return *(undefined8 *)(param_1 + 0x30);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

