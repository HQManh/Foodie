// rea decompile_all
// name: std::__ndk1::__time_get_storage<char>::init
// address: 0x402749c
// body: available
// range: 0x402749c-0x40278db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__time_get_storage<char>::init(std::__ndk1::ctype<char> const&) */

void std::__ndk1::__time_get_storage<char>::init(ctype *param_1)

{
  char cVar1;
  ctype *pcVar2;
  long lVar3;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  char acStack_e4 [100];
  tm local_80;
  
  local_80.tm_zone = (char *)0x0;
  local_80.tm_mon = 0;
  local_80.tm_year = 0;
  local_80.tm_gmtoff = 0;
  local_80.tm_isdst = 0;
  local_80._36_4_ = 0;
  local_80.tm_hour = 0;
  local_80.tm_mday = 0;
  local_80.tm_sec = 0;
  local_80.tm_min = 0;
  local_80.tm_wday = 0;
  local_80.tm_yday = 0;
  strftime_l(acStack_e4,100,"%A",&local_80,*(__locale_t *)param_1);
  FUN_03fe2dcc(param_1 + 8,acStack_e4);
  strftime_l(acStack_e4,100,"%a",&local_80,*(__locale_t *)param_1);
  FUN_03fe2dcc(param_1 + 0xb0,acStack_e4);
  local_80.tm_wday = 1;
  strftime_l(acStack_e4,100,"%A",&local_80,*(__locale_t *)param_1);
  FUN_03fe2dcc(param_1 + 0x20,acStack_e4);
  strftime_l(acStack_e4,100,"%a",&local_80,*(__locale_t *)param_1);
  FUN_03fe2dcc(param_1 + 200,acStack_e4);
  local_80.tm_wday = 2;
  strftime_l(acStack_e4,100,"%A",&local_80,*(__locale_t *)param_1);
  FUN_03fe2dcc(param_1 + 0x38,acStack_e4);
  strftime_l(acStack_e4,100,"%a",&local_80,*(__locale_t *)param_1);
  FUN_03fe2dcc(param_1 + 0xe0,acStack_e4);
  local_80.tm_wday = 3;
  strftime_l(acStack_e4,100,"%A",&local_80,*(__locale_t *)param_1);
  FUN_03fe2dcc(param_1 + 0x50,acStack_e4);
  strftime_l(acStack_e4,100,"%a",&local_80,*(__locale_t *)param_1);
  FUN_03fe2dcc(param_1 + 0xf8,acStack_e4);
  local_80.tm_wday = 4;
  strftime_l(acStack_e4,100,"%A",&local_80,*(__locale_t *)param_1);
  FUN_03fe2dcc(param_1 + 0x68,acStack_e4);
  strftime_l(acStack_e4,100,"%a",&local_80,*(__locale_t *)param_1);
  FUN_03fe2dcc(param_1 + 0x110,acStack_e4);
  local_80.tm_wday = 5;
  strftime_l(acStack_e4,100,"%A",&local_80,*(__locale_t *)param_1);
  FUN_03fe2dcc(param_1 + 0x80,acStack_e4);
  strftime_l(acStack_e4,100,"%a",&local_80,*(__locale_t *)param_1);
  FUN_03fe2dcc(param_1 + 0x128,acStack_e4);
  local_80.tm_wday = 6;
  strftime_l(acStack_e4,100,"%A",&local_80,*(__locale_t *)param_1);
  FUN_03fe2dcc(param_1 + 0x98,acStack_e4);
  strftime_l(acStack_e4,100,"%a",&local_80,*(__locale_t *)param_1);
  FUN_03fe2dcc(param_1 + 0x140,acStack_e4);
  lVar3 = 0;
  pcVar2 = param_1 + 0x278;
  do {
    local_80.tm_mon = (int)lVar3;
    strftime_l(acStack_e4,100,"%B",&local_80,*(__locale_t *)param_1);
    FUN_03fe2dcc(pcVar2 + -0x120,acStack_e4);
    strftime_l(acStack_e4,100,"%b",&local_80,*(__locale_t *)param_1);
    FUN_03fe2dcc(pcVar2,acStack_e4);
    lVar3 = lVar3 + 1;
    pcVar2 = pcVar2 + 0x18;
  } while (lVar3 != 0xc);
  local_80.tm_hour = 1;
  strftime_l(acStack_e4,100,"%p",&local_80,*(__locale_t *)param_1);
  FUN_03fe2dcc(param_1 + 0x398,acStack_e4);
  local_80.tm_hour = 0xd;
  strftime_l(acStack_e4,100,"%p",&local_80,*(__locale_t *)param_1);
  FUN_03fe2dcc(param_1 + 0x3b0,acStack_e4);
  cVar1 = (char)param_1;
  __analyze(cVar1,(ctype *)0x63);
  if (((byte)param_1[0x3c8] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x3d8));
  }
  *(undefined8 *)(param_1 + 0x3d8) = local_f0;
  *(undefined8 *)(param_1 + 0x3d0) = uStack_f8;
  *(undefined8 *)(param_1 + 0x3c8) = local_100;
  __analyze(cVar1,(ctype *)0x72);
  if (((byte)param_1[0x3e0] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x3f0));
  }
  *(undefined8 *)(param_1 + 0x3f0) = local_f0;
  *(undefined8 *)(param_1 + 1000) = uStack_f8;
  *(undefined8 *)(param_1 + 0x3e0) = local_100;
  __analyze(cVar1,(ctype *)0x78);
  if (((byte)param_1[0x3f8] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x408));
  }
  *(undefined8 *)(param_1 + 0x408) = local_f0;
  *(undefined8 *)(param_1 + 0x400) = uStack_f8;
  *(undefined8 *)(param_1 + 0x3f8) = local_100;
  __analyze(cVar1,(ctype *)0x58);
  if (((byte)param_1[0x410] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x420));
  }
  *(undefined8 *)(param_1 + 0x418) = uStack_f8;
  *(undefined8 *)(param_1 + 0x410) = local_100;
  *(undefined8 *)(param_1 + 0x420) = local_f0;
  return;
}

