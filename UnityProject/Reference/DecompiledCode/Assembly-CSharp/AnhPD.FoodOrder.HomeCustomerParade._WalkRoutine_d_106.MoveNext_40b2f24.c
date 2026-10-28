// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade.<WalkRoutine>d__106$$MoveNext
// address: 0x40b2f24
// body: available
// range: 0x40b2f24-0x40b3253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b3250 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong AnhPD_FoodOrder_HomeCustomerParade_<WalkRoutine>d__106__MoveNext(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar10;
  float fVar11;
  
  if ((DAT_09515ef1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091eb1d8);
    FUN_03f5c2a4(&DAT_09191338);
    FUN_03f5c2a4(&DAT_0918cec0);
    DAT_09515ef1 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x28);
  uVar2 = 0;
  uVar4 = 0xffffffff;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      lVar5 = thunk_FUN_03f9944c(DAT_09191338);
      System_Object___ctor(lVar5,0);
      plVar9 = (long *)(param_1 + 0x30);
      *plVar9 = lVar5;
      thunk_FUN_03f5d7b8(plVar9,lVar5);
      uVar2 = 0;
      if (*plVar9 == 0) goto LAB_040b3250;
      *(undefined8 *)(*plVar9 + 0x10) = *(undefined8 *)(param_1 + 0x20);
      uVar2 = thunk_FUN_03f5d7b8();
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar5 == 0)) goto LAB_040b3250;
      if (*(int *)(lVar5 + 0x30) == 1) {
        if (lVar7 == 0) goto LAB_040b3250;
        pfVar6 = (float *)(lVar7 + 0x84);
      }
      else {
        if (lVar7 == 0) goto LAB_040b3250;
        pfVar6 = (float *)(lVar7 + 0xa4);
      }
      fVar11 = *pfVar6;
      uVar2 = UnityEngine_Random__get_value(0);
      if (extraout_s0_00 < fVar11) {
        if ((*plVar9 != 0) && (lVar5 = *(long *)(*plVar9 + 0x10), lVar5 != 0)) {
          if (*(char *)(lVar5 + 0x75) == '\0') {
            *(undefined1 *)(lVar5 + 0x6e) = 1;
            uVar2 = AnhPD_FoodOrder_HomeCustomerParade__get_FirstTurnUpX(lVar7,0);
            if ((*plVar9 == 0) || (lVar7 = *(long *)(*plVar9 + 0x10), lVar7 == 0))
            goto LAB_040b3250;
            fVar10 = *(float *)(lVar7 + 0x4c);
            *(undefined4 *)(lVar5 + 0x58) = *(undefined4 *)(lVar7 + 0x34);
            uVar3 = DAT_09177ab8;
            fVar11 = extraout_s0_01;
            if (extraout_s0_01 <= fVar10) {
              fVar11 = fVar10;
            }
            *(float *)(lVar5 + 0x54) = fVar11;
            uVar8 = *(undefined8 *)(param_1 + 0x30);
            uVar3 = thunk_FUN_03f9944c(uVar3);
            FUN_053007d8(uVar3,uVar8,DAT_091eb1d8,0);
            uVar8 = thunk_FUN_03f9944c(DAT_0918cec0);
            UnityEngine_WaitUntil___ctor(uVar8,uVar3,0);
            *(undefined8 *)(param_1 + 0x18) = uVar8;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar8);
            uVar2 = 1;
            uVar4 = 2;
          }
          else {
            uVar3 = AnhPD_FoodOrder_HomeCustomerParade__BossVisitRoutine(lVar7,lVar5,0);
            *(undefined8 *)(param_1 + 0x18) = uVar3;
            thunk_FUN_03f5d7b8();
            uVar4 = 1;
            uVar2 = 1;
          }
          goto LAB_040b3190;
        }
        goto LAB_040b3250;
      }
    }
    else {
      if (iVar1 == 1) goto LAB_040b3190;
      if (iVar1 != 2) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (((*(long *)(param_1 + 0x30) == 0) ||
          (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar5 == 0)) ||
         (*(undefined1 *)(lVar5 + 0x6e) = 0, lVar7 == 0)) goto LAB_040b3250;
      if ((*(long *)(lVar7 + 0x140) != 0) &&
         (fVar11 = *(float *)(lVar5 + 0x4c),
         uVar2 = AnhPD_FoodOrder_HomeCustomerParade__get_BalkX(lVar7,0), fVar11 < extraout_s0)) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_040b3250;
        uVar3 = AnhPD_FoodOrder_HomeCustomerParade__BalkRoutine
                          (lVar7,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10),0);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        thunk_FUN_03f5d7b8();
        uVar2 = 1;
        uVar4 = 3;
        goto LAB_040b3190;
      }
      uVar2 = AnhPD_FoodOrder_HomeCustomerParade__get_CanJoinQueue(lVar7,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_040b3250;
        uVar3 = AnhPD_FoodOrder_HomeCustomerParade__QueueRoutine
                          (lVar7,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10),0,0);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        thunk_FUN_03f5d7b8();
        uVar2 = 1;
        uVar4 = 4;
        goto LAB_040b3190;
      }
    }
  }
  else {
    if (iVar1 == 3) goto LAB_040b3190;
    if (iVar1 != 4) {
      if (iVar1 != 5) {
        return 0;
      }
      goto LAB_040b3190;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  if ((*(long *)(param_1 + 0x30) == 0) || (lVar7 == 0)) {
LAB_040b3250:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar2);
  }
  uVar3 = AnhPD_FoodOrder_HomeCustomerParade__ExitRoutine
                    (lVar7,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10),0);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  thunk_FUN_03f5d7b8();
  uVar2 = 1;
  uVar4 = 5;
LAB_040b3190:
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return uVar2;
}

