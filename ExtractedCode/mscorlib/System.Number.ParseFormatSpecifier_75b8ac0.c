// rea decompile_all
// name: System.Number$$ParseFormatSpecifier
// address: 0x75b8ac0
// body: available
// range: 0x75b8ac0-0x75b8c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75b8c00 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ushort System_Number__ParseFormatSpecifier(ushort *param_1,ulong param_2,uint *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  if ((DAT_09521d55 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521d55 = 1;
  }
  uVar5 = (uint)param_2;
  if ((int)uVar5 < 1) {
    *param_3 = 0xffffffff;
    return 0x47;
  }
  uVar2 = *param_1;
  if (0x19 < (uVar2 & 0xffffffdf) - 0x41) {
LAB_075b8bcc:
    *param_3 = 0xffffffff;
    if (uVar2 == 0) {
      return 0x47;
    }
    return 0;
  }
  if (uVar5 != 1) {
    if (uVar5 == 2) {
      uVar3 = param_1[1] - 0x30;
      if (uVar3 < 10) goto LAB_075b8bec;
    }
    else if (((uVar5 == 3) && (param_1[1] - 0x30 < 10)) && (param_1[2] - 0x30 < 10)) {
      uVar3 = (param_1[2] - 0x30) + (param_1[1] - 0x30) * 10;
      goto LAB_075b8bec;
    }
    uVar3 = 0;
    uVar4 = 1;
    while (uVar5 != (uint)uVar4) {
      if ((9 < (int)uVar3) || (puVar1 = param_1 + uVar4, 9 < *puVar1 - 0x30)) goto LAB_075b8bb8;
      uVar4 = uVar4 + 1;
      uVar3 = ((uint)*puVar1 + uVar3 * 10) - 0x30;
      if (uVar5 == (uint)uVar4) goto code_r0x075b8bb4;
    }
    goto LAB_075b8c00;
  }
  uVar3 = 0xffffffff;
  goto LAB_075b8bec;
code_r0x075b8bb4:
  uVar4 = param_2 & 0xffffffff;
LAB_075b8bb8:
  if ((uint)uVar4 != uVar5) {
    if (uVar5 <= (uint)uVar4) {
LAB_075b8c00:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    if (param_1[uVar4 & 0xffffffff] != 0) goto LAB_075b8bcc;
  }
LAB_075b8bec:
  *param_3 = uVar3;
  return uVar2;
}

