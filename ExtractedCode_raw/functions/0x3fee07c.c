// rea decompile_all
// name: std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
// address: 0x3fee07c
// body: available
// range: 0x3fee07c-0x3fee23f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fee0c8 to 0x89dbef0 std::__ndk1::ios_base::clear (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::sentry::sentry(std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&, bool) */

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_istream *param_1,bool param_2)

{
  ios_base *this_00;
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  locale alStack_38 [8];
  
  lVar3 = *(long *)param_1;
  *this = (sentry)0x0;
  this_00 = (ios_base *)(param_1 + *(long *)(lVar3 + -0x18));
  if (*(uint *)(this_00 + 0x20) != 0) {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
    return;
  }
  if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88) !=
      (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
    basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88));
    lVar3 = *(long *)param_1;
  }
  if ((param_2) || (((byte)param_1[*(long *)(lVar3 + -0x18) + 9] >> 4 & 1) == 0)) {
LAB_03fee1f0:
    *this = (sentry)(*(int *)(param_1 + *(long *)(lVar3 + -0x18) + 0x20) == 0);
    return;
  }
  ios_base::getloc();
  lVar3 = locale::use_facet(alStack_38,(id *)ctype<char>::id);
  locale::~locale(alStack_38);
  plVar5 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28);
joined_r0x03fee130:
  if (plVar5 != (long *)0x0) {
    do {
      if ((plVar5[3] == plVar5[4]) && (iVar2 = (**(code **)(*plVar5 + 0x48))(plVar5), iVar2 == -1))
      break;
      if ((byte *)plVar5[3] == (byte *)plVar5[4]) {
        uVar4 = (**(code **)(*plVar5 + 0x48))(plVar5);
        uVar4 = uVar4 & 0xff;
        if ((uint)uVar4 >> 7 == 0) goto LAB_03fee1a0;
LAB_03fee1e0:
        if (plVar5[3] != plVar5[4]) goto LAB_03fee1ec;
        iVar2 = (**(code **)(*plVar5 + 0x48))(plVar5);
        lVar3 = *(long *)param_1;
        if (iVar2 != -1) goto LAB_03fee1f0;
        goto LAB_03fee1c8;
      }
      bVar1 = *(byte *)plVar5[3];
      uVar4 = (ulong)bVar1;
      if ((char)bVar1 < '\0') goto LAB_03fee1e0;
LAB_03fee1a0:
      if ((*(ulong *)(*(long *)(lVar3 + 0x10) + uVar4 * 8) & 1) == 0) goto LAB_03fee1e0;
      if (plVar5[3] != plVar5[4]) goto code_r0x03fee1b8;
      (**(code **)(*plVar5 + 0x50))(plVar5);
      if (plVar5 == (long *)0x0) break;
    } while( true );
  }
  lVar3 = *(long *)param_1;
LAB_03fee1c8:
  ios_base::clear((ios_base *)(param_1 + *(long *)(lVar3 + -0x18)),
                  *(uint *)((ios_base *)(param_1 + *(long *)(lVar3 + -0x18)) + 0x20) | 6);
LAB_03fee1ec:
  lVar3 = *(long *)param_1;
  goto LAB_03fee1f0;
code_r0x03fee1b8:
  plVar5[3] = plVar5[3] + 1;
  goto joined_r0x03fee130;
}

