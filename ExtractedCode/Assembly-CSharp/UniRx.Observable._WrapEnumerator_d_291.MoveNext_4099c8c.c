// rea decompile_all
// name: UniRx.Observable.<WrapEnumerator>d__291$$MoveNext
// address: 0x4099c8c
// body: available
// range: 0x4099c8c-0x409a563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x409a53c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409a540 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409a544 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409a548 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409a54c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409a554 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409a558 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409a55c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409a560 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0409a550) */
/* WARNING: Removing unreachable block (ram,0x0409a540) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 UniRx_Observable_<WrapEnumerator>d__291__MoveNext(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long *plVar12;
  
  if ((DAT_09515d8f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09185968);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b288);
    FUN_03f5c2a4(&DAT_0918c670);
    DAT_09515d8f = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_04099e78:
    *(undefined8 *)(param_1 + 0x48) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),0);
    if (*(char *)(param_1 + 0x40) == '\0') goto LAB_0409a050;
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = System_Threading_CancellationToken__get_IsCancellationRequested(param_1 + 0x38,0);
    if ((uVar9 & 1) != 0) goto LAB_0409a050;
  }
  else {
    if (iVar1 == 1) {
      plVar12 = *(long **)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (plVar12 == (long *)0x0) goto LAB_0409a53c;
      lVar8 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185968) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_04099da4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185968,4);
LAB_04099da4:
      (*(code *)*puVar4)(plVar12,puVar4[1]);
      plVar12 = *(long **)(param_1 + 0x48);
      if (plVar12 == (long *)0x0) goto LAB_0409a53c;
      lVar8 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185968) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04099e04;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185968,0);
LAB_04099e04:
      uVar9 = (*(code *)*puVar4)(plVar12,puVar4[1]);
      if ((uVar9 & 1) != 0) {
        plVar12 = *(long **)(param_1 + 0x48);
        *(undefined1 *)(param_1 + 0x41) = 1;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *plVar12;
        plVar11 = *(long **)(param_1 + 0x28);
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09185968) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0409a2cc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185968,1);
LAB_0409a2cc:
        uVar5 = (*(code *)*puVar4)(plVar12,puVar4[1]);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917b288) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0409a338;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917b288,1);
LAB_0409a338:
        (*(code *)*puVar4)(plVar11,uVar5,puVar4[1]);
        plVar12 = (long *)thunk_FUN_03f99350(*(undefined8 *)(param_1 + 0x20),DAT_09185a58);
        if (plVar12 == (long *)0x0) {
          return 0;
        }
        lVar8 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09185a58) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0409a3c4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185a58,0);
LAB_0409a3c4:
        (*(code *)*puVar4)(plVar12,puVar4[1]);
        return 0;
      }
      goto LAB_04099e78;
    }
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  plVar12 = *(long **)(param_1 + 0x20);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar8 = *plVar12;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_09185b10) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_04099f18;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185b10,0);
LAB_04099f18:
  bVar3 = (*(code *)*puVar4)(plVar12,puVar4[1]);
  bVar3 = bVar3 & 1;
  *(byte *)(param_1 + 0x40) = bVar3;
  if ((*(byte *)(param_1 + 0x30) & bVar3) != 0) {
    plVar12 = *(long **)(param_1 + 0x28);
    if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09515ed7 == '\0') {
      FUN_03f5c2a4(&DAT_0918c670);
      DAT_09515ed7 = '\x01';
    }
    if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    uVar2 = **(undefined1 **)(DAT_0918c670 + 0xb8);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_0917b288) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04099fec;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917b288,0);
LAB_04099fec:
    (*(code *)*puVar4)(plVar12,uVar2,puVar4[1]);
    bVar3 = *(byte *)(param_1 + 0x40);
  }
  if (bVar3 == 0) {
LAB_0409a050:
    if (*(char *)(param_1 + 0x41) == '\0') {
      if (*(int *)(DAT_09182348 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = System_Threading_CancellationToken__get_IsCancellationRequested(param_1 + 0x38,0);
      if ((uVar9 & 1) == 0) {
        plVar12 = *(long **)(param_1 + 0x28);
        if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09515ed7 == '\0') {
          FUN_03f5c2a4(&DAT_0918c670);
          DAT_09515ed7 = '\x01';
        }
        if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        uVar2 = **(undefined1 **)(DAT_0918c670 + 0xb8);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917b288) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0409a3e8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917b288,0);
LAB_0409a3e8:
        (*(code *)*puVar4)(plVar12,uVar2,puVar4[1]);
        plVar12 = *(long **)(param_1 + 0x28);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917b288) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_0409a454;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917b288,2);
LAB_0409a454:
        (*(code *)*puVar4)(plVar12,puVar4[1]);
      }
    }
    plVar12 = (long *)thunk_FUN_03f99350(*(undefined8 *)(param_1 + 0x20),DAT_09185a58);
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185a58) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0409a4d8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185a58,0);
LAB_0409a4d8:
      (*(code *)*puVar4)(plVar12,puVar4[1]);
    }
    return 0;
  }
  plVar12 = *(long **)(param_1 + 0x20);
  if (plVar12 != (long *)0x0) {
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_09185b10) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_0409a148;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185b10,1);
LAB_0409a148:
    uVar5 = (*(code *)*puVar4)(plVar12,puVar4[1]);
    uVar6 = thunk_FUN_03f99350(uVar5,DAT_09185968);
    lVar8 = DAT_09185968;
    puVar4 = (undefined8 *)(param_1 + 0x48);
    *puVar4 = uVar6;
    uVar6 = thunk_FUN_03f99350(uVar5,lVar8);
    thunk_FUN_03f5d7b8(puVar4,uVar6);
    plVar12 = (long *)*puVar4;
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185968) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_0409a1e0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185968,2);
LAB_0409a1e0:
      uVar9 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      if ((uVar9 & 1) != 0) {
        plVar12 = (long *)*puVar4;
        if (plVar12 != (long *)0x0) {
          lVar8 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185968) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                goto LAB_0409a514;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185968,3);
LAB_0409a514:
          (*(code *)*puVar4)(plVar12,puVar4[1]);
          *(undefined8 *)(param_1 + 0x18) = uVar5;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar5);
          *(undefined4 *)(param_1 + 0x10) = 1;
          return 1;
        }
        goto LAB_0409a53c;
      }
    }
    plVar12 = *(long **)(param_1 + 0x20);
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0409a290;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185b10,1);
LAB_0409a290:
      uVar5 = (*(code *)*puVar4)(plVar12,puVar4[1]);
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar5);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return 1;
    }
  }
LAB_0409a53c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

