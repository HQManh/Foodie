// rea decompile_all
// name: System.Security.Cryptography.CryptoConfig$$EncodeLongNumber
// address: 0x7471874
// body: available
// range: 0x7471874-0x74719cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7471978 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747197c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74719cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Security_Cryptography_CryptoConfig__EncodeLongNumber(ulong param_1)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  
  if ((DAT_095211f9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182b88);
    DAT_095211f9 = 1;
  }
  if (param_1 != (long)(int)param_1) {
    uVar4 = thunk_FUN_03fc39d4(&DAT_0920a528);
    uVar4 = Locale__GetText(uVar4,0);
    thunk_FUN_03fc39d4(&DAT_09188d78);
    uVar5 = thunk_FUN_03f9944c();
    System_OverflowException___ctor(uVar5,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091c6b90);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar4);
  }
  iVar8 = 1;
  uVar10 = param_1;
  if (0x7f < (long)param_1) {
    do {
      uVar7 = uVar10 >> 0xe;
      iVar8 = iVar8 + 1;
      uVar10 = uVar10 >> 7;
    } while (uVar7 != 0);
  }
  lVar3 = FUN_03f5c394(DAT_0917fc88,iVar8);
  lVar9 = (long)iVar8;
  uVar10 = 0;
  do {
    uVar6 = (long)param_1 >> (uVar10 & 0x3f);
    uVar7 = uVar6 & 0x7f;
    if (uVar10 != 0) {
      uVar7 = uVar6 & 0x7f | 0x80;
    }
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Convert__ToByte(uVar7,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(lVar3 + 0x18) <= (int)lVar9 - 1U) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar1 = lVar3 + lVar9;
    lVar9 = lVar9 + -1;
    uVar10 = uVar10 + 7;
    *(undefined1 *)(lVar1 + 0x1f) = uVar2;
  } while (lVar9 != 0);
  return lVar3;
}

