// rea decompile_all
// name: System.Globalization.HebrewNumber$$ParseByChar
// address: 0x75069a4
// body: available
// range: 0x75069a4-0x7506b3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7506b34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7506b38 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 System_Globalization_HebrewNumber__ParseByChar(ushort param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  
  if ((DAT_095216b6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185068);
    DAT_095216b6 = 1;
  }
  if (param_1 == 0x22) {
    iVar5 = 9;
  }
  else if (param_1 == 0x27) {
    iVar5 = 8;
  }
  else {
    if (param_1 < 0x5d0) {
      return 1;
    }
    if (*(int *)(DAT_09185068 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = **(long **)(DAT_09185068 + 0xb8);
    if (lVar4 == 0) goto LAB_07506b34;
    lVar7 = (ulong)param_1 - 0x5d0;
    uVar6 = (uint)lVar7;
    if (*(int *)(lVar4 + 0x18) <= (int)uVar6) {
      return 1;
    }
    if (*(int *)(DAT_09185068 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar4 = **(long **)(DAT_09185068 + 0xb8);
      if (lVar4 == 0) goto LAB_07506b34;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_07506b38;
    iVar5 = (int)*(short *)(lVar4 + lVar7 * 4 + 0x20);
    if (iVar5 == -1) {
      return 1;
    }
    iVar1 = *(int *)(param_2 + 4);
    if (*(int *)(DAT_09185068 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar4 = **(long **)(DAT_09185068 + 0xb8);
      if (lVar4 == 0) goto LAB_07506b34;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_07506b38;
    *(int *)(param_2 + 4) = iVar1 + *(short *)(lVar4 + lVar7 * 4 + 0x22);
  }
  if (*(int *)(DAT_09185068 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(*(long *)(DAT_09185068 + 0xb8) + 0x10);
  if (lVar4 != 0) {
    lVar7 = (long)(int)*param_2 * 10 + (long)iVar5;
    if ((uint)lVar7 < *(uint *)(lVar4 + 0x18)) {
      cVar2 = *(char *)(lVar4 + lVar7 + 0x20);
      *param_2 = cVar2;
      if (cVar2 == -1) {
        uVar3 = 0;
      }
      else {
        uVar3 = 2;
        if (cVar2 != 'd') {
          uVar3 = 3;
        }
      }
      return uVar3;
    }
LAB_07506b38:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_07506b34:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

