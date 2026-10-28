// rea decompile_all
// name: System.Globalization.IdnMapping$$VerifyProhibitedCharacters
// address: 0x754d554
// body: available
// range: 0x754d554-0x754d743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x754d71c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x754d740 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_IdnMapping__VerifyProhibitedCharacters
               (undefined8 param_1,long param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ushort uVar7;
  int local_64;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (0 < *(int *)(param_2 + 0x10)) {
    iVar6 = 0;
    do {
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar3 = System_Char__GetUnicodeCategory(param_2,iVar6,0);
      if (iVar3 == 0xb) {
LAB_0754d66c:
        uVar1 = System_String__get_Chars(param_2,iVar6,0);
        if (0x7f < uVar1) {
LAB_0754d6b4:
          local_64 = param_3 + iVar6;
          uVar4 = FUN_03f5c42c(DAT_09535420,&local_64);
          uVar5 = thunk_FUN_03fc39d4(&DAT_09208f08);
          uVar4 = System_String__Format(uVar5,uVar4,0);
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar5 = thunk_FUN_03f9944c();
          System_ArgumentException___ctor(uVar5,uVar4,0);
          uVar4 = thunk_FUN_03fc39d4(&DAT_091cfae0);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar5,uVar4);
        }
      }
      else {
        if (iVar3 == 0xe) {
          sVar2 = System_String__get_Chars(param_2,iVar6,0);
          if (sVar2 == 0) goto LAB_0754d6b4;
          goto LAB_0754d66c;
        }
        if (iVar3 - 0x10U < 2) goto LAB_0754d6b4;
        uVar1 = System_String__get_Chars(param_2,iVar6,0);
        uVar7 = NEON_umaxv(CONCAT26(-(ushort)((ushort)(uVar1 + 0xdfd6) < 5),
                                    CONCAT24(-(ushort)((ushort)(uVar1 + 0xd010) < 0xc),
                                             CONCAT22(-(ushort)((ushort)(uVar1 + 7) < 6),
                                                      -(ushort)((ushort)(uVar1 + 0x221) < 0x11)))),2
                          );
        if (((uVar7 & 1) != 0) || ((ushort)(uVar1 + 0xdf96) < 6)) goto LAB_0754d6b4;
        if (uVar1 < 0x200f) {
          if ((uVar1 - 0x340 < 2) || (uVar1 == 0x200e)) goto LAB_0754d6b4;
        }
        else if ((uVar1 - 0x200f < 0x1b) &&
                ((1 << (ulong)(uVar1 - 0x200f & 0x1f) & 0x6000001U) != 0)) goto LAB_0754d6b4;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_2 + 0x10));
  }
  return;
}

