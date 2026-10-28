// rea decompile_all
// name: IngameDebugConsole.DebugLogConsole$$FetchArgumentsFromCommand
// address: 0x73331ac
// body: available
// range: 0x73331ac-0x7333437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7333434 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogConsole__FetchArgumentsFromCommand(long param_1,long param_2)

{
  long lVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  
  if ((DAT_09520621 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183668);
    FUN_03f5c2a4(&DAT_091b0570);
    DAT_09520621 = 1;
  }
  if (param_1 == 0) {
LAB_07333434:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar10 = 0;
    do {
      uVar3 = System_String__get_Chars(param_1,uVar10,0);
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09535460);
      }
      uVar7 = System_Char__IsWhiteSpace(uVar3,0);
      if ((uVar7 & 1) == 0) {
        uVar3 = System_String__get_Chars(param_1,uVar10,0);
        if (*(int *)(DAT_09183668 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183668);
        }
        iVar4 = IngameDebugConsole_DebugLogConsole__IndexOfDelimiterGroup(uVar3);
        if (iVar4 < 0) {
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = IngameDebugConsole_DebugLogConsole__IndexOfChar(param_1,0x20,uVar10 + 1);
          sVar2 = System_String__get_Chars(param_1,uVar6 - 1,0);
          uVar5 = uVar6 - 1;
          if (sVar2 != 0x2c) {
            uVar5 = uVar6;
          }
          uVar8 = System_String__Substring(param_1,uVar10,uVar5 - uVar10,0);
          lVar1 = DAT_091b0570;
          if (param_2 == 0) goto LAB_07333434;
          lVar9 = *(long *)(param_2 + 0x10);
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_07333434;
          uVar5 = *(uint *)(param_2 + 0x18);
          uVar10 = uVar6;
          if (uVar5 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(param_2 + 0x18) = uVar5 + 1;
            *(undefined8 *)(lVar9 + (long)(int)uVar5 * 8 + 0x20) = uVar8;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(param_2,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = IngameDebugConsole_DebugLogConsole__IndexOfDelimiterGroupEnd
                            (param_1,iVar4,uVar10 + 1);
          uVar8 = System_String__Substring(param_1,uVar10 + 1,uVar5 + ~uVar10,0);
          lVar1 = DAT_091b0570;
          if (param_2 == 0) goto LAB_07333434;
          lVar9 = *(long *)(param_2 + 0x10);
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_07333434;
          uVar10 = *(uint *)(param_2 + 0x18);
          if (uVar10 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(param_2 + 0x18) = uVar10 + 1;
            *(undefined8 *)(lVar9 + (long)(int)uVar10 * 8 + 0x20) = uVar8;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(param_2,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
          }
          uVar10 = uVar5;
          if (((int)uVar5 < *(int *)(param_1 + 0x10) + -1) &&
             (sVar2 = System_String__get_Chars(param_1,uVar5 + 1,0), sVar2 == 0x2c)) {
            uVar10 = uVar5 + 1;
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < *(int *)(param_1 + 0x10));
  }
  return;
}

