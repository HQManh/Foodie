// rea decompile_all
// name: FUN_075893c0
// address: 0x75893c0
// body: available
// range: 0x75893c0-0x758967b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75895fc to 0x756f330 System.IO.StreamWriter$$Flush (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7589618 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758961c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7589624 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758962c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7589678 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_075893c0(long param_1,undefined2 *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  
  if (DAT_09521b22 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091d3030);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521b22 = '\x01';
  }
  System_IO_StreamWriter__CheckAsyncTaskInProgress(param_1);
  iVar4 = (int)param_3;
  if ((iVar4 < 5) &&
     (uVar11 = *(uint *)(param_1 + 0x58), iVar4 <= (int)(*(int *)(param_1 + 0x5c) - uVar11))) {
    if (0 < iVar4) {
      lVar12 = *(long *)(param_1 + 0x50);
      param_3 = param_3 & 0xffffffff;
      do {
        uVar10 = uVar11 + 1;
        if (lVar12 == 0) {
          *(uint *)(param_1 + 0x58) = uVar10;
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar12 + 0x18) <= uVar11) {
          *(uint *)(param_1 + 0x58) = uVar10;
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        param_3 = param_3 - 1;
        *(undefined2 *)(lVar12 + (long)(int)uVar11 * 2 + 0x20) = *param_2;
        param_2 = param_2 + 1;
        uVar11 = uVar10;
      } while (param_3 != 0);
      *(uint *)(param_1 + 0x58) = uVar10;
    }
  }
  else {
    lVar12 = *(long *)(param_1 + 0x50);
    if (lVar12 == 0) {
      thunk_FUN_03fc39d4(&DAT_09188ae0);
      uVar6 = thunk_FUN_03f9944c();
      uVar7 = thunk_FUN_03fc39d4(&DAT_091fd6c0);
      System_ObjectDisposedException___ctor(uVar6,0,uVar7,0);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091da1a0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,uVar7);
    }
    lVar5 = FUN_04c072b4(param_2,param_3,DAT_091d3030);
    if (*(int *)(lVar12 + 0x18) == 0) {
LAB_07589618:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar10 = *(uint *)(param_1 + 0x58);
    uVar11 = uVar10;
    if (0 < iVar4) {
      do {
        if (uVar10 == *(uint *)(lVar12 + 0x18)) {
          System_IO_StreamWriter__Flush(param_1,0,0);
          uVar10 = 0;
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar4 = System_Math__Min(*(int *)(lVar12 + 0x18) - uVar10,param_3 & 0xffffffff,0);
        System_Buffer__MemoryCopy
                  (lVar5,lVar12 + 0x20 + (long)(int)uVar10 * 2,(long)(iVar4 << 1),(long)(iVar4 << 1)
                   ,0);
        uVar3 = (int)param_3 - iVar4;
        param_3 = (ulong)uVar3;
        lVar5 = lVar5 + (long)iVar4 * 2;
        uVar10 = iVar4 + uVar10;
        uVar11 = *(int *)(param_1 + 0x58) + iVar4;
        *(uint *)(param_1 + 0x58) = uVar11;
      } while (0 < (int)uVar3);
    }
  }
  if ((param_4 & 1) != 0) {
    lVar12 = *(long *)(param_1 + 0x18);
    if (lVar12 == 0) {
LAB_0758961c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
      uVar9 = 0;
      uVar8 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      do {
        if (uVar11 == *(uint *)(param_1 + 0x5c)) {
          System_IO_StreamWriter__Flush(param_1,0,0);
          uVar11 = *(uint *)(param_1 + 0x58);
          uVar8 = (ulong)*(uint *)(lVar12 + 0x18);
        }
        if (uVar8 <= uVar9) goto LAB_07589618;
        lVar5 = *(long *)(param_1 + 0x50);
        if (lVar5 == 0) goto LAB_0758961c;
        if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_07589618;
        lVar2 = uVar9 * 2;
        lVar1 = (long)(int)uVar11;
        uVar9 = uVar9 + 1;
        uVar11 = uVar11 + 1;
        *(undefined2 *)(lVar5 + lVar1 * 2 + 0x20) = *(undefined2 *)(lVar12 + 0x20 + lVar2);
        *(uint *)(param_1 + 0x58) = uVar11;
      } while ((long)uVar9 < (long)(int)uVar8);
    }
  }
  if (*(char *)(param_1 + 0x60) != '\0') {
    System_IO_StreamWriter__Flush(param_1,1,0);
    return;
  }
  return;
}

