// rea decompile_all
// name: AnhPD.FoodOrder.ServePlate$$Adopt
// address: 0x40bc64c
// body: available
// range: 0x40bc64c-0x40bc81f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40bc7d4 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40bc81c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServePlate__Adopt(long param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((DAT_09515f5a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd20);
    FUN_03f5c2a4(&DAT_091efa00);
    FUN_03f5c2a4(&DAT_091943e0);
    DAT_09515f5a = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091943e0);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_1);
    plVar6 = (long *)(lVar1 + 0x18);
    *plVar6 = param_4;
    thunk_FUN_03f5d7b8(plVar6,param_4);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(param_2,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    *(long *)(param_1 + 0xa8) = param_2;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0xa8),param_2);
    if (param_2 != 0) {
      AnhPD_FoodOrder_DragItem__MarkOnDishRow(param_2,0);
      if ((param_3 & 1) == 0) {
        AnhPD_FoodOrder_ServePlate__AttachItem(param_1);
        lVar1 = *plVar6;
        if (lVar1 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x040bc804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        return;
      }
      *(undefined1 *)(param_1 + 0xb2) = 1;
      lVar3 = AnhPD_FoodOrder_ServePlate__get_ItemAnchor(param_1);
      if (lVar3 != 0) {
        UnityEngine_Transform__get_position(lVar3,0);
        uVar4 = AnhPD_FoodOrder_DragItem__JumpToTargetTween(param_2,0,0);
        uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar5,lVar1,DAT_091efa00,0);
        FUN_04d956bc(uVar4,uVar5,DAT_091dbd20);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

