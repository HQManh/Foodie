// rea decompile_all
// name: System.Math$$Round
// address: 0x75b6a4c
// body: available
// range: 0x75b6a4c-0x75b6cf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75b6c50 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75b6cec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75b6cf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75b6cf4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] System_Math__Round(double param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double local_48;
  undefined8 local_38;
  
  local_48 = param_1;
  if ((DAT_09521d16 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09521d16 = 1;
  }
  if (0xf < param_2) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar2 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_0921a750);
    uVar4 = thunk_FUN_03fc39d4(&DAT_0920c160);
    System_ArgumentOutOfRangeException___ctor(uVar2,uVar3,uVar4,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091d2b48);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar3);
  }
  if (1 < param_3) {
    local_38._0_4_ = param_3;
    uVar2 = thunk_FUN_03fc39d4(&DAT_09188268);
    uVar2 = FUN_03f5c42c(uVar2,&local_38);
    uVar3 = thunk_FUN_03fc39d4(&DAT_09210268);
    uVar4 = thunk_FUN_03fc39d4(&DAT_09207df8);
    uVar2 = SR__Format(uVar3,uVar2,uVar4,0);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_0921f8a0);
    System_ArgumentException___ctor(uVar3,uVar2,uVar4,0);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091d2b48);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar2);
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  pdVar5 = *(double **)(DAT_09187e80 + 0xb8);
  if (*pdVar5 <= ABS(param_1)) goto LAB_075b6bdc;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
    pdVar5 = *(double **)(DAT_09187e80 + 0xb8);
  }
  dVar6 = pdVar5[1];
  if (dVar6 == 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(uint *)((long)dVar6 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  dVar6 = *(double *)((long)dVar6 + (ulong)param_2 * 8 + 0x20);
  param_1 = dVar6 * param_1;
  local_48 = param_1;
  if (param_3 == 1) {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar7 = modf(param_1,&local_48);
    dVar8 = local_48;
    if (0.5 <= ABS(dVar7)) {
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = System_Math__Sign(dVar7);
      local_48 = dVar8 + (double)iVar1;
    }
  }
  else {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar8 = modf(param_1,(double *)&local_38);
    if (0.0 <= param_1) {
      if (dVar8 == 0.5) {
        dVar8 = 1.0;
        goto LAB_075b6ba8;
      }
      local_48 = (double)(long)(param_1 + 0.5);
    }
    else if (dVar8 == -0.5) {
      dVar8 = -1.0;
LAB_075b6ba8:
      local_48 = (double)CONCAT44(local_38._4_4_,(uint)local_38);
      if (((long)local_48 & 1U) != 0) {
        local_48 = local_48 + dVar8;
      }
    }
    else {
      local_48 = (double)(long)(param_1 + -0.5);
    }
  }
  param_1 = local_48 / dVar6;
LAB_075b6bdc:
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_1;
  return auVar9;
}

