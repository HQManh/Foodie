// rea decompile_all
// name: System.__DTString$$SkipWhiteSpaceCurrent
// address: 0x75abef8
// body: available
// range: 0x75abef8-0x75ac053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ac050 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System___DTString__SkipWhiteSpaceCurrent(long *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  
  if ((DAT_09521c8b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918db18);
    DAT_09521c8b = 1;
  }
  lVar5 = param_1[2];
  if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((DAT_09521c7b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521c7b = 1;
  }
  if ((int)lVar5 < (int)param_1[1]) {
    uVar4 = *(undefined2 *)((long)param_1 + 0x14);
    if (*(int *)(DAT_09535460 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = System_Char__IsWhiteSpace(uVar4,0);
    bVar7 = true;
    while ((uVar6 & 1) != 0) {
      iVar2 = *(int *)(DAT_0918db18 + 0xe4);
      iVar1 = (int)param_1[2] + 1;
      *(int *)(param_1 + 2) = iVar1;
      if (iVar2 == 0) {
        FUN_03f5c424();
      }
      if ((DAT_09521c7b & 1) == 0) {
        FUN_03f5c2a4(&DAT_091b9810);
        DAT_09521c7b = 1;
      }
      uVar3 = *(uint *)(param_1 + 1);
      bVar7 = iVar1 < (int)uVar3;
      if ((int)uVar3 <= iVar1) {
        return bVar7;
      }
      if (uVar3 <= *(uint *)(param_1 + 2)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar4 = *(undefined2 *)(*param_1 + (long)(int)*(uint *)(param_1 + 2) * 2);
      iVar1 = *(int *)(DAT_09535460 + 0xe4);
      *(undefined2 *)((long)param_1 + 0x14) = uVar4;
      if (iVar1 == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Char__IsWhiteSpace(uVar4,0);
    }
  }
  else {
    bVar7 = false;
  }
  return bVar7;
}

