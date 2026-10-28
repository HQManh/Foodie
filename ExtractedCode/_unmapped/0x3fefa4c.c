// rea decompile_all
// name: std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
// address: 0x3fefa4c
// body: available
// range: 0x3fefa4c-0x3fefba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::get(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >&, char) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,basic_streambuf *param_1,
          char param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  sentry local_24 [4];
  
  *(undefined8 *)(this + 8) = 0;
  sentry::sentry(local_24,(basic_istream *)this,true);
  if (local_24[0] != (sentry)0x0) {
    while( true ) {
      plVar5 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
      if ((byte *)plVar5[3] == (byte *)plVar5[4]) {
        uVar3 = (**(code **)(*plVar5 + 0x48))();
        if (uVar3 == 0xffffffff) {
          uVar3 = 2;
          goto LAB_03fefb68;
        }
      }
      else {
        uVar3 = (uint)*(byte *)plVar5[3];
      }
      if ((uVar3 & 0xff) == (uint)(byte)param_2) break;
      puVar2 = *(undefined1 **)(param_1 + 0x30);
      if (puVar2 == *(undefined1 **)(param_1 + 0x38)) {
        iVar4 = (**(code **)(*(long *)param_1 + 0x68))(param_1,uVar3 & 0xff);
        if (iVar4 == -1) break;
      }
      else {
        *(undefined1 **)(param_1 + 0x30) = puVar2 + 1;
        *puVar2 = (char)uVar3;
      }
      if (*(long *)(this + 8) != 0x7fffffffffffffff) {
        *(long *)(this + 8) = *(long *)(this + 8) + 1;
      }
      plVar5 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
      if (plVar5[3] == plVar5[4]) {
        (**(code **)(*plVar5 + 0x50))();
      }
      else {
        plVar5[3] = plVar5[3] + 1;
      }
    }
    uVar3 = 0;
LAB_03fefb68:
    uVar1 = uVar3 | 4;
    if (*(long *)(this + 8) != 0) {
      uVar1 = uVar3;
    }
    ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                    *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | uVar1)
    ;
  }
  return this;
}

