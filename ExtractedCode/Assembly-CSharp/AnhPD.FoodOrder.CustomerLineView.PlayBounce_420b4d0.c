// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineView$$PlayBounce
// address: 0x420b4d0
// body: available
// range: 0x420b4d0-0x420b653 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420b640 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x420b650 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineView__PlayBounce
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  
  if ((DAT_09516c57 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6f38);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd40);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091dbf30);
    DAT_09516c57 = 1;
  }
  if (0.0 < *(float *)(param_4 + 0x178)) {
    AnhPD_FoodOrder_CustomerLineView__KillBounce(param_4);
    if ((*(long *)(param_4 + 0x20) != 0) &&
       (lVar1 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x20),0), lVar1 != 0)) {
      fVar4 = (float)UnityEngine_Transform__get_localScale(lVar1,0);
      *(float *)(param_4 + 0x188) = fVar4;
      *(float *)(param_4 + 0x18c) = param_2;
      *(float *)(param_4 + 400) = param_3;
      uVar2 = DG_Tweening_ShortcutExtensions__DOScale
                        (fVar4 + fVar4 * *(float *)(param_4 + 0x170),
                         param_2 + param_2 * *(float *)(param_4 + 0x174),param_3 + param_3 * 0.0,
                         *(float *)(param_4 + 0x178) * 0.5,lVar1,0);
      uVar2 = FUN_04d95e8c(uVar2,*(undefined4 *)(param_4 + 0x17c),DAT_091dbeb0);
      uVar2 = FUN_04d962f4(uVar2,2,1,DAT_091dbf30);
      uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar3,param_4,DAT_091c6f38,0);
      uVar2 = FUN_04d956e8(uVar2,uVar3,DAT_091dbd40);
      *(undefined8 *)(param_4 + 0x180) = uVar2;
      thunk_FUN_03f5d7b8(param_4 + 0x180);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

