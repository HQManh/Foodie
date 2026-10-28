// rea decompile_all
// name: CookOrder.Cooking.Config.CookingRepresentationProfile$$EaseIn
// address: 0x44a5328
// body: available
// range: 0x44a5328-0x44a544b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44a5444 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a5448 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookOrder_Cooking_Config_CookingRepresentationProfile__EaseIn(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  
  if ((DAT_09518202 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181258);
    FUN_03f5c2a4(&DAT_09180230);
    DAT_09518202 = 1;
  }
  lVar1 = FUN_03f5c394(DAT_09180230,2);
  local_40 = 0;
  uStack_38 = 0;
  local_28 = 0;
  local_30 = 0;
  UnityEngine_Keyframe___ctor(0,0,0,0,&local_40,0);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x28) = uStack_38;
      *(undefined8 *)(lVar1 + 0x20) = local_40;
      *(undefined4 *)(lVar1 + 0x38) = local_28;
      *(undefined8 *)(lVar1 + 0x30) = local_30;
      local_60 = 0;
      uStack_58 = 0;
      local_48 = 0;
      local_50 = 0;
      UnityEngine_Keyframe___ctor(0x3f800000,0x3f800000,0x40000000,0,&local_60,0);
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
        *(undefined4 *)(lVar1 + 0x54) = local_48;
        *(undefined8 *)(lVar1 + 0x4c) = local_50;
        *(undefined8 *)(lVar1 + 0x44) = uStack_58;
        *(undefined8 *)(lVar1 + 0x3c) = local_60;
        uVar2 = thunk_FUN_03f9944c(DAT_09181258);
        UnityEngine_AnimationCurve___ctor(uVar2,lVar1,0);
        return uVar2;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

