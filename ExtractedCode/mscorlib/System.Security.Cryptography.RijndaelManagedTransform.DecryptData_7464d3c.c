// rea decompile_all
// name: System.Security.Cryptography.RijndaelManagedTransform$$DecryptData
// address: 0x7464d3c
// body: available
// range: 0x7464d3c-0x746584f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74657bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74657d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7465830 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x746584c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Security_Cryptography_RijndaelManagedTransform__DecryptData
              (long param_1,long param_2,uint param_3,int param_4,long *param_5,uint param_6,
              int param_7,uint param_8)

{
  undefined1 *puVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  undefined4 *__s;
  undefined4 *__s_00;
  size_t __n;
  int iVar20;
  int aiStack_c0 [4];
  uint local_b0;
  int iStack_ac;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  if ((DAT_095211a2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_091d8070);
    FUN_03f5c2a4(&DAT_0918a310);
    DAT_095211a2 = 1;
  }
  if (param_2 == 0) {
    lVar10 = *(long *)(lVar10 + 0x28);
  }
  else {
    if (*(int *)(param_2 + 0x18) < (int)(param_4 + param_3)) {
LAB_07464dec:
      uVar5 = thunk_FUN_03fc39d4(&DAT_09204c40);
      uVar5 = System_Environment__GetResourceString(uVar5,0);
      thunk_FUN_03fc39d4(&DAT_09182f98);
      uVar6 = thunk_FUN_03f9944c();
      System_Security_Cryptography_CryptographicException___ctor(uVar6,uVar5);
      if (*(long *)(lVar10 + 0x28) == local_68) {
        uVar5 = thunk_FUN_03fc39d4(&DAT_091d8070);
        goto LAB_07465828;
      }
      goto LAB_0746584c;
    }
    if (*param_5 == 0) {
      lVar9 = FUN_03f5c394(DAT_0917fc88,param_4);
      *param_5 = lVar9;
      thunk_FUN_03f5d7b8(param_5,lVar9);
      param_6 = 0;
    }
    else if ((int)(*(int *)(*param_5 + 0x18) - param_6) < param_4) goto LAB_07464dec;
    lVar9 = *(long *)(param_1 + 0x50);
    if (lVar9 == 0) {
      local_70 = 0;
    }
    else {
      local_70 = 0;
      if (*(int *)(lVar9 + 0x18) != 0) {
        local_70 = lVar9 + 0x20;
      }
    }
    lVar9 = *(long *)(param_1 + 0x30);
    if (lVar9 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = 0;
      if (*(int *)(lVar9 + 0x18) != 0) {
        local_78 = lVar9 + 0x20;
      }
    }
    lVar9 = *(long *)(param_1 + 0x58);
    if (lVar9 == 0) {
      local_80 = 0;
    }
    else {
      local_80 = 0;
      if (*(int *)(lVar9 + 0x18) != 0) {
        local_80 = lVar9 + 0x20;
      }
    }
    lVar9 = *(long *)(param_1 + 0x38);
    if (lVar9 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = 0;
      if (*(int *)(lVar9 + 0x18) != 0) {
        local_88 = lVar9 + 0x20;
      }
    }
    if (*(int *)(DAT_0918a310 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar9 = *(long *)(DAT_0918a310 + 0xb8);
    lVar11 = *(long *)(lVar9 + 0x10);
    if (lVar11 == 0) {
      local_90 = 0;
    }
    else {
      local_90 = 0;
      if (*(int *)(lVar11 + 0x18) != 0) {
        local_90 = lVar11 + 0x20;
      }
    }
    if (*(int *)(DAT_0918a310 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar9 = *(long *)(DAT_0918a310 + 0xb8);
    }
    lVar11 = *(long *)(lVar9 + 0x18);
    if (lVar11 == 0) {
      local_98 = 0;
    }
    else {
      local_98 = 0;
      if (*(int *)(lVar11 + 0x18) != 0) {
        local_98 = lVar11 + 0x20;
      }
    }
    if (*(int *)(DAT_0918a310 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar9 = *(long *)(DAT_0918a310 + 0xb8);
    }
    lVar11 = *(long *)(lVar9 + 0x20);
    if (lVar11 == 0) {
      local_a0 = 0;
    }
    else {
      local_a0 = 0;
      if (*(int *)(lVar11 + 0x18) != 0) {
        local_a0 = lVar11 + 0x20;
      }
    }
    if (*(int *)(DAT_0918a310 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar9 = *(long *)(DAT_0918a310 + 0xb8);
    }
    lVar9 = *(long *)(lVar9 + 0x28);
    if (lVar9 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      if (*(int *)(lVar9 + 0x18) != 0) {
        lVar11 = lVar9 + 0x20;
      }
    }
    __n = (long)*(int *)(param_1 + 0x44) * 4;
    local_b0 = param_8;
    iStack_ac = param_7;
    local_a8 = lVar10;
    if (*(int *)(param_1 + 0x44) == 0) {
      memset((void *)0x0,0,0);
      __s_00 = (undefined4 *)0x0;
      __s = (undefined4 *)0x0;
    }
    else {
      uVar19 = __n + 0xf & 0xfffffffffffffff0;
      __s_00 = (undefined4 *)((long)aiStack_c0 - uVar19);
      memset(__s_00,0,__n);
      __s = (undefined4 *)((long)__s_00 - uVar19);
    }
    memset(__s,0,__n);
    iVar8 = *(int *)(param_1 + 0x24);
    iVar7 = 0;
    if (iVar8 != 0) {
      iVar7 = param_4 / iVar8;
    }
    if (0 < iVar7) {
      iVar20 = 0;
      aiStack_c0[3] = param_4;
      do {
        if (*(int *)(param_1 + 0x10) == 4) {
          if (0 < *(int *)(param_1 + 0x44)) {
            lVar10 = *(long *)(param_1 + 0x78);
            if (lVar10 != 0) {
              uVar17 = *(uint *)(lVar10 + 0x18);
              lVar16 = 0;
              lVar9 = 0;
              do {
                uVar14 = (uint)lVar16;
                if (((uVar17 <= uVar14) || (uVar17 <= uVar14 + 1)) ||
                   ((uVar17 <= uVar14 + 2 || (uVar17 <= uVar14 + 3)))) goto LAB_074657a8;
                lVar9 = lVar9 + 1;
                *(uint *)((long)__s_00 + lVar16) =
                     CONCAT13(*(undefined1 *)(lVar10 + 0x20 + (long)(int)(uVar14 + 3)),
                              CONCAT12(*(undefined1 *)(lVar10 + 0x20 + (long)(int)(uVar14 + 2)),
                                       CONCAT11(*(undefined1 *)(lVar10 + (int)(uVar14 + 1) + 0x20),
                                                *(undefined1 *)(lVar10 + (int)uVar14 + 0x20))));
                lVar16 = lVar16 + 4;
              } while (lVar9 < *(int *)(param_1 + 0x44));
              goto LAB_07465198;
            }
LAB_074657c0:
            lVar10 = *(long *)(local_a8 + 0x28);
            goto LAB_074657c8;
          }
LAB_074651a4:
          System_Security_Cryptography_RijndaelManagedTransform__Enc
                    (param_1,local_70,local_78,local_90,local_98,__s_00,__s);
          if (0 < *(int *)(param_1 + 0x44)) {
            lVar13 = (long)(int)param_3;
            lVar10 = param_2 + (int)param_3;
            lVar16 = 0;
            lVar9 = 0;
            do {
              if ((long)(int)(*(int *)(param_1 + 0x24) + param_3) <= lVar13 + lVar16) break;
              iVar8 = (int)lVar16;
              if (*(uint *)(param_2 + 0x18) <= param_3 + iVar8) goto LAB_074657a8;
              lVar18 = *param_5;
              if (lVar18 == 0) goto LAB_074657c0;
              uVar17 = param_6 + iVar8;
              if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_074657a8;
              *(byte *)(lVar18 + (int)uVar17 + 0x20) =
                   *(byte *)(lVar10 + lVar16 + 0x20) ^ (byte)*(undefined4 *)((long)__s + lVar16);
              if ((long)(int)(*(int *)(param_1 + 0x24) + param_3) <= lVar13 + lVar16 + 1) {
                param_6 = param_6 + iVar8 + 1;
                goto LAB_0746554c;
              }
              if (*(uint *)(param_2 + 0x18) <= param_3 + iVar8 + 1) goto LAB_074657a8;
              lVar18 = *param_5;
              if (lVar18 == 0) goto LAB_074657c0;
              if (*(uint *)(lVar18 + 0x18) <= uVar17 + 1) goto LAB_074657a8;
              *(byte *)(lVar18 + (int)(uVar17 + 1) + 0x20) =
                   *(byte *)(lVar10 + lVar16 + 0x21) ^
                   (byte)((uint)*(undefined4 *)((long)__s + lVar16) >> 8);
              if ((long)(int)(*(int *)(param_1 + 0x24) + param_3) <= lVar13 + lVar16 + 2) {
                param_6 = param_6 + iVar8 + 2;
                goto LAB_0746554c;
              }
              if (*(uint *)(param_2 + 0x18) <= param_3 + iVar8 + 2) goto LAB_074657a8;
              lVar18 = *param_5;
              if (lVar18 == 0) goto LAB_074657c0;
              uVar17 = param_6 + iVar8 + 2;
              if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_074657a8;
              *(byte *)(lVar18 + (int)uVar17 + 0x20) =
                   *(byte *)(lVar10 + lVar16 + 0x22) ^
                   (byte)((uint)*(undefined4 *)((long)__s + lVar16) >> 0x10);
              if ((long)(int)(*(int *)(param_1 + 0x24) + param_3) <= lVar13 + lVar16 + 3) {
                param_6 = param_6 + iVar8 + 3;
                goto LAB_0746554c;
              }
              if (*(uint *)(param_2 + 0x18) <= param_3 + iVar8 + 3) goto LAB_074657a8;
              lVar18 = *param_5;
              if (lVar18 == 0) goto LAB_074657c0;
              uVar17 = param_6 + iVar8 + 3;
              if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_074657a8;
              lVar2 = lVar10 + lVar16;
              puVar12 = (undefined4 *)((long)__s + lVar16);
              lVar9 = lVar9 + 1;
              lVar16 = lVar16 + 4;
              *(byte *)(lVar18 + (int)uVar17 + 0x20) =
                   *(byte *)(lVar2 + 0x23) ^ (byte)((uint)*puVar12 >> 0x18);
            } while (lVar9 < *(int *)(param_1 + 0x44));
            param_6 = param_6 + (int)lVar16;
          }
LAB_0746554c:
          iVar8 = *(int *)(param_1 + 0x24);
          iVar4 = *(int *)(param_1 + 0x20) - iVar8;
          if (0 < iVar4) {
            uVar19 = 0;
            do {
              lVar10 = *(long *)(param_1 + 0x78);
              if (lVar10 == 0) goto LAB_074657c0;
              uVar17 = (int)uVar19 + iVar8;
              if (((uint)*(ulong *)(lVar10 + 0x18) <= uVar17) ||
                 ((*(ulong *)(lVar10 + 0x18) & 0xffffffff) <= uVar19)) goto LAB_074657a8;
              lVar9 = lVar10 + uVar19;
              uVar19 = uVar19 + 1;
              *(undefined1 *)(lVar9 + 0x20) = *(undefined1 *)(lVar10 + (int)uVar17 + 0x20);
              iVar8 = *(int *)(param_1 + 0x24);
              iVar4 = *(int *)(param_1 + 0x20) - iVar8;
            } while ((long)uVar19 < (long)iVar4);
          }
          thunk_FUN_03f6c31c(param_2,param_3,*(undefined8 *)(param_1 + 0x78),iVar4,iVar8,0);
        }
        else {
          if (0 < *(int *)(param_1 + 0x44)) {
            uVar14 = *(uint *)(param_2 + 0x18);
            lVar10 = 0;
            puVar12 = __s_00;
            uVar17 = param_3;
            do {
              if ((((uVar14 <= uVar17) || (uVar14 <= uVar17 + 1)) || (uVar14 <= uVar17 + 2)) ||
                 (uVar14 <= uVar17 + 3)) goto LAB_074657a8;
              lVar10 = lVar10 + 1;
              *puVar12 = CONCAT13(*(undefined1 *)(param_2 + 0x20 + (long)(int)(uVar17 + 3)),
                                  CONCAT12(*(undefined1 *)(param_2 + 0x20 + (long)(int)(uVar17 + 2))
                                           ,CONCAT11(*(undefined1 *)
                                                      (param_2 + (int)(uVar17 + 1) + 0x20),
                                                     *(undefined1 *)(param_2 + (int)uVar17 + 0x20)))
                                 );
              uVar17 = uVar17 + 4;
              puVar12 = puVar12 + 1;
            } while (lVar10 < *(int *)(param_1 + 0x44));
LAB_07465198:
            if (*(int *)(param_1 + 0x10) == 4) goto LAB_074651a4;
          }
          System_Security_Cryptography_RijndaelManagedTransform__Dec
                    (param_1,local_80,local_88,local_a0,lVar11,__s_00,__s);
          iVar8 = *(int *)(param_1 + 0x44);
          if (*(int *)(param_1 + 0x10) == 1) {
            if (iVar8 < 1) goto LAB_074655bc;
            lVar10 = *(long *)(param_1 + 0x68);
            if (lVar10 == 0) goto LAB_074657c0;
            uVar17 = *(uint *)(lVar10 + 0x18);
            lVar16 = 0;
            lVar9 = 0;
            do {
              if ((ulong)uVar17 * 4 - lVar16 == 0) goto LAB_074657a8;
              uVar14 = *(uint *)(param_2 + 0x18);
              iVar8 = (int)lVar16;
              uVar15 = param_3 + iVar8;
              *(uint *)((long)__s + lVar16) =
                   *(uint *)(lVar10 + 0x20 + lVar16) ^ *(uint *)((long)__s + lVar16);
              if (((uVar14 <= uVar15) || (uVar14 <= uVar15 + 1)) ||
                 ((uVar14 <= uVar15 + 2 || (uVar14 <= uVar15 + 3)))) goto LAB_074657a8;
              lVar9 = lVar9 + 1;
              *(uint *)(lVar10 + 0x20 + lVar16) =
                   CONCAT13(*(undefined1 *)(param_2 + 0x20 + (long)(int)(param_3 + iVar8 + 3)),
                            CONCAT12(*(undefined1 *)
                                      (param_2 + 0x20 + (long)(int)(param_3 + iVar8 + 2)),
                                     CONCAT11(*(undefined1 *)
                                               (param_2 + (int)(param_3 + iVar8 + 1) + 0x20),
                                              *(undefined1 *)(param_2 + (int)uVar15 + 0x20))));
              lVar16 = lVar16 + 4;
              iVar8 = *(int *)(param_1 + 0x44);
            } while (lVar9 < iVar8);
          }
          if (0 < iVar8) {
            lVar10 = 0;
            puVar12 = __s;
            do {
              uVar17 = param_6;
              lVar9 = *param_5;
              if (lVar9 == 0) goto LAB_074657c0;
              if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_074657a8;
              *(char *)(lVar9 + (int)uVar17 + 0x20) = (char)*puVar12;
              lVar9 = *param_5;
              if (lVar9 == 0) goto LAB_074657c0;
              if (*(uint *)(lVar9 + 0x18) <= uVar17 + 1) goto LAB_074657a8;
              *(char *)(lVar9 + (int)(uVar17 + 1) + 0x20) = (char)((uint)*puVar12 >> 8);
              lVar9 = *param_5;
              if (lVar9 == 0) goto LAB_074657c0;
              if (*(uint *)(lVar9 + 0x18) <= uVar17 + 2) goto LAB_074657a8;
              *(char *)(lVar9 + (int)(uVar17 + 2) + 0x20) = (char)*(undefined2 *)((long)puVar12 + 2)
              ;
              lVar9 = *param_5;
              if (lVar9 == 0) goto LAB_074657c0;
              if (*(uint *)(lVar9 + 0x18) <= uVar17 + 3) goto LAB_074657a8;
              puVar1 = (undefined1 *)((long)puVar12 + 3);
              lVar10 = lVar10 + 1;
              puVar12 = puVar12 + 1;
              *(undefined1 *)(lVar9 + (int)(uVar17 + 3) + 0x20) = *puVar1;
              param_6 = uVar17 + 4;
            } while (lVar10 < *(int *)(param_1 + 0x44));
            param_6 = uVar17 + 4;
          }
        }
LAB_074655bc:
        iVar8 = *(int *)(param_1 + 0x24);
        iVar20 = iVar20 + 1;
        param_3 = iVar8 + param_3;
        param_4 = aiStack_c0[3];
      } while (iVar20 != iVar7);
    }
    lVar10 = local_a8;
    if ((local_b0 & 1) == 0) {
LAB_07465774:
      if (*(long *)(lVar10 + 0x28) == local_68) {
        return param_4;
      }
      goto LAB_0746584c;
    }
    lVar9 = *param_5;
    if (iStack_ac == 5) {
      if (param_4 == 0) goto LAB_074657d8;
      if (lVar9 != 0) {
        uVar17 = *(uint *)(lVar9 + 0x18);
        if (uVar17 <= param_4 - 1U) {
LAB_07465834:
          lVar10 = *(long *)(local_a8 + 0x28);
LAB_074657b0:
          if (lVar10 == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          goto LAB_0746584c;
        }
        bVar3 = *(byte *)(lVar9 + (int)(param_4 - 1U) + 0x20);
        uVar14 = (uint)bVar3;
        if ((((int)uVar17 < (int)uVar14) || (uVar14 == 0)) || (iVar8 < (int)(uint)bVar3))
        goto LAB_074657d8;
        lVar9 = FUN_03f5c394(DAT_0917fc88,uVar17 - uVar14);
        lVar11 = *param_5;
        if (lVar11 != 0) {
          iVar8 = *(int *)(lVar11 + 0x18) - (uint)bVar3;
LAB_07465744:
          thunk_FUN_03f6c31c(lVar11,0,lVar9,0,iVar8,0);
          goto LAB_0746575c;
        }
      }
    }
    else if (iStack_ac == 4) {
      if (param_4 == 0) goto LAB_074657d8;
      if (lVar9 != 0) {
        uVar17 = *(uint *)(lVar9 + 0x18);
        if (uVar17 <= param_4 - 1U) goto LAB_07465834;
        bVar3 = *(byte *)(lVar9 + (int)(param_4 - 1U) + 0x20);
        uVar19 = (ulong)bVar3;
        uVar14 = (uint)bVar3;
        iVar7 = uVar17 - uVar14;
        if ((((int)uVar17 < (int)uVar14) || (uVar14 == 0)) || (iVar8 < (int)(uint)bVar3))
        goto LAB_074657d8;
        if (1 < bVar3) {
          uVar14 = param_4 - 2;
          lVar11 = uVar19 - 1;
          do {
            if (uVar17 <= uVar14) goto LAB_07465834;
            if (*(char *)(lVar9 + (int)uVar14 + 0x20) != '\0') goto LAB_074657d8;
            lVar11 = lVar11 + -1;
            uVar14 = uVar14 - 1;
          } while (lVar11 != 0);
        }
LAB_074656c4:
        lVar9 = FUN_03f5c394(DAT_0917fc88,iVar7);
        lVar11 = *param_5;
        if (lVar11 != 0) {
          iVar8 = *(int *)(lVar11 + 0x18) - (int)uVar19;
          goto LAB_07465744;
        }
      }
    }
    else {
      if (iStack_ac == 2) {
        if (param_4 != 0) {
          if (lVar9 == 0) goto LAB_0746583c;
          uVar17 = *(uint *)(lVar9 + 0x18);
          uVar14 = param_4 - 1;
          if (uVar17 <= uVar14) goto LAB_07465834;
          bVar3 = *(byte *)(lVar9 + (int)uVar14 + 0x20);
          uVar19 = (ulong)bVar3;
          uVar15 = (uint)bVar3;
          iVar7 = uVar17 - uVar15;
          if ((((int)uVar15 <= (int)uVar17) && (uVar15 != 0)) && ((int)(uint)bVar3 <= iVar8)) {
            lVar11 = 0;
            do {
              uVar15 = uVar14 + (int)lVar11;
              if (uVar17 <= uVar15) goto LAB_07465834;
              if ((uint)*(byte *)(lVar9 + (int)uVar15 + 0x20) != (uint)bVar3) goto LAB_074657d8;
              lVar11 = lVar11 + -1;
            } while (uVar19 + lVar11 != 0);
            goto LAB_074656c4;
          }
        }
LAB_074657d8:
        uVar5 = thunk_FUN_03fc39d4(&DAT_0920a358);
        uVar5 = System_Environment__GetResourceString(uVar5,0);
        thunk_FUN_03fc39d4(&DAT_09182f98);
        uVar6 = thunk_FUN_03f9944c();
        System_Security_Cryptography_CryptographicException___ctor(uVar6,uVar5);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091d8070);
        if (*(long *)(lVar10 + 0x28) == local_68) {
LAB_07465828:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar6,uVar5);
        }
        goto LAB_0746584c;
      }
LAB_0746575c:
      *param_5 = lVar9;
      thunk_FUN_03f5d7b8(param_5,lVar9);
      if (lVar9 != 0) {
        param_4 = *(int *)(lVar9 + 0x18);
        goto LAB_07465774;
      }
    }
LAB_0746583c:
    lVar10 = *(long *)(lVar10 + 0x28);
  }
LAB_074657c8:
  if (lVar10 == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0746584c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_074657a8:
  lVar10 = *(long *)(local_a8 + 0x28);
  goto LAB_074657b0;
}

