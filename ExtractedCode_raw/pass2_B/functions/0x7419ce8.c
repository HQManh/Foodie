// rea decompile_all
// name: Mono.Globalization.Unicode.SimpleCollator$$CompareInternal
// address: 0x7419ce8
// body: available
// range: 0x7419ce8-0x741b143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741b13c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x741b140 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

int Mono_Globalization_Unicode_SimpleCollator__CompareInternal
              (long param_1,long param_2,int param_3,int param_4,long param_5,int param_6,
              int param_7,undefined1 *param_8,undefined1 *param_9,byte param_10,byte param_11,
              uint *param_12)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined2 uVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  byte *pbVar23;
  long lVar24;
  byte *pbVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  byte *pbVar32;
  int local_110;
  byte *local_108;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  uint local_c4;
  undefined8 local_c0;
  uint local_b4;
  int local_a8;
  int local_a4;
  int local_9c;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_09520f66 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187d38);
    FUN_03f5c2a4(&DAT_0918ac28);
    DAT_09520f66 = 1;
  }
  uVar1 = *param_12;
  iVar28 = param_7 + param_6;
  iVar29 = param_4 + param_3;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  *param_8 = 0;
  *param_9 = 0;
  iVar26 = param_6;
  local_9c = param_3;
  if ((param_10 & 1) != 0) {
    if (param_3 < iVar29) {
      iVar31 = param_3;
      if (param_2 == 0) goto LAB_0741b13c;
      do {
        uVar8 = System_String__get_Chars(param_2,iVar31,0);
        iVar11 = Mono_Globalization_Unicode_SimpleCollator__GetExtenderType(param_1,uVar8);
        local_9c = iVar31;
        if (iVar11 == 0) break;
        param_4 = param_4 + -1;
        local_9c = iVar29;
        iVar31 = iVar31 + 1;
      } while (param_4 != 0);
    }
    if (param_6 < iVar28) {
      iVar31 = param_6;
      if (param_5 == 0) goto LAB_0741b13c;
      do {
        uVar8 = System_String__get_Chars(param_5,iVar31,0);
        iVar11 = Mono_Globalization_Unicode_SimpleCollator__GetExtenderType(param_1,uVar8);
        iVar26 = iVar31;
        if (iVar11 == 0) break;
        param_7 = param_7 + -1;
        iVar31 = iVar31 + 1;
        iVar26 = iVar28;
      } while (param_7 != 0);
    }
  }
  local_108 = (byte *)0x0;
  local_c4 = 0xffffffff;
  local_c0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_110 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  local_d4 = -1;
  local_d0 = -1;
  uVar17 = 5;
  local_a8 = param_6;
  local_a4 = param_3;
  iVar31 = local_9c;
  iVar11 = iVar26;
LAB_07419e84:
  uVar30 = uVar17;
  uVar17 = uVar30;
  if (iVar31 < iVar29) {
    if (param_2 == 0) goto LAB_0741b13c;
    uVar8 = System_String__get_Chars(param_2,iVar31,0);
    if (*(int *)(DAT_0918ac28 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918ac28);
    }
    uVar19 = Mono_Globalization_Unicode_SimpleCollator__IsIgnorable(uVar8,uVar1);
    if ((uVar19 & 1) != 0) {
      iVar31 = iVar31 + 1;
      goto LAB_07419e84;
    }
  }
  iVar14 = iVar26;
  if (iVar26 < iVar28) {
    if (param_5 == 0) goto LAB_0741b13c;
    do {
      uVar8 = System_String__get_Chars(param_5,iVar26,0);
      if (*(int *)(DAT_0918ac28 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918ac28);
      }
      uVar19 = Mono_Globalization_Unicode_SimpleCollator__IsIgnorable(uVar8,uVar1);
      if ((uVar19 & 1) == 0) {
        if (iVar29 <= iVar31) goto LAB_0741a030;
        iVar14 = iVar26;
        iVar21 = iVar11;
        iVar27 = iVar31;
        if ((iVar31 <= local_9c) || (iVar26 <= iVar11)) goto LAB_0741a1c4;
        iVar21 = iVar31;
        if (iVar28 <= iVar26) goto LAB_0741a080;
        if (param_2 == 0) goto LAB_0741b13c;
        iVar27 = 0;
        goto LAB_07419fbc;
      }
      iVar26 = iVar26 + 1;
      iVar14 = iVar28;
    } while (iVar28 != iVar26);
  }
  lVar20 = local_90;
  iVar26 = iVar14;
  if (iVar31 < iVar29) {
    if (local_90 != 0) {
      iVar26 = (int)local_88;
      local_90 = 0;
      local_a8 = local_88._4_4_;
      iVar28 = (int)local_80;
      iVar11 = local_80._4_4_;
      thunk_FUN_03f5d7b8(&local_90,0);
      param_5 = lVar20;
      goto LAB_07419e84;
    }
  }
  else {
LAB_0741a030:
    lVar20 = local_78;
    if (local_78 != 0) {
      iVar31 = (int)local_70;
      local_78 = 0;
      local_a4 = local_70._4_4_;
      iVar29 = (int)local_68;
      local_9c = local_68._4_4_;
      thunk_FUN_03f5d7b8(&local_78,0);
      param_2 = lVar20;
      goto LAB_07419e84;
    }
  }
  if ((((uVar1 >> 1 & 1) != 0) || (local_110 == 0)) || (uVar30 < 3)) goto LAB_0741afbc;
  if ((iVar29 <= iVar31) || (iVar28 <= iVar26)) goto LAB_0741b104;
  if (param_2 == 0) goto LAB_0741b13c;
  goto LAB_0741ae9c;
  while ((iVar27 = iVar27 + 1, iVar27 + iVar31 < iVar29 && (iVar27 + iVar26 < iVar28))) {
LAB_07419fbc:
    sVar9 = System_String__get_Chars(param_2,iVar31 + iVar27,0);
    sVar10 = System_String__get_Chars(param_5,iVar26 + iVar27,0);
    iVar14 = iVar26 + iVar27;
    iVar21 = iVar31 + iVar27;
    if (sVar9 != sVar10) goto LAB_0741a080;
  }
  iVar14 = iVar26 + iVar27;
  iVar21 = iVar31 + iVar27;
LAB_0741a080:
  iVar31 = iVar21;
  iVar26 = iVar14;
  if ((iVar31 != iVar29) && (iVar21 = iVar31, iVar26 != iVar28)) {
    do {
      iVar21 = iVar21 + -1;
      iVar22 = iVar26;
      if (iVar21 <= local_9c) break;
      if (param_2 == 0) goto LAB_0741b13c;
      uVar8 = System_String__get_Chars(param_2,iVar21,0);
      cVar4 = Mono_Globalization_Unicode_SimpleCollator__Category(param_1,uVar8);
    } while (cVar4 == '\x01');
    do {
      iVar22 = iVar22 + -1;
      if (iVar22 <= iVar11) break;
      uVar8 = System_String__get_Chars(param_5,iVar22,0);
      cVar4 = Mono_Globalization_Unicode_SimpleCollator__Category(param_1,uVar8);
    } while (cVar4 == '\x01');
    iVar14 = iVar22;
    iVar27 = iVar21;
    if (local_9c < iVar21) {
      if (param_2 == 0) goto LAB_0741b13c;
      do {
        uVar8 = System_String__get_Chars(param_2,iVar21,0);
        uVar19 = Mono_Globalization_Unicode_SimpleCollator__IsSafe(param_1,uVar8);
        iVar27 = iVar21;
        if ((uVar19 & 1) != 0) break;
        iVar21 = iVar21 + -1;
        iVar27 = local_9c;
      } while (local_9c < iVar21);
    }
    do {
      local_9c = iVar31;
      iVar21 = iVar26;
      if (iVar22 <= iVar11) goto LAB_0741a1c4;
      uVar8 = System_String__get_Chars(param_5,iVar22,0);
      uVar19 = Mono_Globalization_Unicode_SimpleCollator__IsSafe(param_1,uVar8);
      iVar14 = iVar22;
      if ((uVar19 & 1) != 0) goto LAB_0741a1c4;
      iVar22 = iVar22 + -1;
      iVar14 = iVar11;
    } while( true );
  }
  goto LAB_07419e84;
LAB_0741a1c4:
  iVar31 = iVar27;
  iVar26 = iVar14;
  if (param_2 == 0) goto LAB_0741b13c;
  uVar8 = System_String__get_Chars(param_2,iVar31,0);
  local_b4 = Mono_Globalization_Unicode_SimpleCollator__FilterOptions(param_1,uVar8,uVar1);
  uVar8 = System_String__get_Chars(param_5,iVar26,0);
  uVar12 = Mono_Globalization_Unicode_SimpleCollator__FilterOptions(param_1,uVar8,uVar1);
  uVar18 = Mono_Globalization_Unicode_SimpleCollator__GetExtenderType(param_1,local_b4);
  local_c0 = CONCAT44(local_c0._4_4_,uVar18);
  iVar11 = iVar21;
  if (uVar18 == 0) {
LAB_0741a254:
    pbVar23 = (byte *)0x0;
  }
  else {
    if (-1 < (int)param_12[10]) {
      local_b4 = Mono_Globalization_Unicode_SimpleCollator__FilterExtender
                           (param_1,param_12[10],uVar18,uVar1);
      goto LAB_0741a254;
    }
    pbVar23 = *(byte **)(param_12 + 0xc);
    if (pbVar23 == (byte *)0x0) {
      iVar31 = iVar31 + 1;
      goto LAB_07419e84;
    }
  }
  uVar13 = Mono_Globalization_Unicode_SimpleCollator__GetExtenderType(param_1,uVar12);
  local_c0 = CONCAT44(uVar13,uVar18);
  if (uVar13 == 0) {
    pbVar32 = (byte *)0x0;
  }
  else if ((int)local_c4 < 0) {
    pbVar32 = local_108;
    if (local_108 == (byte *)0x0) {
      local_108 = (byte *)0x0;
      iVar26 = iVar26 + 1;
      goto LAB_07419e84;
    }
  }
  else {
    uVar12 = Mono_Globalization_Unicode_SimpleCollator__FilterExtender
                       (param_1,local_c4,uVar13,uVar1);
    pbVar32 = (byte *)0x0;
  }
  bVar5 = Mono_Globalization_Unicode_SimpleCollator__Category(param_1,local_b4);
  bVar6 = Mono_Globalization_Unicode_SimpleCollator__Category(param_1,uVar12);
  if (bVar5 == 6) {
    if (((uVar1 >> 0x1d & 1) == 0) && (uVar30 == 5)) {
      local_d0 = iVar31 - local_a4;
      if (local_78 != 0) {
        local_d0 = (int)local_70 - local_70._4_4_;
      }
      uVar18 = Mono_Globalization_Unicode_SimpleCollator__Level1(param_1,local_b4);
      if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09187d38);
      }
      iVar14 = Mono_Globalization_Unicode_MSCompatUnicodeTable__Level3(local_b4);
      local_dc = (uVar18 & 0xff) << (ulong)(iVar14 + 8U & 0x1f);
    }
    iVar31 = iVar31 + 1;
    param_12[10] = local_b4;
    if (bVar6 != 6) goto LAB_0741a4a4;
  }
  else if (bVar6 != 6) {
    if (uVar18 == 0) {
      lVar20 = Mono_Globalization_Unicode_SimpleCollator__GetContraction
                         (param_1,param_2,iVar31,iVar29);
      if (pbVar23 == (byte *)0x0) {
        if (lVar20 == 0) goto LAB_0741a5e4;
        if (*(long *)(lVar20 + 0x18) == 0) goto LAB_0741b13c;
        lVar24 = *(long *)(lVar20 + 0x28);
        iVar14 = *(int *)(*(long *)(lVar20 + 0x18) + 0x18);
        if (lVar24 == 0) {
          if (local_78 == 0) {
            local_78 = param_2;
            thunk_FUN_03f5d7b8(&local_78,param_2);
            local_70 = CONCAT44(local_a4,(int)local_70);
            if (*(long *)(lVar20 + 0x18) == 0) goto LAB_0741b13c;
            param_2 = *(long *)(lVar20 + 0x20);
            local_70 = CONCAT44(local_a4,iVar31 + *(int *)(*(long *)(lVar20 + 0x18) + 0x18));
            local_68 = CONCAT44(local_9c,iVar29);
            if (param_2 == 0) goto LAB_0741b13c;
            iVar29 = *(int *)(param_2 + 0x10);
            local_9c = 0;
            iVar31 = 0;
            local_c0 = (ulong)uVar13 << 0x20;
            local_a4 = 0;
            goto LAB_07419e84;
          }
          bVar2 = false;
          pbVar23 = (byte *)0x0;
        }
        else {
          pbVar23 = *(byte **)(param_12 + 6);
          uVar19 = 0;
          while ((long)uVar19 < (long)(int)*(uint *)(lVar24 + 0x18)) {
            if (*(uint *)(lVar24 + 0x18) <= uVar19) goto LAB_0741b140;
            pbVar23[uVar19] = *(byte *)(lVar24 + uVar19 + 0x20);
            uVar19 = uVar19 + 1;
            lVar24 = *(long *)(lVar20 + 0x28);
            if (lVar24 == 0) goto LAB_0741b13c;
          }
          bVar2 = false;
          param_12[10] = 0xffffffff;
          *(byte **)(param_12 + 0xc) = pbVar23;
        }
      }
      else {
        iVar14 = 1;
        bVar2 = false;
      }
    }
    else {
      if (pbVar23 == (byte *)0x0) {
LAB_0741a5e4:
        pbVar23 = *(byte **)(param_12 + 6);
        *pbVar23 = bVar5;
        bVar7 = Mono_Globalization_Unicode_SimpleCollator__Level1(param_1,local_b4);
        pbVar23[1] = bVar7;
        if (((uVar1 >> 1 & 1) == 0) && (1 < uVar30)) {
          bVar7 = Mono_Globalization_Unicode_SimpleCollator__Level2(param_1,local_b4,uVar18);
          pbVar23[2] = bVar7;
        }
        if (uVar30 < 3) {
LAB_0741a680:
          bVar2 = false;
        }
        else {
          if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          bVar7 = Mono_Globalization_Unicode_MSCompatUnicodeTable__Level3(local_b4);
          pbVar23[3] = bVar7;
          if (uVar30 == 3) goto LAB_0741a680;
          if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if ((local_b4 & 0xffff) < 0x3041) goto LAB_0741a680;
          if ((local_b4 + 0x62 & 0xffff) < 0xffc8) {
            uVar15 = local_b4 >> 8 & 0xff;
            if (0x32 < uVar15) goto LAB_0741a680;
            if ((local_b4 & 0xffff) < 0x309d) {
              bVar2 = (local_b4 & 0xffff) < 0x3099;
            }
            else {
              if (uVar15 < 0x31) {
                bVar2 = (local_b4 & 0xffff) == 0x30fb;
              }
              else {
                bVar2 = (local_b4 >> 4 & 0xfff) < 0x32d || (local_b4 & 0xffff) == 0x32ff;
              }
              bVar2 = !bVar2;
            }
          }
          else {
            bVar2 = true;
          }
        }
        if (1 < bVar5) {
          param_12[10] = local_b4;
        }
      }
      else {
        bVar2 = false;
      }
      iVar14 = 1;
    }
    if (uVar13 == 0) {
      lVar20 = Mono_Globalization_Unicode_SimpleCollator__GetContraction
                         (param_1,param_5,iVar26,iVar28);
      if (pbVar32 == (byte *)0x0) {
        if (lVar20 != 0) {
          if (*(long *)(lVar20 + 0x18) == 0) goto LAB_0741b13c;
          lVar24 = *(long *)(lVar20 + 0x28);
          iVar27 = iVar26 + *(int *)(*(long *)(lVar20 + 0x18) + 0x18);
          if (lVar24 == 0) {
            if (local_90 == 0) {
              local_90 = param_5;
              thunk_FUN_03f5d7b8(&local_90,param_5);
              local_88 = CONCAT44(local_a8,(int)local_88);
              if (*(long *)(lVar20 + 0x18) == 0) goto LAB_0741b13c;
              param_5 = *(long *)(lVar20 + 0x20);
              local_88 = CONCAT44(local_a8,iVar26 + *(int *)(*(long *)(lVar20 + 0x18) + 0x18));
              local_80 = CONCAT44(iVar21,iVar28);
              if (param_5 == 0) goto LAB_0741b13c;
              iVar28 = *(int *)(param_5 + 0x10);
              iVar26 = 0;
              local_c0 = (ulong)uVar18;
              local_a8 = 0;
              iVar11 = 0;
              goto LAB_07419e84;
            }
            bVar3 = false;
            pbVar32 = (byte *)0x0;
          }
          else {
            pbVar32 = *(byte **)(param_12 + 8);
            uVar19 = 0;
            while ((long)uVar19 < (long)(int)*(uint *)(lVar24 + 0x18)) {
              if (*(uint *)(lVar24 + 0x18) <= uVar19) {
LAB_0741b140:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              pbVar32[uVar19] = *(byte *)(lVar24 + uVar19 + 0x20);
              uVar19 = uVar19 + 1;
              lVar24 = *(long *)(lVar20 + 0x28);
              if (lVar24 == 0) goto LAB_0741b13c;
            }
            bVar3 = false;
            local_c4 = 0xffffffff;
            local_108 = pbVar32;
          }
          goto LAB_0741a7dc;
        }
        goto LAB_0741a6b4;
      }
LAB_0741a76c:
      bVar3 = false;
    }
    else {
      if (pbVar32 != (byte *)0x0) goto LAB_0741a76c;
LAB_0741a6b4:
      pbVar32 = *(byte **)(param_12 + 8);
      *pbVar32 = bVar6;
      bVar5 = Mono_Globalization_Unicode_SimpleCollator__Level1(param_1);
      pbVar32[1] = bVar5;
      if (((uVar1 >> 1 & 1) == 0) && (1 < uVar30)) {
        bVar5 = Mono_Globalization_Unicode_SimpleCollator__Level2(param_1,uVar12,uVar13);
        pbVar32[2] = bVar5;
      }
      if (uVar30 < 3) {
LAB_0741a7c0:
        bVar3 = false;
      }
      else {
        if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        bVar5 = Mono_Globalization_Unicode_MSCompatUnicodeTable__Level3(uVar12);
        pbVar32[3] = bVar5;
        if (uVar30 == 3) goto LAB_0741a7c0;
        if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if ((uVar12 & 0xffff) < 0x3041) {
          bVar3 = false;
        }
        else if ((uVar12 + 0x62 & 0xffff) < 0xffc8) {
          uVar17 = uVar12 >> 8 & 0xff;
          if (uVar17 < 0x33) {
            if ((uVar12 & 0xffff) < 0x309d) {
              bVar3 = (uVar12 & 0xffff) < 0x3099;
            }
            else {
              if (uVar17 < 0x31) {
                bVar3 = (uVar12 & 0xffff) == 0x30fb;
              }
              else {
                bVar3 = (uVar12 >> 4 & 0xfff) < 0x32d || (uVar12 & 0xffff) == 0x32ff;
              }
              bVar3 = !bVar3;
            }
          }
          else {
            bVar3 = false;
          }
        }
        else {
          bVar3 = true;
        }
      }
      if ((bVar6 & 0xfe) != 0) {
        local_c4 = uVar12;
      }
    }
    iVar27 = iVar26 + 1;
LAB_0741a7dc:
    iVar31 = iVar14 + iVar31;
    iVar26 = iVar27;
    iVar14 = iVar31;
    if ((uVar1 >> 1 & 1) == 0) {
      for (; iVar14 < iVar29; iVar14 = iVar14 + 1) {
        uVar8 = System_String__get_Chars(param_2,iVar14,0);
        cVar4 = Mono_Globalization_Unicode_SimpleCollator__Category(param_1,uVar8);
        iVar31 = iVar14;
        if (cVar4 != '\x01') break;
        bVar5 = pbVar23[2];
        pbVar25 = (byte *)0x1;
        if (bVar5 == 0) {
          bVar5 = 2;
          pbVar23[2] = 2;
          pbVar25 = pbVar23;
        }
        uVar8 = System_String__get_Chars(pbVar25,param_2,iVar14,0);
        cVar4 = Mono_Globalization_Unicode_SimpleCollator__Level2(param_1,uVar8,0);
        pbVar23[2] = cVar4 + bVar5;
        iVar31 = iVar29;
      }
      if (iVar27 < iVar28) {
        do {
          uVar8 = System_String__get_Chars(param_5,iVar27,0);
          cVar4 = Mono_Globalization_Unicode_SimpleCollator__Category(param_1,uVar8);
          iVar26 = iVar27;
          if (cVar4 != '\x01') break;
          bVar5 = pbVar32[2];
          pbVar25 = (byte *)0x1;
          if (bVar5 == 0) {
            bVar5 = 2;
            pbVar32[2] = 2;
            pbVar25 = pbVar32;
          }
          uVar8 = System_String__get_Chars(pbVar25,param_5,iVar27,0);
          cVar4 = Mono_Globalization_Unicode_SimpleCollator__Level2(param_1,uVar8,0);
          iVar27 = iVar27 + 1;
          pbVar32[2] = cVar4 + bVar5;
          iVar26 = iVar28;
        } while (iVar28 != iVar27);
      }
    }
    iVar14 = (uint)*pbVar23 - (uint)*pbVar32;
    if (iVar14 == 0) {
      iVar14 = (uint)pbVar23[1] - (uint)pbVar32[1];
    }
    if (iVar14 != 0) {
      return iVar14;
    }
    uVar17 = 1;
    if (uVar30 != 1) {
      if (((uVar1 >> 1 & 1) == 0) && (iVar14 = (uint)pbVar23[2] - (uint)pbVar32[2], iVar14 != 0)) {
        if ((param_11 & 1) != 0) {
          return -1;
        }
        uVar17 = 1;
        local_110 = iVar14;
        if (*(char *)(param_1 + 0x5c) != '\0') {
          uVar17 = 2;
        }
        goto LAB_07419e84;
      }
      uVar17 = 2;
      if (uVar30 == 2) goto LAB_07419e84;
      iVar14 = (uint)pbVar23[3] - (uint)pbVar32[3];
      if (iVar14 == 0) {
        uVar17 = 3;
        if (uVar30 == 3) goto LAB_07419e84;
        if (bVar2 != bVar3) {
          if ((param_11 & 1) != 0) {
            return -1;
          }
          local_110 = -1;
          if (bVar2 != false) {
            local_110 = 1;
          }
          goto LAB_07419e84;
        }
        uVar17 = uVar30;
        if (bVar2 == false) goto LAB_07419e84;
        if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar17 = Mono_Globalization_Unicode_MSCompatUnicodeTable__IsJapaneseSmallLetter(local_b4);
        uVar15 = Mono_Globalization_Unicode_MSCompatUnicodeTable__IsJapaneseSmallLetter(uVar12);
        iVar14 = 1;
        if ((uVar17 & 1) != 0) {
          iVar14 = -1;
        }
        if (((uVar17 ^ uVar15) & 1) == 0) {
          if (*(int *)(DAT_0918ac28 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar15 = uVar1 >> 1 & 1;
          uVar17 = uVar15;
          if (uVar18 == 0) {
            uVar17 = 1;
          }
          iVar14 = 4;
          if (uVar18 == 3) {
            iVar14 = 5;
          }
          if (uVar13 == 0) {
            uVar15 = 1;
          }
          iVar21 = -5;
          if (uVar13 != 3) {
            iVar21 = -4;
          }
          iVar27 = 3;
          if (uVar17 == 0) {
            iVar27 = iVar14;
          }
          iVar14 = -3;
          if (uVar15 == 0) {
            iVar14 = iVar21;
          }
          iVar14 = iVar14 + iVar27;
        }
        if (iVar14 == 0) {
          if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          bVar2 = (local_b4 - 0x3041 & 0xffff) < 0x54;
          iVar14 = -1;
          if (bVar2) {
            iVar14 = 1;
          }
          if (bVar2 == (uVar12 - 0x3041 & 0xffff) < 0x54) {
            if (*(int *)(DAT_0918ac28 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar18 = Mono_Globalization_Unicode_SimpleCollator__IsHalfKana(local_b4 & 0xffff,uVar1);
            uVar12 = Mono_Globalization_Unicode_SimpleCollator__IsHalfKana(uVar12 & 0xffff,uVar1);
            iVar14 = 1;
            if ((uVar18 & 1) != 0) {
              iVar14 = -1;
            }
            uVar17 = uVar30;
            if ((uVar18 & 1) == (uVar12 & 1)) goto LAB_07419e84;
          }
        }
        uVar17 = 3;
      }
      local_110 = iVar14;
      if ((param_11 & 1) != 0) {
        return -1;
      }
    }
    goto LAB_07419e84;
  }
  if (((uVar1 >> 0x1d & 1) == 0) && (uVar30 == 5)) {
    local_d4 = iVar26 - local_a8;
    if (local_90 != 0) {
      local_d4 = (int)local_88 - local_88._4_4_;
    }
    uVar18 = Mono_Globalization_Unicode_SimpleCollator__Level1(param_1,uVar12);
    if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187d38);
    }
    iVar14 = Mono_Globalization_Unicode_MSCompatUnicodeTable__Level3(uVar12);
    local_d8 = (uVar18 & 0xff) << (ulong)(iVar14 + 8U & 0x1f);
  }
  iVar26 = iVar26 + 1;
  local_c4 = uVar12;
LAB_0741a4a4:
  iVar22 = local_d0;
  iVar27 = local_d4;
  iVar21 = local_d8;
  iVar14 = local_dc;
  local_dc = iVar14;
  local_d8 = iVar21;
  local_d4 = iVar27;
  local_d0 = iVar22;
  if (uVar30 == 5) {
    bVar2 = local_dc != local_d8;
    local_dc = 0;
    local_d8 = 0;
    local_d4 = -1;
    local_d0 = -1;
    if (bVar2) {
      uVar17 = 4;
      local_dc = iVar14;
      local_d8 = iVar21;
      local_d4 = iVar27;
      local_d0 = iVar22;
    }
  }
  goto LAB_07419e84;
LAB_0741afbc:
  if ((uVar30 == 1) && (local_110 != 0)) {
    if (iVar31 < iVar29) {
      iVar11 = iVar31;
      if (param_2 == 0) goto LAB_0741b13c;
      do {
        uVar8 = System_String__get_Chars(param_2,iVar11,0);
        if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187d38);
        }
        uVar19 = Mono_Globalization_Unicode_MSCompatUnicodeTable__IsIgnorableNonSpacing(uVar8);
        iVar31 = iVar11;
      } while (((uVar19 & 1) != 0) && (iVar11 = iVar11 + 1, iVar31 = iVar29, iVar29 != iVar11));
    }
    if (iVar26 < iVar28) {
      iVar11 = iVar26;
      if (param_5 == 0) {
LAB_0741b13c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      do {
        uVar8 = System_String__get_Chars(param_5,iVar11,0);
        if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187d38);
        }
        uVar19 = Mono_Globalization_Unicode_MSCompatUnicodeTable__IsIgnorableNonSpacing(uVar8);
        iVar26 = iVar11;
      } while (((uVar19 & 1) != 0) && (iVar11 = iVar11 + 1, iVar26 = iVar28, iVar28 != iVar11));
    }
  }
  if (local_110 != 0) goto LAB_0741b104;
  goto LAB_0741b080;
  while( true ) {
    local_110 = 0;
    local_c0 = 0;
    if (iVar28 <= iVar26) break;
LAB_0741ae9c:
    uVar8 = System_String__get_Chars(param_2,iVar31,0);
    if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187d38);
    }
    uVar19 = Mono_Globalization_Unicode_MSCompatUnicodeTable__IsIgnorableNonSpacing(uVar8);
    if ((uVar19 & 1) == 0) goto LAB_0741afbc;
    if (param_5 == 0) goto LAB_0741b13c;
    uVar8 = System_String__get_Chars(param_5,iVar26,0);
    if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187d38);
    }
    uVar19 = Mono_Globalization_Unicode_MSCompatUnicodeTable__IsIgnorableNonSpacing(uVar8);
    if ((uVar19 & 1) == 0) goto LAB_0741afbc;
    uVar8 = System_String__get_Chars(param_2,iVar31,0);
    uVar16 = Mono_Globalization_Unicode_SimpleCollator__FilterOptions(param_1,uVar8,uVar1);
    uVar17 = Mono_Globalization_Unicode_SimpleCollator__Level2(param_1,uVar16,local_c0 & 0xffffffff)
    ;
    uVar8 = System_String__get_Chars(param_5,iVar26,0);
    uVar16 = Mono_Globalization_Unicode_SimpleCollator__FilterOptions(param_1,uVar8,uVar1);
    uVar18 = Mono_Globalization_Unicode_SimpleCollator__Level2(param_1,uVar16,local_c0._4_4_);
    local_110 = (uVar17 & 0xff) - (uVar18 & 0xff);
    if (local_110 != 0) goto LAB_0741afbc;
    iVar31 = iVar31 + 1;
    iVar26 = iVar26 + 1;
    if (iVar29 <= iVar31) break;
  }
LAB_0741b080:
  if ((local_d0 < 0) && (-1 < local_d4)) {
    local_110 = -1;
  }
  else if ((local_d4 < 0) && (-1 < local_d0)) {
    local_110 = 1;
  }
  else {
    local_110 = local_d0 - local_d4;
    if ((local_110 == 0) && (local_110 = local_dc - local_d8, local_110 == 0)) {
      if (iVar26 == iVar28) {
        *param_8 = 1;
      }
      if (iVar31 == iVar29) {
        local_110 = 0;
        *param_9 = 1;
      }
      else {
        local_110 = 0;
      }
    }
  }
LAB_0741b104:
  if (iVar31 == iVar29) {
    if (iVar26 != iVar28) {
      local_110 = -1;
    }
  }
  else {
    local_110 = 1;
  }
  return local_110;
}

