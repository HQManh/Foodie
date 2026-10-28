// rea decompile_all
// name: std::__ndk1::__time_get_storage<wchar_t>::init
// address: 0x40278dc
// body: available
// range: 0x40278dc-0x4027d57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4027d54 to 0x39aee10 FUN_039aee10 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__time_get_storage<wchar_t>::init(std::__ndk1::ctype<wchar_t> const&) */

void std::__ndk1::__time_get_storage<wchar_t>::init(ctype *param_1)

{
  char cVar1;
  __locale_t p_Var2;
  size_t sVar3;
  ctype *pcVar4;
  long lVar5;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  char *local_2a8;
  mbstate_t local_2a0;
  wchar_t awStack_294 [100];
  char acStack_104 [100];
  tm local_a0;
  
  lVar5 = 0;
  pcVar4 = param_1 + 0xb0;
  local_a0.tm_zone = (char *)0x0;
  local_2a0.__count = 0;
  local_2a0.__value = (_union_27)0x0;
  local_a0.tm_wday = 0;
  local_a0.tm_yday = 0;
  local_a0.tm_mon = 0;
  local_a0.tm_year = 0;
  local_a0.tm_gmtoff = 0;
  local_a0.tm_isdst = 0;
  local_a0._36_4_ = 0;
  local_a0.tm_hour = 0;
  local_a0.tm_mday = 0;
  local_a0.tm_sec = 0;
  local_a0.tm_min = 0;
  do {
    local_a0.tm_wday = (int)lVar5;
    strftime_l(acStack_104,100,"%A",&local_a0,*(__locale_t *)param_1);
    local_2a0.__count = 0;
    local_2a0.__value = (_union_27)0x0;
    local_2a8 = acStack_104;
    p_Var2 = uselocale(*(__locale_t *)param_1);
    sVar3 = mbsrtowcs(awStack_294,&local_2a8,100,&local_2a0);
    if (p_Var2 != (__locale_t)0x0) {
      uselocale(p_Var2);
    }
    if (sVar3 + 1 < 2) goto LAB_04027d48;
    FUN_0402d118(pcVar4 + -0xa8,awStack_294,awStack_294 + sVar3,sVar3);
    strftime_l(acStack_104,100,"%a",&local_a0,*(__locale_t *)param_1);
    local_2a0.__count = 0;
    local_2a0.__value = (_union_27)0x0;
    local_2a8 = acStack_104;
    p_Var2 = uselocale(*(__locale_t *)param_1);
    sVar3 = mbsrtowcs(awStack_294,&local_2a8,100,&local_2a0);
    if (p_Var2 != (__locale_t)0x0) {
      uselocale(p_Var2);
    }
    if (sVar3 + 1 < 2) goto LAB_04027d48;
    FUN_0402d118(pcVar4,awStack_294,awStack_294 + sVar3,sVar3);
    lVar5 = lVar5 + 1;
    pcVar4 = pcVar4 + 0x18;
  } while (lVar5 != 7);
  lVar5 = 0;
  pcVar4 = param_1 + 0x278;
  do {
    local_a0.tm_mon = (int)lVar5;
    strftime_l(acStack_104,100,"%B",&local_a0,*(__locale_t *)param_1);
    local_2a0.__count = 0;
    local_2a0.__value = (_union_27)0x0;
    local_2a8 = acStack_104;
    p_Var2 = uselocale(*(__locale_t *)param_1);
    sVar3 = mbsrtowcs(awStack_294,&local_2a8,100,&local_2a0);
    if (p_Var2 != (__locale_t)0x0) {
      uselocale(p_Var2);
    }
    if (sVar3 + 1 < 2) goto LAB_04027d48;
    FUN_0402d118(pcVar4 + -0x120,awStack_294,awStack_294 + sVar3,sVar3);
    strftime_l(acStack_104,100,"%b",&local_a0,*(__locale_t *)param_1);
    local_2a0.__count = 0;
    local_2a0.__value = (_union_27)0x0;
    local_2a8 = acStack_104;
    p_Var2 = uselocale(*(__locale_t *)param_1);
    sVar3 = mbsrtowcs(awStack_294,&local_2a8,100,&local_2a0);
    if (p_Var2 != (__locale_t)0x0) {
      uselocale(p_Var2);
    }
    if (sVar3 + 1 < 2) goto LAB_04027d48;
    FUN_0402d118(pcVar4,awStack_294,awStack_294 + sVar3,sVar3);
    lVar5 = lVar5 + 1;
    pcVar4 = pcVar4 + 0x18;
  } while (lVar5 != 0xc);
  local_a0.tm_hour = 1;
  strftime_l(acStack_104,100,"%p",&local_a0,*(__locale_t *)param_1);
  local_2a0.__count = 0;
  local_2a0.__value = (_union_27)0x0;
  local_2a8 = acStack_104;
  p_Var2 = uselocale(*(__locale_t *)param_1);
  sVar3 = mbsrtowcs(awStack_294,&local_2a8,100,&local_2a0);
  if (p_Var2 != (__locale_t)0x0) {
    uselocale(p_Var2);
  }
  if (sVar3 != 0xffffffffffffffff) {
    FUN_0402d118(param_1 + 0x398,awStack_294,awStack_294 + sVar3,sVar3);
    local_a0.tm_hour = 0xd;
    strftime_l(acStack_104,100,"%p",&local_a0,*(__locale_t *)param_1);
    local_2a0.__count = 0;
    local_2a0.__value = (_union_27)0x0;
    local_2a8 = acStack_104;
    p_Var2 = uselocale(*(__locale_t *)param_1);
    sVar3 = mbsrtowcs(awStack_294,&local_2a8,100,&local_2a0);
    if (p_Var2 != (__locale_t)0x0) {
      uselocale(p_Var2);
    }
    if (sVar3 != 0xffffffffffffffff) {
      FUN_0402d118(param_1 + 0x3b0,awStack_294,awStack_294 + sVar3,sVar3);
      cVar1 = (char)param_1;
      __analyze(cVar1,(ctype *)0x63);
      if (((byte)param_1[0x3c8] & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x3d8));
      }
      *(undefined8 *)(param_1 + 0x3d8) = local_2b0;
      *(undefined8 *)(param_1 + 0x3d0) = uStack_2b8;
      *(__locale_t *)(param_1 + 0x3c8) = p_Var2;
      __analyze(cVar1,(ctype *)0x72);
      if (((byte)param_1[0x3e0] & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x3f0));
      }
      *(undefined8 *)(param_1 + 0x3f0) = local_2b0;
      *(undefined8 *)(param_1 + 1000) = uStack_2b8;
      *(__locale_t *)(param_1 + 0x3e0) = p_Var2;
      __analyze(cVar1,(ctype *)0x78);
      if (((byte)param_1[0x3f8] & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x408));
      }
      *(undefined8 *)(param_1 + 0x408) = local_2b0;
      *(undefined8 *)(param_1 + 0x400) = uStack_2b8;
      *(__locale_t *)(param_1 + 0x3f8) = p_Var2;
      __analyze(cVar1,(ctype *)0x58);
      if (((byte)param_1[0x410] & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x420));
      }
      *(undefined8 *)(param_1 + 0x418) = uStack_2b8;
      *(__locale_t *)(param_1 + 0x410) = p_Var2;
      *(undefined8 *)(param_1 + 0x420) = local_2b0;
      return;
    }
  }
LAB_04027d48:
  __throw_runtime_error("locale not supported");
                    /* WARNING: Subroutine does not return */
  FUN_039aee10();
}

