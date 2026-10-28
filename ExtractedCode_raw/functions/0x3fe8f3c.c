// rea decompile_all
// name: std::__ndk1::to_wstring
// address: 0x3fe8f3c
// body: available
// range: 0x3fe8f3c-0x3fe90db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::to_wstring(double) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,double param_1)

{
  uint uVar1;
  ulong *in_x8;
  ulong uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ulong uVar5;
  ulong local_60;
  ulong uStack_58;
  wchar_t *local_50;
  
  local_50 = operator_new(0x60);
  local_50[0x14] = L'\0';
  uStack_58 = 0x14;
  local_60 = 0x19;
  local_50[2] = L'\0';
  local_50[3] = L'\0';
  local_50[0] = L'\0';
  local_50[1] = L'\0';
  local_50[6] = L'\0';
  local_50[7] = L'\0';
  local_50[4] = L'\0';
  local_50[5] = L'\0';
  local_50[10] = L'\0';
  local_50[0xb] = L'\0';
  local_50[8] = L'\0';
  local_50[9] = L'\0';
  local_50[0xe] = L'\0';
  local_50[0xf] = L'\0';
  local_50[0xc] = L'\0';
  local_50[0xd] = L'\0';
  local_50[0x12] = L'\0';
  local_50[0x13] = L'\0';
  local_50[0x10] = L'\0';
  local_50[0x11] = L'\0';
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append
            ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_60,3,L'\0');
  pwVar4 = (wchar_t *)((ulong)&local_60 | 4);
  uVar5 = (ulong)((byte)local_60._0_1_ >> 1);
  if ((local_60 & 1) != 0) {
    uVar5 = uStack_58;
  }
  do {
    pwVar3 = pwVar4;
    if (((byte)local_60._0_1_ & 1) != 0) {
      pwVar3 = local_50;
    }
    uVar1 = swprintf(pwVar3,uVar5 + 1,L"%f",param_1);
    if ((int)uVar1 < 0) {
      uVar2 = uVar5 << 1 | 1;
    }
    else {
      uVar2 = (ulong)uVar1;
      if (uVar2 <= uVar5) {
        uVar5 = (ulong)((byte)local_60._0_1_ >> 1);
        if ((local_60 & 1) != 0) {
          uVar5 = uStack_58;
        }
        if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
          pwVar3 = local_50;
          uVar5 = uVar2;
          if ((local_60 & 1) == 0) {
            local_60 = CONCAT71(local_60._1_7_,(char)(uVar1 << 1));
            pwVar3 = pwVar4;
            uVar5 = uStack_58;
          }
          uStack_58 = uVar5;
          pwVar3[uVar2] = L'\0';
        }
        else {
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          append((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  *)&local_60,uVar2 - uVar5,L'\0');
        }
        pwVar4 = local_50;
        uVar5 = uStack_58;
        uStack_58 = 0;
        local_50 = (wchar_t *)0x0;
        in_x8[1] = uVar5;
        *in_x8 = local_60;
        in_x8[2] = (ulong)pwVar4;
        local_60 = 0;
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        ~basic_string((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                       *)&local_60);
        return;
      }
    }
    uVar5 = (ulong)((byte)local_60._0_1_ >> 1);
    if ((local_60 & 1) != 0) {
      uVar5 = uStack_58;
    }
    if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
      pwVar3 = local_50;
      uVar5 = uVar2;
      if ((local_60 & 1) == 0) {
        local_60 = CONCAT71(local_60._1_7_,(char)((int)uVar2 << 1));
        pwVar3 = pwVar4;
        uVar5 = uStack_58;
      }
      uStack_58 = uVar5;
      pwVar3[uVar2] = L'\0';
    }
    else {
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      append((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_60,uVar2 - uVar5,L'\0');
    }
    uVar5 = uVar2;
  } while( true );
}

