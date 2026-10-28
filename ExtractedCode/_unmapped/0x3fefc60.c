// rea decompile_all
// name: std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::getline
// address: 0x3fefc60
// body: available
// range: 0x3fefc60-0x3fefe33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::getline(char*, long, char) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::getline
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2,
          char param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  sentry local_54 [4];
  
  *(undefined8 *)(this + 8) = 0;
  sentry::sentry(local_54,(basic_istream *)this,true);
  uVar3 = (uint)(byte)local_54[0];
  if (local_54[0] != (sentry)0x0) {
    while( true ) {
      plVar2 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
      if ((byte *)plVar2[3] == (byte *)plVar2[4]) {
        uVar3 = (**(code **)(*plVar2 + 0x48))();
        if (uVar3 == 0xffffffff) {
          uVar3 = 2;
          goto joined_r0x03fefdcc;
        }
      }
      else {
        uVar3 = (uint)*(byte *)plVar2[3];
      }
      if ((uVar3 & 0xff) == (uint)(byte)param_3) {
        plVar2 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
        if (plVar2[3] == plVar2[4]) {
          (**(code **)(*plVar2 + 0x50))();
        }
        else {
          plVar2[3] = plVar2[3] + 1;
        }
        if (*(long *)(this + 8) == 0x7fffffffffffffff) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0;
          *(long *)(this + 8) = *(long *)(this + 8) + 1;
        }
        goto joined_r0x03fefdcc;
      }
      if (param_2 + -1 <= *(long *)(this + 8)) break;
      lVar4 = *(long *)this;
      pcVar5 = param_1 + 1;
      *param_1 = (char)uVar3;
      plVar2 = *(long **)(this + *(long *)(lVar4 + -0x18) + 0x28);
      if (plVar2[3] == plVar2[4]) {
        (**(code **)(*plVar2 + 0x50))();
      }
      else {
        plVar2[3] = plVar2[3] + 1;
      }
      param_1 = pcVar5;
      if (*(long *)(this + 8) != 0x7fffffffffffffff) {
        *(long *)(this + 8) = *(long *)(this + 8) + 1;
      }
    }
    uVar3 = 4;
  }
joined_r0x03fefdcc:
  if (0 < param_2) {
    *param_1 = '\0';
  }
  uVar1 = uVar3 | 4;
  if (*(long *)(this + 8) != 0) {
    uVar1 = uVar3;
  }
  ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                  *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | uVar1);
  return this;
}

