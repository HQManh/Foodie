// rea decompile_all
// name: std::__ndk1::collate_byname<char>::do_compare
// address: 0x401cbe0
// body: available
// range: 0x401cbe0-0x401cd7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x401cd74 to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x401cd7c to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::collate_byname<char>::do_compare(char const*, char const*, char const*, char const*)
   const */

uint __thiscall
std::__ndk1::collate_byname<char>::do_compare
          (collate_byname<char> *this,char *param_1,char *param_2,char *param_3,char *param_4)

{
  ulong uVar1;
  char *__s2;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  ulong local_80;
  ulong local_78;
  char *local_70;
  ulong local_68;
  ulong local_60;
  char *local_58;
  
  uVar6 = (long)param_2 - (long)param_1;
  if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5d118(&local_68);
  }
  if (uVar6 < 0x17) {
    pcVar7 = (char *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)uVar6 << 1));
  }
  else {
    pcVar7 = operator_new((uVar6 | 0xf) + 1);
    local_68 = (uVar6 | 0xf) + 2;
    local_60 = uVar6;
    local_58 = pcVar7;
  }
  if (param_1 != param_2) {
    memcpy(pcVar7,param_1,uVar6);
    pcVar7 = pcVar7 + uVar6;
  }
  uVar6 = (long)param_4 - (long)param_3;
  *pcVar7 = '\0';
  if (uVar6 < 0xfffffffffffffff0) {
    if (uVar6 < 0x17) {
      pcVar7 = (char *)((ulong)&local_80 | 1);
      local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar6 << 1));
    }
    else {
      uVar1 = (uVar6 | 0xf) + 1;
      pcVar7 = operator_new(uVar1);
      local_80 = uVar1 | 1;
      local_78 = uVar6;
      local_70 = pcVar7;
    }
    if (param_3 != param_4) {
      memcpy(pcVar7,param_3,uVar6);
      pcVar7 = pcVar7 + uVar6;
    }
    pcVar3 = local_58;
    uVar1 = local_68;
    pcVar2 = local_70;
    uVar6 = local_80;
    *pcVar7 = '\0';
    pcVar7 = (char *)((ulong)&local_68 | 1);
    if ((local_68 & 1) != 0) {
      pcVar7 = local_58;
    }
    __s2 = (char *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      __s2 = local_70;
    }
    iVar4 = strcoll_l(pcVar7,__s2,*(__locale_t *)(this + 0x10));
    if ((uVar6 & 1) != 0) {
      operator_delete(pcVar2);
    }
    if ((uVar1 & 1) != 0) {
      operator_delete(pcVar3);
    }
    uVar5 = (uint)(iVar4 != 0);
    if (iVar4 < 0) {
      uVar5 = 0xffffffff;
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5d118(&local_80);
}

