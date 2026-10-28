// rea decompile_all
// name: std::__ndk1::num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put
// address: 0x40074c8
// body: available
// range: 0x40074c8-0x40076cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, void const*) const */

void __thiscall
std::__ndk1::
num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put
          (undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,char *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  char *pcVar7;
  long local_120;
  undefined1 auStack_118 [148];
  char local_84 [20];
  undefined1 *local_70;
  undefined1 ***local_68;
  undefined1 **local_48;
  
  if ((bRam000000000974a4b8 & 1) == 0) goto LAB_04007694;
  do {
    iVar5 = FUN_04005ef0(local_84,0x14,p_Ram000000000974a4b0,&UNK_01a42776,param_5);
    uVar1 = *(uint *)(param_3 + 8) & 0xb0;
    param_5 = local_84 + iVar5;
    pcVar7 = param_5;
    if (uVar1 != 0x20) {
      if (uVar1 == 0x10) {
        if ((local_84[0] == '-') || (local_84[0] == '+')) {
          pcVar7 = (char *)((ulong)local_84 | 1);
        }
        else {
          if ((iVar5 < 2) || ((local_84[0] != '0' || ((byte)(local_84[1] | 0x20U) != 0x78))))
          goto LAB_040075a4;
          pcVar7 = (char *)((ulong)local_84 | 2);
        }
      }
      else {
LAB_040075a4:
        pcVar7 = local_84;
      }
    }
    ios_base::getloc();
    lVar4 = local_120;
    local_70 = ctype<wchar_t>::id;
    if (ctype<wchar_t>::id._0_8_ != -1) {
      local_48 = &local_70;
      local_68 = &local_48;
      __call_once((ulong *)ctype<wchar_t>::id,&local_68,FUN_0402d4a0);
    }
    lVar3 = *(long *)(lVar4 + 0x10);
    if (((long)(int)ctype<wchar_t>::id._8_4_ - 1U < (ulong)(*(long *)(lVar4 + 0x18) - lVar3 >> 3))
       && (plVar6 = *(long **)(lVar3 + ((long)(int)ctype<wchar_t>::id._8_4_ - 1U) * 8),
          plVar6 != (long *)0x0)) {
      locale::~locale((locale *)&local_120);
      (**(code **)(*plVar6 + 0x60))(plVar6,local_84,param_5,auStack_118);
      puVar2 = auStack_118 + (long)iVar5 * 4;
      if (pcVar7 != param_5) {
        puVar2 = auStack_118 + ((long)pcVar7 - (long)local_84) * 4;
      }
      FUN_040076fc(param_2,auStack_118,puVar2,auStack_118 + (long)iVar5 * 4,param_3,param_4);
      return;
    }
    FUN_03ff9c28();
LAB_04007694:
    iVar5 = __cxa_guard_acquire(0x974a4b8);
    if (iVar5 != 0) {
      p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(0x974a4b8);
    }
  } while( true );
}

