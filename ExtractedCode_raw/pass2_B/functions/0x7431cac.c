// rea decompile_all
// name: System.String$$PadRight
// address: 0x7431cac
// body: available
// range: 0x7431cac-0x7431ed7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7431ed0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7431ed4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_String__PadRight(long param_1,int param_2,undefined2 param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  if (param_2 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_092241f0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar5,uVar6,uVar7,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091da348);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar6);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  uVar3 = param_2 - iVar2;
  lVar4 = param_1;
  if (0 < (int)uVar3) {
    lVar4 = thunk_FUN_03f968a0(param_2);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = lVar4 + 0x14;
    System_Buffer__Memmove(lVar1,param_1 + 0x14,iVar2 << 1,0);
    uVar10 = (ulong)uVar3 - 1;
    uVar12 = 7;
    uVar11 = 6;
    uVar14 = 5;
    uVar13 = 4;
    uVar16 = 3;
    uVar15 = 2;
    uVar18 = 1;
    uVar17 = 0;
    uVar9 = 0;
    do {
      iVar8 = (int)uVar9;
      if (uVar17 <= uVar10) {
        *(undefined2 *)(lVar1 + (long)(iVar2 + iVar8) * 2) = param_3;
      }
      if (uVar18 <= uVar10) {
        *(undefined2 *)(lVar1 + (long)(iVar2 + iVar8 + 1) * 2) = param_3;
      }
      if (uVar15 <= uVar10) {
        *(undefined2 *)(lVar1 + (long)(iVar2 + iVar8 + 2) * 2) = param_3;
      }
      if (uVar16 <= uVar10) {
        *(undefined2 *)(lVar1 + (long)(iVar2 + iVar8 + 3) * 2) = param_3;
      }
      if (uVar13 <= uVar10) {
        *(undefined2 *)(lVar1 + (long)(iVar2 + iVar8 + 4) * 2) = param_3;
      }
      if (uVar14 <= uVar10) {
        *(undefined2 *)(lVar1 + (long)(iVar2 + iVar8 + 5) * 2) = param_3;
      }
      if (uVar11 <= uVar10) {
        *(undefined2 *)(lVar1 + (long)(iVar2 + iVar8 + 6) * 2) = param_3;
      }
      if (uVar12 <= uVar10) {
        *(undefined2 *)(lVar1 + (long)(iVar2 + iVar8 + 7) * 2) = param_3;
      }
      uVar13 = uVar13 + 8;
      uVar14 = uVar14 + 8;
      uVar15 = uVar15 + 8;
      uVar16 = uVar16 + 8;
      uVar9 = uVar9 + 8;
      uVar17 = uVar17 + 8;
      uVar18 = uVar18 + 8;
      uVar11 = uVar11 + 8;
      uVar12 = uVar12 + 8;
    } while (((ulong)(uVar3 + 7) & 0xfffffff8) != uVar9);
  }
  return lVar4;
}

