// rea decompile_all
// name: System.TermInfoDriver$$WriteSpecialKey
// address: 0x76093c4
// body: available
// range: 0x76093c4-0x76094d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7609470 to 0x76094d4 System.TermInfoDriver$$SetCursorPosition (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76094b4 to 0x7608400 System.TermInfoDriver$$WriteConsole (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TermInfoDriver__WriteSpecialKey(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  if ((DAT_0952200f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_091f5828);
    DAT_0952200f = 1;
  }
  iVar4 = (int)((ulong)param_2 >> 0x20);
  if (iVar4 == 0xc) {
    System_TermInfoDriver__WriteConsole(param_1,*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    if (iVar4 == 9) {
      uVar2 = -*(uint *)(param_1 + 0x18);
      uVar1 = *(uint *)(param_1 + 0x18) & 7;
      if (-1 < (int)uVar2) {
        uVar1 = -(uVar2 & 7);
      }
      iVar4 = uVar1 - 8;
      do {
        System_TermInfoDriver__IncrementX(param_1);
        bVar3 = iVar4 != -1;
        iVar4 = iVar4 + 1;
      } while (bVar3);
      System_TermInfoDriver__WriteConsole(param_1,DAT_091f5828);
      return;
    }
    if (iVar4 == 8) {
      iVar4 = *(int *)(param_1 + 0x18);
      if (0 < iVar4) {
        if ((*(int *)(param_1 + 0x100) < iVar4) ||
           (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x104))) {
          *(int *)(param_1 + 0x18) = iVar4 + -1;
          System_TermInfoDriver__SetCursorPosition(param_1);
          System_TermInfoDriver__WriteConsole(param_1,DAT_091f5a98);
          System_TermInfoDriver__SetCursorPosition
                    (param_1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
          return;
        }
      }
    }
  }
  return;
}

