// rea decompile_all
// name: std::__ndk1::money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get
// address: 0x4010fac
// body: available
// range: 0x4010fac-0x401121f inclusive
// range: 0x401123c-0x4011263 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4011260 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::ios_base&, unsigned int&,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >&) const */

long * __thiscall
std::__ndk1::
money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_get(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,uint *param_6,
      byte *param_7)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long local_228;
  long local_220;
  int *local_218;
  code *local_210;
  int local_208 [100];
  long *local_78;
  undefined1 *local_70;
  undefined1 ***local_68;
  undefined1 **local_48;
  
  local_218 = local_208;
  local_210 = __do_nothing;
  local_78 = param_2;
  ios_base::getloc();
  local_70 = ctype<wchar_t>::id;
  if (ctype<wchar_t>::id._0_8_ != -1) {
    local_48 = &local_70;
    local_68 = &local_48;
    __call_once((ulong *)ctype<wchar_t>::id,&local_68,FUN_0402d4a0);
  }
  if (((ulong)(*(long *)(local_228 + 0x18) - *(long *)(local_228 + 0x10) >> 3) <=
       (long)(int)ctype<wchar_t>::id._8_4_ - 1U) ||
     (plVar6 = *(long **)(*(long *)(local_228 + 0x10) +
                         ((long)(int)ctype<wchar_t>::id._8_4_ - 1U) * 8), plVar6 == (long *)0x0)) {
    uVar5 = FUN_03ff9c28();
    locale::~locale((locale *)&local_228);
    piVar1 = local_218;
    local_218 = (int *)0x0;
    if (piVar1 != (int *)0x0) {
      (*local_210)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar5);
  }
  local_48 = (undefined1 **)((ulong)local_48 & 0xffffffffffffff00);
  uVar4 = __do_get(&local_78,param_3,param_4 & 1,&local_228,*(undefined4 *)(param_5 + 8),param_6,
                   &local_48,plVar6,&local_218,&local_220,&local_78);
  if ((uVar4 & 1) != 0) {
    if ((*param_7 & 1) == 0) {
      param_7[4] = 0;
      param_7[5] = 0;
      param_7[6] = 0;
      param_7[7] = 0;
      *param_7 = 0;
    }
    else {
      **(undefined4 **)(param_7 + 0x10) = 0;
      param_7[8] = 0;
      param_7[9] = 0;
      param_7[10] = 0;
      param_7[0xb] = 0;
      param_7[0xc] = 0;
      param_7[0xd] = 0;
      param_7[0xe] = 0;
      param_7[0xf] = 0;
    }
    if ((char)local_48 != '\0') {
      (**(code **)(*plVar6 + 0x58))(plVar6,0x2d);
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      push_back((wchar_t)param_7);
    }
    iVar3 = (**(code **)(*plVar6 + 0x58))(plVar6,0x30);
    for (piVar1 = local_218; (piVar1 < (int *)(local_220 + -4) && (*piVar1 == iVar3));
        piVar1 = piVar1 + 1) {
    }
    FUN_04011268(param_7);
  }
  if (local_78 == (long *)0x0) {
LAB_04011188:
    bVar2 = true;
    if (param_3 == (long *)0x0) goto LAB_0401117c;
LAB_04011190:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar3 = *(int *)param_3[3];
    }
    if (bVar2 != (iVar3 == -1)) goto LAB_040111d0;
  }
  else {
    if ((int *)local_78[3] == (int *)local_78[4]) {
      iVar3 = (**(code **)(*local_78 + 0x48))();
    }
    else {
      iVar3 = *(int *)local_78[3];
    }
    if (iVar3 == -1) {
      local_78 = (long *)0x0;
      goto LAB_04011188;
    }
    bVar2 = local_78 == (long *)0x0;
    if (param_3 != (long *)0x0) goto LAB_04011190;
LAB_0401117c:
    if (!bVar2) goto LAB_040111d0;
  }
  *param_6 = *param_6 | 2;
LAB_040111d0:
  plVar6 = local_78;
  locale::~locale((locale *)&local_228);
  piVar1 = local_218;
  local_218 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    (*local_210)();
  }
  return plVar6;
}

