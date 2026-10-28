// rea decompile_all
// name: std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::seekoff
// address: 0x3ffa074
// body: available
// range: 0x3ffa074-0x3ffa14f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::seekoff(long long,
   std::__ndk1::ios_base::seekdir, unsigned int) */

undefined1  [16]
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::seekoff
          (long *param_1,long param_2,__off_t param_3)

{
  uint uVar1;
  int iVar2;
  __off_t _Var4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar3;
  
  if ((long *)param_1[0x10] == (long *)0x0) {
    auVar5 = FUN_03ff9c28();
    plVar3 = auVar5._0_8_;
    if (((plVar3[0xf] != 0) && (iVar2 = (**(code **)(*plVar3 + 0x30))(), iVar2 == 0)) &&
       (iVar2 = fseeko((FILE *)plVar3[0xf],param_3,0), iVar2 == 0)) {
      plVar3[0x11] = auVar5._8_8_;
      auVar6._8_8_ = param_3;
      auVar6._0_8_ = auVar5._8_8_;
      return auVar6;
    }
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  uVar1 = (**(code **)(*(long *)param_1[0x10] + 0x30))();
  if ((param_1[0xf] != 0) && ((param_2 == 0 || (0 < (int)uVar1)))) {
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
    if (((uint)param_3 < 3) && (iVar2 == 0)) {
      _Var4 = (ulong)uVar1 * param_2;
      if ((int)uVar1 < 1) {
        _Var4 = 0;
      }
      iVar2 = fseeko((FILE *)param_1[0xf],_Var4,(uint)param_3);
      if (iVar2 == 0) {
        _Var4 = ftello((FILE *)param_1[0xf]);
        auVar5._8_8_ = _Var4;
        auVar5._0_8_ = param_1[0x11];
        return auVar5;
      }
    }
  }
  return ZEXT816(0xffffffffffffffff) << 0x40;
}

