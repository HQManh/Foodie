// rea decompile_all
// name: FUN_03f797c8
// address: 0x3f797c8
// body: available
// range: 0x3f797c8-0x3f79fff inclusive
// range: 0x3f7a098-0x3f7a09b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f79ffc to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3f7a098 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f797c8(long param_1)

{
  uint uVar1;
  byte bVar2;
  size_t __n;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  size_t sVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  void *pvVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  char *pcVar22;
  long *plVar23;
  undefined1 auVar24 [16];
  long lStack_110;
  void *local_108;
  void *local_100;
  ulong local_f8;
  void *local_f0;
  void *local_e8;
  long local_e0;
  void *local_d8;
  void *local_d0;
  undefined8 local_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  ulong local_a8;
  size_t local_a0;
  void *local_98;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined8 local_78;
  long local_70;
  
  local_e0 = tpidr_el0;
  local_70 = *(long *)(local_e0 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x132);
  local_d8 = (void *)0x0;
  local_d0 = (void *)0x0;
  local_c8 = 0;
  if (*(char *)(param_1 + 0x2a) == '\x1d') {
    FUN_03f7a5b8(*(undefined8 *)(param_1 + 0x40),&local_d8);
  }
  pvVar9 = local_d0;
  pvVar15 = local_d8;
  uVar21 = (ulong)bVar2;
  if (DAT_09534638 == DAT_09534630) {
    local_108 = local_d8;
    local_100 = local_d0;
    local_f8 = (ulong)bVar2;
    FUN_03f7bbc8(&DAT_09534630,0xd);
    local_78 = 0;
    lVar6 = FUN_03fbee74(DAT_09535478,&local_78);
    pvVar9 = local_100;
    pvVar15 = local_108;
    uVar21 = local_f8;
    if (lVar6 != 0) {
      local_e8 = (void *)((ulong)&local_a8 | 1);
      local_f0 = (void *)((ulong)&local_90 | 1);
      do {
        pcVar22 = *(char **)(lVar6 + 0x18);
        iVar5 = strncmp(pcVar22,"InternalArray__",0xf);
        if (iVar5 == 0) {
          local_90 = 0;
          uStack_88 = 0;
          local_80 = (void *)0x0;
          local_a8 = 0;
          local_a0 = 0;
          local_98 = (void *)0x0;
          iVar5 = strncmp(pcVar22,"InternalArray__ICollection_",0x1b);
          lVar18 = DAT_09535558;
          if (iVar5 == 0) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((char *)&local_a8);
            FUN_03f92510(&local_c0,"System.Collections.Generic.ICollection`1.%s",
                         *(long *)(lVar6 + 0x18) + 0x1b);
          }
          else {
            iVar5 = strncmp(pcVar22,"InternalArray__IEnumerable_",0x1b);
            lVar18 = DAT_09535560;
            if (iVar5 == 0) {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((char *)&local_a8);
              FUN_03f92510(&local_c0,"System.Collections.Generic.IEnumerable`1.%s",
                           *(long *)(lVar6 + 0x18) + 0x1b);
            }
            else {
              iVar5 = strncmp(pcVar22,"InternalArray__IReadOnlyList_",0x1d);
              lVar18 = DAT_09535568;
              if (iVar5 == 0) {
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((char *)&local_a8);
                FUN_03f92510(&local_c0,"System.Collections.Generic.IReadOnlyList`1.%s",
                             *(long *)(lVar6 + 0x18) + 0x1d);
              }
              else {
                iVar5 = strncmp(pcVar22,"InternalArray__IReadOnlyCollection_",0x23);
                lVar18 = DAT_09535570;
                lVar19 = DAT_09535550;
                if (iVar5 == 0) {
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign((char *)&local_a8);
                  FUN_03f92510(&local_c0,"System.Collections.Generic.IReadOnlyCollection`1.%s",
                               *(long *)(lVar6 + 0x18) + 0x23);
                }
                else {
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign((char *)&local_a8);
                  FUN_03f92510(&local_c0,"System.Collections.Generic.IList`1.%s",
                               *(long *)(lVar6 + 0x18) + 0xf);
                  lVar18 = lVar19;
                }
              }
            }
          }
          if ((local_90 & 1) != 0) {
            operator_delete(local_80);
          }
          uStack_88 = uStack_b8;
          local_90 = local_c0;
          local_80 = local_b0;
          FUN_03fbea4c(lVar18);
          uVar21 = (ulong)*(ushort *)(lVar18 + 0x120);
          uVar20 = local_a8 & 0xff;
          if (uVar21 != 0) {
            plVar23 = *(long **)(lVar18 + 0x98);
            lVar18 = 0;
            __n = local_a8 >> 1 & 0x7f;
            pvVar9 = local_e8;
            if ((local_a8 & 1) != 0) {
              __n = local_a0;
              pvVar9 = local_98;
            }
            do {
              lVar17 = *plVar23;
              pcVar22 = *(char **)(lVar17 + 0x18);
              sVar7 = strlen(pcVar22);
              lVar19 = lVar18;
              if (sVar7 == __n) {
                if (__n == 0xffffffffffffffff) {
                  if (*(long *)(local_e0 + 0x28) != local_70) goto LAB_03f7a098;
                  FUN_03f695e8(&local_a8);
                  goto LAB_03f79fe0;
                }
                iVar5 = memcmp(pvVar9,pcVar22,__n);
                lVar19 = lVar17;
                if (iVar5 != 0) {
                  lVar19 = lVar18;
                }
              }
              uVar21 = uVar21 - 1;
              plVar23 = plVar23 + 1;
              lVar18 = lVar19;
            } while (uVar21 != 0);
            if (lVar19 != 0) {
              pvVar9 = local_f0;
              if ((local_90 & 1) != 0) {
                pvVar9 = local_80;
              }
              uVar8 = FUN_03f92a28(pvVar9);
              if (DAT_09534638 < DAT_09534640) {
                DAT_09534638[2] = lVar19;
                puVar12 = DAT_09534638 + 3;
                *DAT_09534638 = uVar8;
                DAT_09534638[1] = lVar6;
              }
              else {
                lVar18 = (long)DAT_09534638 - (long)DAT_09534630 >> 3;
                uVar21 = lVar18 * -0x5555555555555555 + 1;
                if (0xaaaaaaaaaaaaaaa < uVar21) {
LAB_03f79fe0:
                  if (*(long *)(local_e0 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5fa4c(&DAT_09534630);
                  }
                  goto LAB_03f7a098;
                }
                lVar17 = (long)DAT_09534640 - (long)DAT_09534630 >> 3;
                uVar20 = lVar17 * 0x5555555555555556;
                if (uVar20 < uVar21 || uVar20 - uVar21 == 0) {
                  uVar20 = uVar21;
                }
                if (0x555555555555554 < (ulong)(lVar17 * -0x5555555555555555)) {
                  uVar20 = 0xaaaaaaaaaaaaaaa;
                }
                if (uVar20 == 0) {
                  auVar24 = ZEXT816(0);
                }
                else {
                  auVar24 = FUN_03f7bc88(&DAT_09534640);
                }
                puVar12 = (undefined8 *)(auVar24._0_8_ + lVar18 * 8);
                *puVar12 = uVar8;
                puVar12[1] = lVar6;
                puVar12[2] = lVar19;
                puVar4 = DAT_09534630;
                puVar11 = puVar12;
                puVar3 = DAT_09534638;
                for (; DAT_09534638 != puVar4; DAT_09534638 = DAT_09534638 + -3) {
                  uVar10 = DAT_09534638[-2];
                  uVar8 = DAT_09534638[-3];
                  puVar11[-1] = DAT_09534638[-1];
                  puVar11[-2] = uVar10;
                  puVar11[-3] = uVar8;
                  puVar11 = puVar11 + -3;
                  puVar3 = DAT_09534630;
                }
                puVar12 = puVar12 + 3;
                DAT_09534640 = (undefined8 *)(auVar24._0_8_ + auVar24._8_8_ * 0x18);
                DAT_09534630 = puVar11;
                if (puVar3 != (undefined8 *)0x0) {
                  DAT_09534638 = puVar12;
                  operator_delete(puVar3);
                }
              }
              uVar20 = local_a8 & 0xff;
              DAT_09534638 = puVar12;
            }
          }
          if ((uVar20 & 1) != 0) {
            operator_delete(local_98);
          }
          if ((local_90 & 1) != 0) {
            operator_delete(local_80);
          }
        }
        lVar6 = FUN_03fbee74(DAT_09535478,&local_78);
        pvVar9 = local_100;
        pvVar15 = local_108;
        uVar21 = local_f8;
      } while (lVar6 != 0);
    }
  }
  uVar16 = (uint)uVar21;
  lVar6 = 4;
  if (1 < uVar16) {
    lVar6 = 5;
  }
  lVar6 = lVar6 + ((long)DAT_09534638 - (long)DAT_09534630 >> 3) *
                  ((long)pvVar9 - (long)pvVar15 >> 3) * -0x5555555555555555;
  *(short *)(param_1 + 0x120) = (short)lVar6;
  uVar8 = FUN_03fa7f34(lVar6,8);
  *(undefined8 *)(param_1 + 0x98) = uVar8;
  iVar5 = (int)(uVar21 << 3);
  plVar23 = (long *)((long)&lStack_110 - ((ulong)(iVar5 + 0xf) & 0xff0));
  if (uVar16 != 0) {
    uVar20 = uVar21;
    plVar14 = plVar23;
    do {
      uVar20 = uVar20 - 1;
      *plVar14 = DAT_09535420 + 0x20;
      plVar14 = plVar14 + 1;
    } while (uVar20 != 0);
  }
  uVar8 = FUN_03f7bae8(param_1,".ctor",DAT_095353f8 + 0x20,uVar21 & 0xffffffff);
  **(undefined8 **)(param_1 + 0x98) = uVar8;
  if (uVar16 < 2) {
    lVar6 = 1;
  }
  else {
    plVar23 = (long *)((long)plVar23 - (ulong)(uVar16 << 4));
    uVar20 = 0;
    do {
      uVar13 = uVar20 & 0xff;
      uVar1 = (int)uVar20 + 1;
      uVar20 = (ulong)uVar1;
      *(long *)((long)plVar23 + uVar13 * 8) = DAT_09535420 + 0x20;
    } while ((uVar1 & 0xff) < uVar16 << 1);
    uVar8 = FUN_03f7bae8(param_1,".ctor",DAT_095353f8 + 0x20);
    lVar6 = 2;
    *(undefined8 *)(*(long *)(param_1 + 0x98) + 8) = uVar8;
  }
  plVar23 = (long *)((long)plVar23 - ((ulong)((uVar16 + 1) * 8 + 0xf) & 0x1ff0));
  if (uVar16 != 0) {
    uVar20 = uVar21;
    plVar14 = plVar23;
    do {
      uVar20 = uVar20 - 1;
      *plVar14 = DAT_09535420 + 0x20;
      plVar14 = plVar14 + 1;
    } while (uVar20 != 0);
  }
  plVar23[uVar21] = *(long *)(param_1 + 0x40) + 0x20;
  lVar18 = FUN_03f7bae8(param_1,&DAT_01a89cf7,DAT_095353f8 + 0x20);
  uVar8 = FUN_03fbd42c();
  *(undefined8 *)(lVar18 + 0x10) = uVar8;
  *(long *)(*(long *)(param_1 + 0x98) + lVar6 * 8) = lVar18;
  plVar23 = (long *)((long)plVar23 - ((ulong)(iVar5 + 0xf) & 0xff0));
  if (uVar16 != 0) {
    uVar20 = uVar21;
    plVar14 = plVar23;
    do {
      uVar20 = uVar20 - 1;
      *plVar14 = DAT_09535420 + 0x20;
      plVar14 = plVar14 + 1;
    } while (uVar20 != 0);
  }
  lVar18 = FUN_03f7bae8(param_1,"Address",*(long *)(param_1 + 0x40) + 0x30,uVar21 & 0xffffffff);
  uVar8 = FUN_03fbd410();
  *(undefined8 *)(lVar18 + 0x10) = uVar8;
  *(long *)(*(long *)(param_1 + 0x98) + lVar6 * 8 + 8) = lVar18;
  if (uVar16 != 0) {
    uVar20 = uVar21;
    plVar23 = (long *)((long)plVar23 - ((ulong)(iVar5 + 0xf) & 0xff0));
    do {
      uVar20 = uVar20 - 1;
      *plVar23 = DAT_09535420 + 0x20;
      plVar23 = plVar23 + 1;
    } while (uVar20 != 0);
  }
  lVar18 = FUN_03f7bae8(param_1,&DAT_01a6d9bb,*(long *)(param_1 + 0x40) + 0x20,uVar21 & 0xffffffff);
  uVar8 = FUN_03fbd4cc();
  *(undefined8 *)(lVar18 + 0x10) = uVar8;
  *(long *)(*(long *)(param_1 + 0x98) + lVar6 * 8 + 0x10) = lVar18;
  if (*(short *)(param_1 + 0x12e) != 0) {
    uVar21 = 0;
    uVar20 = (ulong)((int)lVar6 + 3);
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0xb0) + uVar21 * 0x10);
      if (*(long *)(lVar6 + 0x60) != 0) {
        lVar18 = FUN_03fb4784();
        uVar8 = FUN_03fc0f6c(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x60) + 8) + 8),1);
        puVar11 = DAT_09534638;
        puVar12 = DAT_09534630;
        if (DAT_09534630 != DAT_09534638) {
          do {
            if (*(long *)(puVar12[2] + 0x20) == lVar18) {
              if ((*(byte *)(puVar12[1] + 0x53) & 1) == 0) {
                pvVar9 = (void *)FUN_03fa7f34(1,0x58);
                memcpy(pvVar9,(void *)puVar12[1],0x58);
              }
              else {
                pvVar9 = (void *)FUN_03f7b170(puVar12[1],0,uVar8);
              }
              uVar10 = *puVar12;
              *(undefined4 *)((long)pvVar9 + 0x48) = 0;
              *(undefined8 *)((long)pvVar9 + 0x18) = uVar10;
              *(long *)((long)pvVar9 + 0x20) = param_1;
              *(void **)(*(long *)(param_1 + 0x98) + (uVar20 & 0xffff) * 8) = pvVar9;
              lVar6 = param_1 + (long)(int)(*(int *)(*(long *)(param_1 + 0xb0) + uVar21 * 0x10 + 8)
                                           + (uint)*(ushort *)(puVar12[2] + 0x50)) * 0x10;
              *(void **)(lVar6 + 0x140) = pvVar9;
              *(undefined8 *)(lVar6 + 0x138) = *(undefined8 *)((long)pvVar9 + 8);
              uVar20 = (ulong)((int)uVar20 + 1);
              puVar11 = DAT_09534638;
            }
            puVar12 = puVar12 + 3;
          } while (puVar12 != puVar11);
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < *(ushort *)(param_1 + 0x12e));
  }
  if (local_d8 != (void *)0x0) {
    local_d0 = local_d8;
    operator_delete(local_d8);
  }
  if (*(long *)(local_e0 + 0x28) == local_70) {
    return;
  }
LAB_03f7a098:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

