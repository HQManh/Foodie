// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineView$$LateUpdate
// address: 0x420c31c
// body: available
// range: 0x420c31c-0x420c453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420c444 to 0x420ba30 AnhPD.FoodOrder.CustomerLineView$$KeepPeekOnScreen (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x420c448 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x420c450 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineView__LateUpdate
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_09516c36 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_09516c36 = 1;
  }
  uVar3 = *(undefined8 *)(param_4 + 0x110);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_4 + 0x110) != 0) {
    uVar1 = AnhPD_FoodOrder_OrderBoard__get_IsPeeking(*(long *)(param_4 + 0x110),0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    fVar4 = (float)AnhPD_FoodOrder_CustomerLineView__get_LinePos(param_4);
    fVar5 = fVar4 - *(float *)(param_4 + 0x124);
    fVar6 = param_2 - *(float *)(param_4 + 0x128);
    fVar7 = param_3 - *(float *)(param_4 + 300);
    if (fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6 < 9.9999994e-11) {
      return;
    }
    *(float *)(param_4 + 0x124) = fVar4;
    *(float *)(param_4 + 0x128) = param_2;
    *(float *)(param_4 + 300) = param_3;
    if (*(long *)(param_4 + 0x110) != 0) {
      plVar2 = (long *)UnityEngine_Component__get_transform(*(long *)(param_4 + 0x110),0);
      if ((plVar2 != (long *)0x0) && (*plVar2 != DAT_09189c98)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar2,DAT_09189c98,*(undefined8 *)(param_4 + 0x118));
      }
      AnhPD_FoodOrder_CustomerLineView__KeepPeekOnScreen
                (param_4,plVar2,*(undefined8 *)(param_4 + 0x118),*(char *)(param_4 + 0x120) != '\0',
                 1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

