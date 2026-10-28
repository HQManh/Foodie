// rea decompile_all
// name: AnhPD.FoodOrder.IngCellFinder$$DebugPending
// address: 0x4233b68
// body: available
// range: 0x4233b68-0x4233eaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4233dac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4233ea4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4233ea8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4233eac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_IngCellFinder__DebugPending(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  float local_64;
  
  if ((DAT_09516e29 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2098);
    FUN_03f5c2a4(&DAT_091a20a0);
    FUN_03f5c2a4(&DAT_091a20a8);
    FUN_03f5c2a4(&DAT_091aac08);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091aac18);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_091affe0);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f8a38);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_091fae38);
    FUN_03f5c2a4(&DAT_091f9620);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09516e29 = 1;
  }
  local_64 = 0.0;
  local_80 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_a0 = 0;
  local_88 = 0;
  uStack_90 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x30) + 0x18) == 0) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_04233dac;
      if (*(int *)(*(long *)(param_1 + 0x40) + 0x18) == 0) {
        return DAT_091f8a38;
      }
    }
    plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
    System_Text_StringBuilder___ctor(plVar3,0);
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 != 0) {
      iVar2 = 0;
      while (iVar2 < *(int *)(lVar6 + 0x18)) {
        if (plVar3 == (long *)0x0) goto LAB_04233dac;
        puVar1 = &DAT_091f5700;
        if (iVar2 != 0) {
          puVar1 = &DAT_091f86e8;
        }
        lVar6 = System_Text_StringBuilder__Append(plVar3,*puVar1,0);
        if (((*(long *)(param_1 + 0x30) == 0) ||
            (uVar4 = FUN_057e0998(*(long *)(param_1 + 0x30),iVar2,DAT_091b0610), lVar6 == 0)) ||
           (lVar6 = System_Text_StringBuilder__Append(lVar6,uVar4,0), lVar6 == 0))
        goto LAB_04233dac;
        lVar6 = System_Text_StringBuilder__Append(lVar6,0x40,0);
        fVar7 = (float)UnityEngine_Time__get_time(0);
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_04233dac;
        local_64 = (float)FUN_05863308(*(long *)(param_1 + 0x38),iVar2,DAT_091affe0);
        local_64 = fVar7 - local_64;
        uVar4 = System_Single__ToString(&local_64,DAT_091f9620,0);
        if ((lVar6 == 0) || (lVar6 = System_Text_StringBuilder__Append(lVar6,uVar4,0), lVar6 == 0))
        goto LAB_04233dac;
        System_Text_StringBuilder__Append(lVar6,0x73,0);
        lVar6 = *(long *)(param_1 + 0x30);
        iVar2 = iVar2 + 1;
        if (lVar6 == 0) goto LAB_04233dac;
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        FUN_05706288(&local_c8,*(long *)(param_1 + 0x40),DAT_091aac08);
        local_80 = local_a8;
        puStack_98 = puStack_c0;
        local_a0 = local_c8;
        local_88 = uStack_b0;
        uStack_90 = local_b8;
        local_c8 = 0;
        puStack_c0 = &local_a0;
        while (uVar5 = FUN_0718b194(&local_a0,DAT_091a20a0), uVar4 = local_88, (uVar5 & 1) != 0) {
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar2 = System_Text_StringBuilder__get_Length(plVar3,0);
          puVar1 = &DAT_091f86e8;
          if (iVar2 < 1) {
            puVar1 = &DAT_091f5700;
          }
          lVar6 = System_Text_StringBuilder__Append(plVar3,*puVar1,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = System_Text_StringBuilder__Append(lVar6,uVar4,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          System_Text_StringBuilder__Append(lVar6,DAT_091fae38,0);
        }
        FUN_0718b190(&local_a0,DAT_091a2098);
        if (plVar3 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          return uVar4;
        }
      }
    }
  }
LAB_04233dac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

