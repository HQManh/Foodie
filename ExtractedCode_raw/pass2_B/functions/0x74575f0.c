// rea decompile_all
// name: System.Security.Util.Parser$$DetermineFormat
// address: 0x74575f0
// body: available
// range: 0x74575f0-0x745777b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7457774 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7457778 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Security_Util_Parser__DetermineFormat(long param_1,long param_2)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((DAT_0952112e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0921af60);
    DAT_0952112e = 1;
  }
  if (param_2 != 0) {
    cVar5 = System_Security_Util_TokenizerStream__GetNextFullToken(param_2);
    if ((cVar5 != '\0') ||
       (cVar5 = System_Security_Util_TokenizerStream__GetNextFullToken(param_2), cVar5 != '\x05')) {
      return 2;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      System_Security_Util_Tokenizer__GetTokens(*(long *)(param_1 + 0x18),param_2,0xffffffff,1);
      System_Security_Util_TokenizerStream__GoToPosition(param_2,2);
      bVar4 = 0;
      while( true ) {
        bVar2 = bVar4;
        bVar3 = false;
        do {
          bVar1 = bVar3;
          cVar5 = System_Security_Util_TokenizerStream__GetNextFullToken(param_2);
          bVar3 = true;
        } while (cVar5 == '\x04');
        if (cVar5 != '\x03') {
          if (cVar5 == '\x01') {
            return 0;
          }
          FUN_039b1d98(*(undefined8 *)(param_1 + 0x18));
          uVar7 = thunk_FUN_03fc39d4(&DAT_09211cb0);
          System_Environment__GetResourceString(uVar7,0);
          thunk_FUN_03fc39d4(&DAT_0918d988);
          uVar7 = thunk_FUN_03f9944c();
          System_SystemException___ctor(uVar7,0);
          uVar8 = thunk_FUN_03fc39d4(&DAT_091d57c0);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar7,uVar8);
        }
        if ((bool)(bVar2 & bVar1)) break;
        uVar7 = System_Security_Util_TokenizerStream__GetNextString(param_2);
        bVar4 = 0;
        if (!bVar1) {
          iVar6 = System_String__Compare(uVar7,DAT_0921af60,4,0);
          bVar4 = iVar6 == 0 | bVar2;
        }
      }
      lVar9 = *(long *)(param_1 + 0x18);
      System_Security_Util_TokenizerStream__GetNextString(param_2);
      uVar7 = System_Text_Encoding__GetEncoding();
      if (lVar9 != 0) {
        System_Security_Util_Tokenizer__ChangeFormat(lVar9,uVar7);
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

