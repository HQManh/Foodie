// rea decompile_all
// name: AnhPD.FoodOrder.DragItem$$RegisterCell
// address: 0x411160c
// body: available
// range: 0x411160c-0x4111887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4111884 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_DragItem__RegisterCell
               (undefined1 param_1 [16],undefined4 param_2,long param_3,long param_4,ulong param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_48;
  
  if ((DAT_09516200 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c87a0);
    FUN_03f5c2a4(&DAT_091c87a8);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd20);
    FUN_03f5c2a4(&DAT_0918cb90);
    FUN_03f5c2a4(&DAT_092189d0);
    DAT_09516200 = 1;
  }
  if (param_4 != 0) {
    local_48 = *(undefined8 *)(param_4 + 0x10);
    uVar1 = FUN_03f5c42c(DAT_0918cb90,&local_48);
    uVar1 = System_String__Format(DAT_092189d0,uVar1,0);
    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189140);
    }
    AnhPD_FoodOrder_PieceLedger__Step(param_3,uVar1,0);
    if (*(char *)(param_3 + 0xea) == '\0') {
      if (*(int *)(param_3 + 0x94) < 2) {
        uVar4 = *(undefined4 *)(param_4 + 0x18);
        param_2 = *(undefined4 *)(param_4 + 0x1c);
      }
      else {
        uVar4 = AnhPD_FoodOrder_IngCell__GetNextSlotPosition(param_4,0);
      }
      AnhPD_FoodOrder_IngCell__Add(param_4,param_3,0);
      *(long *)(param_3 + 0xa0) = param_4;
      thunk_FUN_03f5d7b8((long *)(param_3 + 0xa0),param_4);
      if ((param_5 & 1) == 0) {
        *(undefined4 *)(param_3 + 0xec) = 1;
        *(undefined4 *)(param_3 + 0x4c) = uVar4;
        *(undefined4 *)(param_3 + 0x50) = param_2;
        uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar1,param_3,DAT_091c87a8,0);
        AnhPD_FoodOrder_DragItemBase__Rewind(param_3,uVar1);
      }
      else {
        uVar1 = AnhPD_FoodOrder_DragItem__JumpToTargetTween(uVar4,param_2,0,0x3f800000,param_3,0);
        uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar3,param_3,DAT_091c87a0,0);
        FUN_04d956bc(uVar1,uVar3,DAT_091dbd20);
      }
      return;
    }
    AnhPD_FoodOrder_IngCell__Add(param_4,param_3,0);
    *(long *)(param_3 + 0xa0) = param_4;
    thunk_FUN_03f5d7b8((long *)(param_3 + 0xa0),param_4);
    *(undefined4 *)(param_3 + 0xec) = 1;
    lVar2 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_3);
    if (lVar2 != 0) {
      UnityEngine_Transform__get_position(lVar2,0);
      AnhPD_FoodOrder_DragItemBase__ClampSortingLayer(param_3);
      if (*(long *)(param_3 + 0xa0) != 0) {
        AnhPD_FoodOrder_IngCell__OnItemLanded(*(long *)(param_3 + 0xa0),param_3,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

