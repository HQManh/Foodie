// rea decompile_all
// name: std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
// address: 0x3ff3414
// body: available
// range: 0x3ff3414-0x3ff3607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3ff3460 to 0x89dbef0 std::__ndk1::ios_base::clear (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::sentry::sentry(std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >&, bool)
    */

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
          (sentry *this,basic_istream *param_1,bool param_2)

{
  ios_base *this_00;
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  locale alStack_38 [8];
  
  lVar5 = *(long *)param_1;
  *this = (sentry)0x0;
  this_00 = (ios_base *)(param_1 + *(long *)(lVar5 + -0x18));
  if (*(uint *)(this_00 + 0x20) != 0) {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
    return;
  }
  if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88) !=
      (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
    basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
              (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88));
    lVar5 = *(long *)param_1;
  }
  if ((!param_2) && (((byte)param_1[*(long *)(lVar5 + -0x18) + 9] >> 4 & 1) != 0)) {
    ios_base::getloc();
    plVar3 = (long *)locale::use_facet(alStack_38,(id *)ctype<wchar_t>::id);
    locale::~locale(alStack_38);
    plVar6 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28);
    while (plVar6 != (long *)0x0) {
      while( true ) {
        if ((int *)plVar6[3] == (int *)plVar6[4]) {
          iVar2 = (**(code **)(*plVar6 + 0x48))(plVar6);
        }
        else {
          iVar2 = *(int *)plVar6[3];
        }
        if (iVar2 == -1) goto LAB_03ff3588;
        if ((undefined4 *)plVar6[3] == (undefined4 *)plVar6[4]) {
          uVar1 = (**(code **)(*plVar6 + 0x48))(plVar6);
          uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,1,uVar1);
        }
        else {
          uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,1,*(undefined4 *)plVar6[3]);
        }
        if ((uVar4 & 1) == 0) {
          if ((int *)plVar6[3] == (int *)plVar6[4]) {
            iVar2 = (**(code **)(*plVar6 + 0x48))(plVar6);
          }
          else {
            iVar2 = *(int *)plVar6[3];
          }
          lVar5 = *(long *)param_1;
          if (iVar2 != -1) goto LAB_03ff35a4;
          goto LAB_03ff358c;
        }
        if (plVar6[3] != plVar6[4]) break;
        (**(code **)(*plVar6 + 0x50))(plVar6);
        if (plVar6 == (long *)0x0) goto LAB_03ff3588;
      }
      plVar6[3] = plVar6[3] + 4;
    }
LAB_03ff3588:
    lVar5 = *(long *)param_1;
LAB_03ff358c:
    ios_base::clear((ios_base *)(param_1 + *(long *)(lVar5 + -0x18)),
                    *(uint *)((ios_base *)(param_1 + *(long *)(lVar5 + -0x18)) + 0x20) | 6);
    lVar5 = *(long *)param_1;
  }
LAB_03ff35a4:
  *this = (sentry)(*(int *)(param_1 + *(long *)(lVar5 + -0x18) + 0x20) == 0);
  return;
}

