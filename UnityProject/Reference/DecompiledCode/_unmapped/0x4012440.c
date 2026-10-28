// rea decompile_all
// name: std::__ndk1::money_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_put
// address: 0x4012440
// body: available
// range: 0x4012440-0x4012753 inclusive
// range: 0x4012788-0x40127a7 inclusive
// range: 0x40127b8-0x40127ef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40127a4 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40127ec to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char,
   std::__ndk1::char_traits<char> > >::do_put(std::__ndk1::ostreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, bool, std::__ndk1::ios_base&, char,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

undefined8 __thiscall
std::__ndk1::money_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(undefined8 param_1,undefined8 param_2,byte param_3,long param_4,undefined4 param_5,
      byte *param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  byte bVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ctype *pcVar9;
  undefined ***__ptr;
  undefined ***pppuVar10;
  char *local_140;
  char *pcStack_138;
  undefined **local_130 [12];
  int local_cc;
  ulong local_c8;
  ulong local_c0;
  void *local_b8;
  undefined *local_b0;
  ulong local_a8;
  void *local_a0;
  undefined ***local_98;
  undefined8 uStack_90;
  void *local_88;
  char local_7c [4];
  char local_78 [4];
  pattern apStack_74 [4];
  long local_70 [2];
  
  ios_base::getloc();
  local_b0 = ctype<char>::id;
  if (ctype<char>::id._0_8_ != -1) {
    local_130[0] = &local_b0;
    local_98 = local_130;
    __call_once((ulong *)ctype<char>::id,&local_98,FUN_0402d4a0);
  }
  if (((long)(int)ctype<char>::id._8_4_ - 1U <
       (ulong)(*(long *)(local_70[0] + 0x18) - *(long *)(local_70[0] + 0x10) >> 3)) &&
     (pcVar9 = *(ctype **)
                (*(long *)(local_70[0] + 0x10) + ((long)(int)ctype<char>::id._8_4_ - 1U) * 8),
     pcVar9 != (ctype *)0x0)) {
    bVar4 = *param_6;
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(param_6 + 8);
    }
    if (uVar2 == 0) {
      bVar5 = false;
    }
    else {
      pbVar8 = *(byte **)(param_6 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar8 = param_6 + 1;
      }
      bVar4 = *pbVar8;
      bVar6 = (**(code **)(*(long *)pcVar9 + 0x38))(pcVar9,0x2d);
      bVar5 = bVar4 == bVar6;
    }
    local_98 = (undefined ***)0x0;
    uStack_90 = 0;
    local_88 = (void *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = 0;
    local_a0 = (void *)0x0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = (void *)0x0;
    __money_put<char>::__gather_info
              ((bool)(param_3 & 1),bVar5,(locale *)local_70,apStack_74,local_78,local_7c,
               (basic_string *)&local_98,(basic_string *)&local_b0,(basic_string *)&local_c8,
               &local_cc);
    bVar4 = *param_6;
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(param_6 + 8);
    }
    if (local_cc < (int)uVar2) {
      uVar1 = (ulong)((byte)local_c8._0_1_ >> 1);
      if ((local_c8 & 1) != 0) {
        uVar1 = local_c0;
      }
      uVar3 = (ulong)((byte)local_b0._0_1_ >> 1);
      if (((ulong)local_b0 & 1) != 0) {
        uVar3 = local_a8;
      }
      uVar1 = (uVar2 * 2 - (long)local_cc) + uVar1 + uVar3 + 1;
    }
    else {
      uVar1 = (ulong)((byte)local_c8._0_1_ >> 1);
      if ((local_c8 & 1) != 0) {
        uVar1 = local_c0;
      }
      uVar3 = (ulong)((byte)local_b0._0_1_ >> 1);
      if (((ulong)local_b0 & 1) != 0) {
        uVar3 = local_a8;
      }
      uVar1 = (long)local_cc + uVar1 + uVar3 + 2;
    }
    if (uVar1 < 0x65) {
      __ptr = (undefined ***)0x0;
      pppuVar10 = local_130;
    }
    else {
      __ptr = malloc(uVar1);
      pppuVar10 = __ptr;
      if (__ptr == (undefined ***)0x0) goto LAB_04012740;
    }
    pbVar8 = *(byte **)(param_6 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar8 = param_6 + 1;
    }
    __money_put<char>::__format
              ((char *)pppuVar10,&pcStack_138,&local_140,*(uint *)(param_4 + 8),(char *)pbVar8,
               (char *)(pbVar8 + uVar2),pcVar9,bVar5,apStack_74,local_78[0],local_7c[0],
               (basic_string *)&local_98,(basic_string *)&local_b0,(basic_string *)&local_c8,
               local_cc);
    uVar7 = FUN_03f64a5c(param_2,pppuVar10,pcStack_138,local_140,param_4,param_5);
    if (__ptr != (undefined ***)0x0) {
      free(__ptr);
    }
    if ((local_c8 & 1) != 0) {
      operator_delete(local_b8);
    }
    if (((ulong)local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if (((ulong)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    locale::~locale((locale *)local_70);
    return uVar7;
  }
  FUN_03ff9c28();
LAB_04012740:
  uVar7 = __throw_bad_alloc();
  if ((local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  if (((ulong)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((ulong)local_98 & 1) == 0) {
    locale::~locale((locale *)local_70);
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar7);
  }
  operator_delete(local_88);
  locale::~locale((locale *)local_70);
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar7);
}

