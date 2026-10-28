// rea decompile_all
// name: FUN_03fa19f0
// address: 0x3fa19f0
// body: available
// range: 0x3fa19f0-0x3fa1b27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fa1b24 to 0x89dbde0 <EXTERNAL>::exit (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_03fa19f0(ulong *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_90 [72];
  undefined1 auStack_48 [40];
  undefined1 *local_18;
  
  if ((char)param_1[3] == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_03fa1bf4(param_1);
  }
  uVar4 = param_1[0xd];
  if (~param_2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar3 = param_1[0xc];
  if ((uVar3 < 4) || (*param_1 < uVar4 + param_2)) {
    uVar2 = 4;
    do {
      uVar5 = uVar2;
      uVar2 = uVar5 << 1;
    } while ((ulong)(long)(*(float *)(param_1 + 2) * (float)uVar5) <= uVar4 + param_2);
    if (uVar3 < uVar5) {
      uVar2 = 4;
      param_2 = (uVar4 - param_1[8]) + param_2;
      while ((uVar2 < uVar3 || ((ulong)(long)(*(float *)(param_1 + 2) * (float)uVar2) <= param_2)))
      {
        uVar2 = uVar2 << 1;
      }
      if (((uVar2 < uVar5) && (uVar2 < 0x7fffffffffffffff)) &&
         ((ulong)(long)(*(float *)((long)param_1 + 0x14) * (float)(uVar2 << 1)) <= param_2)) {
        uVar2 = uVar2 << 1;
      }
      FUN_03f9e140(auStack_90,0,param_1,uVar2);
      FUN_03f9e1f8(param_1,auStack_90);
      local_18 = auStack_48;
      FUN_03f5efa4(&local_18);
      uVar1 = 1;
    }
  }
  return uVar1 & 1;
}

