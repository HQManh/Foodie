// rea decompile_all
// name: System.__DTString$$MatchSpecifiedWords
// address: 0x75ac17c
// body: available
// range: 0x75ac17c-0x75ac5cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ac22c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ac348 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ac4b8 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ac5c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ac5cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System___DTString__MatchSpecifiedWords(long *param_1,long param_2,ulong param_3,uint *param_4)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  
  if ((DAT_09521c84 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b97e8);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0918db18);
    DAT_09521c84 = 1;
  }
  if (param_2 == 0) goto LAB_075ac5cc;
  lVar9 = param_1[1];
  lVar10 = param_1[2];
  uVar3 = *(uint *)(param_2 + 0x10);
  *param_4 = uVar3;
  if ((int)lVar9 - (int)lVar10 < (int)uVar3) {
LAB_075ac26c:
    uVar13 = (ulong)*(uint *)(param_1 + 2);
    if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_String__IndexOfAny(param_2,**(undefined8 **)(DAT_0918db18 + 0xb8),0,0);
    if (uVar3 != 0xffffffff) {
      uVar8 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 - uVar8;
        uVar11 = (uint)uVar13;
        if ((int)(*(uint *)(param_1 + 1) - uVar3) <= (int)uVar11) goto LAB_075ac59c;
        if (uVar4 == uVar8) {
          *param_4 = *param_4 - 1;
        }
        else {
          uVar12 = uVar3 + uVar11;
          if (*(uint *)(param_1 + 1) <= uVar12) goto LAB_075ac5c8;
          uVar1 = *(undefined2 *)(*param_1 + (long)(int)uVar12 * 2);
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar13 = System_Char__IsWhiteSpace(uVar1,0);
          if ((uVar13 & 1) == 0) goto LAB_075ac59c;
          lVar9 = param_1[3];
          if ((*(uint *)(param_1 + 1) < uVar11) || (*(uint *)(param_1 + 1) - uVar11 < uVar3)) {
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
          }
          lVar10 = *param_1;
          if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          if (DAT_09520e02 == '\0') {
            FUN_03f5c2a4(&DAT_091b97b8);
            DAT_09520e02 = '\x01';
          }
          if ((*(uint *)(param_2 + 0x10) < uVar8) || (*(uint *)(param_2 + 0x10) - uVar8 < uVar3)) {
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0x18,0);
          }
          lVar5 = System_String__GetRawStringData(param_2,0);
          if (lVar9 == 0) goto LAB_075ac5cc;
          iVar2 = System_Globalization_CompareInfo__CompareOptionIgnoreCase
                            (lVar9,lVar10 + (long)(int)uVar11 * 2,uVar3,lVar5 + (long)(int)uVar8 * 2
                             ,uVar3,0);
          if (iVar2 != 0) goto LAB_075ac59c;
          uVar13 = (ulong)(uVar12 + 1);
        }
        uVar7 = (ulong)*(uint *)(param_1 + 1);
        if ((int)uVar13 < (int)*(uint *)(param_1 + 1)) {
          uVar13 = (ulong)(int)uVar13;
          do {
            if ((uint)uVar7 <= (uint)uVar13) goto LAB_075ac5c8;
            uVar1 = *(undefined2 *)(*param_1 + uVar13 * 2);
            if (*(int *)(DAT_09535460 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = System_Char__IsWhiteSpace(uVar1,0);
            if ((uVar7 & 1) == 0) break;
            uVar13 = uVar13 + 1;
            *param_4 = *param_4 + 1;
            uVar7 = (ulong)(int)param_1[1];
          } while ((long)uVar13 < (long)uVar7);
        }
        if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = uVar4 + 1;
        uVar3 = System_String__IndexOfAny(param_2,**(undefined8 **)(DAT_0918db18 + 0xb8),uVar8,0);
      } while (-1 < (int)uVar3);
      uVar3 = *(int *)(param_2 + 0x10) - uVar8;
      if (uVar3 == 0 || *(int *)(param_2 + 0x10) < (int)uVar8) goto LAB_075ac54c;
      uVar11 = *(uint *)(param_1 + 1);
      uVar12 = (uint)uVar13;
      if ((int)uVar12 <= (int)(uVar11 - uVar3)) {
        lVar9 = param_1[3];
        if ((uVar11 < uVar12) || (uVar11 - uVar12 < uVar3)) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        lVar10 = *param_1;
        if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        if (DAT_09520e02 == '\0') {
          FUN_03f5c2a4(&DAT_091b97b8);
          DAT_09520e02 = '\x01';
        }
        if ((*(uint *)(param_2 + 0x10) <= uVar4) || (*(uint *)(param_2 + 0x10) - uVar8 < uVar3)) {
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0x18,0);
        }
        lVar5 = System_String__GetRawStringData(param_2,0);
        if (lVar9 == 0) {
LAB_075ac5cc:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar2 = System_Globalization_CompareInfo__CompareOptionIgnoreCase
                          (lVar9,lVar10 + (long)(int)uVar12 * 2,uVar3,lVar5 + (long)(int)uVar8 * 2,
                           uVar3,0);
        if (iVar2 == 0) goto LAB_075ac54c;
      }
    }
LAB_075ac59c:
    uVar6 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 2);
    lVar9 = param_1[3];
    if ((*(uint *)(param_1 + 1) < uVar8) || (*(uint *)(param_1 + 1) - uVar8 < uVar3)) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    lVar10 = *param_1;
    if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    if (lVar9 == 0) goto LAB_075ac5cc;
    iVar2 = System_Globalization_CompareInfo__Compare
                      (lVar9,lVar10 + (long)(int)uVar8 * 2,uVar3,param_2,1,0);
    if (iVar2 != 0) goto LAB_075ac26c;
LAB_075ac54c:
    if ((param_3 & 1) != 0) {
      uVar3 = *param_4 + (int)param_1[2];
      if ((int)uVar3 < (int)*(uint *)(param_1 + 1)) {
        if (*(uint *)(param_1 + 1) <= uVar3) {
LAB_075ac5c8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar1 = *(undefined2 *)(*param_1 + (long)(int)uVar3 * 2);
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar13 = System_Char__IsLetter(uVar1,0);
        if ((uVar13 & 1) != 0) goto LAB_075ac59c;
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}

