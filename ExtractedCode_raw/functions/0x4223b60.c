// rea decompile_all
// name: AnhPD.FoodOrder.OrderPreviewLayoutZoom$$Zoom
// address: 0x4223b60
// body: available
// range: 0x4223b60-0x4223d0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4223d04 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4223d08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderPreviewLayoutZoom__Zoom
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  float fVar7;
  
  if ((DAT_09516d3e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091dbfd8);
    DAT_09516d3e = 1;
  }
  plVar5 = (long *)(param_4 + 0x38);
  if ((*plVar5 == 0) || (uVar1 = DG_Tweening_TweenExtensions__IsActive(*plVar5,0), (uVar1 & 1) == 0)
     ) {
    lVar3 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = UnityEngine_Transform__get_localScale(lVar3,0);
    lVar3 = DAT_09183190;
    *(undefined4 *)(param_4 + 0x40) = uVar6;
    *(undefined4 *)(param_4 + 0x44) = param_2;
    *(undefined4 *)(param_4 + 0x48) = param_3;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = DG_Tweening_DOTween__Sequence(0);
    uVar2 = FUN_04d9642c(uVar2,param_4,DAT_091dbfd8);
    uVar4 = UnityEngine_Component__get_transform(param_4,0);
    fVar7 = *(float *)(param_4 + 0x20);
    uVar4 = DG_Tweening_ShortcutExtensions__DOScale
                      (*(float *)(param_4 + 0x40) * fVar7,*(float *)(param_4 + 0x44) * fVar7,
                       *(float *)(param_4 + 0x48) * fVar7,*(undefined4 *)(param_4 + 0x24),uVar4,0);
    uVar4 = FUN_04d95e8c(uVar4,0x1b,DAT_091dbeb0);
    uVar2 = DG_Tweening_TweenSettingsExtensions__Append(uVar2,uVar4,0);
    uVar2 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                      (*(undefined4 *)(param_4 + 0x28),uVar2,0);
  }
  else {
    DG_Tweening_TweenExtensions__Kill(*plVar5,0,0);
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = DG_Tweening_DOTween__Sequence(0);
    uVar2 = FUN_04d9642c(uVar2,param_4,DAT_091dbfd8);
  }
  uVar4 = UnityEngine_Component__get_transform(param_4,0);
  uVar4 = DG_Tweening_ShortcutExtensions__DOScale
                    (*(undefined4 *)(param_4 + 0x40),*(undefined4 *)(param_4 + 0x44),
                     *(undefined4 *)(param_4 + 0x48),*(undefined4 *)(param_4 + 0x2c),uVar4,0);
  uVar4 = FUN_04d95e8c(uVar4,4,DAT_091dbeb0);
  uVar2 = DG_Tweening_TweenSettingsExtensions__Append(uVar2,uVar4,0);
  *(undefined8 *)(param_4 + 0x38) = uVar2;
  thunk_FUN_03f5d7b8(plVar5);
  return;
}

