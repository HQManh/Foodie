// rea decompile_all
// name: AnhPD.FoodOrder.ServePlate$$ServeTo
// address: 0x40bcb94
// body: available
// range: 0x40bcb94-0x40bce9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40bce10 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40bce9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServePlate__ServeTo
               (long param_1,undefined8 param_2,long param_3,long param_4,long param_5,long param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((DAT_09515f5e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd28);
    FUN_03f5c2a4(&DAT_091efa08);
    FUN_03f5c2a4(&DAT_091943e8);
    DAT_09515f5e = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091943e8);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    plVar6 = (long *)(lVar1 + 0x10);
    *plVar6 = param_4;
    thunk_FUN_03f5d7b8(plVar6,param_4);
    *(long *)(lVar1 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),param_1);
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20),param_2);
    plVar7 = (long *)(lVar1 + 0x28);
    *plVar7 = param_5;
    thunk_FUN_03f5d7b8(plVar7,param_5);
    plVar5 = (long *)(lVar1 + 0x30);
    *plVar5 = param_6;
    thunk_FUN_03f5d7b8(plVar5,param_6);
    uVar4 = *(undefined8 *)(param_1 + 0xa8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar2 & 1) == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x18))
                  (*(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x28));
      }
      lVar1 = *plVar6;
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      }
      lVar1 = *plVar7;
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      }
      lVar1 = *plVar5;
      if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x040bce80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        return;
      }
      return;
    }
    *(undefined1 *)(param_1 + 0xb1) = 1;
    if (*(char *)(param_1 + 0xb0) != '\0') {
      AnhPD_FoodOrder_ServePlate__SetVisualsEnabled(param_1,1);
      *(undefined1 *)(param_1 + 0xb0) = 0;
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      DG_Tweening_TweenExtensions__Complete(*(long *)(param_1 + 0x58),0);
    }
    uVar4 = UnityEngine_Component__get_transform(param_1,0);
    DG_Tweening_ShortcutExtensions__DOKill(uVar4,0,0);
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x18))(*(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x28))
      ;
    }
    lVar3 = *(long *)(param_1 + 0xa8);
    if (lVar3 != 0) {
      uVar4 = AnhPD_FoodOrder_DragItemBase__get_Tf(lVar3,0);
      DG_Tweening_ShortcutExtensions__DOComplete(uVar4,0,0);
      uVar4 = AnhPD_FoodOrder_DragItemBase__get_Tf(lVar3,0);
      if (DAT_09515faa == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515faa = '\x01';
      }
      uVar8 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x18);
      uVar4 = DG_Tweening_ShortcutExtensions__DOPunchPosition
                        ((float)uVar8 * 0.3,(float)((ulong)uVar8 >> 0x20) * 0.3,
                         *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x20) * 0.3,0x3e99999a,
                         0x3f000000,uVar4,1,0,0);
      uVar8 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar8,lVar1,DAT_091efa08,0);
      FUN_04d956bc(uVar4,uVar8,DAT_091dbd28);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

