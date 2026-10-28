// rea decompile_all
// name: AnhPD.FoodOrder.DragInteractionHandler$$OnItemLandedAtStation
// address: 0x41e816c
// body: available
// range: 0x41e816c-0x41e83a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e83a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_DragInteractionHandler__OnItemLandedAtStation
               (long param_1,long param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_09516b14 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd520);
    FUN_03f5c2a4(&DAT_09184b58);
    FUN_03f5c2a4(&DAT_091ac690);
    FUN_03f5c2a4(&DAT_091ac680);
    FUN_03f5c2a4(&DAT_0917c0a8);
    FUN_03f5c2a4(&DAT_09189140);
    DAT_09516b14 = 1;
  }
  local_40 = 0;
  local_38 = 0;
  local_48 = (long *)0x0;
  if ((param_2 == 0) || (param_3 == (long *)0x0)) goto LAB_041e83a0;
  uVar8 = *(undefined8 *)(param_2 + 0x78);
  local_38 = (**(code **)(*param_3 + 0x1a8))(param_3,uVar8,*(undefined8 *)(*param_3 + 0x1b0));
  uVar3 = AnhPD_FoodOrder_InteractVector__get_IsValid(&local_38,0);
  if ((uVar3 & 1) == 0) {
    AnhPD_FoodOrder_DragInteractionSystem__HandleDropFallback
              (*(undefined8 *)(param_1 + 0x18),param_2);
  }
  else {
    (**(code **)(*param_3 + 0x1f8))(param_3,local_38,*(undefined8 *)(*param_3 + 0x200));
    local_40 = 0;
    local_48 = param_3;
    thunk_FUN_03f5d7b8(&local_48,param_3);
    local_40 = uVar8;
    thunk_FUN_03f5d7b8(&local_40,uVar8);
    uVar8 = local_40;
    plVar5 = local_48;
    if (*(int *)(DAT_09184b58 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04b79614(plVar5,uVar8,DAT_091cd520);
    uVar8 = UnityEngine_Object__GetName(param_3,0);
    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189140);
    }
    AnhPD_FoodOrder_PieceLedger__Finish(param_2,1,uVar8,param_3);
    lVar7 = *(long *)(param_1 + 0x20);
    lVar4 = thunk_FUN_03f9944c(DAT_0917c0a8);
    FUN_057e0400(lVar4,DAT_091ac680);
    lVar2 = DAT_091ac690;
    if (lVar4 == 0) goto LAB_041e83a0;
    lVar6 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_041e83a0;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      plVar5 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
      *plVar5 = param_2;
      thunk_FUN_03f5d7b8(plVar5,param_2);
    }
    else {
      FUN_057e0c68(lVar4,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    if (lVar7 == 0) goto LAB_041e83a0;
    AnhPD_FoodOrder_SpawnService__DespawnAll(lVar7,lVar4);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    AnhPD_FoodOrder_AreaService__RefreshCellDishes(*(long *)(param_1 + 0x18),0);
    return;
  }
LAB_041e83a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

