// rea decompile_all
// name: FUN_03fbc6b8
// address: 0x3fbc6b8
// body: available
// range: 0x3fbc6b8-0x3fbc7bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fbc6b8(byte *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  byte *local_60;
  ulong uStack_58;
  void *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_48 [16];
  void *local_38;
  byte *local_30;
  ulong uStack_28;
  
  lVar2 = FUN_03faa758();
  uStack_58 = *(ulong *)(param_1 + 8);
  local_60 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    local_60 = param_1 + 1;
    uStack_58 = (ulong)(*param_1 >> 1);
  }
  FUN_03f8a450(local_48,&local_60);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(local_48,".config");
  uStack_28 = (ulong)(*param_1 >> 1);
  local_30 = param_1 + 1;
  if ((*param_1 & 1) != 0) {
    uStack_28 = *(ulong *)(param_1 + 8);
    local_30 = *(byte **)(param_1 + 0x10);
  }
  FUN_03f8a2e0(&local_60,&local_30);
  lVar4 = *(long *)(lVar2 + 8);
  pvVar1 = (void *)((ulong)&local_60 | 1);
  if (((ulong)local_60 & 1) != 0) {
    pvVar1 = local_50;
  }
  uVar3 = FUN_03f967b4(pvVar1);
  FUN_03f5ef9c(lVar4 + 0x10,uVar3);
  lVar2 = *(long *)(lVar2 + 8);
  pvVar1 = (void *)((ulong)local_48 | 1);
  if (((byte)local_48[0] & 1) != 0) {
    pvVar1 = local_38;
  }
  uVar3 = FUN_03f967b4(pvVar1);
  FUN_03f5ef9c(lVar2 + 0x28,uVar3);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (((byte)local_48[0] & 1) != 0) {
    operator_delete(local_38);
  }
  return;
}

