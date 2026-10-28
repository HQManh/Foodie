// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade.<StormOffRoutine>d__119$$MoveNext
// address: 0x40b2b1c
// body: available
// range: 0x40b2b1c-0x40b2eaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b2eac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 AnhPD_FoodOrder_HomeCustomerParade_<StormOffRoutine>d__119__MoveNext(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  float fVar13;
  
  if ((DAT_09515ef0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091eb228);
    FUN_03f5c2a4(&DAT_09191370);
    FUN_03f5c2a4(&DAT_0918cec0);
    DAT_09515ef0 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x28);
  uVar10 = 0;
  if (2 < iVar1) {
    uVar6 = 0xffffffff;
    if (iVar1 < 5) {
      if (iVar1 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (lVar8 == 0) goto LAB_040b2eac;
        uVar5 = AnhPD_FoodOrder_HomeCustomerParade__ExitRoutine
                          (lVar8,*(undefined8 *)(param_1 + 0x30),0);
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        thunk_FUN_03f5d7b8();
        uVar10 = 1;
        uVar6 = 4;
      }
      else if (iVar1 != 4) {
        return 0;
      }
    }
    else if (iVar1 == 5) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar8 == 0) goto LAB_040b2eac;
      uVar5 = AnhPD_FoodOrder_HomeCustomerParade__ExitRoutine
                        (lVar8,*(undefined8 *)(param_1 + 0x30),0);
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      thunk_FUN_03f5d7b8();
      uVar10 = 1;
      uVar6 = 6;
    }
    else if (iVar1 != 6) {
      return 0;
    }
LAB_040b2e94:
    *(undefined4 *)(param_1 + 0x10) = uVar6;
    return uVar10;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar11 = thunk_FUN_03f9944c(DAT_09191370);
    System_Object___ctor(lVar11,0);
    plVar12 = (long *)(param_1 + 0x38);
    *plVar12 = lVar11;
    thunk_FUN_03f5d7b8(plVar12,lVar11);
    lVar11 = *plVar12;
    if (lVar11 == 0) goto LAB_040b2eac;
    uVar2 = *(undefined1 *)(param_1 + 0x20);
    *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(param_1 + 0x28);
    *(undefined1 *)(lVar11 + 0x14) = uVar2;
    thunk_FUN_03f5d7b8();
    lVar11 = *(long *)(param_1 + 0x30);
    if (lVar11 == 0) goto LAB_040b2eac;
    *(undefined8 *)(lVar11 + 0x54) = *(undefined8 *)(lVar11 + 0x4c);
    lVar11 = *(long *)(param_1 + 0x30);
    if (lVar11 == 0) goto LAB_040b2eac;
    if (*(char *)(lVar11 + 0x40) != '\0') {
      if (lVar8 != 0) {
        uVar5 = AnhPD_FoodOrder_HomeCustomerParade__BrakeRoutine(lVar8,lVar11,0);
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        thunk_FUN_03f5d7b8();
        uVar6 = 1;
        uVar10 = 1;
        goto LAB_040b2e94;
      }
      goto LAB_040b2eac;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0;
      }
      lVar11 = *(long *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar11 != 0) {
        uVar5 = *(undefined8 *)(lVar11 + 0x38);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        bVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
        lVar7 = *(long *)(param_1 + 0x38);
        *(byte *)(lVar11 + 0x40) = bVar3 & 1;
        if (lVar7 != 0) {
          if (*(char *)(lVar7 + 0x14) != '\0') {
            if (lVar8 == 0) goto LAB_040b2eac;
            uVar4 = AnhPD_FoodOrder_HomeCustomerParade__get_CanJoinQueue(lVar8,0);
            if ((uVar4 & 1) != 0) {
              if ((*(long *)(param_1 + 0x30) != 0) &&
                 (lVar11 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar11 != 0)) {
                AnhPD_FoodOrder_Customer__ReleaseAngry(lVar11,0);
                uVar10 = 1;
                uVar5 = AnhPD_FoodOrder_HomeCustomerParade__QueueRoutine
                                  (lVar8,*(undefined8 *)(param_1 + 0x30),1,0);
                *(undefined8 *)(param_1 + 0x18) = uVar5;
                thunk_FUN_03f5d7b8();
                uVar6 = 3;
                goto LAB_040b2e94;
              }
              goto LAB_040b2eac;
            }
          }
          lVar11 = *(long *)(param_1 + 0x30);
          if (lVar11 != 0) {
            if (*(char *)(lVar11 + 0x40) == '\0') {
              if (*(long *)(lVar11 + 0x10) == 0) goto LAB_040b2eac;
              AnhPD_FoodOrder_Customer__ChangeState(*(long *)(lVar11 + 0x10),4,0,0,0);
            }
            if (lVar8 != 0) {
              uVar5 = AnhPD_FoodOrder_HomeCustomerParade__DescendRoutine
                                (lVar8,*(undefined8 *)(param_1 + 0x30),0);
              *(undefined8 *)(param_1 + 0x18) = uVar5;
              thunk_FUN_03f5d7b8();
              uVar10 = 1;
              uVar6 = 5;
              goto LAB_040b2e94;
            }
          }
        }
      }
      goto LAB_040b2eac;
    }
    lVar11 = *(long *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar11 == 0) goto LAB_040b2eac;
  }
  if (*(long *)(lVar11 + 0x10) != 0) {
    AnhPD_FoodOrder_Customer__HoldAngry(*(long *)(lVar11 + 0x10),0,0);
    lVar11 = *(long *)(param_1 + 0x38);
    fVar13 = (float)UnityEngine_Time__get_time(0);
    uVar5 = DAT_09177ab8;
    if ((lVar8 != 0) && (lVar11 != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x38);
      *(float *)(lVar11 + 0x10) = fVar13 + *(float *)(lVar8 + 0xc0);
      uVar5 = thunk_FUN_03f9944c(uVar5);
      FUN_053007d8(uVar5,uVar9,DAT_091eb228,0);
      uVar9 = thunk_FUN_03f9944c(DAT_0918cec0);
      UnityEngine_WaitUntil___ctor(uVar9,uVar5,0);
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar9);
      uVar10 = 1;
      uVar6 = 2;
      goto LAB_040b2e94;
    }
  }
LAB_040b2eac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

