// rea decompile_all
// name: std::__ndk1::stof
// address: 0x3fe6284
// body: available
// range: 0x3fe6284-0x3fe63cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe6370 to 0x3f695f8 FUN_03f695f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fe63c8 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::stof(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long*) */

float std::__ndk1::stof(basic_string *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  basic_string *__nptr;
  float fVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70;
  undefined4 local_6f;
  undefined1 local_6b;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58;
  undefined4 local_57;
  undefined6 local_53;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  char *local_38;
  
  local_70 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x8;
  local_6b = 0;
  local_6f = 0x666f7473;
  __nptr = *(basic_string **)(param_1 + 0x10);
  local_38 = (char *)0x0;
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  *piVar3 = 0;
  fVar5 = strtof((char *)__nptr,&local_38);
  iVar2 = *piVar3;
  *piVar3 = iVar1;
  if (iVar2 != 0x22) {
    if ((long)local_38 - (long)__nptr != 0) {
      if (param_2 != (ulong *)0x0) {
        *param_2 = (long)local_38 - (long)__nptr;
      }
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
                (&local_70);
      return fVar5;
    }
    local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26;
    uStack_44 = 0;
    local_57 = local_6f;
    local_53 = 0x63206f6e203a;
    uStack_4d = 0x6f;
    uStack_4c = 0x7265766e;
    local_48 = 0x6e6f6973;
    uVar4 = FUN_03fe9530((ulong)&local_58 | 1);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_58);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_70);
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar4);
  }
  local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24;
  uStack_44 = 0;
  local_57 = local_6f;
  local_53 = 0x2074756f203a;
  uStack_4d = 0x6f;
  uStack_4c = 0x61722066;
  local_48 = 0x65676e;
                    /* WARNING: Subroutine does not return */
  FUN_03f695f8((ulong)&local_58 | 1);
}

