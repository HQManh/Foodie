// rea decompile_all
// name: std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
// address: 0x3ff75cc
// body: available
// range: 0x3ff75cc-0x3ff776f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_streambuf<wchar_t,
   std::__ndk1::char_traits<wchar_t> >*) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_streambuf *param_1)

{
  ios_base *this_00;
  int *piVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  sentry local_40 [16];
  
  sentry::sentry(local_40,(basic_ostream *)this);
  if (local_40[0] != (sentry)0x0) {
    this_00 = (ios_base *)(this + *(long *)(*(long *)this + -0x18));
    if (param_1 == (basic_streambuf *)0x0) {
      ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 1);
    }
    else {
      plVar3 = *(long **)(this_00 + 0x28);
      if (plVar3 == (long *)0x0) {
        if (*(int **)(param_1 + 0x18) == *(int **)(param_1 + 0x20)) {
          iVar2 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
        }
        else {
          iVar2 = **(int **)(param_1 + 0x18);
        }
        if ((iVar2 != -1) && (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20))) {
          (**(code **)(*(long *)param_1 + 0x48))(param_1);
        }
      }
      else {
        lVar4 = 0;
        while( true ) {
          if (*(int **)(param_1 + 0x18) == *(int **)(param_1 + 0x20)) {
            iVar2 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
          }
          else {
            iVar2 = **(int **)(param_1 + 0x18);
          }
          if (iVar2 == -1) break;
          if (*(int **)(param_1 + 0x18) == *(int **)(param_1 + 0x20)) {
            iVar2 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
          }
          else {
            iVar2 = **(int **)(param_1 + 0x18);
          }
          piVar1 = (int *)plVar3[6];
          if (piVar1 == (int *)plVar3[7]) {
            iVar2 = (**(code **)(*plVar3 + 0x68))(plVar3);
          }
          else {
            *piVar1 = iVar2;
            plVar3[6] = (long)(piVar1 + 1);
          }
          if (iVar2 == -1) break;
          if (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20)) {
            (**(code **)(*(long *)param_1 + 0x50))(param_1);
          }
          else {
            *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 4;
          }
          lVar4 = lVar4 + -1;
        }
        if (lVar4 != 0) goto LAB_03ff774c;
      }
      ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                      *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 4);
    }
  }
LAB_03ff774c:
  sentry::~sentry(local_40);
  return this;
}

