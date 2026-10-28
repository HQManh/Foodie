// rea decompile_all
// name: System.String$$TrimWhiteSpaceHelper
// address: 0x7434860
// body: available
// range: 0x7434860-0x7434977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7434974 to 0x7434bd0 System.String$$CreateTrimmedString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_String__TrimWhiteSpaceHelper(long param_1,int param_2)

{
  undefined2 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  if (param_2 == 1) {
    uVar5 = 0;
  }
  else {
    if ((int)uVar6 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      uVar4 = (ulong)uVar6;
      do {
        if ((long)(int)uVar4 <= (long)uVar5) {
          System_ThrowHelper__ThrowIndexOutOfRangeException(0);
        }
        uVar1 = *(undefined2 *)(param_1 + 0x14 + uVar5 * 2);
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Char__IsWhiteSpace(uVar1,0);
        if ((uVar4 & 1) == 0) break;
        uVar4 = (ulong)*(int *)(param_1 + 0x10);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)uVar4);
    }
    if (param_2 == 0) {
      uVar4 = (ulong)(uVar6 - 1);
      goto LAB_07434958;
    }
    uVar6 = *(uint *)(param_1 + 0x10);
  }
  uVar2 = (long)(int)(uVar6 - 1);
  do {
    uVar4 = uVar2;
    if ((int)uVar4 < (int)uVar5) break;
    if ((long)*(int *)(param_1 + 0x10) <= (long)(uVar4 & 0xffffffff)) {
      System_ThrowHelper__ThrowIndexOutOfRangeException(0);
    }
    uVar1 = *(undefined2 *)(param_1 + 0x14 + uVar4 * 2);
    if (*(int *)(DAT_09535460 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Char__IsWhiteSpace(uVar1,0);
    uVar2 = uVar4 - 1;
  } while ((uVar3 & 1) != 0);
LAB_07434958:
  System_String__CreateTrimmedString(param_1,uVar5 & 0xffffffff,uVar4 & 0xffffffff);
  return;
}

