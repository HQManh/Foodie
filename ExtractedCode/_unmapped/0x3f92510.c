// rea decompile_all
// name: FUN_03f92510
// address: 0x3f92510
// body: available
// range: 0x3f92510-0x3f926c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f92510(ulong *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  size_t sVar1;
  char *pcVar2;
  int iVar3;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulong local_f8;
  size_t sStack_f0;
  char *local_e8;
  undefined1 *local_e0;
  ulong *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 *local_a0;
  ulong *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  char cStack_71;
  ulong local_70;
  size_t sStack_68;
  char *local_60;
  
  puStack_98 = &local_f8;
  puStack_90 = &local_130;
  local_70 = 0;
  sStack_68 = 0;
  local_60 = (char *)0x0;
  uStack_88 = 0xffffff80ffffffc8;
  local_130 = param_3;
  uStack_128 = param_4;
  local_120 = param_5;
  uStack_118 = param_6;
  local_110 = param_7;
  uStack_108 = param_8;
  local_100 = param_9;
  local_a0 = (undefined1 *)register0x00000008;
  iVar3 = vsnprintf(&cStack_71,0,param_2,&local_a0);
  if (iVar3 == -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_70,(long)(iVar3 + 1),'\0');
    puStack_d8 = &local_f8;
    puStack_d0 = &local_130;
    sVar1 = local_70 >> 1 & 0x7f;
    pcVar2 = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      sVar1 = sStack_68;
      pcVar2 = local_60;
    }
    uStack_c8 = 0xffffff80ffffffc8;
    local_e0 = (undefined1 *)register0x00000008;
    iVar3 = vsnprintf(pcVar2,sVar1,param_2,&local_e0);
    if (iVar3 == -1) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
      }
    }
    else {
      sVar1 = local_70 >> 1 & 0x7f;
      if ((local_70 & 1) != 0) {
        sVar1 = sStack_68;
      }
      if (sVar1 != 0) {
        pcVar2 = (char *)((ulong)&local_70 | 1);
        if ((local_70 & 1) != 0) {
          pcVar2 = local_60;
        }
        if (pcVar2[(long)(sVar1 - 1)] == '\0') {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)&local_f8,(ulong)&local_70,0,(allocator *)(sVar1 - 1));
          if ((local_70 & 1) != 0) {
            operator_delete(local_60);
          }
          sStack_68 = sStack_f0;
          local_70 = local_f8;
          local_60 = local_e8;
        }
      }
      param_1[1] = sStack_68;
      *param_1 = local_70;
      param_1[2] = (ulong)local_60;
    }
  }
  return;
}

