// rea decompile_all
// name: AnhPD.FoodOrder.FCustomerLine$$Awake
// address: 0x4213590
// body: available
// range: 0x4213590-0x4213b07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42137f0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4213a68 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4213b00 to 0x420abc0 AnhPD.FoodOrder.CustomerLineView$$add_onBoardTapped (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4213b04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FCustomerLine__Awake(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  
  if ((DAT_09516c9d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174600);
    FUN_03f5c2a4(&DAT_09174d40);
    FUN_03f5c2a4(&DAT_09174e88);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091830c8);
    FUN_03f5c2a4(&DAT_091830d8);
    FUN_03f5c2a4(&DAT_091cc100);
    FUN_03f5c2a4(&DAT_091cc108);
    FUN_03f5c2a4(&DAT_091cc0c8);
    FUN_03f5c2a4(&DAT_091cc0d0);
    FUN_03f5c2a4(&DAT_091cc0d8);
    FUN_03f5c2a4(&DAT_091cc0e0);
    FUN_03f5c2a4(&DAT_091cc0e8);
    FUN_03f5c2a4(&DAT_091cc0f0);
    FUN_03f5c2a4(&DAT_091cc0f8);
    DAT_09516c9d = 1;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x28);
  uVar2 = thunk_FUN_03f9944c(DAT_091830d8);
  AnhPD_FoodOrder_CustomerLineModel___ctor(uVar2,uVar1);
  puVar5 = (undefined8 *)(param_1 + 0x38);
  *puVar5 = uVar2;
  thunk_FUN_03f5d7b8(puVar5,uVar2);
  uVar2 = *puVar5;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = thunk_FUN_03f9944c(DAT_091830c8);
  AnhPD_FoodOrder_CustomerLineController___ctor(lVar3,uVar2,uVar7);
  plVar6 = (long *)(param_1 + 0x30);
  *plVar6 = lVar3;
  thunk_FUN_03f5d7b8(plVar6,lVar3);
  if (*plVar6 != 0) {
    plVar8 = (long *)(*plVar6 + 0x20);
    lVar3 = *plVar8;
    uVar2 = thunk_FUN_03f9944c(DAT_09174600);
    FUN_070a8c30(uVar2,param_1,DAT_091cc0c8,0);
    lVar3 = System_Delegate__Combine(lVar3,uVar2,0);
    uVar2 = DAT_09174600;
    if (lVar3 == 0) {
      lVar4 = 0;
      *plVar8 = 0;
    }
    else {
      lVar4 = thunk_FUN_03f99350(lVar3,DAT_09174600);
      uVar7 = DAT_09174600;
      if (lVar4 == 0) goto LAB_042137e8;
      *plVar8 = lVar4;
      lVar4 = thunk_FUN_03f99350(lVar3,uVar7);
      uVar2 = uVar7;
      if (lVar4 == 0) goto LAB_042137e8;
    }
    thunk_FUN_03f5d7b8(plVar8,lVar4);
    if (*plVar6 == 0) goto LAB_04213b04;
    plVar8 = (long *)(*plVar6 + 0x28);
    lVar3 = *plVar8;
    uVar2 = thunk_FUN_03f9944c(DAT_09174e88);
    FUN_071ce50c(uVar2,param_1,DAT_091cc0d0,0);
    lVar3 = System_Delegate__Combine(lVar3,uVar2,0);
    uVar2 = DAT_09174e88;
    if (lVar3 == 0) {
      lVar4 = 0;
      *plVar8 = 0;
    }
    else {
      lVar4 = thunk_FUN_03f99350(lVar3,DAT_09174e88);
      uVar7 = DAT_09174e88;
      if (lVar4 == 0) {
LAB_042137e8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar3,uVar2);
      }
      *plVar8 = lVar4;
      lVar4 = thunk_FUN_03f99350(lVar3,uVar7);
      uVar2 = uVar7;
      if (lVar4 == 0) goto LAB_042137e8;
    }
    thunk_FUN_03f5d7b8(plVar8,lVar4);
    if (*plVar6 == 0) goto LAB_04213b04;
    plVar9 = (long *)(*plVar6 + 0x30);
    lVar3 = *plVar9;
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,param_1,DAT_091cc0d8,0);
    plVar8 = (long *)System_Delegate__Combine(lVar3,uVar2,0);
    lVar3 = DAT_09180e78;
    if (plVar8 == (long *)0x0) {
      *plVar9 = 0;
    }
    else if ((*plVar8 != DAT_09180e78) || (*plVar9 = (long)plVar8, *plVar8 != lVar3))
    goto LAB_04213a64;
    thunk_FUN_03f5d7b8(plVar9,plVar8);
    if (*plVar6 == 0) goto LAB_04213b04;
    plVar9 = (long *)(*plVar6 + 0x40);
    lVar3 = *plVar9;
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,param_1,DAT_091cc0e0,0);
    plVar8 = (long *)System_Delegate__Combine(lVar3,uVar2,0);
    lVar3 = DAT_09180e78;
    if (plVar8 == (long *)0x0) {
      *plVar9 = 0;
    }
    else if ((*plVar8 != DAT_09180e78) || (*plVar9 = (long)plVar8, *plVar8 != lVar3))
    goto LAB_04213a64;
    thunk_FUN_03f5d7b8(plVar9,plVar8);
    if (*plVar6 == 0) goto LAB_04213b04;
    plVar9 = (long *)(*plVar6 + 0x48);
    lVar3 = *plVar9;
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,param_1,DAT_091cc0e8,0);
    plVar8 = (long *)System_Delegate__Combine(lVar3,uVar2,0);
    lVar3 = DAT_09180e78;
    if (plVar8 == (long *)0x0) {
      *plVar9 = 0;
    }
    else if ((*plVar8 != DAT_09180e78) || (*plVar9 = (long)plVar8, *plVar8 != lVar3))
    goto LAB_04213a64;
    thunk_FUN_03f5d7b8(plVar9,plVar8);
    if (*plVar6 == 0) goto LAB_04213b04;
    plVar9 = (long *)(*plVar6 + 0x50);
    lVar3 = *plVar9;
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,param_1,DAT_091cc0f0,0);
    plVar8 = (long *)System_Delegate__Combine(lVar3,uVar2,0);
    lVar3 = DAT_09180e78;
    if (plVar8 == (long *)0x0) {
      *plVar9 = 0;
    }
    else if ((*plVar8 != DAT_09180e78) || (*plVar9 = (long)plVar8, *plVar8 != lVar3))
    goto LAB_04213a64;
    thunk_FUN_03f5d7b8(plVar9,plVar8);
    if (*plVar6 != 0) {
      plVar6 = (long *)(*plVar6 + 0x38);
      lVar3 = *plVar6;
      uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar2,param_1,DAT_091cc0f8,0);
      plVar8 = (long *)System_Delegate__Combine(lVar3,uVar2,0);
      lVar3 = DAT_09180e78;
      if (plVar8 == (long *)0x0) {
        *plVar6 = 0;
      }
      else if ((*plVar8 != DAT_09180e78) || (*plVar6 = (long)plVar8, *plVar8 != lVar3)) {
LAB_04213a64:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar8);
      }
      thunk_FUN_03f5d7b8(plVar6,plVar8);
      lVar3 = *(long *)(param_1 + 0x20);
      uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar2,param_1,DAT_091cc100,0);
      if (lVar3 != 0) {
        AnhPD_FoodOrder_CustomerLineView__add_onBoardCleared(lVar3,uVar2);
        lVar3 = *(long *)(param_1 + 0x20);
        uVar2 = thunk_FUN_03f9944c(DAT_09174d40);
        FUN_071cd244(uVar2,param_1,DAT_091cc108,0);
        if (lVar3 != 0) {
          AnhPD_FoodOrder_CustomerLineView__add_onBoardTapped(lVar3,uVar2);
          return;
        }
      }
    }
  }
LAB_04213b04:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

