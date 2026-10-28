// rea decompile_all
// name: std::__ndk1::stoul
// address: 0x3fe67c4
// body: available
// range: 0x3fe67c4-0x3fe6937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe68d4 to 0x3f695f8 FUN_03f695f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fe6934 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::stoul(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long*, int) */

ulong std::__ndk1::stoul(basic_string *param_1,ulong *param_2,int param_3)

{
  basic_string *__nptr;
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70;
  undefined4 local_6f;
  undefined2 local_6b;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58;
  undefined4 local_57;
  undefined1 local_53;
  undefined6 local_52;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  undefined4 local_48;
  undefined4 uStack_44;
  wchar_t *local_28;
  
  local_70 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xa;
  local_6f = 0x756f7473;
  local_6b = 0x6c;
  local_28 = (wchar_t *)0x0;
  __nptr = param_1 + 4;
  if (((byte)*param_1 & 1) != 0) {
    __nptr = *(basic_string **)(param_1 + 0x10);
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  *piVar3 = 0;
  uVar4 = wcstoul((wchar_t *)__nptr,&local_28,param_3);
  iVar2 = *piVar3;
  *piVar3 = iVar1;
  puVar6 = (undefined4 *)((ulong)&local_70 | 1);
  if (iVar2 != 0x22) {
    if ((long)local_28 - (long)__nptr != 0) {
      if (param_2 != (ulong *)0x0) {
        *param_2 = (long)local_28 - (long)__nptr >> 2;
      }
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
                (&local_70);
      return uVar4;
    }
    local_57 = *puVar6;
    local_53 = *(undefined1 *)(puVar6 + 1);
    local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x28;
    local_52 = 0x63206f6e203a;
    uStack_4c = 0x6f;
    uStack_4b = 0x6e;
    uStack_4a = 0x6576;
    local_48 = 0x6f697372;
    uStack_44 = 0x6e;
    uVar5 = FUN_03fe9530((ulong)&local_58 | 1);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_58);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_70);
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar5);
  }
  local_57 = *puVar6;
  local_53 = *(undefined1 *)(puVar6 + 1);
  local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26;
  uStack_44 = 0;
  local_52 = 0x2074756f203a;
  uStack_4c = 0x6f;
  uStack_4b = 0x66;
  uStack_4a = 0x7220;
  local_48 = 0x65676e61;
                    /* WARNING: Subroutine does not return */
  FUN_03f695f8((ulong)&local_58 | 1);
}

