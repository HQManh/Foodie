// rea decompile_all
// name: std::__ndk1::__money_put<wchar_t>::__gather_info
// address: 0x4012cd4
// body: available
// range: 0x4012cd4-0x4012efb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__money_put<wchar_t>::__gather_info(bool, bool, std::__ndk1::locale const&,
   std::__ndk1::money_base::pattern&, wchar_t&, wchar_t&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >&, std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >&, int&) */

void std::__ndk1::__money_put<wchar_t>::__gather_info
               (bool param_1,bool param_2,locale *param_3,pattern *param_4,wchar_t *param_5,
               wchar_t *param_6,basic_string *param_7,basic_string *param_8,basic_string *param_9,
               int *param_10)

{
  byte *pbVar1;
  byte *pbVar2;
  basic_string bVar3;
  byte bVar4;
  byte **ppbVar5;
  byte *pbVar6;
  bool bVar7;
  undefined4 uVar8;
  wchar_t wVar9;
  int iVar10;
  undefined1 *puVar11;
  wchar_t *pwVar12;
  ulong uVar13;
  code *pcVar14;
  uint uVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  basic_string *pbVar18;
  basic_string *pbVar19;
  long lVar20;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  uint uVar23;
  wchar_t *pwVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  long *plVar29;
  wchar_t *pwVar30;
  wchar_t *pwVar31;
  uint unaff_w27;
  undefined1 *puVar32;
  wchar_t *pwVar33;
  byte *unaff_x29;
  byte *unaff_x30;
  undefined1 auVar34 [16];
  byte **local_80;
  wchar_t wStack_78;
  undefined4 uStack_74;
  wchar_t local_70;
  undefined4 uStack_6c;
  byte *local_68;
  byte ***local_48;
  
  uVar15 = (uint)param_4;
  lVar28 = *(long *)param_3;
  pwVar16 = param_5;
  pwVar17 = param_6;
  pbVar18 = param_7;
  pbVar19 = param_8;
  if (param_1) {
    puVar32 = moneypunct<wchar_t,true>::id;
    local_68 = moneypunct<wchar_t,true>::id;
    if (moneypunct<wchar_t,true>::id._0_8_ == -1) goto LAB_04012d90;
    puVar11 = moneypunct<wchar_t,true>::id;
  }
  else {
    puVar32 = moneypunct<wchar_t,false>::id;
    local_68 = moneypunct<wchar_t,false>::id;
    if (moneypunct<wchar_t,false>::id._0_8_ == -1) goto LAB_04012d90;
    puVar11 = moneypunct<wchar_t,false>::id;
  }
  local_48 = &local_80;
  local_80 = &local_68;
  pcVar14 = FUN_0402d4a0;
  __call_once((ulong *)puVar11,&local_48,FUN_0402d4a0);
  param_3 = (locale *)pcVar14;
LAB_04012d90:
  lVar20 = *(long *)(lVar28 + 0x10);
  if (((long)*(int *)(puVar32 + 8) - 1U < (ulong)(*(long *)(lVar28 + 0x18) - lVar20 >> 3)) &&
     (plVar29 = *(long **)(lVar20 + ((long)*(int *)(puVar32 + 8) - 1U) * 8), plVar29 != (long *)0x0)
     ) {
    if (param_2) {
      uVar8 = (**(code **)(*plVar29 + 0x58))(plVar29);
      *(undefined4 *)param_4 = uVar8;
      (**(code **)(*plVar29 + 0x40))(&local_80,plVar29);
      bVar3 = *param_9;
    }
    else {
      uVar8 = (**(code **)(*plVar29 + 0x50))(plVar29);
      *(undefined4 *)param_4 = uVar8;
      (**(code **)(*plVar29 + 0x38))(&local_80,plVar29);
      bVar3 = *param_9;
    }
    if (((byte)bVar3 & 1) != 0) {
      operator_delete(*(void **)(param_9 + 0x10));
    }
    *(ulong *)(param_9 + 8) = CONCAT44(uStack_74,wStack_78);
    *(byte ***)param_9 = local_80;
    *(ulong *)(param_9 + 0x10) = CONCAT44(uStack_6c,local_70);
    wVar9 = (**(code **)(*plVar29 + 0x18))(plVar29);
    *param_5 = wVar9;
    wVar9 = (**(code **)(*plVar29 + 0x20))(plVar29);
    *param_6 = wVar9;
    (**(code **)(*plVar29 + 0x28))(&local_80,plVar29);
    if (((byte)*param_7 & 1) != 0) {
      operator_delete(*(void **)(param_7 + 0x10));
    }
    *(ulong *)(param_7 + 8) = CONCAT44(uStack_74,wStack_78);
    *(byte ***)param_7 = local_80;
    *(ulong *)(param_7 + 0x10) = CONCAT44(uStack_6c,local_70);
    (**(code **)(*plVar29 + 0x30))(&local_80,plVar29);
    if (((byte)*param_8 & 1) != 0) {
      operator_delete(*(void **)(param_8 + 0x10));
    }
    *(ulong *)(param_8 + 8) = CONCAT44(uStack_74,wStack_78);
    *(byte ***)param_8 = local_80;
    *(ulong *)(param_8 + 0x10) = CONCAT44(uStack_6c,local_70);
    iVar10 = (**(code **)(*plVar29 + 0x48))(plVar29);
    *param_10 = iVar10;
    return;
  }
  auVar34 = FUN_03ff9c28();
  pbVar6 = local_68;
  ppbVar5 = local_80;
  plVar29 = auVar34._8_8_;
  pwVar12 = auVar34._0_8_;
  lVar28 = 0;
  pbVar1 = local_68 + 1;
  *(wchar_t **)param_3 = pwVar12;
  pwVar31 = pwVar12;
  pwVar33 = pwVar12;
  do {
    bVar4 = *(byte *)((long)ppbVar5 + lVar28);
    pwVar30 = pwVar33;
    if (bVar4 < 2) {
      if (bVar4 == 0) {
        *plVar29 = (long)pwVar31;
        pwVar30 = pwVar31;
      }
      else if (bVar4 == 1) {
        lVar20 = *(long *)pbVar18;
        *plVar29 = (long)pwVar31;
        wVar9 = (**(code **)(lVar20 + 0x58))(pbVar18,0x20);
        pwVar31 = *(wchar_t **)param_3;
        *pwVar31 = wVar9;
LAB_04013124:
        pwVar31 = pwVar31 + 1;
        *(wchar_t **)param_3 = pwVar31;
        pwVar30 = pwVar31;
      }
    }
    else if (bVar4 == 2) {
      bVar4 = *unaff_x29;
      uVar13 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar13 = *(ulong *)(unaff_x29 + 8);
      }
      if (((uVar15 >> 9 & 1) != 0) && (uVar13 != 0)) {
        pbVar2 = unaff_x29 + 4;
        if ((bVar4 & 1) != 0) {
          pbVar2 = *(byte **)(unaff_x29 + 0x10);
        }
        memmove(pwVar31,pbVar2,uVar13 * 4);
        pwVar31 = pwVar31 + uVar13;
        *(wchar_t **)param_3 = pwVar31;
        pwVar30 = pwVar31;
      }
    }
    else if (bVar4 == 3) {
      bVar7 = (*unaff_x30 & 1) != 0;
      uVar13 = (ulong)(*unaff_x30 >> 1);
      if (bVar7) {
        uVar13 = *(ulong *)(unaff_x30 + 8);
      }
      if (uVar13 != 0) {
        pwVar33 = (wchar_t *)(unaff_x30 + 4);
        if (bVar7) {
          pwVar33 = *(wchar_t **)(unaff_x30 + 0x10);
        }
        *pwVar31 = *pwVar33;
        goto LAB_04013124;
      }
    }
    else if (bVar4 == 4) {
      pwVar16 = pwVar16 + ((ulong)pbVar19 & 1);
      pwVar30 = pwVar16;
      while ((pwVar30 < pwVar17 &&
             (uVar13 = (**(code **)(*(long *)pbVar18 + 0x18))(pbVar18,0x40,*pwVar30),
             (uVar13 & 1) != 0))) {
        pwVar30 = pwVar30 + 1;
      }
      if (0 < (int)unaff_w27) {
        uVar23 = unaff_w27;
        if (pwVar16 < pwVar30) {
          pwVar31 = *(wchar_t **)param_3;
          do {
            uVar25 = uVar23;
            pwVar30 = pwVar30 + -1;
            pwVar21 = pwVar31 + 1;
            *pwVar31 = *pwVar30;
            if (pwVar30 <= pwVar16) break;
            pwVar31 = pwVar21;
            uVar23 = uVar25 - 1;
          } while (uVar25 != 1);
          *(wchar_t **)param_3 = pwVar21;
          uVar23 = uVar25 - 1;
          if (uVar25 != 1) goto LAB_04013134;
        }
        else {
LAB_04013134:
          wVar9 = (**(code **)(*(long *)pbVar18 + 0x58))(pbVar18,0x30);
          pwVar31 = *(wchar_t **)param_3;
          pwVar21 = pwVar31;
          if (0 < (int)uVar23) {
            if (7 < uVar23) {
              uVar26 = (ulong)uVar23;
              uVar27 = uVar26 & 0x7ffffff8;
              pwVar21 = pwVar31 + uVar27;
              uVar23 = uVar23 - (int)uVar27;
              pwVar31 = pwVar31 + 4;
              uVar13 = uVar27;
              do {
                *(ulong *)(pwVar31 + -2) = CONCAT44(wVar9,wVar9);
                *(ulong *)(pwVar31 + -4) = CONCAT44(wVar9,wVar9);
                *(ulong *)(pwVar31 + 2) = CONCAT44(wVar9,wVar9);
                *(ulong *)pwVar31 = CONCAT44(wVar9,wVar9);
                uVar13 = uVar13 - 8;
                pwVar31 = pwVar31 + 8;
              } while (uVar13 != 0);
              pwVar31 = pwVar21;
              if (uVar27 == uVar26) goto LAB_040131b8;
            }
            uVar23 = uVar23 + 1;
            do {
              uVar23 = uVar23 - 1;
              pwVar21 = pwVar31 + 1;
              *pwVar31 = wVar9;
              pwVar31 = pwVar21;
            } while (1 < uVar23);
          }
        }
LAB_040131b8:
        *pwVar21 = wStack_78;
        *(wchar_t **)param_3 = pwVar21 + 1;
      }
      if (pwVar30 == pwVar16) {
        uVar8 = (**(code **)(*(long *)pbVar18 + 0x58))(pbVar18,0x30);
        pwVar31 = *(undefined4 **)param_3 + 1;
        **(undefined4 **)param_3 = uVar8;
        *(wchar_t **)param_3 = pwVar31;
      }
      else {
        bVar4 = *pbVar6;
        uVar13 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar13 = *(ulong *)(pbVar6 + 8);
        }
        if (uVar13 == 0) {
          uVar23 = 0xffffffff;
        }
        else {
          pbVar2 = pbVar1;
          if ((bVar4 & 1) != 0) {
            pbVar2 = *(byte **)(pbVar6 + 0x10);
          }
          uVar23 = (uint)*pbVar2;
        }
        pwVar31 = *(wchar_t **)param_3;
        uVar13 = 0;
        uVar25 = 0;
        do {
          pwVar21 = pwVar31;
          if (uVar25 == uVar23) {
            pwVar21 = pwVar31 + 1;
            *pwVar31 = local_70;
            uVar13 = (ulong)((int)uVar13 + 1);
            *(wchar_t **)param_3 = pwVar21;
            bVar4 = *pbVar6;
            uVar26 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              uVar26 = *(ulong *)(pbVar6 + 8);
            }
            if (uVar13 < uVar26) {
              pbVar2 = pbVar1;
              if ((bVar4 & 1) != 0) {
                pbVar2 = *(byte **)(pbVar6 + 0x10);
              }
              if (pbVar2[uVar13] == 0xff) {
                uVar25 = 0;
                uVar23 = 0xffffffff;
                goto LAB_04013284;
              }
              uVar23 = (uint)pbVar2[uVar13];
            }
            uVar25 = 0;
          }
LAB_04013284:
          pwVar30 = pwVar30 + -1;
          uVar25 = uVar25 + 1;
          pwVar31 = pwVar21 + 1;
          *pwVar21 = *pwVar30;
          *(wchar_t **)param_3 = pwVar31;
        } while (pwVar30 != pwVar16);
      }
      pwVar30 = pwVar31;
      if ((pwVar33 != pwVar31) && (pwVar21 = pwVar31 + -1, pwVar33 < pwVar21)) {
        do {
          pwVar24 = pwVar33 + 1;
          wVar9 = *pwVar33;
          *pwVar33 = *pwVar21;
          pwVar22 = pwVar21 + -1;
          *pwVar21 = wVar9;
          pwVar21 = pwVar22;
          pwVar33 = pwVar24;
        } while (pwVar24 < pwVar22);
      }
    }
    lVar28 = lVar28 + 1;
    pwVar33 = pwVar30;
    if (lVar28 == 4) {
      bVar4 = *unaff_x30;
      uVar13 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar13 = *(ulong *)(unaff_x30 + 8);
      }
      if (1 < uVar13) {
        pwVar16 = (wchar_t *)(unaff_x30 + 4);
        if ((bVar4 & 1) != 0) {
          pwVar16 = *(wchar_t **)(unaff_x30 + 0x10);
        }
        memmove(pwVar31,pwVar16 + 1,uVar13 * 4 - 4);
        pwVar31 = pwVar31 + (uVar13 - 1);
        *(wchar_t **)param_3 = pwVar31;
      }
      if ((uVar15 & 0xb0) != 0x10) {
        if ((uVar15 & 0xb0) != 0x20) {
          pwVar31 = pwVar12;
        }
        *plVar29 = (long)pwVar31;
      }
      return;
    }
  } while( true );
}

