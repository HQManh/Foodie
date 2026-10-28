// rea decompile_all
// name: std::__ndk1::to_string
// address: 0x3fe8bac
// body: available
// range: 0x3fe8bac-0x3fe8d1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::to_string(long double) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,longdouble param_1)

{
  uint uVar1;
  ulong *in_x8;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  ulong local_58;
  ulong uStack_50;
  char *local_48;
  
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (char *)0x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_58,0x16,'\0');
  pcVar4 = (char *)((ulong)&local_58 | 1);
  uVar5 = (ulong)((byte)local_58._0_1_ >> 1);
  if ((local_58 & 1) != 0) {
    uVar5 = uStack_50;
  }
  do {
    pcVar3 = pcVar4;
    if (((byte)local_58._0_1_ & 1) != 0) {
      pcVar3 = local_48;
    }
    uVar1 = snprintf(pcVar3,uVar5 + 1,"%Lf",param_1);
    if ((int)uVar1 < 0) {
      uVar2 = uVar5 << 1 | 1;
    }
    else {
      uVar2 = (ulong)uVar1;
      if (uVar2 <= uVar5) {
        uVar5 = (ulong)((byte)local_58._0_1_ >> 1);
        if ((local_58 & 1) != 0) {
          uVar5 = uStack_50;
        }
        if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
          pcVar3 = local_48;
          uVar5 = uVar2;
          if ((local_58 & 1) == 0) {
            local_58 = CONCAT71(local_58._1_7_,(char)(uVar1 << 1));
            pcVar3 = pcVar4;
            uVar5 = uStack_50;
          }
          uStack_50 = uVar5;
          pcVar3[uVar2] = '\0';
        }
        else {
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_58,uVar2 - uVar5,'\0');
        }
        pcVar4 = local_48;
        uVar5 = uStack_50;
        uStack_50 = 0;
        local_48 = (char *)0x0;
        in_x8[1] = uVar5;
        *in_x8 = local_58;
        in_x8[2] = (ulong)pcVar4;
        local_58 = 0;
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
        ~basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_58);
        return;
      }
    }
    uVar5 = (ulong)((byte)local_58._0_1_ >> 1);
    if ((local_58 & 1) != 0) {
      uVar5 = uStack_50;
    }
    if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
      pcVar3 = local_48;
      uVar5 = uVar2;
      if ((local_58 & 1) == 0) {
        local_58 = CONCAT71(local_58._1_7_,(char)((int)uVar2 << 1));
        pcVar3 = pcVar4;
        uVar5 = uStack_50;
      }
      uStack_50 = uVar5;
      pcVar3[uVar2] = '\0';
    }
    else {
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_58,uVar2 - uVar5,'\0');
    }
    uVar5 = uVar2;
  } while( true );
}

