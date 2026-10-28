// rea decompile_all
// name: System.IO.UnexceptionalStreamReader$$CheckEOL
// address: 0x758f5bc
// body: available
// range: 0x758f5bc-0x758f753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x758f74c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758f750 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_IO_UnexceptionalStreamReader__CheckEOL(undefined8 param_1,short param_2)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  if ((DAT_09521b5a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c5f8);
    DAT_09521b5a = 1;
  }
  uVar7 = 1;
  lVar4 = DAT_0918c5f8;
  while( true ) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar4 = DAT_0918c5f8;
    }
    lVar5 = **(long **)(lVar4 + 0xb8);
    if (lVar5 == 0) goto LAB_0758f74c;
    uVar2 = uVar7 - 1;
    if (*(int *)(lVar5 + 0x18) <= (int)uVar2) goto LAB_0758f6d4;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar5 = **(long **)(DAT_0918c5f8 + 0xb8);
      lVar4 = DAT_0918c5f8;
      if (lVar5 == 0) goto LAB_0758f74c;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_0758f750;
    if (*(char *)(lVar5 + (int)uVar2 + 0x20) == '\0') break;
    uVar7 = uVar7 + 1;
  }
  lVar4 = System_Environment__get_NewLine(0);
  if (lVar4 == 0) {
LAB_0758f74c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  sVar3 = System_String__get_Chars(lVar4,uVar2,0);
  lVar4 = DAT_0918c5f8;
  if (sVar3 == param_2) {
    if (*(int *)(DAT_0918c5f8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = **(long **)(DAT_0918c5f8 + 0xb8);
    if (lVar4 == 0) goto LAB_0758f74c;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar2 < uVar1) {
      *(undefined1 *)(lVar4 + (int)uVar2 + 0x20) = 1;
      return uVar1 == uVar7;
    }
  }
  else {
LAB_0758f6d4:
    uVar6 = 0;
    while( true ) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar4 = DAT_0918c5f8;
      }
      lVar5 = **(long **)(lVar4 + 0xb8);
      if (lVar5 == 0) goto LAB_0758f74c;
      if ((long)*(int *)(lVar5 + 0x18) <= (long)uVar6) {
        return false;
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar5 = **(long **)(DAT_0918c5f8 + 0xb8);
        lVar4 = DAT_0918c5f8;
        if (lVar5 == 0) goto LAB_0758f74c;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar6) break;
      lVar5 = lVar5 + uVar6;
      uVar6 = uVar6 + 1;
      *(undefined1 *)(lVar5 + 0x20) = 0;
    }
  }
LAB_0758f750:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

