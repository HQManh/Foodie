// rea decompile_all
// name: System.String$$TrimHelper
// address: 0x7434998
// body: available
// range: 0x7434998-0x7434afb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7434af8 to 0x7434bd0 System.String$$CreateTrimmedString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_String__TrimHelper(long param_1,short *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  short *psVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar3 = (ulong)uVar1;
  uVar6 = uVar1 - 1;
  if (param_4 == 1) {
    uVar7 = 0;
  }
  else {
    if ((int)uVar1 < 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        if ((long)(int)uVar3 <= (long)uVar7) {
          System_ThrowHelper__ThrowIndexOutOfRangeException(0);
        }
        if ((int)param_3 < 1) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0;
          psVar5 = param_2;
          while (*psVar5 != *(short *)(param_1 + 0x14 + uVar7 * 2)) {
            uVar3 = uVar3 + 1;
            psVar5 = psVar5 + 1;
            if (param_3 == uVar3) goto LAB_07434a50;
          }
        }
        if ((uint)uVar3 == param_3) break;
        uVar3 = (ulong)*(int *)(param_1 + 0x10);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)uVar3);
    }
LAB_07434a50:
    if (param_4 == 0) goto LAB_07434ad8;
    uVar3 = (ulong)*(uint *)(param_1 + 0x10);
    uVar6 = *(uint *)(param_1 + 0x10) - 1;
  }
  uVar1 = (int)uVar7 - 1;
  if ((int)uVar6 <= (int)uVar1) {
    uVar1 = uVar6;
  }
  while( true ) {
    uVar2 = (int)uVar3 - 1;
    uVar3 = (ulong)uVar2;
    uVar6 = uVar1;
    if ((int)uVar2 < (int)uVar7) break;
    if ((long)*(int *)(param_1 + 0x10) <= (long)uVar3) {
      System_ThrowHelper__ThrowIndexOutOfRangeException(0);
    }
    uVar6 = uVar2;
    if ((int)param_3 < 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      psVar5 = param_2;
      while (*psVar5 != *(short *)(param_1 + 0x14 + (long)(int)uVar2 * 2)) {
        uVar4 = uVar4 + 1;
        psVar5 = psVar5 + 1;
        if (param_3 == uVar4) goto LAB_07434ad8;
      }
    }
    if ((uint)uVar4 == param_3) break;
  }
LAB_07434ad8:
  System_String__CreateTrimmedString(param_1,uVar7 & 0xffffffff,uVar6);
  return;
}

