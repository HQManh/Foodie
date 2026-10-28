// rea decompile_all
// name: System.Security.Cryptography.RijndaelManagedTransform$$EncryptData
// address: 0x7464108
// body: available
// range: 0x7464108-0x7464d3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7464300 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7464d00 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7464d18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7464d2c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Security_Cryptography_RijndaelManagedTransform__EncryptData
              (long param_1,long param_2,ulong param_3,int param_4,long *param_5,uint param_6,
              int param_7,uint param_8)

{
  undefined1 *puVar1;
  byte *pbVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  int iVar26;
  ulong uVar27;
  ulong uVar28;
  undefined4 *__s;
  long lVar29;
  long lVar30;
  size_t __n;
  int iVar31;
  ulong uVar32;
  uint auStack_c0 [4];
  long local_b0;
  long local_a8;
  long local_a0;
  int local_94;
  int local_90;
  int local_8c;
  long local_88;
  long local_80;
  uint *local_78;
  int local_6c;
  long local_68;
  
  lVar15 = tpidr_el0;
  local_68 = *(long *)(lVar15 + 0x28);
  uVar27 = param_3 & 0xffffffff;
  if ((DAT_095211a1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_091d8078);
    FUN_03f5c2a4(&DAT_0918a310);
    DAT_095211a1 = 1;
  }
  if (param_2 == 0) goto LAB_07464d1c;
  if (*(int *)(param_2 + 0x18) < param_4 + (int)param_3) {
LAB_074642a8:
    puVar9 = &DAT_09204c40;
  }
  else {
    iVar31 = *(int *)(param_1 + 0x24);
    iVar12 = 0;
    if (iVar31 != 0) {
      iVar12 = param_4 / iVar31;
    }
    local_94 = param_4 - iVar12 * iVar31;
    local_6c = param_4;
    if ((param_8 & 1) == 0) {
LAB_07464280:
      lVar30 = 0;
      uVar32 = 0;
LAB_07464288:
      iVar31 = (int)uVar32;
      if (*param_5 == 0) {
        lVar13 = FUN_03f5c394(DAT_0917fc88,iVar31 + local_6c);
        *param_5 = lVar13;
        thunk_FUN_03f5d7b8(param_5,lVar13);
        param_6 = 0;
      }
      else if ((int)(*(int *)(*param_5 + 0x18) - param_6) < iVar31 + local_6c) goto LAB_074642a8;
      lVar13 = *(long *)(param_1 + 0x50);
      if (lVar13 == 0) {
        lVar29 = 0;
      }
      else {
        lVar29 = 0;
        if (*(int *)(lVar13 + 0x18) != 0) {
          lVar29 = lVar13 + 0x20;
        }
      }
      lVar13 = *(long *)(param_1 + 0x30);
      if (lVar13 == 0) {
        local_a0 = 0;
      }
      else {
        local_a0 = 0;
        if (*(int *)(lVar13 + 0x18) != 0) {
          local_a0 = lVar13 + 0x20;
        }
      }
      if (*(int *)(DAT_0918a310 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar13 = *(long *)(DAT_0918a310 + 0xb8);
      lVar16 = *(long *)(lVar13 + 0x10);
      if (lVar16 == 0) {
        local_80 = 0;
      }
      else {
        local_80 = 0;
        if (*(int *)(lVar16 + 0x18) != 0) {
          local_80 = lVar16 + 0x20;
        }
      }
      if (*(int *)(DAT_0918a310 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar13 = *(long *)(DAT_0918a310 + 0xb8);
      }
      lVar13 = *(long *)(lVar13 + 0x18);
      if (lVar13 == 0) {
        local_88 = 0;
      }
      else {
        local_88 = 0;
        if (*(int *)(lVar13 + 0x18) != 0) {
          local_88 = lVar13 + 0x20;
        }
      }
      __n = (long)*(int *)(param_1 + 0x44) * 4;
      local_b0 = lVar15;
      if (*(int *)(param_1 + 0x44) == 0) {
        memset((void *)0x0,0,0);
        local_78 = (uint *)0x0;
        __s = (undefined4 *)0x0;
      }
      else {
        uVar28 = __n + 0xf & 0xfffffffffffffff0;
        puVar18 = (uint *)((long)auStack_c0 - uVar28);
        local_78 = puVar18;
        memset(puVar18,0,__n);
        __s = (undefined4 *)((long)puVar18 - uVar28);
      }
      memset(__s,0,__n);
      auStack_c0[3] = iVar31 + local_6c;
      local_8c = 0;
      if (*(int *)(param_1 + 0x24) != 0) {
        local_8c = (int)auStack_c0[3] / *(int *)(param_1 + 0x24);
      }
      local_90 = local_8c + -1;
      if (0 < local_8c) {
        iVar12 = 0;
        lVar15 = local_a0;
        local_a8 = lVar29;
        do {
          iVar26 = (int)uVar27;
          local_6c = iVar12;
          if (*(int *)(param_1 + 0x10) == 4) {
            uVar5 = *(undefined4 *)(param_1 + 0x20);
            lVar13 = *(long *)(param_1 + 0x78);
            uVar28 = 0;
LAB_0746465c:
            System_Buffer__Memcpy(local_78,0,lVar13,uVar28,uVar5,0);
          }
          else {
            if ((iVar31 == 0) || (iVar12 != local_90)) {
              uVar5 = *(undefined4 *)(param_1 + 0x20);
              lVar13 = param_2;
              uVar28 = uVar27;
              goto LAB_0746465c;
            }
            if (0 < *(int *)(param_1 + 0x44)) {
              lVar13 = 0;
              uVar21 = 0;
              iVar12 = iVar26 + local_94;
              puVar18 = local_78;
              uVar28 = uVar27;
              do {
                uVar19 = (uint)uVar28;
                if ((int)uVar19 < iVar12) {
                  if (*(uint *)(param_2 + 0x18) <= uVar19) goto LAB_07464cec;
                  uVar3 = (long)(int)uVar19 + 1;
                  uVar20 = (uint)*(byte *)(param_2 + (int)uVar19 + 0x20);
                  if (iVar12 <= (int)(uint)uVar3) {
                    if (lVar30 != 0) {
                      iVar7 = 1;
                      uVar28 = uVar3 & 0xffffffff;
                      uVar24 = uVar21;
                      goto LAB_07464574;
                    }
                    goto LAB_07464d04;
                  }
                  if (*(uint *)(param_2 + 0x18) <= (uint)uVar3) goto LAB_07464cec;
                  uVar19 = uVar19 + 2;
                  uVar28 = (ulong)uVar19;
                  uVar23 = (uint)*(byte *)(param_2 + uVar3 + 0x20);
                  uVar24 = uVar21;
                  if ((int)uVar19 < iVar12) goto LAB_07464590;
                  if (lVar30 == 0) goto LAB_07464d04;
LAB_074645d4:
                  if (*(uint *)(lVar30 + 0x18) <= uVar21) goto LAB_07464cec;
                  uVar24 = uVar21 + 1;
                  uVar19 = uVar21 + 2;
                  bVar6 = *(byte *)(lVar30 + (int)uVar21 + 0x20);
LAB_07464604:
                  if (*(uint *)(lVar30 + 0x18) <= uVar24) goto LAB_07464cec;
                  lVar16 = lVar30 + (int)uVar24;
                  uVar21 = uVar19;
                }
                else {
                  if (lVar30 == 0) goto LAB_07464d04;
                  if (*(uint *)(lVar30 + 0x18) <= uVar21) goto LAB_07464cec;
                  uVar24 = uVar21 + 1;
                  iVar7 = 2;
                  uVar20 = (uint)*(byte *)(lVar30 + (int)uVar21 + 0x20);
LAB_07464574:
                  uVar19 = (uint)uVar28;
                  uVar21 = uVar21 + iVar7;
                  if (*(uint *)(lVar30 + 0x18) <= uVar24) goto LAB_07464cec;
                  uVar23 = (uint)*(byte *)(lVar30 + (int)uVar24 + 0x20);
                  uVar24 = uVar21;
                  if (iVar12 <= (int)uVar19) goto LAB_074645d4;
LAB_07464590:
                  if (*(uint *)(param_2 + 0x18) <= uVar19) goto LAB_07464cec;
                  uVar28 = (long)(int)uVar19 + 1;
                  bVar6 = *(byte *)(param_2 + (int)uVar19 + 0x20);
                  if (iVar12 <= (int)(uint)uVar28) {
                    if (lVar30 != 0) {
                      uVar19 = uVar24 + 1;
                      uVar28 = uVar28 & 0xffffffff;
                      goto LAB_07464604;
                    }
                    goto LAB_07464d04;
                  }
                  if (*(uint *)(param_2 + 0x18) <= (uint)uVar28) goto LAB_07464cec;
                  lVar16 = param_2 + uVar28;
                  uVar28 = (ulong)(uVar19 + 2);
                  uVar21 = uVar24;
                }
                lVar13 = lVar13 + 1;
                *puVar18 = uVar20 | uVar23 << 8 | (uint)bVar6 << 0x10 |
                           (uint)*(byte *)(lVar16 + 0x20) << 0x18;
                puVar18 = puVar18 + 1;
              } while (lVar13 < *(int *)(param_1 + 0x44));
            }
          }
          if ((*(int *)(param_1 + 0x10) == 1) && (0 < *(int *)(param_1 + 0x44))) {
            lVar13 = *(long *)(param_1 + 0x68);
            if (lVar13 == 0) {
LAB_07464d04:
              lVar15 = *(long *)(local_b0 + 0x28);
              goto LAB_07464d0c;
            }
            uVar21 = *(uint *)(lVar13 + 0x18);
            uVar28 = 0;
            puVar18 = local_78;
            do {
              if (uVar21 == uVar28) goto LAB_07464cec;
              lVar16 = uVar28 * 4;
              uVar28 = uVar28 + 1;
              *puVar18 = *(uint *)(lVar13 + 0x20 + lVar16) ^ *puVar18;
              puVar18 = puVar18 + 1;
            } while ((long)uVar28 < (long)*(int *)(param_1 + 0x44));
          }
          System_Security_Cryptography_RijndaelManagedTransform__Enc
                    (param_1,lVar29,lVar15,local_80,local_88,local_78,__s);
          iVar12 = *(int *)(param_1 + 0x10);
          if (iVar12 == 4) {
            if ((iVar31 == 0) || (local_6c != local_90)) {
              if (0 < *(int *)(param_1 + 0x44)) {
                lVar22 = (long)iVar26;
                lVar13 = param_2 + iVar26;
                lVar14 = 0;
                lVar16 = 0;
                do {
                  if ((long)(*(int *)(param_1 + 0x24) + iVar26) <= lVar22 + lVar14) break;
                  iVar12 = (int)lVar14;
                  if (*(uint *)(param_2 + 0x18) <= (uint)(iVar26 + iVar12)) goto LAB_07464cec;
                  lVar25 = *param_5;
                  if (lVar25 == 0) goto LAB_07464d04;
                  uVar21 = param_6 + iVar12;
                  if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_07464cec;
                  *(byte *)(lVar25 + (int)uVar21 + 0x20) =
                       *(byte *)(lVar13 + lVar14 + 0x20) ^ (byte)*(undefined4 *)((long)__s + lVar14)
                  ;
                  if ((long)(*(int *)(param_1 + 0x24) + iVar26) <= lVar22 + lVar14 + 1) {
                    param_6 = param_6 + iVar12 + 1;
                    goto LAB_07464bf0;
                  }
                  if (*(uint *)(param_2 + 0x18) <= iVar26 + iVar12 + 1U) goto LAB_07464cec;
                  lVar25 = *param_5;
                  if (lVar25 == 0) goto LAB_07464d04;
                  if (*(uint *)(lVar25 + 0x18) <= uVar21 + 1) goto LAB_07464cec;
                  *(byte *)(lVar25 + (int)(uVar21 + 1) + 0x20) =
                       *(byte *)(lVar13 + lVar14 + 0x21) ^
                       (byte)((uint)*(undefined4 *)((long)__s + lVar14) >> 8);
                  if ((long)(*(int *)(param_1 + 0x24) + iVar26) <= lVar22 + lVar14 + 2) {
                    param_6 = param_6 + iVar12 + 2;
                    goto LAB_07464bf0;
                  }
                  if (*(uint *)(param_2 + 0x18) <= iVar26 + iVar12 + 2U) goto LAB_07464cec;
                  lVar25 = *param_5;
                  if (lVar25 == 0) goto LAB_07464d04;
                  uVar21 = param_6 + iVar12 + 2;
                  if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_07464cec;
                  *(byte *)(lVar25 + (int)uVar21 + 0x20) =
                       *(byte *)(lVar13 + lVar14 + 0x22) ^
                       (byte)((uint)*(undefined4 *)((long)__s + lVar14) >> 0x10);
                  if ((long)(*(int *)(param_1 + 0x24) + iVar26) <= lVar22 + lVar14 + 3) {
                    param_6 = param_6 + iVar12 + 3;
                    goto LAB_07464bf0;
                  }
                  if (*(uint *)(param_2 + 0x18) <= iVar26 + iVar12 + 3U) goto LAB_07464cec;
                  lVar25 = *param_5;
                  if (lVar25 == 0) goto LAB_07464d04;
                  uVar21 = param_6 + iVar12 + 3;
                  if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_07464cec;
                  lVar4 = lVar13 + lVar14;
                  puVar17 = (undefined4 *)((long)__s + lVar14);
                  lVar16 = lVar16 + 1;
                  lVar14 = lVar14 + 4;
                  *(byte *)(lVar25 + (int)uVar21 + 0x20) =
                       *(byte *)(lVar4 + 0x23) ^ (byte)((uint)*puVar17 >> 0x18);
                } while (lVar16 < *(int *)(param_1 + 0x44));
                param_6 = param_6 + (int)lVar14;
              }
            }
            else {
              lVar13 = FUN_03f5c394(DAT_0917fc88,*(undefined4 *)(param_1 + 0x24));
              iVar12 = local_94;
              thunk_FUN_03f6c31c(param_2,uVar27,lVar13,0,local_94,0);
              thunk_FUN_03f6c31c(lVar30,0,lVar13,iVar12,uVar32,0);
              lVar29 = local_a8;
              lVar15 = local_a0;
              if (0 < *(int *)(param_1 + 0x44)) {
                lVar14 = 0;
                uVar27 = 0;
                lVar16 = lVar13 + 0x23;
                do {
                  iVar12 = (int)uVar27;
                  if ((long)*(int *)(param_1 + 0x24) <= (long)uVar27) {
                    param_6 = param_6 + iVar12;
                    goto LAB_07464bf0;
                  }
                  if (lVar13 == 0) goto LAB_07464d04;
                  if (*(uint *)(lVar13 + 0x18) <= uVar27) goto LAB_07464cec;
                  lVar22 = *param_5;
                  if (lVar22 == 0) goto LAB_07464d04;
                  uVar21 = param_6 + iVar12;
                  if (*(uint *)(lVar22 + 0x18) <= uVar21) goto LAB_07464cec;
                  *(byte *)(lVar22 + (int)uVar21 + 0x20) =
                       *(byte *)(lVar16 + uVar27 + -3) ^ (byte)*(undefined4 *)((long)__s + uVar27);
                  if ((long)*(int *)(param_1 + 0x24) <= (long)(uVar27 + 1)) {
                    param_6 = param_6 + iVar12 + 1;
                    goto LAB_07464bf0;
                  }
                  if ((ulong)*(uint *)(lVar13 + 0x18) <= uVar27 + 1) goto LAB_07464cec;
                  lVar22 = *param_5;
                  if (lVar22 == 0) goto LAB_07464d04;
                  if (*(uint *)(lVar22 + 0x18) <= uVar21 + 1) goto LAB_07464cec;
                  *(byte *)(lVar22 + (int)(uVar21 + 1) + 0x20) =
                       *(byte *)(lVar16 + uVar27 + -2) ^
                       (byte)((uint)*(undefined4 *)((long)__s + uVar27) >> 8);
                  if ((long)*(int *)(param_1 + 0x24) <= (long)(uVar27 + 2)) {
                    param_6 = param_6 + iVar12 + 2;
                    goto LAB_07464bf0;
                  }
                  if ((ulong)*(uint *)(lVar13 + 0x18) <= uVar27 + 2) goto LAB_07464cec;
                  lVar22 = *param_5;
                  if (lVar22 == 0) goto LAB_07464d04;
                  uVar21 = param_6 + iVar12 + 2;
                  if (*(uint *)(lVar22 + 0x18) <= uVar21) goto LAB_07464cec;
                  *(byte *)(lVar22 + (int)uVar21 + 0x20) =
                       *(byte *)(lVar16 + uVar27 + -1) ^
                       (byte)((uint)*(undefined4 *)((long)__s + uVar27) >> 0x10);
                  if ((long)*(int *)(param_1 + 0x24) <= (long)(uVar27 + 3)) {
                    param_6 = param_6 + iVar12 + 3;
                    goto LAB_07464bf0;
                  }
                  if ((ulong)*(uint *)(lVar13 + 0x18) <= uVar27 + 3) goto LAB_07464cec;
                  lVar22 = *param_5;
                  if (lVar22 == 0) goto LAB_07464d04;
                  uVar21 = param_6 + iVar12 + 3;
                  if (*(uint *)(lVar22 + 0x18) <= uVar21) goto LAB_07464cec;
                  puVar17 = (undefined4 *)((long)__s + uVar27);
                  pbVar2 = (byte *)(lVar16 + uVar27);
                  lVar14 = lVar14 + 1;
                  uVar27 = uVar27 + 4;
                  *(byte *)(lVar22 + (int)uVar21 + 0x20) = *pbVar2 ^ (byte)((uint)*puVar17 >> 0x18);
                } while (lVar14 < *(int *)(param_1 + 0x44));
                param_6 = param_6 + iVar12 + 4;
              }
            }
LAB_07464bf0:
            iVar12 = *(int *)(param_1 + 0x24);
            iVar7 = *(int *)(param_1 + 0x20) - iVar12;
            if (0 < iVar7) {
              uVar27 = 0;
              do {
                lVar13 = *(long *)(param_1 + 0x78);
                if (lVar13 == 0) goto LAB_07464d04;
                uVar21 = (int)uVar27 + iVar12;
                if (((uint)*(ulong *)(lVar13 + 0x18) <= uVar21) ||
                   ((*(ulong *)(lVar13 + 0x18) & 0xffffffff) <= uVar27)) goto LAB_07464cec;
                lVar16 = lVar13 + uVar27;
                uVar27 = uVar27 + 1;
                *(undefined1 *)(lVar16 + 0x20) = *(undefined1 *)(lVar13 + (int)uVar21 + 0x20);
                iVar12 = *(int *)(param_1 + 0x24);
                iVar7 = *(int *)(param_1 + 0x20) - iVar12;
              } while ((long)uVar27 < (long)iVar7);
            }
            thunk_FUN_03f6c31c(*param_5,iVar12 * local_6c,*(undefined8 *)(param_1 + 0x78),iVar7,
                               iVar12,0);
          }
          else {
            if (0 < *(int *)(param_1 + 0x44)) {
              lVar13 = 0;
              puVar17 = __s;
              do {
                uVar21 = param_6;
                lVar16 = *param_5;
                if (lVar16 == 0) goto LAB_07464d04;
                if (*(uint *)(lVar16 + 0x18) <= uVar21) goto LAB_07464cec;
                *(char *)(lVar16 + (int)uVar21 + 0x20) = (char)*puVar17;
                lVar16 = *param_5;
                if (lVar16 == 0) goto LAB_07464d04;
                if (*(uint *)(lVar16 + 0x18) <= uVar21 + 1) goto LAB_07464cec;
                *(char *)(lVar16 + (int)(uVar21 + 1) + 0x20) = (char)((uint)*puVar17 >> 8);
                lVar16 = *param_5;
                if (lVar16 == 0) goto LAB_07464d04;
                if (*(uint *)(lVar16 + 0x18) <= uVar21 + 2) goto LAB_07464cec;
                *(char *)(lVar16 + (int)(uVar21 + 2) + 0x20) =
                     (char)*(undefined2 *)((long)puVar17 + 2);
                lVar16 = *param_5;
                if (lVar16 == 0) goto LAB_07464d04;
                if (*(uint *)(lVar16 + 0x18) <= uVar21 + 3) goto LAB_07464cec;
                puVar1 = (undefined1 *)((long)puVar17 + 3);
                lVar13 = lVar13 + 1;
                puVar17 = puVar17 + 1;
                *(undefined1 *)(lVar16 + (int)(uVar21 + 3) + 0x20) = *puVar1;
                param_6 = uVar21 + 4;
              } while (lVar13 < *(int *)(param_1 + 0x44));
              iVar12 = *(int *)(param_1 + 0x10);
              param_6 = uVar21 + 4;
            }
            if (iVar12 == 1) {
              lVar13 = *(long *)(param_1 + 0x68);
              if (lVar13 == 0) {
                lVar16 = 0;
              }
              else {
                lVar16 = 0;
                if (*(int *)(lVar13 + 0x18) != 0) {
                  lVar16 = lVar13 + 0x20;
                }
              }
              System_Buffer__Memcpy(lVar16,__s,*(undefined4 *)(param_1 + 0x20),0);
            }
          }
          iVar12 = local_6c + 1;
          uVar27 = (ulong)(uint)(*(int *)(param_1 + 0x24) + iVar26);
        } while (iVar12 != local_8c);
      }
      if (*(long *)(local_b0 + 0x28) == local_68) {
        return auStack_c0[3];
      }
      goto LAB_07464d2c;
    }
    uVar32 = 0;
    lVar30 = 0;
    if (3 < param_7) {
      if (param_7 - 4U < 2) goto LAB_074641f8;
      goto LAB_07464288;
    }
    if (param_7 != 1) {
      if (param_7 != 2) {
        if (param_7 != 3) goto LAB_07464288;
        if (local_94 == 0) goto LAB_07464280;
      }
LAB_074641f8:
      uVar21 = iVar31 - local_94;
      uVar32 = (ulong)uVar21;
      if (uVar21 == 0) {
        lVar30 = 0;
      }
      else {
        lVar30 = FUN_03f5c394(DAT_0917fc88,uVar32);
        if (param_7 == 2) {
          if (0 < (int)uVar21) {
            if (lVar30 == 0) goto LAB_07464d1c;
            uVar19 = *(uint *)(lVar30 + 0x18);
            uVar28 = 0;
            do {
              if (uVar19 <= uVar28) goto LAB_07464d24;
              lVar13 = lVar30 + uVar28;
              uVar28 = uVar28 + 1;
              *(char *)(lVar13 + 0x20) = (char)uVar21;
            } while (uVar32 != uVar28);
          }
        }
        else {
          if (param_7 != 4) {
            if (param_7 != 5) goto LAB_07464288;
            plVar8 = (long *)System_Security_Cryptography_Utils__get_StaticRandomNumberGenerator(0);
            if (plVar8 == (long *)0x0) goto LAB_07464d1c;
            (**(code **)(*plVar8 + 0x198))(plVar8,lVar30,*(undefined8 *)(*plVar8 + 0x1a0));
          }
          if (lVar30 == 0) {
LAB_07464d1c:
            lVar15 = *(long *)(lVar15 + 0x28);
LAB_07464d0c:
            if (lVar15 == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_07464d2c;
          }
          if (*(uint *)(lVar30 + 0x18) <= uVar21 - 1) {
LAB_07464d24:
            lVar15 = *(long *)(lVar15 + 0x28);
LAB_07464cf4:
            if (lVar15 == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            goto LAB_07464d2c;
          }
          *(char *)(lVar30 + (int)(uVar21 - 1) + 0x20) = (char)uVar21;
        }
      }
      goto LAB_07464288;
    }
    if (local_94 == 0) goto LAB_07464280;
    puVar9 = &DAT_09206bc8;
  }
  uVar10 = thunk_FUN_03fc39d4(puVar9);
  uVar10 = System_Environment__GetResourceString(uVar10,0);
  thunk_FUN_03fc39d4(&DAT_09182f98);
  uVar11 = thunk_FUN_03f9944c();
  System_Security_Cryptography_CryptographicException___ctor(uVar11,uVar10);
  if (*(long *)(lVar15 + 0x28) == local_68) {
    uVar10 = thunk_FUN_03fc39d4(&DAT_091d8078);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar11,uVar10);
  }
LAB_07464d2c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_07464cec:
  lVar15 = *(long *)(local_b0 + 0x28);
  goto LAB_07464cf4;
}

