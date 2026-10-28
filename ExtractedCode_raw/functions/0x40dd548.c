// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$ReleaseFinishedSlots
// address: 0x40dd548
// body: available
// range: 0x40dd548-0x40dd7b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40dd7b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorGrid__ReleaseFinishedSlots(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_09516040 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2720);
    FUN_03f5c2a4(&DAT_091a2728);
    FUN_03f5c2a4(&DAT_091a2730);
    FUN_03f5c2a4(&DAT_091abe60);
    FUN_03f5c2a4(&DAT_091abe68);
    FUN_03f5c2a4(&DAT_091abe78);
    FUN_03f5c2a4(&DAT_091abe98);
    FUN_03f5c2a4(&DAT_091abea0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516040 = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar9,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 != 0) {
    iVar8 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (0 < iVar8) {
      System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar8,0);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      iVar8 = *(int *)(*(long *)(param_1 + 0x20) + 0x18);
      if (-1 < iVar8 + -1) {
        do {
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_040dd7b4;
          iVar8 = iVar8 + -1;
          lVar5 = FUN_057e0998(*(long *)(param_1 + 0x20),iVar8,DAT_091abea0);
          if (lVar5 == 0) goto LAB_040dd7b4;
          if (((*(int *)(lVar5 + 0x24) == 0) &&
              (uVar3 = AnhPD_FoodOrder_ConveyorGrid__IsSettled(param_1,lVar5), (uVar3 & 1) != 0)) &&
             ((*(long *)(lVar5 + 0x30) == 0 ||
              (uVar3 = AnhPD_FoodOrder_ConveyorChain__get_IsReady(), (uVar3 & 1) != 0)))) {
            lVar2 = DAT_091abe60;
            lVar4 = *(long *)(param_1 + 0x38);
            if (lVar4 == 0) goto LAB_040dd7b4;
            lVar6 = *(long *)(lVar4 + 0x10);
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar6 == 0) goto LAB_040dd7b4;
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
              *plVar7 = lVar5;
              thunk_FUN_03f5d7b8(plVar7,lVar5);
            }
            else {
              FUN_057e0c68(lVar4,lVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
          }
        } while (0 < iVar8);
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        FUN_057e185c(&local_48,*(long *)(param_1 + 0x38),DAT_091abe78);
        while (uVar3 = FUN_071bd28c(&local_48,DAT_091a2728), (uVar3 & 1) != 0) {
          AnhPD_FoodOrder_ConveyorGrid__ReleaseSlot(param_1,local_38);
        }
        FUN_071bd288(&local_48,DAT_091a2720);
        lVar5 = *(long *)(param_1 + 0x38);
        if (lVar5 != 0) {
          iVar8 = *(int *)(lVar5 + 0x18);
          *(undefined4 *)(lVar5 + 0x18) = 0;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (iVar8 < 1) {
            return;
          }
          System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar8,0);
          return;
        }
      }
    }
  }
LAB_040dd7b4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

