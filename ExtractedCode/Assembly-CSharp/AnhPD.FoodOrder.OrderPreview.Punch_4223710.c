// rea decompile_all
// name: AnhPD.FoodOrder.OrderPreview$$Punch
// address: 0x4223710
// body: available
// range: 0x4223710-0x422383b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4223834 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4223838 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderPreview__Punch
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  float fVar7;
  
  if ((DAT_09516d36 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091dbfe8);
    DAT_09516d36 = 1;
  }
  lVar1 = AnhPD_FoodOrder_OrderPreview__get_PunchTarget(param_4);
  plVar5 = (long *)(param_4 + 0x58);
  if ((*plVar5 == 0) || (uVar2 = DG_Tweening_TweenExtensions__IsActive(*plVar5,0), (uVar2 & 1) == 0)
     ) {
    if (lVar1 == 0) goto LAB_04223838;
    uVar6 = UnityEngine_Transform__get_localScale(lVar1,0);
    *(undefined4 *)(param_4 + 0x60) = uVar6;
    *(undefined4 *)(param_4 + 100) = param_2;
    *(undefined4 *)(param_4 + 0x68) = param_3;
  }
  else {
    DG_Tweening_TweenExtensions__Kill(*plVar5,0,0);
    if (lVar1 == 0) {
LAB_04223838:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Transform__set_localScale
              (*(undefined4 *)(param_4 + 0x60),*(undefined4 *)(param_4 + 100),
               *(undefined4 *)(param_4 + 0x68),lVar1,0);
  }
  if (DAT_09515faa == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515faa = '\x01';
  }
  fVar7 = *(float *)(param_4 + 0x30);
  lVar4 = *(long *)(DAT_0918cbd0 + 0xb8);
  uVar3 = DG_Tweening_ShortcutExtensions__DOPunchScale
                    (*(float *)(lVar4 + 0x18) * fVar7,*(float *)(lVar4 + 0x1c) * fVar7,
                     *(float *)(lVar4 + 0x20) * fVar7,*(undefined4 *)(param_4 + 0x34),
                     *(undefined4 *)(param_4 + 0x3c),lVar1,*(undefined4 *)(param_4 + 0x38),0);
  uVar3 = FUN_04d9642c(uVar3,param_4,DAT_091dbfe8);
  *(undefined8 *)(param_4 + 0x58) = uVar3;
  thunk_FUN_03f5d7b8(plVar5);
  return;
}

