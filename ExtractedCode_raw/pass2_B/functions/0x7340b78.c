// rea decompile_all
// name: Lean.Common.LeanPath$$SetLine
// address: 0x7340b78
// body: available
// range: 0x7340b78-0x7340d3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7340d38 to 0x58b1914 FUN_058b1914 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7340d3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Common_LeanPath__SetLine
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_095206a1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1a40);
    FUN_03f5c2a4(&DAT_091b1a50);
    FUN_03f5c2a4(&DAT_091b1a30);
    FUN_03f5c2a4(&DAT_0917d060);
    DAT_095206a1 = 1;
  }
  plVar5 = (long *)(param_7 + 0x20);
  lVar2 = *plVar5;
  if (lVar2 == 0) {
    lVar2 = thunk_FUN_03f9944c(DAT_0917d060);
    FUN_058b104c(lVar2,DAT_091b1a30);
    *plVar5 = lVar2;
    thunk_FUN_03f5d7b8(plVar5,lVar2);
    lVar2 = *plVar5;
    if (lVar2 == 0) goto LAB_07340d3c;
  }
  else {
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
  }
  lVar3 = DAT_091b1a40;
  lVar4 = *(long *)(lVar2 + 0x10);
  *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
      *(uint *)(lVar2 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar4 + 0x20) = param_1;
      *(undefined4 *)(lVar4 + 0x24) = param_2;
      *(undefined4 *)(lVar4 + 0x28) = param_3;
    }
    else {
      FUN_058b1914(param_1,param_2,param_3,lVar2,
                   *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar2 = DAT_091b1a40;
    lVar3 = *plVar5;
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar4 + 0x20) = param_4;
          *(undefined4 *)(lVar4 + 0x24) = param_5;
          *(undefined4 *)(lVar4 + 0x28) = param_6;
          return;
        }
        FUN_058b1914(param_4,param_5,param_6,lVar3,
                     *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
LAB_07340d3c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

