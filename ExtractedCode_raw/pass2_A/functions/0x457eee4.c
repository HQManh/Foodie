// rea decompile_all
// name: EssentialSystemR1.OnlineTimeCheck$$FormatTimeOffset
// address: 0x457eee4
// body: available
// range: 0x457eee4-0x457f86f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x457f85c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x457f868 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x457f86c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void EssentialSystemR1_OnlineTimeCheck__FormatTimeOffset(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_58 = param_1;
  if ((DAT_0951892a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_091f86a8);
    FUN_03f5c2a4(&DAT_092268b8);
    FUN_03f5c2a4(&DAT_092268c8);
    FUN_03f5c2a4(&DAT_092268b0);
    FUN_03f5c2a4(&DAT_092268c0);
    FUN_03f5c2a4(&DAT_091f8a38);
    FUN_03f5c2a4(&DAT_092268d0);
    FUN_03f5c2a4(&DAT_092268d8);
    DAT_0951892a = 1;
  }
  local_60 = 0;
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System_TimeSpan__op_LessThan(param_1,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
  plVar8 = &DAT_091f8a38;
  if ((uVar5 & 1) == 0) {
    plVar8 = &DAT_091f86a8;
  }
  lVar13 = *plVar8;
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_60 = System_TimeSpan__Duration(&local_58,0);
  dVar19 = (double)System_TimeSpan__get_TotalSeconds(&local_60,0);
  lVar9 = -0x8000000000000000;
  if (dVar19 != INFINITY) {
    lVar9 = (long)dVar19;
  }
  iVar11 = (int)(lVar9 % 0x1e13380);
  iVar2 = iVar11 % 0x278d00;
  lVar18 = (long)(iVar11 / 0x278d00);
  iVar3 = iVar2 % 0x15180;
  lVar17 = (long)(iVar2 / 0x15180);
  iVar4 = iVar3 % 0xe10;
  lVar16 = (long)(iVar3 / 0xe10);
  uVar1 = iVar4 + ((uint)((short)iVar4 * -0x7777) >> 0x10);
  iVar11 = ((int)(uVar1 * 0x10000) >> 0x15) + ((uVar1 & 0x8000) >> 0xf);
  lVar15 = (long)iVar11;
  lVar14 = (long)(short)((short)iVar4 + (short)iVar11 * -0x3c);
  if (lVar9 < 0x1e13380) {
    if (lVar9 % 0x1e13380 < 0x278d00) {
      if (iVar2 < 0x15180) {
        if (iVar3 < 0xe10) {
          if (iVar4 < 0x3c) {
            local_68 = lVar14;
            uVar6 = FUN_03f5c42c(DAT_09535440,&local_68);
            System_String__Format(DAT_092268d0,lVar13,uVar6,0);
            return;
          }
          local_68 = lVar15;
          uVar6 = FUN_03f5c42c(DAT_09535440,&local_68);
          local_70 = lVar14;
          uVar10 = FUN_03f5c42c(DAT_09535440,&local_70);
          System_String__Format(DAT_092268c0,lVar13,uVar6,uVar10,0);
          return;
        }
        plVar8 = (long *)FUN_03f5c394(DAT_09180318,4);
        if (plVar8 != (long *)0x0) {
          if ((lVar13 == 0) ||
             (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 != 0)) {
            if ((int)plVar8[3] != 0) {
              plVar8[4] = lVar13;
              thunk_FUN_03f5d7b8(plVar8 + 4,lVar13);
              local_68 = lVar16;
              lVar13 = FUN_03f5c42c(DAT_09535440,&local_68);
              if ((lVar13 != 0) &&
                 (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
              goto LAB_0457f860;
              if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
                plVar8[5] = lVar13;
                thunk_FUN_03f5d7b8(plVar8 + 5,lVar13);
                local_70 = lVar15;
                lVar13 = FUN_03f5c42c(DAT_09535440,&local_70);
                if ((lVar13 != 0) &&
                   (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                goto LAB_0457f860;
                if (2 < *(uint *)(plVar8 + 3)) {
                  plVar8[6] = lVar13;
                  thunk_FUN_03f5d7b8(plVar8 + 6,lVar13);
                  local_78 = lVar14;
                  lVar13 = FUN_03f5c42c(DAT_09535440,&local_78);
                  if ((lVar13 != 0) &&
                     (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0
                     )) goto LAB_0457f860;
                  if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
                    plVar8[7] = lVar13;
                    thunk_FUN_03f5d7b8(plVar8 + 7,lVar13);
                    puVar12 = &DAT_092268b8;
LAB_0457f7dc:
                    System_String__Format(*puVar12,plVar8,0);
                    return;
                  }
                }
              }
            }
            goto LAB_0457f85c;
          }
          goto LAB_0457f860;
        }
      }
      else {
        plVar8 = (long *)FUN_03f5c394(DAT_09180318,5);
        if (plVar8 != (long *)0x0) {
          if ((lVar13 == 0) ||
             (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 != 0)) {
            if ((int)plVar8[3] != 0) {
              plVar8[4] = lVar13;
              thunk_FUN_03f5d7b8(plVar8 + 4,lVar13);
              local_68 = lVar17;
              lVar13 = FUN_03f5c42c(DAT_09535440,&local_68);
              if ((lVar13 != 0) &&
                 (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
              goto LAB_0457f860;
              if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
                plVar8[5] = lVar13;
                thunk_FUN_03f5d7b8(plVar8 + 5,lVar13);
                local_70 = lVar16;
                lVar13 = FUN_03f5c42c(DAT_09535440,&local_70);
                if ((lVar13 != 0) &&
                   (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                goto LAB_0457f860;
                if (2 < *(uint *)(plVar8 + 3)) {
                  plVar8[6] = lVar13;
                  thunk_FUN_03f5d7b8(plVar8 + 6,lVar13);
                  local_78 = lVar15;
                  lVar13 = FUN_03f5c42c(DAT_09535440,&local_78);
                  if ((lVar13 != 0) &&
                     (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0
                     )) goto LAB_0457f860;
                  if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
                    plVar8[7] = lVar13;
                    thunk_FUN_03f5d7b8(plVar8 + 7,lVar13);
                    local_80 = lVar14;
                    lVar13 = FUN_03f5c42c(DAT_09535440,&local_80);
                    if ((lVar13 != 0) &&
                       (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar9 == 0)) goto LAB_0457f860;
                    if (4 < *(uint *)(plVar8 + 3)) {
                      plVar8[8] = lVar13;
                      thunk_FUN_03f5d7b8(plVar8 + 8,lVar13);
                      puVar12 = &DAT_092268b0;
                      goto LAB_0457f7dc;
                    }
                  }
                }
              }
            }
            goto LAB_0457f85c;
          }
          goto LAB_0457f860;
        }
      }
LAB_0457f86c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar8 = (long *)FUN_03f5c394(DAT_09180318,6);
    if (plVar8 == (long *)0x0) goto LAB_0457f86c;
    if ((lVar13 == 0) ||
       (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 != 0)) {
      if ((int)plVar8[3] != 0) {
        plVar8[4] = lVar13;
        thunk_FUN_03f5d7b8(plVar8 + 4,lVar13);
        local_68 = lVar18;
        lVar13 = FUN_03f5c42c(DAT_09535440,&local_68);
        if ((lVar13 != 0) &&
           (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_0457f860;
        if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
          plVar8[5] = lVar13;
          thunk_FUN_03f5d7b8(plVar8 + 5,lVar13);
          local_70 = lVar17;
          lVar13 = FUN_03f5c42c(DAT_09535440,&local_70);
          if ((lVar13 != 0) &&
             (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
          goto LAB_0457f860;
          if (2 < *(uint *)(plVar8 + 3)) {
            plVar8[6] = lVar13;
            thunk_FUN_03f5d7b8(plVar8 + 6,lVar13);
            local_78 = lVar16;
            lVar13 = FUN_03f5c42c(DAT_09535440,&local_78);
            if ((lVar13 != 0) &&
               (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
            goto LAB_0457f860;
            if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
              plVar8[7] = lVar13;
              thunk_FUN_03f5d7b8(plVar8 + 7,lVar13);
              local_80 = lVar15;
              lVar13 = FUN_03f5c42c(DAT_09535440,&local_80);
              if ((lVar13 != 0) &&
                 (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
              goto LAB_0457f860;
              if (4 < *(uint *)(plVar8 + 3)) {
                plVar8[8] = lVar13;
                thunk_FUN_03f5d7b8(plVar8 + 8,lVar13);
                local_88 = lVar14;
                lVar13 = FUN_03f5c42c(DAT_09535440,&local_88);
                if ((lVar13 != 0) &&
                   (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                goto LAB_0457f860;
                if (5 < *(uint *)(plVar8 + 3)) {
                  plVar8[9] = lVar13;
                  thunk_FUN_03f5d7b8(plVar8 + 9,lVar13);
                  puVar12 = &DAT_092268c8;
                  goto LAB_0457f7dc;
                }
              }
            }
          }
        }
      }
      goto LAB_0457f85c;
    }
  }
  else {
    plVar8 = (long *)FUN_03f5c394(DAT_09180318,7);
    if (plVar8 == (long *)0x0) goto LAB_0457f86c;
    if ((lVar13 == 0) ||
       (lVar7 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar7 != 0)) {
      if ((int)plVar8[3] != 0) {
        plVar8[4] = lVar13;
        thunk_FUN_03f5d7b8(plVar8 + 4,lVar13);
        local_68 = lVar9 / 0x1e13380;
        lVar13 = FUN_03f5c42c(DAT_09535440,&local_68);
        if ((lVar13 != 0) &&
           (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_0457f860;
        if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
          plVar8[5] = lVar13;
          thunk_FUN_03f5d7b8(plVar8 + 5,lVar13);
          local_70 = lVar18;
          lVar13 = FUN_03f5c42c(DAT_09535440,&local_70);
          if ((lVar13 != 0) &&
             (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
          goto LAB_0457f860;
          if (2 < *(uint *)(plVar8 + 3)) {
            plVar8[6] = lVar13;
            thunk_FUN_03f5d7b8(plVar8 + 6,lVar13);
            local_78 = lVar17;
            lVar13 = FUN_03f5c42c(DAT_09535440,&local_78);
            if ((lVar13 != 0) &&
               (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
            goto LAB_0457f860;
            if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
              plVar8[7] = lVar13;
              thunk_FUN_03f5d7b8(plVar8 + 7,lVar13);
              local_80 = lVar16;
              lVar13 = FUN_03f5c42c(DAT_09535440,&local_80);
              if ((lVar13 != 0) &&
                 (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
              goto LAB_0457f860;
              if (4 < *(uint *)(plVar8 + 3)) {
                plVar8[8] = lVar13;
                thunk_FUN_03f5d7b8(plVar8 + 8,lVar13);
                local_88 = lVar15;
                lVar13 = FUN_03f5c42c(DAT_09535440,&local_88);
                if ((lVar13 != 0) &&
                   (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                goto LAB_0457f860;
                if (5 < *(uint *)(plVar8 + 3)) {
                  plVar8[9] = lVar13;
                  thunk_FUN_03f5d7b8(plVar8 + 9,lVar13);
                  local_90 = lVar14;
                  lVar13 = FUN_03f5c42c(DAT_09535440,&local_90);
                  if ((lVar13 != 0) &&
                     (lVar9 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0
                     )) goto LAB_0457f860;
                  if (6 < *(uint *)(plVar8 + 3)) {
                    plVar8[10] = lVar13;
                    thunk_FUN_03f5d7b8(plVar8 + 10,lVar13);
                    puVar12 = &DAT_092268d8;
                    goto LAB_0457f7dc;
                  }
                }
              }
            }
          }
        }
      }
LAB_0457f85c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_0457f860:
  uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,0);
}

