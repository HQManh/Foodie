// rea decompile_all
// name: AnhPD.FoodOrder.DragItem$$PlayWindUp
// address: 0x41129bc
// body: available
// range: 0x41129bc-0x4112c4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4112c48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_DragItem__PlayWindUp(undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  if ((DAT_09516208 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091dbfd8);
    FUN_03f5c2a4(&DAT_091e9218);
    FUN_03f5c2a4(&DAT_09190228);
    DAT_09516208 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09190228);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_3;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_3);
    if (*(int *)(param_3 + 0xec) == 1) {
      AnhPD_FoodOrder_DragItem__KillWindUp(param_3);
      uVar9 = *(undefined8 *)(param_3 + 0x40);
      uVar8 = *(undefined4 *)(param_3 + 0x48);
      lVar3 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_3);
      if (lVar3 == 0) goto LAB_04112c48;
      fVar7 = (float)((ulong)uVar9 >> 0x20) * 0.82;
      UnityEngine_Transform__get_position(lVar3,0);
      iVar1 = *(int *)(DAT_09183190 + 0xe4);
      *(float *)(lVar2 + 0x20) = param_2 + 0.3;
      if (iVar1 == 0) {
        FUN_03f5c424();
      }
      uVar4 = DG_Tweening_DOTween__Sequence(0);
      uVar5 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_3);
      uVar4 = FUN_04d9642c(uVar4,uVar5,DAT_091dbfd8);
      uVar5 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_3);
      uVar9 = DG_Tweening_ShortcutExtensions__DOScale
                        (CONCAT44(fVar7,(float)uVar9 * 1.1800001),fVar7,uVar8,0x3dcccccd,uVar5,0);
      uVar9 = FUN_04d95e8c(uVar9,6,DAT_091dbeb0);
      uVar9 = DG_Tweening_TweenSettingsExtensions__Append(uVar4,uVar9,0);
      uVar4 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_3);
      uVar4 = DG_Tweening_ShortcutExtensions__DOScale
                        (*(undefined4 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x44),
                         *(undefined4 *)(param_3 + 0x48),0x3e0f5c29,uVar4,0);
      uVar4 = FUN_04d95e8c(uVar4,6,DAT_091dbeb0);
      uVar9 = DG_Tweening_TweenSettingsExtensions__Append(uVar9,uVar4,0);
      uVar4 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_3);
      uVar4 = DG_Tweening_ShortcutExtensions__DOMoveY
                        (*(undefined4 *)(lVar2 + 0x20),0x3e0f5c29,uVar4,0,0);
      uVar4 = FUN_04d95e8c(uVar4,6,DAT_091dbeb0);
      uVar9 = DG_Tweening_TweenSettingsExtensions__Join(uVar9,uVar4,0);
      puVar6 = (undefined8 *)(lVar2 + 0x18);
      *puVar6 = uVar9;
      thunk_FUN_03f5d7b8(puVar6,uVar9);
      uVar4 = *puVar6;
      uVar9 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar9,lVar2,DAT_091e9218,0);
      DG_Tweening_TweenSettingsExtensions__AppendCallback(uVar4,uVar9,0);
      *(undefined8 *)(param_3 + 0xf0) = *puVar6;
      thunk_FUN_03f5d7b8((undefined8 *)(param_3 + 0xf0));
      uVar9 = *puVar6;
    }
    else {
      uVar9 = 0;
    }
    return uVar9;
  }
LAB_04112c48:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

