// rea decompile_all
// name: std::__ndk1::__money_get<wchar_t>::__gather_info
// address: 0x40115f4
// body: available
// range: 0x40115f4-0x401181b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::__money_get<wchar_t>::__gather_info(bool, std::__ndk1::locale const&,
   std::__ndk1::money_base::pattern&, wchar_t&, wchar_t&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >&, std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >&,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >&, int&) */

undefined8
std::__ndk1::__money_get<wchar_t>::__gather_info
          (bool param_1,locale *param_2,pattern *param_3,wchar_t *param_4,wchar_t *param_5,
          basic_string *param_6,basic_string *param_7,basic_string *param_8,basic_string *param_9,
          int *param_10)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  undefined4 uVar4;
  wchar_t wVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  char *__ptr;
  long extraout_x1;
  byte bVar10;
  pattern *ppVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  char *pcVar17;
  undefined ***__ptr_00;
  ctype *pcVar18;
  undefined1 *puVar19;
  undefined ***pppuVar20;
  char *pcStack_2b0;
  char *pcStack_298;
  char *pcStack_290;
  undefined **appuStack_288 [12];
  int iStack_224;
  ulong uStack_220;
  ulong uStack_218;
  void *pvStack_210;
  undefined *puStack_208;
  ulong uStack_200;
  void *pvStack_1f8;
  undefined ***pppuStack_1f0;
  undefined8 uStack_1e8;
  void *pvStack_1e0;
  char acStack_1d4 [4];
  char acStack_1d0 [4];
  pattern apStack_1cc [4];
  long lStack_1c8;
  char acStack_1bc [100];
  char *pcStack_158;
  char acStack_14c [108];
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 **local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 ***local_48;
  
  lVar14 = *(long *)param_2;
  ppVar11 = param_3;
  pwVar12 = param_4;
  pwVar13 = param_5;
  if (param_1) {
    puVar19 = moneypunct<wchar_t,true>::id;
    local_68 = moneypunct<wchar_t,true>::id;
    if (moneypunct<wchar_t,true>::id._0_8_ == -1) goto LAB_040116b0;
    puVar8 = moneypunct<wchar_t,true>::id;
  }
  else {
    puVar19 = moneypunct<wchar_t,false>::id;
    local_68 = moneypunct<wchar_t,false>::id;
    if (moneypunct<wchar_t,false>::id._0_8_ == -1) goto LAB_040116b0;
    puVar8 = moneypunct<wchar_t,false>::id;
  }
  local_48 = &local_80;
  local_80 = &local_68;
  ppVar11 = (pattern *)0x0;
  __call_once((ulong *)puVar8,&local_48,FUN_0402d4a0);
LAB_040116b0:
  bVar10 = (byte)ppVar11;
  lVar16 = *(long *)(lVar14 + 0x10);
  if (((long)*(int *)(puVar19 + 8) - 1U < (ulong)(*(long *)(lVar14 + 0x18) - lVar16 >> 3)) &&
     (plVar15 = *(long **)(lVar16 + ((long)*(int *)(puVar19 + 8) - 1U) * 8), plVar15 != (long *)0x0)
     ) {
    uVar4 = (**(code **)(*plVar15 + 0x58))(plVar15);
    *(undefined4 *)param_3 = uVar4;
    (**(code **)(*plVar15 + 0x40))(&local_80,plVar15);
    if (((byte)*param_9 & 1) != 0) {
      operator_delete(*(void **)(param_9 + 0x10));
    }
    *(undefined8 *)(param_9 + 8) = uStack_78;
    *(undefined1 ***)param_9 = local_80;
    *(undefined8 *)(param_9 + 0x10) = local_70;
    (**(code **)(*plVar15 + 0x38))(&local_80,plVar15);
    if (((byte)*param_8 & 1) != 0) {
      operator_delete(*(void **)(param_8 + 0x10));
    }
    *(undefined8 *)(param_8 + 8) = uStack_78;
    *(undefined1 ***)param_8 = local_80;
    *(undefined8 *)(param_8 + 0x10) = local_70;
    wVar5 = (**(code **)(*plVar15 + 0x18))(plVar15);
    *param_4 = wVar5;
    wVar5 = (**(code **)(*plVar15 + 0x20))(plVar15);
    *param_5 = wVar5;
    (**(code **)(*plVar15 + 0x28))(&local_80,plVar15);
    if (((byte)*param_6 & 1) != 0) {
      operator_delete(*(void **)(param_6 + 0x10));
    }
    *(undefined8 *)(param_6 + 8) = uStack_78;
    *(undefined1 ***)param_6 = local_80;
    *(undefined8 *)(param_6 + 0x10) = local_70;
    (**(code **)(*plVar15 + 0x30))(&local_80,plVar15);
    if (((byte)*param_7 & 1) != 0) {
      operator_delete(*(void **)(param_7 + 0x10));
    }
    *(undefined8 *)(param_7 + 8) = uStack_78;
    *(undefined1 ***)param_7 = local_80;
    *(undefined8 *)(param_7 + 0x10) = local_70;
    uVar9 = (**(code **)(*plVar15 + 0x48))(plVar15);
    *param_10 = (int)uVar9;
    return uVar9;
  }
  pcStack_2b0 = (char *)FUN_03ff9c28();
  pcStack_d8 = money_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>
               ::do_put;
  pcStack_158 = acStack_14c;
  puStack_e0 = &stack0xffffffffffffffa0;
  uVar6 = snprintf(acStack_14c,100,"%.0Lf");
  if (uVar6 < 100) {
    __ptr = (char *)0x0;
    pcStack_2b0 = (char *)0x0;
    lVar14 = extraout_x1;
    pcVar17 = acStack_1bc;
    goto LAB_040118e0;
  }
  lVar16 = extraout_x1;
  if ((bRam000000000974a4b8 & 1) == 0) goto LAB_04011ba0;
  do {
    uVar6 = FUN_04011ce0(pcStack_2b0,&pcStack_158,p_Ram000000000974a4b0,&UNK_01a60027);
    pcStack_2b0 = pcStack_158;
    if (uVar6 == 0xffffffff) {
      __throw_bad_alloc();
LAB_04011be4:
      __throw_bad_alloc();
LAB_04011be8:
      uVar9 = __throw_bad_alloc();
      __cxa_guard_abort(0x974a4b8);
                    /* WARNING: Subroutine does not return */
      FUN_0404c2dc(uVar9);
    }
    __ptr = malloc((long)(int)uVar6);
    lVar14 = lVar16;
    pcVar17 = __ptr;
    if (__ptr == (char *)0x0) goto LAB_04011be4;
LAB_040118e0:
    ios_base::getloc();
    lVar16 = lStack_1c8;
    puStack_208 = ctype<char>::id;
    if (ctype<char>::id._0_8_ != -1) {
      appuStack_288[0] = &puStack_208;
      pppuStack_1f0 = appuStack_288;
      __call_once((ulong *)ctype<char>::id,&pppuStack_1f0,FUN_0402d4a0);
    }
    if (((long)(int)ctype<char>::id._8_4_ - 1U <
         (ulong)(*(long *)(lVar16 + 0x18) - *(long *)(lVar16 + 0x10) >> 3)) &&
       (pcVar18 = *(ctype **)
                   (*(long *)(lVar16 + 0x10) + ((long)(int)ctype<char>::id._8_4_ - 1U) * 8),
       pcVar18 != (ctype *)0x0)) {
      lVar16 = (long)(int)uVar6;
      (**(code **)(*(long *)pcVar18 + 0x40))(pcVar18,pcStack_158,pcStack_158 + lVar16,pcVar17);
      if ((int)uVar6 < 1) {
        bVar3 = false;
      }
      else {
        bVar3 = *pcStack_158 == '-';
      }
      pppuStack_1f0 = (undefined ***)0x0;
      uStack_1e8 = 0;
      pvStack_1e0 = (void *)0x0;
      puStack_208 = (undefined1 *)0x0;
      uStack_200 = 0;
      pvStack_1f8 = (void *)0x0;
      uStack_220 = 0;
      uStack_218 = 0;
      pvStack_210 = (void *)0x0;
      __money_put<char>::__gather_info
                ((bool)(bVar10 & 1),bVar3,(locale *)&lStack_1c8,apStack_1cc,acStack_1d0,acStack_1d4,
                 (basic_string *)&pppuStack_1f0,(basic_string *)&puStack_208,
                 (basic_string *)&uStack_220,&iStack_224);
      if (iStack_224 < (int)uVar6) {
        uVar1 = (ulong)((byte)uStack_220._0_1_ >> 1);
        if ((uStack_220 & 1) != 0) {
          uVar1 = uStack_218;
        }
        uVar2 = (ulong)((byte)puStack_208._0_1_ >> 1);
        if (((ulong)puStack_208 & 1) != 0) {
          uVar2 = uStack_200;
        }
        uVar1 = (lVar16 * 2 - (long)iStack_224) + uVar1 + uVar2 + 1;
      }
      else {
        uVar1 = (ulong)((byte)uStack_220._0_1_ >> 1);
        if ((uStack_220 & 1) != 0) {
          uVar1 = uStack_218;
        }
        uVar2 = (ulong)((byte)puStack_208._0_1_ >> 1);
        if (((ulong)puStack_208 & 1) != 0) {
          uVar2 = uStack_200;
        }
        uVar1 = (long)iStack_224 + uVar1 + uVar2 + 2;
      }
      if (uVar1 < 0x65) {
        __ptr_00 = (undefined ***)0x0;
        pppuVar20 = appuStack_288;
      }
      else {
        __ptr_00 = malloc(uVar1);
        pppuVar20 = __ptr_00;
        if (__ptr_00 == (undefined ***)0x0) goto LAB_04011be8;
      }
      __money_put<char>::__format
                ((char *)pppuVar20,&pcStack_290,&pcStack_298,pwVar12[2],pcVar17,pcVar17 + lVar16,
                 pcVar18,bVar3,apStack_1cc,acStack_1d0[0],acStack_1d4[0],
                 (basic_string *)&pppuStack_1f0,(basic_string *)&puStack_208,
                 (basic_string *)&uStack_220,iStack_224);
      uVar9 = FUN_03f64a5c(lVar14,pppuVar20,pcStack_290,pcStack_298,pwVar12,
                           (ulong)pwVar13 & 0xffffffff);
      if (__ptr_00 != (undefined ***)0x0) {
        free(__ptr_00);
      }
      if ((uStack_220 & 1) != 0) {
        operator_delete(pvStack_210);
      }
      if (((ulong)puStack_208 & 1) != 0) {
        operator_delete(pvStack_1f8);
      }
      if (((ulong)pppuStack_1f0 & 1) == 0) {
        locale::~locale((locale *)&lStack_1c8);
      }
      else {
        operator_delete(pvStack_1e0);
        locale::~locale((locale *)&lStack_1c8);
      }
      if (__ptr != (char *)0x0) {
        free(__ptr);
      }
      if (pcStack_2b0 != (char *)0x0) {
        free(pcStack_2b0);
      }
      return uVar9;
    }
    FUN_03ff9c28();
LAB_04011ba0:
    iVar7 = __cxa_guard_acquire(0x974a4b8);
    if (iVar7 != 0) {
      p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(0x974a4b8);
    }
  } while( true );
}

