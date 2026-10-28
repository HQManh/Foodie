// rea decompile_all
// name: std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__get_white_space
// address: 0x400c05c
// body: available
// range: 0x400c05c-0x400c26b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >
   >::__get_white_space(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t>
   >&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&,
   std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_white_space(undefined8 param_1_00,long *param_1,long *param_3,uint *param_4,long *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) goto LAB_0400c0a0;
LAB_0400c0ec:
  plVar5 = (long *)0x0;
  bVar1 = true;
  bVar2 = true;
  if (param_3 == (long *)0x0) goto LAB_0400c0c8;
  while( true ) {
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar5 = (long *)*param_1;
    }
    else {
      iVar4 = *(int *)param_3[3];
    }
    if (iVar4 == -1) {
      param_3 = (long *)0x0;
    }
    if (bVar1 == (iVar4 == -1)) break;
    while( true ) {
      if ((undefined4 *)plVar5[3] == (undefined4 *)plVar5[4]) {
        uVar3 = (**(code **)(*plVar5 + 0x48))();
      }
      else {
        uVar3 = *(undefined4 *)plVar5[3];
      }
      uVar6 = (**(code **)(*param_5 + 0x18))(param_5,1,uVar3);
      plVar5 = (long *)*param_1;
      if ((uVar6 & 1) == 0) goto LAB_0400c1b0;
      if (plVar5[3] == plVar5[4]) {
        (**(code **)(*plVar5 + 0x50))();
        plVar5 = (long *)*param_1;
      }
      else {
        plVar5[3] = plVar5[3] + 4;
        plVar5 = (long *)*param_1;
      }
      if (plVar5 == (long *)0x0) goto LAB_0400c0ec;
LAB_0400c0a0:
      if ((int *)plVar5[3] == (int *)plVar5[4]) {
        iVar4 = (**(code **)(*plVar5 + 0x48))();
      }
      else {
        iVar4 = *(int *)plVar5[3];
      }
      if (iVar4 == -1) {
        *param_1 = 0;
        goto LAB_0400c0ec;
      }
      plVar5 = (long *)*param_1;
      bVar1 = plVar5 == (long *)0x0;
      bVar2 = bVar1;
      if (param_3 != (long *)0x0) break;
LAB_0400c0c8:
      if (bVar2) goto LAB_0400c1b0;
    }
  }
LAB_0400c1b0:
  if (plVar5 != (long *)0x0) {
    if ((int *)plVar5[3] == (int *)plVar5[4]) {
      iVar4 = (**(code **)(*plVar5 + 0x48))();
    }
    else {
      iVar4 = *(int *)plVar5[3];
    }
    if (iVar4 != -1) {
      bVar2 = *param_1 == 0;
      goto joined_r0x0400c200;
    }
    *param_1 = 0;
  }
  bVar2 = true;
joined_r0x0400c200:
  if (param_3 == (long *)0x0) {
    if (!bVar2) {
      return;
    }
  }
  else {
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar4 = *(int *)param_3[3];
    }
    if (bVar2 != (iVar4 == -1)) {
      return;
    }
  }
  *param_4 = *param_4 | 2;
  return;
}

