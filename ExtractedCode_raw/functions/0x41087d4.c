// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewPouring$$GetPourTween
// address: 0x41087d4
// body: available
// range: 0x41087d4-0x4108a2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4108a28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_GroupViewPouring__GetPourTween(undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((DAT_095161a5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091ce428);
    FUN_03f5c2a4(&DAT_091ce430);
    FUN_03f5c2a4(&DAT_091ce438);
    FUN_03f5c2a4(&DAT_0917f008);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd28);
    FUN_03f5c2a4(&DAT_091dbd68);
    DAT_095161a5 = 1;
  }
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = DG_Tweening_DOTween__Sequence(0);
  uVar2 = DG_Tweening_DOTweenModuleSprite__DOFade
                    (0x3f800000,0x3dcccccd,*(undefined8 *)(param_2 + 0x28),0);
  DG_Tweening_TweenSettingsExtensions__Append(uVar1,uVar2,0);
  lVar4 = *(long *)(param_2 + 0x20);
  if (lVar4 != 0) {
    uVar5 = UnityEngine_Transform__get_localEulerAngles(lVar4,0);
    if (*(long *)(param_2 + 0x20) != 0) {
      UnityEngine_Transform__get_localEulerAngles(*(long *)(param_2 + 0x20),0);
      uVar2 = DG_Tweening_ShortcutExtensions__DOLocalRotate(uVar5,lVar4,0,0);
      DG_Tweening_TweenSettingsExtensions__Join(uVar1,uVar2,0);
      uVar5 = *(undefined4 *)(param_2 + 0x4c);
      uVar6 = *(undefined4 *)(param_2 + 0x50);
      uVar2 = thunk_FUN_03f9944c(DAT_0917f008);
      FUN_063be1d4(uVar2,param_2,DAT_091ce428,0);
      uVar2 = DG_Tweening_DOVirtual__Float(uVar5,uVar6,param_1,uVar2,0);
      uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar3,param_2,DAT_091ce430,0);
      uVar2 = FUN_04d956bc(uVar2,uVar3,DAT_091dbd28);
      uVar2 = DG_Tweening_TweenSettingsExtensions__Append(uVar1,uVar2,0);
      uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar3,param_2,DAT_091ce438,0);
      FUN_04d95740(uVar2,uVar3,DAT_091dbd68);
      return uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

