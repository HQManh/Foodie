// rea decompile_all
// name: FUN_03f8e4ec
// address: 0x3f8e4ec
// body: available
// range: 0x3f8e4ec-0x3f8e5bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8e5b8 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03f8e4ec(uint param_1,byte param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_5c;
  undefined4 uStack_54;
  uint uStack_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = ioctl(0,0x5401,&local_5c);
  if ((iVar3 != -1) && (((uStack_50 & param_1) != 0) != (bool)(param_2 & 1))) {
    uVar1 = uStack_50 & (param_1 ^ 0xffffffff);
    uStack_50 = uStack_50 | param_1;
    if ((param_2 & 1) == 0) {
      uStack_50 = uVar1;
    }
    iVar4 = ioctl(0,0x5402,&local_5c);
    if (iVar4 != -1) {
      uRam0000000009534d38 = CONCAT44(uStack_50,uStack_54);
      _DAT_09534d30 = local_5c;
      _DAT_09534d48 = uStack_44;
      _DAT_09534d40 = local_4c;
      DAT_09534d50 = local_3c;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3 != -1);
}

