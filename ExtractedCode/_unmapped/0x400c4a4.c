// rea decompile_all
// name: std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__get_percent
// address: 0x400c4a4
// body: available
// range: 0x400c4a4-0x400c6d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__get_percent(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_percent(undefined8 param_1_00,long *param_1,long *param_3,uint *param_4,long *param_5)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  plVar5 = (long *)*param_1;
  if (plVar5 == (long *)0x0) {
LAB_0400c540:
    bVar9 = true;
    bVar1 = true;
    if (param_3 != (long *)0x0) goto LAB_0400c548;
LAB_0400c4fc:
    if (!bVar1) {
      plVar5 = (long *)0x0;
      plVar6 = (long *)*param_1;
      puVar8 = (undefined4 *)plVar6[3];
      if (puVar8 != (undefined4 *)plVar6[4]) goto LAB_0400c57c;
      goto LAB_0400c514;
    }
  }
  else {
    if ((int *)plVar5[3] == (int *)plVar5[4]) {
      iVar4 = (**(code **)(*plVar5 + 0x48))();
    }
    else {
      iVar4 = *(int *)plVar5[3];
    }
    if (iVar4 == -1) {
      *param_1 = 0;
      goto LAB_0400c540;
    }
    bVar1 = *param_1 == 0;
    bVar9 = bVar1;
    if (param_3 == (long *)0x0) goto LAB_0400c4fc;
LAB_0400c548:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
      bVar1 = iVar4 == -1;
      plVar5 = (long *)0x0;
      if (!bVar1) {
        plVar5 = param_3;
      }
    }
    else {
      bVar1 = *(int *)param_3[3] == -1;
      plVar5 = (long *)0x0;
      if (!bVar1) {
        plVar5 = param_3;
      }
    }
    if (bVar9 != bVar1) {
      plVar6 = (long *)*param_1;
      puVar8 = (undefined4 *)plVar6[3];
      if (puVar8 == (undefined4 *)plVar6[4]) {
LAB_0400c514:
        uVar3 = (**(code **)(*plVar6 + 0x48))();
      }
      else {
LAB_0400c57c:
        uVar3 = *puVar8;
      }
      cVar2 = (**(code **)(*param_5 + 0x68))(param_5,uVar3,0);
      if (cVar2 != '%') {
        uVar7 = 4;
        goto LAB_0400c5ec;
      }
      plVar6 = (long *)*param_1;
      if (plVar6[3] == plVar6[4]) {
        (**(code **)(*plVar6 + 0x50))();
        plVar6 = (long *)*param_1;
        if (plVar6 != (long *)0x0) goto LAB_0400c624;
LAB_0400c69c:
        bVar1 = true;
        if (plVar5 == (long *)0x0) goto LAB_0400c6a4;
LAB_0400c64c:
        if ((int *)plVar5[3] == (int *)plVar5[4]) {
          iVar4 = (**(code **)(*plVar5 + 0x48))(plVar5);
        }
        else {
          iVar4 = *(int *)plVar5[3];
        }
        if (bVar1 != (iVar4 == -1)) {
          return;
        }
      }
      else {
        plVar6[3] = plVar6[3] + 4;
LAB_0400c624:
        if ((int *)plVar6[3] == (int *)plVar6[4]) {
          iVar4 = (**(code **)(*plVar6 + 0x48))();
        }
        else {
          iVar4 = *(int *)plVar6[3];
        }
        if (iVar4 == -1) {
          *param_1 = 0;
          goto LAB_0400c69c;
        }
        bVar1 = *param_1 == 0;
        if (plVar5 != (long *)0x0) goto LAB_0400c64c;
LAB_0400c6a4:
        if (bVar1 == false) {
          return;
        }
      }
      uVar7 = 2;
      goto LAB_0400c5ec;
    }
  }
  uVar7 = 6;
LAB_0400c5ec:
  *param_4 = *param_4 | uVar7;
  return;
}

