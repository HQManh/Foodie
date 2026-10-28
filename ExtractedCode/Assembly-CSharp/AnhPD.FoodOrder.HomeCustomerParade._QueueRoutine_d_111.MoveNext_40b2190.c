// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade.<QueueRoutine>d__111$$MoveNext
// address: 0x40b2190
// body: available
// range: 0x40b2190-0x40b2673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b2670 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_HomeCustomerParade_<QueueRoutine>d__111__MoveNext(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float extraout_s0;
  float extraout_s0_00;
  float fVar14;
  
  if ((DAT_09515eed & 1) == 0) {
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091b2f40);
    FUN_03f5c2a4(&DAT_091b2f78);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091eb1e0);
    FUN_03f5c2a4(&DAT_091eb1e8);
    FUN_03f5c2a4(&DAT_09191340);
    FUN_03f5c2a4(&DAT_0918cec0);
    DAT_09515eed = 1;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x28);
  lVar3 = 0;
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      lVar3 = thunk_FUN_03f9944c(DAT_09191340);
      System_Object___ctor(lVar3,0);
      plVar9 = (long *)(param_1 + 0x38);
      *plVar9 = lVar3;
      thunk_FUN_03f5d7b8(plVar9,lVar3);
      lVar3 = 0;
      if (*plVar9 == 0) goto LAB_040b2670;
      *(undefined8 *)(*plVar9 + 0x10) = *(undefined8 *)(param_1 + 0x20);
      lVar3 = thunk_FUN_03f5d7b8();
      lVar11 = DAT_091b2f40;
      if ((((*(long *)(param_1 + 0x38) == 0) || (lVar7 == 0)) ||
          (lVar3 = *(long *)(lVar7 + 0x128), lVar3 == 0)) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar5 == 0)) goto LAB_040b2670;
      lVar6 = *(long *)(lVar3 + 0x10);
      uVar1 = *(uint *)(lVar3 + 0x18);
      iVar2 = *(int *)(lVar3 + 0x1c);
      *(uint *)(lVar5 + 0x68) = uVar1;
      *(int *)(lVar3 + 0x1c) = iVar2 + 1;
      if (lVar6 == 0) goto LAB_040b2670;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *plVar4 = lVar5;
        lVar3 = thunk_FUN_03f5d7b8(plVar4);
      }
      else {
        lVar3 = FUN_057e0c68(lVar3,lVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      lVar11 = *(long *)(param_1 + 0x38);
      if (*(char *)(param_1 + 0x30) == '\0') {
        if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x10), lVar11 != 0)) {
          *(undefined1 *)(lVar11 + 0x6d) = 1;
          lVar3 = AnhPD_FoodOrder_HomeCustomerParade__TurnUpX
                            (lVar7,*(undefined4 *)(lVar11 + 0x68),0);
          if ((*plVar9 != 0) && (lVar11 = *(long *)(*plVar9 + 0x10), lVar11 != 0)) {
            fVar14 = extraout_s0;
            if (extraout_s0 <= *(float *)(lVar11 + 0x4c)) {
              fVar14 = *(float *)(lVar11 + 0x4c);
            }
            lVar3 = AnhPD_FoodOrder_HomeCustomerParade__SlotX
                              (lVar7,*(undefined4 *)(lVar11 + 0x68),0);
            if (extraout_s0_00 <= fVar14) {
              fVar14 = extraout_s0_00;
            }
            if ((*plVar9 != 0) && (lVar7 = *(long *)(*plVar9 + 0x10), lVar7 != 0)) {
              *(float *)(lVar7 + 0x54) = fVar14;
              *(undefined4 *)(lVar7 + 0x58) = *(undefined4 *)(lVar7 + 0x34);
              uVar8 = *(undefined8 *)(param_1 + 0x38);
              uVar10 = thunk_FUN_03f9944c(DAT_09177ab8);
              FUN_053007d8(uVar10,uVar8,DAT_091eb1e8,0);
              uVar8 = thunk_FUN_03f9944c(DAT_0918cec0);
              UnityEngine_WaitUntil___ctor(uVar8,uVar10,0);
              *(undefined8 *)(param_1 + 0x18) = uVar8;
              thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar8);
              uVar12 = 1;
              lVar3 = 1;
              goto LAB_040b2578;
            }
          }
        }
        goto LAB_040b2670;
      }
      if (lVar11 == 0) goto LAB_040b2670;
    }
    else {
      if (iVar2 != 1) {
        if (iVar2 != 2) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if ((*(long *)(param_1 + 0x38) == 0) ||
           (lVar11 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar11 == 0)) goto LAB_040b2670;
        if (*(char *)(lVar11 + 0x40) != '\0') {
          if (lVar7 != 0) {
            uVar10 = AnhPD_FoodOrder_HomeCustomerParade__BrakeRoutine(lVar7,lVar11,0);
            *(undefined8 *)(param_1 + 0x18) = uVar10;
            thunk_FUN_03f5d7b8();
            lVar3 = 1;
            uVar12 = 3;
            goto LAB_040b2578;
          }
          goto LAB_040b2670;
        }
        goto LAB_040b22b8;
      }
      lVar11 = *(long *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((lVar11 == 0) || (*(long *)(lVar11 + 0x10) == 0)) goto LAB_040b2670;
      *(undefined1 *)(*(long *)(lVar11 + 0x10) + 0x6d) = 0;
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((lVar11 != 0) && (lVar7 != 0)) {
      uVar12 = AnhPD_FoodOrder_HomeCustomerParade__SlotX(lVar7,*(undefined4 *)(lVar11 + 0x68),0);
      uVar13 = AnhPD_FoodOrder_HomeCustomerParade__get_StopLineY(lVar7,0);
      *(undefined4 *)(lVar11 + 0x54) = uVar12;
      *(undefined4 *)(lVar11 + 0x58) = uVar13;
      uVar8 = *(undefined8 *)(param_1 + 0x38);
      uVar10 = thunk_FUN_03f9944c(DAT_09177ab8);
      FUN_053007d8(uVar10,uVar8,DAT_091eb1e0,0);
      uVar8 = thunk_FUN_03f9944c(DAT_0918cec0);
      UnityEngine_WaitUntil___ctor(uVar8,uVar10,0);
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar8);
      lVar3 = 1;
      uVar12 = 2;
      goto LAB_040b2578;
    }
  }
  else {
    if (1 < iVar2 - 3U) {
      if (iVar2 == 5) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if ((*(long *)(param_1 + 0x38) != 0) && (lVar7 != 0)) {
          lVar3 = AnhPD_FoodOrder_HomeCustomerParade__LeaveQueue
                            (lVar7,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10),0);
          if ((*(long *)(param_1 + 0x38) != 0) &&
             (lVar11 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar11 != 0)) {
            uVar10 = *(undefined8 *)(lVar11 + 0x38);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar3 = UnityEngine_Object__op_Implicit(uVar10,0);
            lVar5 = *(long *)(param_1 + 0x38);
            *(byte *)(lVar11 + 0x40) = (byte)lVar3 & 1;
            if ((lVar5 != 0) && (lVar11 = *(long *)(lVar5 + 0x10), lVar11 != 0)) {
              if (*(char *)(lVar11 + 0x40) == '\0') {
                lVar3 = 0;
                if (*(long *)(lVar11 + 0x10) == 0) goto LAB_040b2670;
                lVar3 = AnhPD_FoodOrder_Customer__ChangeState(*(long *)(lVar11 + 0x10),4,0,0,0);
                lVar5 = *(long *)(param_1 + 0x38);
                if (lVar5 == 0) goto LAB_040b2670;
              }
              uVar10 = AnhPD_FoodOrder_HomeCustomerParade__DescendRoutine
                                 (lVar7,*(undefined8 *)(lVar5 + 0x10),0);
              *(undefined8 *)(param_1 + 0x18) = uVar10;
              thunk_FUN_03f5d7b8();
              lVar3 = 1;
              uVar12 = 6;
              goto LAB_040b2578;
            }
          }
        }
        goto LAB_040b2670;
      }
      if (iVar2 != 6) {
        return 0;
      }
      uVar12 = 0xffffffff;
      goto LAB_040b2578;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_040b22b8:
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar11 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar11 != 0)) {
      if (*(int *)(lVar11 + 0x68) < 1) {
        if (lVar7 == 0) goto LAB_040b2670;
        uVar10 = AnhPD_FoodOrder_HomeCustomerParade__EatRoutine(lVar7,lVar11,0);
        *(undefined8 *)(param_1 + 0x18) = uVar10;
        thunk_FUN_03f5d7b8();
        lVar3 = 1;
        uVar12 = 5;
      }
      else {
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        lVar3 = 1;
        uVar12 = 4;
      }
LAB_040b2578:
      *(undefined4 *)(param_1 + 0x10) = uVar12;
      return lVar3;
    }
  }
LAB_040b2670:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(lVar3);
}

