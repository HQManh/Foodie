// rea decompile_all
// name: CakeOrder.InGame.UI.UIComboBar$$Update
// address: 0x42b4d90
// body: available
// range: 0x42b4d90-0x42b501f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b501c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UI_UIComboBar__Update(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double __x;
  float fVar11;
  double local_38;
  
  if ((DAT_095172c4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f7250);
    DAT_095172c4 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 == 0) goto LAB_042b501c;
  if (*(char *)(lVar3 + 0x48) != '\0') {
    plVar5 = *(long **)(param_1 + 0x80);
    fVar6 = (float)CakeOrder_InGame_InGameComboMechanicControl__get_ComboActivationCountdownProgress
                             (lVar3,0);
    if ((*(long *)(param_1 + 0x80) != 0) && (plVar5 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x042b4e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x428))
                ((1.0 - fVar6) * *(float *)(*(long *)(param_1 + 0x80) + 0x118),plVar5,
                 *(undefined8 *)(*plVar5 + 0x430));
      return;
    }
    goto LAB_042b501c;
  }
  fVar11 = *(float *)(param_1 + 0xc4);
  fVar7 = (float)CakeOrder_InGame_InGameComboMechanicControl__get_TotalProgress(lVar3,0);
  fVar6 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
  plVar5 = *(long **)(param_1 + 0x80);
  fVar8 = fVar6 * *(float *)(param_1 + 0xc0) * 50.0;
  fVar6 = 1.0;
  if (fVar8 <= 1.0) {
    fVar6 = fVar8;
  }
  fVar9 = 0.0;
  if (0.0 <= fVar8) {
    fVar9 = fVar6;
  }
  *(float *)(param_1 + 0xc4) = fVar11 + (fVar7 - fVar11) * fVar9;
  if (plVar5 == (long *)0x0) goto LAB_042b501c;
  (**(code **)(*plVar5 + 0x428))(plVar5,*(undefined8 *)(*plVar5 + 0x430));
  if (*(long *)(param_1 + 0x78) == 0) goto LAB_042b501c;
  fVar6 = *(float *)(param_1 + 0xc4);
  iVar1 = CakeOrder_InGame_InGameComboMechanicControl__get_StepRequiredToActivate
                    (*(long *)(param_1 + 0x78),0);
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  fVar6 = (fVar6 / (float)iVar1) * 100.0;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  __x = (double)fVar6;
  dVar10 = modf(__x,&local_38);
  if (0.0 <= fVar6) {
    if (dVar10 == 0.5) {
      dVar10 = 1.0;
      goto LAB_042b4f68;
    }
    local_38 = (double)(long)(__x + 0.5);
  }
  else if (dVar10 == -0.5) {
    dVar10 = -1.0;
LAB_042b4f68:
    if (((long)local_38 & 1U) != 0) {
      local_38 = local_38 + dVar10;
    }
  }
  else {
    local_38 = (double)(long)(__x + -0.5);
  }
  iVar1 = -0x80000000;
  if (local_38 != INFINITY) {
    iVar1 = (int)local_38;
  }
  if (iVar1 == *(int *)(param_1 + 200)) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0x88);
  *(int *)(param_1 + 200) = iVar1;
  uVar4 = System_Int32__ToString((int *)(param_1 + 200),0);
  uVar4 = System_String__Concat(uVar4,DAT_091f7250,0);
  if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x042b5018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x558))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x560));
    return;
  }
LAB_042b501c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

