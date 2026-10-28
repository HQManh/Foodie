// rea decompile_all
// name: FUN_03fea714
// address: 0x3fea714
// body: available
// range: 0x3fea714-0x3fea7eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fea714(undefined8 *param_1,int *param_2,
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *param_3)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_48 [8];
  ulong local_40;
  char *local_38;
  
  iVar2 = *param_2;
  if (iVar2 != 0) {
    uVar1 = (ulong)((byte)*param_3 >> 1);
    if (((byte)*param_3 & 1) != 0) {
      uVar1 = *(ulong *)(param_3 + 8);
    }
    if (uVar1 != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(param_3,": ",2);
      iVar2 = *param_2;
    }
    (**(code **)(**(long **)(param_2 + 2) + 0x30))(local_48,*(long **)(param_2 + 2),iVar2);
    uVar1 = (ulong)(local_48[0] >> 1);
    pcVar3 = (char *)((ulong)local_48 | 1);
    if ((local_48[0] & 1) != 0) {
      uVar1 = local_40;
      pcVar3 = local_38;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(param_3,pcVar3,uVar1);
    if ((local_48[0] & 1) != 0) {
      operator_delete(local_38);
    }
  }
  uVar6 = *(undefined8 *)(param_3 + 8);
  uVar5 = *(undefined8 *)param_3;
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  *(undefined8 *)param_3 = 0;
  return;
}

