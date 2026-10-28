// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$Advance
// address: 0x40dc524
// body: available
// range: 0x40dc524-0x40dc787 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40dc77c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dc780 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dc784 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorGrid__Advance(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_78;
  undefined8 *puStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  
  if ((DAT_0951603f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175ad8);
    FUN_03f5c2a4(&DAT_091a2720);
    FUN_03f5c2a4(&DAT_091a2728);
    FUN_03f5c2a4(&DAT_091a2730);
    FUN_03f5c2a4(&DAT_091abe78);
    FUN_03f5c2a4(&DAT_091abe90);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e6990);
    FUN_03f5c2a4(&DAT_0918ede0);
    DAT_0951603f = 1;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (*(int *)(DAT_0918ede0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar4 = *(undefined8 **)(DAT_0918ede0 + 0xb8);
  lVar6 = puVar4[1];
  if (lVar6 == 0) {
    if (*(int *)(DAT_0918ede0 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar4 = *(undefined8 **)(DAT_0918ede0 + 0xb8);
    }
    uVar7 = *puVar4;
    lVar6 = thunk_FUN_03f9944c(DAT_09175ad8);
    FUN_06d4541c(lVar6,uVar7,DAT_091e6990,0);
    plVar2 = (long *)(*(long *)(DAT_0918ede0 + 0xb8) + 8);
    *plVar2 = lVar6;
    thunk_FUN_03f5d7b8(plVar2,lVar6);
  }
  if (lVar5 != 0) {
    FUN_057e280c(lVar5,lVar6,DAT_091abe90);
    AnhPD_FoodOrder_ConveyorGrid__RebuildOccupancy(param_1);
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_057e185c(&local_78,*(long *)(param_1 + 0x20),DAT_091abe78);
      local_50 = local_68;
      uStack_58 = puStack_70;
      local_60 = local_78;
      local_78 = 0;
      puStack_70 = &local_60;
LAB_040dc6b8:
      do {
        uVar3 = FUN_071bd28c(&local_60,DAT_091a2728);
        lVar5 = local_50;
        if ((uVar3 & 1) == 0) {
          FUN_071bd288(&local_60,DAT_091a2720);
          AnhPD_FoodOrder_ConveyorGrid__ReleaseFinishedSlots(param_1);
          return;
        }
        if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      } while (*(int *)(local_50 + 0x24) == 0);
      uVar7 = *(undefined8 *)(local_50 + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar7,0);
      if ((uVar3 & 1) != 0) goto code_r0x040dc6fc;
      goto LAB_040dc70c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
code_r0x040dc6fc:
  if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(char *)(*(long *)(lVar5 + 0x10) + 0xd1) == '\0') {
LAB_040dc70c:
    iVar1 = AnhPD_FoodOrder_ConveyorGrid__HighestReachableRow(param_1,lVar5);
    if (iVar1 < *(int *)(lVar5 + 0x24)) {
      AnhPD_FoodOrder_ConveyorGrid__SetOccupied(param_1,lVar5,0);
      *(int *)(lVar5 + 0x24) = iVar1;
      AnhPD_FoodOrder_ConveyorGrid__SetOccupied(param_1,lVar5,1);
    }
  }
  goto LAB_040dc6b8;
}

