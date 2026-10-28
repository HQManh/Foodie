// rea decompile_all
// name: System.DateTimeParse$$VerifyValidPunctuation
// address: 0x75a408c
// body: available
// range: 0x75a408c-0x75a425f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a425c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_DateTimeParse__VerifyValidPunctuation(long *param_1)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  
  if ((DAT_09521c3e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918db18);
    DAT_09521c3e = 1;
  }
  uVar8 = *(uint *)(param_1 + 2);
  if (*(uint *)(param_1 + 1) <= uVar8) {
LAB_075a425c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  sVar2 = *(short *)(*param_1 + (long)(int)uVar8 * 2);
  if (sVar2 == 0x23) {
    uVar10 = 0;
    bVar3 = false;
    bVar4 = false;
    while( true ) {
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar5 = System___DTString__get_Length(param_1,0);
      if ((long)iVar5 <= (long)uVar10) break;
      if (*(uint *)(param_1 + 1) <= uVar10) goto LAB_075a425c;
      sVar2 = *(short *)(*param_1 + uVar10 * 2);
      if (sVar2 == 0) {
        if (!bVar3) {
          return 0;
        }
        bVar3 = true;
      }
      else if (sVar2 == 0x23) {
        if ((bool)(bVar4 & bVar3)) {
          return 0;
        }
        bVar3 = (bool)(bVar4 | bVar3);
        bVar4 = true;
      }
      else {
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = System_Char__IsWhiteSpace(sVar2,0);
        if (((uVar7 & 1) == 0) && (bVar3 || !bVar4)) {
          return 0;
        }
      }
      uVar10 = uVar10 + 1;
    }
    if (bVar3) {
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System___DTString__GetNext(param_1,0);
      return 1;
    }
  }
  else if (sVar2 == 0) {
    lVar9 = (long)(int)uVar8 << 1;
    do {
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar5 = System___DTString__get_Length(param_1,0);
      if (iVar5 <= (int)uVar8) {
        if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = System___DTString__get_Length(param_1,0);
        *(undefined4 *)(param_1 + 2) = uVar6;
        return 1;
      }
      if (*(uint *)(param_1 + 1) <= uVar8) goto LAB_075a425c;
      uVar8 = uVar8 + 1;
      psVar1 = (short *)(*param_1 + lVar9);
      lVar9 = lVar9 + 2;
    } while (*psVar1 == 0);
  }
  return 0;
}

