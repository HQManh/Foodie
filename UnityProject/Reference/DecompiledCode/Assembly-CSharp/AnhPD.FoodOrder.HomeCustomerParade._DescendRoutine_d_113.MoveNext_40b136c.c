// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade.<DescendRoutine>d__113$$MoveNext
// address: 0x40b136c
// body: available
// range: 0x40b136c-0x40b1513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b1510 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_HomeCustomerParade_<DescendRoutine>d__113__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_09515ee8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091eb200);
    FUN_03f5c2a4(&DAT_09191350);
    FUN_03f5c2a4(&DAT_0918cec0);
    DAT_09515ee8 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar3 == 0)) goto LAB_040b1510;
      *(undefined1 *)(lVar3 + 0x48) = 0;
    }
LAB_040b14f8:
    return iVar1 == 0;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  lVar3 = thunk_FUN_03f9944c(DAT_09191350);
  System_Object___ctor(lVar3,0);
  plVar6 = (long *)(param_1 + 0x30);
  *plVar6 = lVar3;
  thunk_FUN_03f5d7b8(plVar6,lVar3);
  if (*plVar6 != 0) {
    *(undefined8 *)(*plVar6 + 0x10) = *(undefined8 *)(param_1 + 0x20);
    thunk_FUN_03f5d7b8();
    if (((*(long *)(param_1 + 0x30) != 0) &&
        (lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar3 != 0)) &&
       (*(undefined1 *)(lVar3 + 0x48) = 1, lVar4 != 0)) {
      fVar7 = (float)AnhPD_FoodOrder_HomeCustomerParade__get_TurnDownX(lVar4,0);
      if ((*plVar6 != 0) && (lVar4 = *(long *)(*plVar6 + 0x10), lVar4 != 0)) {
        fVar8 = *(float *)(lVar4 + 0x4c);
        *(undefined4 *)(lVar3 + 0x58) = *(undefined4 *)(lVar4 + 0x34);
        uVar2 = DAT_09177ab8;
        if (fVar7 <= fVar8) {
          fVar7 = fVar8;
        }
        *(float *)(lVar3 + 0x54) = fVar7;
        uVar5 = *(undefined8 *)(param_1 + 0x30);
        uVar2 = thunk_FUN_03f9944c(uVar2);
        FUN_053007d8(uVar2,uVar5,DAT_091eb200,0);
        uVar5 = thunk_FUN_03f9944c(DAT_0918cec0);
        UnityEngine_WaitUntil___ctor(uVar5,uVar2,0);
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar5);
        *(undefined4 *)(param_1 + 0x10) = 1;
        goto LAB_040b14f8;
      }
    }
  }
LAB_040b1510:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

