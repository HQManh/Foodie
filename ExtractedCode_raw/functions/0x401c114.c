// rea decompile_all
// name: std::__ndk1::locale::locale
// address: 0x401c114
// body: available
// range: 0x401c114-0x401c227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x401c224 to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::locale::locale(std::__ndk1::locale const&, char const*, int) */

void __thiscall std::__ndk1::locale::locale(locale *this,locale *param_1,char *param_2,int param_3)

{
  ulong uVar1;
  void *pvVar2;
  size_t __n;
  undefined8 uVar3;
  void *__dest;
  ulong local_68;
  size_t local_60;
  void *local_58;
  
  if (param_2 == (char *)0x0) {
    __throw_runtime_error("locale constructed with null");
LAB_0401c220:
                    /* WARNING: Subroutine does not return */
    FUN_03f5d118(&local_68);
  }
  pvVar2 = operator_new(0x138);
  uVar3 = *(undefined8 *)param_1;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) goto LAB_0401c220;
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_0401c1bc;
  }
  else {
    uVar1 = (__n | 0xf) + 1;
    __dest = operator_new(uVar1);
    local_68 = uVar1 | 1;
    local_60 = __n;
    local_58 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_0401c1bc:
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_04018850(pvVar2,uVar3,&local_68,param_3);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  *(void **)this = pvVar2;
  FUN_0404bff0(1,(long)pvVar2 + 8);
  return;
}

