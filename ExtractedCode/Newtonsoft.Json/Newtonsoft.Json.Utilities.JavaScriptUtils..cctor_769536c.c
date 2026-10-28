// rea decompile_all
// name: Newtonsoft.Json.Utilities.JavaScriptUtils$$.cctor
// address: 0x769536c
// body: available
// range: 0x769536c-0x7695e57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7695948 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7695b68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7695d8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7695e1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7695e20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7695e24 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7695e28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7695e2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7695e30 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7695e34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7695e38 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7695e3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07695be4) */
/* WARNING: Removing unreachable block (ram,0x07695e48) */
/* WARNING: Removing unreachable block (ram,0x076959c4) */
/* WARNING: Removing unreachable block (ram,0x07695e50) */

void Newtonsoft_Json_Utilities_JavaScriptUtils___cctor(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  
  if ((DAT_095225bc & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_091cb338);
    FUN_03f5c2a4(&DAT_09179ff8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3a0);
    FUN_03f5c2a4(&DAT_0917aa48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187288);
    FUN_03f5c2a4(&DAT_091ab918);
    FUN_03f5c2a4(&DAT_091ab908);
    FUN_03f5c2a4(&DAT_0917be18);
    FUN_03f5c2a4(&DAT_091f3b48);
    DAT_095225bc = 1;
  }
  uVar1 = FUN_03f5c394(DAT_0917fc40,0x80);
  **(undefined8 **)(DAT_09187288 + 0xb8) = uVar1;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09187288 + 0xb8),uVar1);
  uVar1 = FUN_03f5c394(DAT_0917fc40,0x80);
  puVar4 = (undefined8 *)(*(long *)(DAT_09187288 + 0xb8) + 8);
  *puVar4 = uVar1;
  thunk_FUN_03f5d7b8(puVar4,uVar1);
  uVar1 = FUN_03f5c394(DAT_0917fc40,0x80);
  puVar4 = (undefined8 *)(*(long *)(DAT_09187288 + 0xb8) + 0x10);
  *puVar4 = uVar1;
  thunk_FUN_03f5d7b8(puVar4,uVar1);
  plVar2 = (long *)thunk_FUN_03f9944c(DAT_0917be18);
  FUN_0572b888(plVar2,DAT_091ab908);
  lVar6 = DAT_091ab918;
  if (plVar2 != (long *)0x0) {
    iVar11 = *(int *)((long)plVar2 + 0x1c);
    lVar5 = plVar2[2];
    *(int *)((long)plVar2 + 0x1c) = iVar11 + 1;
    if (lVar5 != 0) {
      uVar10 = *(uint *)(plVar2 + 3);
      if (uVar10 < *(uint *)(lVar5 + 0x18)) {
        uVar8 = uVar10 + 1;
        iVar11 = iVar11 + 2;
        *(uint *)(plVar2 + 3) = uVar8;
        *(undefined2 *)(lVar5 + (long)(int)uVar10 * 2 + 0x20) = 10;
        *(int *)((long)plVar2 + 0x1c) = iVar11;
      }
      else {
        FUN_0572c118(plVar2,10,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar6 = DAT_091ab918;
        uVar8 = *(uint *)(plVar2 + 3);
        lVar5 = plVar2[2];
        iVar11 = *(int *)((long)plVar2 + 0x1c) + 1;
        *(int *)((long)plVar2 + 0x1c) = iVar11;
        if (lVar5 == 0) goto LAB_07695e40;
      }
      if (uVar8 < *(uint *)(lVar5 + 0x18)) {
        uVar10 = uVar8 + 1;
        iVar11 = iVar11 + 1;
        *(uint *)(plVar2 + 3) = uVar10;
        *(undefined2 *)(lVar5 + (long)(int)uVar8 * 2 + 0x20) = 0xd;
        *(int *)((long)plVar2 + 0x1c) = iVar11;
      }
      else {
        FUN_0572c118(plVar2,0xd,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar6 = DAT_091ab918;
        uVar10 = *(uint *)(plVar2 + 3);
        lVar5 = plVar2[2];
        iVar11 = *(int *)((long)plVar2 + 0x1c) + 1;
        *(int *)((long)plVar2 + 0x1c) = iVar11;
        if (lVar5 == 0) goto LAB_07695e40;
      }
      if (uVar10 < *(uint *)(lVar5 + 0x18)) {
        uVar8 = uVar10 + 1;
        iVar11 = iVar11 + 1;
        *(uint *)(plVar2 + 3) = uVar8;
        *(undefined2 *)(lVar5 + (long)(int)uVar10 * 2 + 0x20) = 9;
        *(int *)((long)plVar2 + 0x1c) = iVar11;
      }
      else {
        FUN_0572c118(plVar2,9,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar6 = DAT_091ab918;
        uVar8 = *(uint *)(plVar2 + 3);
        lVar5 = plVar2[2];
        iVar11 = *(int *)((long)plVar2 + 0x1c) + 1;
        *(int *)((long)plVar2 + 0x1c) = iVar11;
        if (lVar5 == 0) goto LAB_07695e40;
      }
      if (uVar8 < *(uint *)(lVar5 + 0x18)) {
        uVar10 = uVar8 + 1;
        iVar11 = iVar11 + 1;
        *(uint *)(plVar2 + 3) = uVar10;
        *(undefined2 *)(lVar5 + (long)(int)uVar8 * 2 + 0x20) = 0x5c;
        *(int *)((long)plVar2 + 0x1c) = iVar11;
      }
      else {
        FUN_0572c118(plVar2,0x5c,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar6 = DAT_091ab918;
        uVar10 = *(uint *)(plVar2 + 3);
        lVar5 = plVar2[2];
        iVar11 = *(int *)((long)plVar2 + 0x1c) + 1;
        *(int *)((long)plVar2 + 0x1c) = iVar11;
        if (lVar5 == 0) goto LAB_07695e40;
      }
      if (uVar10 < *(uint *)(lVar5 + 0x18)) {
        uVar8 = uVar10 + 1;
        *(uint *)(plVar2 + 3) = uVar8;
        *(undefined2 *)(lVar5 + (long)(int)uVar10 * 2 + 0x20) = 0xc;
        *(int *)((long)plVar2 + 0x1c) = iVar11 + 1;
      }
      else {
        FUN_0572c118(plVar2,0xc,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar6 = DAT_091ab918;
        uVar8 = *(uint *)(plVar2 + 3);
        lVar5 = plVar2[2];
        *(int *)((long)plVar2 + 0x1c) = *(int *)((long)plVar2 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_07695e40;
      }
      if (uVar8 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(plVar2 + 3) = uVar8 + 1;
        *(undefined2 *)(lVar5 + (long)(int)uVar8 * 2 + 0x20) = 8;
      }
      else {
        FUN_0572c118(plVar2,8,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      iVar11 = 0;
      do {
        lVar6 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09179ff8) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_0769578c;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09179ff8,2);
LAB_0769578c:
        (*(code *)*puVar4)(plVar2,iVar11,puVar4[1]);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 0x20);
      lVar6 = FUN_03f5c394(DAT_0917fcc8,1);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) == 0) goto LAB_07695e44;
        *(undefined2 *)(lVar6 + 0x20) = 0x27;
        plVar3 = (long *)FUN_04b08e30(plVar2,lVar6,DAT_091cb338);
        if (plVar3 != (long *)0x0) {
          lVar6 = *plVar3;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_0917a3a0) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0769582c;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a3a0,0);
LAB_0769582c:
          plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
          do {
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *plVar3;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                  puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_076958ac;
                }
                uVar7 = uVar7 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_076958ac:
            uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            if ((uVar7 & 1) == 0) {
              if (plVar3 == (long *)0x0) goto LAB_076959b8;
              lVar6 = *plVar3;
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 == 0) goto LAB_07695990;
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              goto LAB_07695978;
            }
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *plVar3;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917aa48) {
                  puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_07695910;
                }
                uVar7 = uVar7 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917aa48,0);
LAB_07695910:
            uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            lVar6 = **(long **)(DAT_09187288 + 0xb8);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(uint *)(lVar6 + 0x18) <= ((uint)uVar7 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            *(undefined1 *)(lVar6 + (uVar7 & 0xffff) + 0x20) = 1;
          } while( true );
        }
      }
    }
  }
  goto LAB_07695e40;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
LAB_07695978:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_076959ac;
    }
  }
LAB_07695990:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_076959ac:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_076959b8:
  lVar6 = FUN_03f5c394(DAT_0917fcc8,1);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_07695e44:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined2 *)(lVar6 + 0x20) = 0x22;
    plVar3 = (long *)FUN_04b08e30(plVar2,lVar6,DAT_091cb338);
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917a3a0) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07695a4c;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a3a0,0);
LAB_07695a4c:
      plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      do {
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07695acc;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_07695acc:
        uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar3 == (long *)0x0) goto LAB_07695bd8;
          lVar6 = *plVar3;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_07695bb0;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_07695b98;
        }
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917aa48) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07695b30;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917aa48,0);
LAB_07695b30:
        uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        lVar6 = *(long *)(*(long *)(DAT_09187288 + 0xb8) + 8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar6 + 0x18) <= ((uint)uVar7 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined1 *)(lVar6 + (uVar7 & 0xffff) + 0x20) = 1;
      } while( true );
    }
  }
  goto LAB_07695e40;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
LAB_07695db8:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_07695dec;
    }
  }
LAB_07695dd0:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_07695dec:
  (*(code *)*puVar4)(plVar2,puVar4[1]);
  return;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
LAB_07695b98:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_07695bcc;
    }
  }
LAB_07695bb0:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_07695bcc:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_07695bd8:
  uVar1 = FUN_03f5c394(DAT_0917fcc8,5);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3b48,0);
  plVar2 = (long *)FUN_04b08e30(plVar2,uVar1,DAT_091cb338);
  if (plVar2 != (long *)0x0) {
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917a3a0) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07695c70;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a3a0,0);
LAB_07695c70:
    plVar2 = (long *)(*(code *)*puVar4)(plVar2,puVar4[1]);
    do {
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07695cf0;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_07695cf0:
      uVar7 = (*(code *)*puVar4)(plVar2,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        if (plVar2 == (long *)0x0) {
          return;
        }
        lVar6 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_07695dd0;
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_07695db8;
      }
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917aa48) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07695d54;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917aa48,0);
LAB_07695d54:
      uVar7 = (*(code *)*puVar4)(plVar2,puVar4[1]);
      lVar6 = *(long *)(*(long *)(DAT_09187288 + 0xb8) + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(uint *)(lVar6 + 0x18) <= ((uint)uVar7 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined1 *)(lVar6 + (uVar7 & 0xffff) + 0x20) = 1;
    } while( true );
  }
LAB_07695e40:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

