// rea decompile_all
// name: std::__ndk1::collate_byname<char>::do_transform
// address: 0x401cd9c
// body: available
// range: 0x401cd9c-0x401cf27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x401cf1c to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x401cf24 to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::collate_byname<char>::do_transform(char const*, char const*) const */

void std::__ndk1::collate_byname<char>::do_transform(char *param_1,char *param_2)

{
  size_t __n;
  char *in_x2;
  ulong *in_x8;
  ulong uVar1;
  byte *pbVar2;
  char *pcVar3;
  ulong local_58;
  ulong local_50;
  char *local_48;
  
  uVar1 = (long)in_x2 - (long)param_2;
  if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5d118(&local_58);
  }
  if (uVar1 < 0x17) {
    pcVar3 = (char *)((ulong)&local_58 | 1);
    local_58 = CONCAT71(local_58._1_7_,(char)((int)uVar1 << 1));
  }
  else {
    pcVar3 = operator_new((uVar1 | 0xf) + 1);
    local_58 = (uVar1 | 0xf) + 2;
    local_50 = uVar1;
    local_48 = pcVar3;
  }
  if (param_2 != in_x2) {
    memcpy(pcVar3,param_2,uVar1);
    pcVar3 = pcVar3 + uVar1;
  }
  *pcVar3 = '\0';
  pcVar3 = (char *)((ulong)&local_58 | 1);
  if ((local_58 & 1) != 0) {
    pcVar3 = local_48;
  }
  __n = strxfrm_l((char *)0x0,pcVar3,0,*(__locale_t *)(param_1 + 0x10));
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5d118();
  }
  if (__n < 0x17) {
    pbVar2 = (byte *)((long)in_x8 + 1);
    *(byte *)in_x8 = (byte)((int)__n << 1);
    if (__n == 0) goto LAB_0401ceb4;
  }
  else {
    uVar1 = (__n | 0xf) + 1;
    pbVar2 = operator_new(uVar1);
    in_x8[1] = __n;
    in_x8[2] = (ulong)pbVar2;
    *in_x8 = uVar1 | 1;
  }
  memset(pbVar2,0,__n);
LAB_0401ceb4:
  pbVar2[__n] = 0;
  uVar1 = in_x8[1];
  pbVar2 = (byte *)in_x8[2];
  pcVar3 = (char *)((ulong)&local_58 | 1);
  if ((local_58 & 1) != 0) {
    pcVar3 = local_48;
  }
  if (((byte)*in_x8 & 1) == 0) {
    pbVar2 = (byte *)((long)in_x8 + 1);
    uVar1 = (ulong)(byte)((byte)*in_x8 >> 1);
  }
  strxfrm_l((char *)pbVar2,pcVar3,uVar1 + 1,*(__locale_t *)(param_1 + 0x10));
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  return;
}

