// rea decompile_all
// name: Lean.Common.LeanPath$$GetSmoothedPoint
// address: 0x7340758
// body: available
// range: 0x7340758-0x7340943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7340940 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float Lean_Common_LeanPath__GetSmoothedPoint(float param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_0952069e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1a68);
    DAT_0952069e = 1;
  }
  if (*(long *)(param_2 + 0x20) == 0) {
    thunk_FUN_03fc39d4(&DAT_09186b90);
    uVar3 = thunk_FUN_03f9944c();
    System_IndexOutOfRangeException___ctor(uVar3,0);
  }
  else {
    iVar2 = *(int *)(*(long *)(param_2 + 0x20) + 0x18);
    if (1 < iVar2) {
      iVar1 = -0x80000000;
      if (param_1 != INFINITY) {
        iVar1 = (int)param_1;
      }
      fVar9 = param_1 - (float)iVar1;
      fVar10 = ABS(param_1 - (float)iVar1);
      fVar5 = (float)Lean_Common_LeanPath__GetPointRaw(param_2,iVar1 + -1,iVar2);
      fVar6 = (float)Lean_Common_LeanPath__GetPointRaw(param_2,iVar1,iVar2);
      fVar7 = (float)Lean_Common_LeanPath__GetPointRaw(param_2,iVar1 + 1,iVar2);
      fVar8 = (float)Lean_Common_LeanPath__GetPointRaw(param_2,iVar1 + 2,iVar2);
      fVar9 = fVar9 * fVar9;
      fVar8 = (fVar8 - fVar7) - (fVar5 - fVar6);
      return fVar6 + fVar10 * (fVar7 - fVar5) +
                     fVar9 * fVar10 * fVar8 + fVar9 * ((fVar5 - fVar6) - fVar8);
    }
    thunk_FUN_03fc39d4(&DAT_091842a0);
    uVar3 = thunk_FUN_03f9944c();
    System_Exception___ctor(uVar3,0);
  }
  uVar4 = thunk_FUN_03fc39d4(&DAT_091d2330);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

