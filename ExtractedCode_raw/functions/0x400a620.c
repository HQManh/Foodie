// rea decompile_all
// name: std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__get_percent
// address: 0x400a620
// body: available
// range: 0x400a620-0x400a81f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_percent(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&,
   std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_percent(undefined8 param_1_00,long *param_1,long *param_3,uint *param_4,long *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  
  plVar4 = (long *)*param_1;
  if (plVar4 == (long *)0x0) {
LAB_0400a69c:
    bVar1 = true;
    if (param_3 == (long *)0x0) goto LAB_0400a664;
LAB_0400a6a4:
    if (param_3[3] == param_3[4]) {
      iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar4 = (long *)0x0;
      if (iVar3 != -1) {
        plVar4 = param_3;
      }
      if (bVar1 == (iVar3 == -1)) {
LAB_0400a6f0:
        uVar6 = 6;
        goto LAB_0400a7fc;
      }
    }
    else {
      plVar4 = param_3;
      if (bVar1 == false) goto LAB_0400a6f0;
    }
  }
  else {
    if (plVar4[3] == plVar4[4]) {
      iVar3 = (**(code **)(*plVar4 + 0x48))();
      if (iVar3 == -1) {
        *param_1 = 0;
        goto LAB_0400a69c;
      }
      bVar1 = *param_1 == 0;
    }
    else {
      bVar1 = false;
    }
    if (param_3 != (long *)0x0) goto LAB_0400a6a4;
LAB_0400a664:
    if (bVar1 != false) goto LAB_0400a6f0;
    plVar4 = (long *)0x0;
  }
  plVar5 = (long *)*param_1;
  if ((byte *)plVar5[3] == (byte *)plVar5[4]) {
    uVar6 = (**(code **)(*plVar5 + 0x48))();
  }
  else {
    uVar6 = (uint)*(byte *)plVar5[3];
  }
  cVar2 = (**(code **)(*param_5 + 0x48))(param_5,uVar6,0);
  if (cVar2 != '%') {
    uVar6 = 4;
    goto LAB_0400a7fc;
  }
  plVar5 = (long *)*param_1;
  if (plVar5[3] == plVar5[4]) {
    (**(code **)(*plVar5 + 0x50))();
    plVar5 = (long *)*param_1;
    if (plVar5 != (long *)0x0) goto LAB_0400a760;
LAB_0400a7ec:
    bVar1 = true;
    if (plVar4 != (long *)0x0) goto LAB_0400a774;
LAB_0400a7f4:
    if (bVar1 == false) {
      return;
    }
  }
  else {
    plVar5[3] = plVar5[3] + 1;
LAB_0400a760:
    if (plVar5[3] == plVar5[4]) {
      iVar3 = (**(code **)(*plVar5 + 0x48))();
      if (iVar3 == -1) {
        *param_1 = 0;
        goto LAB_0400a7ec;
      }
      bVar1 = *param_1 == 0;
    }
    else {
      bVar1 = false;
    }
    if (plVar4 == (long *)0x0) goto LAB_0400a7f4;
LAB_0400a774:
    if (plVar4[3] == plVar4[4]) {
      iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
      if (bVar1 != (iVar3 == -1)) {
        return;
      }
    }
    else if (bVar1 != false) {
      return;
    }
  }
  uVar6 = 2;
LAB_0400a7fc:
  *param_4 = *param_4 | uVar6;
  return;
}

