// rea decompile_all
// name: Cysharp.Threading.Tasks.Internal.PlayerLoopRunner$$RunCore
// address: 0x7dccbc4
// body: available
// range: 0x7dccbc4-0x7dccbc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07dcc948) */
/* WARNING: Removing unreachable block (ram,0x07dccb50) */
/* WARNING: Removing unreachable block (ram,0x07dccb54) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Cysharp_Threading_Tasks_Internal_PlayerLoopRunner__RunCore(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  char acStack_7c [4];
  undefined8 uStack_78;
  char acStack_6c [4];
  undefined8 uStack_68;
  
  if ((DAT_095261aa & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c05d8);
    FUN_03f5c2a4(&DAT_091862c8);
    FUN_03f5c2a4(&DAT_091b4888);
    FUN_03f5c2a4(&DAT_091b4898);
    FUN_03f5c2a4(&DAT_091d5e10);
    DAT_095261aa = 1;
  }
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  acStack_6c[0] = '\0';
  uStack_78 = 0;
  acStack_7c[0] = '\0';
  System_Threading_Monitor__Enter(uStack_68,acStack_6c,0);
  *(undefined1 *)(param_1 + 0x34) = 1;
  if (acStack_6c[0] != '\0') {
    System_Threading_Monitor__Exit(uStack_68,0);
  }
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  acStack_6c[0] = '\0';
  System_Threading_Monitor__Enter(uStack_68,acStack_6c,0);
  plVar8 = (long *)(param_1 + 0x38);
  lVar3 = *plVar8;
  if (lVar3 == 0) {
LAB_07dcc940:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar9 = 0;
  iVar11 = *(int *)(param_1 + 0x30) + -1;
LAB_07dcc3c4:
  if ((long)uVar9 < (long)(int)*(uint *)(lVar3 + 0x18)) {
    if (*(uint *)(lVar3 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar10 = *(long **)(lVar3 + uVar9 * 8 + 0x20);
    if (plVar10 == (long *)0x0) {
LAB_07dcc464:
      if ((long)uVar9 < (long)iVar11) {
        uVar5 = (ulong)iVar11;
        do {
          lVar3 = *plVar8;
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar10 = *(long **)(lVar3 + uVar5 * 8 + 0x20);
          if (plVar10 != (long *)0x0) {
            lVar3 = *plVar10;
            uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_091862c8) {
                  puVar1 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_07dcc4dc;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar1 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091862c8,0);
LAB_07dcc4dc:
            uVar6 = (*(code *)*puVar1)(plVar10,puVar1[1]);
            plVar13 = (long *)*plVar8;
            if ((uVar6 & 1) != 0) goto code_r0x07dcc4f0;
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(uint *)(plVar13 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar13[uVar5 + 4] = 0;
            thunk_FUN_03f5d7b8(plVar13 + uVar5 + 4,0);
          }
          uVar5 = uVar5 - 1;
          if ((long)uVar5 <= (long)uVar9) break;
        } while( true );
      }
      *(int *)(param_1 + 0x30) = (int)uVar9;
      goto LAB_07dcc7c0;
    }
    lVar3 = *plVar10;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091862c8) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07dcc430;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091862c8,0);
LAB_07dcc430:
    uVar5 = (*(code *)*puVar1)(plVar10,puVar1[1]);
    if ((uVar5 & 1) == 0) {
      lVar3 = *plVar8;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      puVar1 = (undefined8 *)(lVar3 + uVar9 * 8 + 0x20);
      *puVar1 = 0;
      thunk_FUN_03f5d7b8(puVar1,0);
      goto LAB_07dcc464;
    }
    goto LAB_07dcc6b0;
  }
LAB_07dcc7c0:
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  acStack_7c[0] = '\0';
  System_Threading_Monitor__Enter(uStack_78,acStack_7c,0);
  *(undefined1 *)(param_1 + 0x34) = 0;
  goto LAB_07dcc7f0;
code_r0x07dcc4f0:
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = thunk_FUN_03f99350(plVar10,*(undefined8 *)(*plVar13 + 0x40));
  if (lVar3 == 0) {
    uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,0);
  }
  if (*(uint *)(plVar13 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar13[uVar9 + 4] = (long)plVar10;
  thunk_FUN_03f5d7b8(plVar13 + uVar9 + 4,plVar10);
  lVar3 = *plVar8;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  puVar1 = (undefined8 *)(lVar3 + uVar5 * 8 + 0x20);
  *puVar1 = 0;
  thunk_FUN_03f5d7b8(puVar1,0);
  iVar11 = (int)uVar5 + -1;
LAB_07dcc6b0:
  lVar3 = *plVar8;
  uVar9 = uVar9 + 1;
  if (lVar3 == 0) goto LAB_07dcc940;
  goto LAB_07dcc3c4;
LAB_07dcc7f0:
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar3 + 0x20) == 0) {
    if (acStack_7c[0] != '\0') {
      System_Threading_Monitor__Exit(uStack_78,0);
    }
    if (acStack_6c[0] != '\0') {
      System_Threading_Monitor__Exit(uStack_68,0);
    }
    return;
  }
  plVar10 = (long *)*plVar8;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar12 = *(uint *)(param_1 + 0x30);
  if (uVar12 == *(uint *)(plVar10 + 3)) {
    if (-1 < (int)(uVar12 + 0xc0000000)) {
      uVar2 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,DAT_091d5e10);
    }
    FUN_0492e500(plVar8,uVar12 << 1,DAT_091c05d8);
    uVar12 = *(uint *)(param_1 + 0x30);
    plVar10 = *(long **)(param_1 + 0x38);
    lVar3 = *(long *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x30) = uVar12 + 1;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    *(uint *)(param_1 + 0x30) = uVar12 + 1;
  }
  if (*(int *)(lVar3 + 0x20) == 0) {
    FUN_05a8e6e4(lVar3,*(undefined8 *)(*(long *)(*(long *)(DAT_091b4888 + 0x20) + 0xc0) + 0x18));
  }
  lVar4 = *(long *)(lVar3 + 0x10);
  if (lVar4 == 0) goto LAB_07dcc904;
  if (*(uint *)(lVar4 + 0x18) <= *(uint *)(lVar3 + 0x18)) {
LAB_07dcc908:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar13 = (long *)(lVar4 + (long)(int)*(uint *)(lVar3 + 0x18) * 8 + 0x20);
  lVar4 = *plVar13;
  *plVar13 = 0;
  thunk_FUN_03f5d7b8(plVar13,0);
  if (*(long *)(lVar3 + 0x10) == 0) {
LAB_07dcc904:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar11 = 0;
  if (*(int *)(lVar3 + 0x18) + 1 != *(int *)(*(long *)(lVar3 + 0x10) + 0x18)) {
    iVar11 = *(int *)(lVar3 + 0x18) + 1;
  }
  *(int *)(lVar3 + 0x18) = iVar11;
  *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + -1;
  if (plVar10 == (long *)0x0) goto LAB_07dcc904;
  if ((lVar4 != 0) &&
     (lVar3 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar10 + 0x40)), lVar3 == 0)) {
    uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,0);
  }
  if (*(uint *)(plVar10 + 3) <= uVar12) goto LAB_07dcc908;
  plVar10[(long)(int)uVar12 + 4] = lVar4;
  thunk_FUN_03f5d7b8(plVar10 + (long)(int)uVar12 + 4,lVar4);
  goto LAB_07dcc7f0;
}

