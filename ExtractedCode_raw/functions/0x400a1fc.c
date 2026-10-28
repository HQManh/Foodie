// rea decompile_all
// name: std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__get_white_space
// address: 0x400a1fc
// body: available
// range: 0x400a1fc-0x400a3e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_white_space(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&,
   std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_white_space(undefined8 param_1_00,long *param_1,long *param_3,uint *param_4,long param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) goto LAB_0400a240;
LAB_0400a28c:
  bVar2 = true;
  if (param_3 == (long *)0x0) goto LAB_0400a27c;
LAB_0400a294:
  if (param_3[3] == param_3[4]) {
    iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
    if (iVar3 == -1) {
      param_3 = (long *)0x0;
    }
    plVar4 = (long *)*param_1;
    if (bVar2 != (iVar3 == -1)) goto LAB_0400a2d8;
  }
  else if (bVar2 != false) {
LAB_0400a2d8:
    do {
      if ((byte *)plVar4[3] == (byte *)plVar4[4]) {
        uVar5 = (**(code **)(*plVar4 + 0x48))();
        uVar5 = uVar5 & 0xff;
        if ((uint)uVar5 >> 7 != 0) goto LAB_0400a338;
      }
      else {
        bVar1 = *(byte *)plVar4[3];
        uVar5 = (ulong)bVar1;
        if ((char)bVar1 < '\0') {
LAB_0400a338:
          plVar4 = (long *)*param_1;
          break;
        }
      }
      plVar4 = (long *)*param_1;
      if ((*(ulong *)(*(long *)(param_5 + 0x10) + uVar5 * 8) & 1) == 0) break;
      if (plVar4[3] == plVar4[4]) {
        (**(code **)(*plVar4 + 0x50))();
        plVar4 = (long *)*param_1;
      }
      else {
        plVar4[3] = plVar4[3] + 1;
        plVar4 = (long *)*param_1;
      }
      if (plVar4 == (long *)0x0) goto LAB_0400a28c;
LAB_0400a240:
      if (plVar4[3] == plVar4[4]) {
        iVar3 = (**(code **)(*plVar4 + 0x48))();
        if (iVar3 == -1) {
          plVar4 = (long *)0x0;
          *param_1 = 0;
          goto LAB_0400a28c;
        }
        plVar4 = (long *)*param_1;
        bVar2 = plVar4 == (long *)0x0;
      }
      else {
        bVar2 = false;
      }
      if (param_3 != (long *)0x0) goto LAB_0400a294;
LAB_0400a27c:
      if (bVar2 != false) break;
    } while( true );
  }
  if (plVar4 != (long *)0x0) {
    if (plVar4[3] != plVar4[4]) {
      bVar2 = false;
      goto joined_r0x0400a38c;
    }
    iVar3 = (**(code **)(*plVar4 + 0x48))();
    if (iVar3 != -1) {
      bVar2 = *param_1 == 0;
      goto joined_r0x0400a38c;
    }
    *param_1 = 0;
  }
  bVar2 = true;
joined_r0x0400a38c:
  if (param_3 == (long *)0x0) {
    if (bVar2 == false) {
      return;
    }
  }
  else if (param_3[3] == param_3[4]) {
    iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
    if (bVar2 != (iVar3 == -1)) {
      return;
    }
  }
  else if (bVar2 != false) {
    return;
  }
  *param_4 = *param_4 | 2;
  return;
}

