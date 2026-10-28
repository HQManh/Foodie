// rea decompile_all
// name: std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
// address: 0x3fef7e4
// body: available
// range: 0x3fef7e4-0x3fef95f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::get(char*, long, char) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2,
          char param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  char *pcVar6;
  sentry local_44 [4];
  
  *(undefined8 *)(this + 8) = 0;
  sentry::sentry(local_44,(basic_istream *)this,true);
  if (local_44[0] != (sentry)0x0) {
    lVar1 = param_2 + -1;
    if (param_2 < 1) {
      uVar2 = 4;
    }
    else {
      lVar5 = *(long *)(this + 8);
      if (lVar5 < lVar1) {
        do {
          while( true ) {
            plVar3 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
            if ((byte *)plVar3[3] == (byte *)plVar3[4]) {
              uVar2 = (**(code **)(*plVar3 + 0x48))();
              if (uVar2 == 0xffffffff) {
                uVar4 = 2;
                goto LAB_03fef8f0;
              }
            }
            else {
              uVar2 = (uint)*(byte *)plVar3[3];
            }
            pcVar6 = param_1;
            if ((uVar2 & 0xff) == (uint)(byte)param_3) goto LAB_03fef8ec;
            pcVar6 = param_1 + 1;
            *param_1 = (char)uVar2;
            lVar5 = 0x7fffffffffffffff;
            if (*(long *)(this + 8) != 0x7fffffffffffffff) {
              lVar5 = *(long *)(this + 8) + 1;
              *(long *)(this + 8) = lVar5;
            }
            plVar3 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
            param_1 = pcVar6;
            if (plVar3[3] == plVar3[4]) break;
            plVar3[3] = plVar3[3] + 1;
            if (lVar1 <= lVar5) goto LAB_03fef8ec;
          }
          (**(code **)(*plVar3 + 0x50))();
        } while (*(long *)(this + 8) < lVar1);
LAB_03fef8ec:
        uVar4 = 0;
        param_1 = pcVar6;
LAB_03fef8f0:
        lVar5 = *(long *)(this + 8);
      }
      else {
        uVar4 = 0;
      }
      uVar2 = uVar4 | 4;
      if (lVar5 != 0) {
        uVar2 = uVar4;
      }
      *param_1 = '\0';
    }
    ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                    *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | uVar2)
    ;
  }
  if (0 < param_2) {
    *param_1 = '\0';
  }
  return this;
}

