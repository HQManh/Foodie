// rea decompile_all
// name: std::__ndk1::money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get
// address: 0x400f880
// body: available
// range: 0x400f880-0x400fb6b inclusive
// range: 0x400fb9c-0x400fbc3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x400fbc0 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::ios_base&, unsigned int&, long double&)
   const */

long * __thiscall
std::__ndk1::
money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_get(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,uint *param_6,
      undefined8 param_7)

{
  wchar_t *pwVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined7 **__ptr;
  wchar_t *pwVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  long *plVar8;
  undefined7 **ppuVar9;
  undefined7 **ppuVar10;
  undefined7 *local_2b8 [13];
  undefined7 **local_250 [5];
  undefined7 local_228;
  undefined4 uStack_221;
  char local_21c [4];
  long local_218;
  wchar_t *local_210;
  wchar_t *local_208;
  code *local_200;
  wchar_t awStack_1f8 [100];
  long *local_68;
  
  local_208 = awStack_1f8;
  local_200 = __do_nothing;
  local_68 = param_2;
  ios_base::getloc();
  local_228 = 0x974a3f0;
  uStack_221 = uStack_221 & 0xffffff00;
  if (ctype<wchar_t>::id._0_8_ != -1) {
    local_2b8[0] = &local_228;
    local_250[0] = local_2b8;
    __call_once((ulong *)ctype<wchar_t>::id,local_250,FUN_0402d4a0);
  }
  if (((ulong)(*(long *)(local_218 + 0x18) - *(long *)(local_218 + 0x10) >> 3) <=
       (long)(int)ctype<wchar_t>::id._8_4_ - 1U) ||
     (plVar8 = *(long **)(*(long *)(local_218 + 0x10) +
                         ((long)(int)ctype<wchar_t>::id._8_4_ - 1U) * 8), plVar8 == (long *)0x0)) {
    FUN_03ff9c28();
LAB_0400fb58:
    __throw_runtime_error("money_get error");
LAB_0400fb64:
    uVar6 = __throw_bad_alloc();
    locale::~locale((locale *)&local_218);
    pwVar1 = local_208;
    local_208 = (wchar_t *)0x0;
    if (pwVar1 != (wchar_t *)0x0) {
      (*local_200)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar6);
  }
  local_21c[0] = '\0';
  uVar4 = __do_get(&local_68,param_3,param_4 & 1,&local_218,*(undefined4 *)(param_5 + 8),param_6,
                   local_21c,plVar8,&local_208,&local_210,&local_68);
  if ((uVar4 & 1) != 0) {
    local_228 = 0x36353433323130;
    uStack_221 = 0x393837;
    (**(code **)(*plVar8 + 0x60))(plVar8,&local_228,(long)&uStack_221 + 3,local_250);
    pwVar7 = local_208;
    pwVar1 = local_210;
    if ((long)local_210 - (long)local_208 < 0x189) {
      __ptr = (undefined7 **)0x0;
      ppuVar10 = local_2b8;
    }
    else {
      __ptr = malloc(((ulong)((long)local_210 - (long)local_208) >> 2) + 2);
      ppuVar10 = __ptr;
      if (__ptr == (undefined7 **)0x0) goto LAB_0400fb64;
    }
    ppuVar9 = ppuVar10;
    if (local_21c[0] != '\0') {
      ppuVar9 = (undefined7 **)((long)ppuVar10 + 1);
      *(undefined1 *)ppuVar10 = 0x2d;
    }
    if (pwVar7 < pwVar1) {
      ppuVar10 = ppuVar9;
      do {
        pwVar5 = wmemchr((wchar_t *)local_250,*pwVar7,10);
        pwVar1 = (wchar_t *)&local_228;
        if (pwVar5 != (wchar_t *)0x0) {
          pwVar1 = pwVar5;
        }
        bVar2 = pwVar7 + 1 < local_210;
        ppuVar9 = (undefined7 **)((long)ppuVar10 + 1);
        *(undefined1 *)ppuVar10 =
             *(undefined1 *)((long)&local_228 + ((long)pwVar1 - (long)local_250 >> 2));
        pwVar7 = pwVar7 + 1;
        ppuVar10 = ppuVar9;
      } while (bVar2);
    }
    *(undefined1 *)ppuVar9 = 0;
    iVar3 = sscanf((char *)local_2b8,"%Lf",param_7);
    if (iVar3 != 1) goto LAB_0400fb58;
    if (__ptr != (undefined7 **)0x0) {
      free(__ptr);
    }
  }
  if (local_68 == (long *)0x0) {
LAB_0400fac4:
    bVar2 = true;
    if (param_3 == (long *)0x0) goto LAB_0400fab8;
LAB_0400facc:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar3 = *(int *)param_3[3];
    }
    if (bVar2 != (iVar3 == -1)) goto LAB_0400fb0c;
  }
  else {
    if ((int *)local_68[3] == (int *)local_68[4]) {
      iVar3 = (**(code **)(*local_68 + 0x48))();
    }
    else {
      iVar3 = *(int *)local_68[3];
    }
    if (iVar3 == -1) {
      local_68 = (long *)0x0;
      goto LAB_0400fac4;
    }
    bVar2 = local_68 == (long *)0x0;
    if (param_3 != (long *)0x0) goto LAB_0400facc;
LAB_0400fab8:
    if (!bVar2) goto LAB_0400fb0c;
  }
  *param_6 = *param_6 | 2;
LAB_0400fb0c:
  plVar8 = local_68;
  locale::~locale((locale *)&local_218);
  pwVar1 = local_208;
  local_208 = (wchar_t *)0x0;
  if (pwVar1 != (wchar_t *)0x0) {
    (*local_200)();
  }
  return plVar8;
}

