// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade.<BalkRoutine>d__118$$MoveNext
// address: 0x40afe9c
// body: available
// range: 0x40afe9c-0x40b0247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b0244 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 AnhPD_FoodOrder_HomeCustomerParade_<BalkRoutine>d__118__MoveNext(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((DAT_09515ee2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091eb218);
    FUN_03f5c2a4(&DAT_091eb220);
    FUN_03f5c2a4(&DAT_09191368);
    FUN_03f5c2a4(&DAT_0918cec0);
    DAT_09515ee2 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x28);
  uVar2 = 0;
  if (2 < iVar1) {
    if (iVar1 - 4U < 2) {
      uVar5 = 0xffffffff;
    }
    else {
      if (iVar1 != 3) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((*(long *)(param_1 + 0x30) == 0) || (lVar7 == 0)) goto LAB_040b0244;
      uVar4 = AnhPD_FoodOrder_HomeCustomerParade__ExitRoutine
                        (lVar7,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10),0);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      thunk_FUN_03f5d7b8();
      uVar2 = 1;
      uVar5 = 4;
    }
    goto LAB_040b0224;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar6 = thunk_FUN_03f9944c(DAT_09191368);
    System_Object___ctor(lVar6,0);
    plVar9 = (long *)(param_1 + 0x30);
    *plVar9 = lVar6;
    thunk_FUN_03f5d7b8(plVar9,lVar6);
    if (*plVar9 != 0) {
      *(undefined8 *)(*plVar9 + 0x10) = *(undefined8 *)(param_1 + 0x20);
      thunk_FUN_03f5d7b8();
      if (*(long *)(param_1 + 0x30) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18) = *(undefined8 *)(param_1 + 0x28);
        thunk_FUN_03f5d7b8();
        if ((*(long *)(param_1 + 0x30) != 0) && (lVar7 != 0)) {
          lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
          uVar2 = AnhPD_FoodOrder_HomeCustomerParade__get_BalkSlot(lVar7,0);
          fVar10 = (float)AnhPD_FoodOrder_HomeCustomerParade__TurnUpX(lVar7,uVar2,0);
          fVar11 = (float)AnhPD_FoodOrder_HomeCustomerParade__get_BalkX(lVar7,0);
          if (fVar11 <= fVar10) {
            fVar10 = fVar11;
          }
          if (((*plVar9 != 0) && (lVar7 = *(long *)(*plVar9 + 0x10), lVar7 != 0)) && (lVar6 != 0)) {
            fVar11 = *(float *)(lVar7 + 0x4c);
            *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(lVar7 + 0x34);
            uVar4 = DAT_09177ab8;
            if (fVar10 <= fVar11) {
              fVar10 = fVar11;
            }
            *(float *)(lVar6 + 0x54) = fVar10;
            uVar8 = *(undefined8 *)(param_1 + 0x30);
            uVar4 = thunk_FUN_03f9944c(uVar4);
            FUN_053007d8(uVar4,uVar8,DAT_091eb218,0);
            uVar8 = thunk_FUN_03f9944c(DAT_0918cec0);
            UnityEngine_WaitUntil___ctor(uVar8,uVar4,0);
            *(undefined8 *)(param_1 + 0x18) = uVar8;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar8);
            uVar5 = 1;
            uVar2 = 1;
            goto LAB_040b0224;
          }
        }
      }
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 != 0) {
      fVar10 = (float)AnhPD_FoodOrder_HomeCustomerParade__get_BalkX(lVar7,0);
      fVar11 = (float)AnhPD_FoodOrder_HomeCustomerParade__get_StopLineY(lVar7,0);
      uVar4 = DAT_09177ab8;
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar6 != 0)) {
        fVar14 = *(float *)(lVar7 + 0xc4);
        fVar13 = 1.0;
        if (fVar14 <= 1.0) {
          fVar13 = fVar14;
        }
        fVar12 = 0.0;
        if (0.0 <= fVar14) {
          fVar12 = fVar13;
        }
        fVar13 = (float)*(undefined8 *)(lVar6 + 0x4c);
        fVar14 = (float)((ulong)*(undefined8 *)(lVar6 + 0x4c) >> 0x20);
        *(ulong *)(lVar6 + 0x54) =
             CONCAT44(fVar14 + (fVar11 - fVar14) * fVar12,fVar13 + (fVar10 - fVar13) * fVar12);
        uVar8 = *(undefined8 *)(param_1 + 0x30);
        uVar4 = thunk_FUN_03f9944c(uVar4);
        FUN_053007d8(uVar4,uVar8,DAT_091eb220,0);
        uVar8 = thunk_FUN_03f9944c(DAT_0918cec0);
        UnityEngine_WaitUntil___ctor(uVar8,uVar4,0);
        *(undefined8 *)(param_1 + 0x18) = uVar8;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar8);
        uVar2 = 1;
        uVar5 = 2;
        goto LAB_040b0224;
      }
    }
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 != 0) {
      uVar3 = AnhPD_FoodOrder_HomeCustomerParade__get_CanJoinQueue(lVar7,0);
      lVar6 = *(long *)(param_1 + 0x30);
      if ((uVar3 & 1) == 0) {
        if (lVar6 == 0) goto LAB_040b0244;
        uVar2 = 1;
        uVar4 = AnhPD_FoodOrder_HomeCustomerParade__StormOffRoutine
                          (lVar7,*(undefined8 *)(lVar6 + 0x10),1,0);
        *(undefined8 *)(param_1 + 0x18) = uVar4;
        thunk_FUN_03f5d7b8();
        uVar5 = 5;
      }
      else {
        if (lVar6 == 0) goto LAB_040b0244;
        uVar2 = 1;
        uVar4 = AnhPD_FoodOrder_HomeCustomerParade__QueueRoutine
                          (lVar7,*(undefined8 *)(lVar6 + 0x10),1,0);
        *(undefined8 *)(param_1 + 0x18) = uVar4;
        thunk_FUN_03f5d7b8();
        uVar5 = 3;
      }
LAB_040b0224:
      *(undefined4 *)(param_1 + 0x10) = uVar5;
      return uVar2;
    }
  }
LAB_040b0244:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

