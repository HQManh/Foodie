// rea decompile_all
// name: Utilities.MonoBehaviourExtension.<IEPlayTextTransitionUnscaledTime>d__14$$MoveNext
// address: 0x44f8824
// body: available
// range: 0x44f8824-0x44f8ad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44f8ad0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8
Utilities_MonoBehaviourExtension_<IEPlayTextTransitionUnscaledTime>d__14__MoveNext(long param_1)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  double dVar12;
  float fVar13;
  undefined8 local_38;
  
  if ((DAT_09518447 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ce98);
    DAT_09518447 = 1;
  }
  iVar9 = *(int *)(param_1 + 0x10);
  if (iVar9 == 2) {
    fVar13 = *(float *)(param_1 + 0x48);
  }
  else {
    if (iVar9 != 1) {
      if (iVar9 != 0) {
        return 0;
      }
      uVar11 = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar3 = thunk_FUN_03f9944c(DAT_0918ce98);
      UnityEngine_WaitForSecondsRealtime___ctor(uVar11,uVar3,0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    fVar13 = 0.0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (*(float *)(param_1 + 0x24) <= fVar13) {
    local_38._0_4_ = *(int *)(param_1 + 0x2c);
    plVar1 = *(long **)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_38);
    uVar3 = System_String__Format(uVar3,uVar4,0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x5e8))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0x5f0));
      lVar5 = *(long *)(param_1 + 0x40);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      }
      return 0;
    }
    goto LAB_044f8ad0;
  }
  fVar6 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
  cVar2 = DAT_09515cf4;
  iVar9 = *(int *)(param_1 + 0x28);
  fVar8 = (fVar13 + fVar6) / *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x48) = fVar13 + fVar6;
  fVar13 = 1.0;
  if (fVar8 <= 1.0) {
    fVar13 = fVar8;
  }
  fVar6 = 0.0;
  if (0.0 <= fVar8) {
    fVar6 = fVar13;
  }
  iVar10 = *(int *)(param_1 + 0x2c);
  fVar13 = 0.0;
  if (0.0 <= fVar6) {
    fVar13 = fVar6;
  }
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  fVar13 = ((float)iVar10 - (float)iVar9) * fVar13 + (float)iVar9;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  dVar12 = (double)fVar13;
  dVar7 = modf(dVar12,(double *)&local_38);
  if (0.0 <= fVar13) {
    if (dVar7 == 0.5) {
      dVar7 = 1.0;
      goto LAB_044f8a18;
    }
    dVar12 = (double)(long)(dVar12 + 0.5);
  }
  else if (dVar7 == -0.5) {
    dVar7 = -1.0;
LAB_044f8a18:
    dVar12 = (double)CONCAT44(local_38._4_4_,(int)local_38);
    if (((long)dVar12 & 1U) != 0) {
      dVar12 = dVar12 + dVar7;
    }
  }
  else {
    dVar12 = (double)(long)(dVar12 + -0.5);
  }
  plVar1 = *(long **)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  local_38._0_4_ = -0x80000000;
  if (dVar12 != INFINITY) {
    local_38._0_4_ = (int)dVar12;
  }
  uVar4 = FUN_03f5c42c(DAT_09535420,&local_38);
  uVar3 = System_String__Format(uVar3,uVar4,0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x5e8))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0x5f0));
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 2;
    return 1;
  }
LAB_044f8ad0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

