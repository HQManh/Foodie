// rea decompile_all
// name: Cysharp.Threading.Tasks.EnumeratorAsyncExtensions.EnumeratorPromise.<ConsumeEnumerator>d__19$$MoveNext
// address: 0x7d8ba84
// body: available
// range: 0x7d8ba84-0x7d8bfc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d8bbb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong Cysharp_Threading_Tasks_EnumeratorAsyncExtensions_EnumeratorPromise_<ConsumeEnumerator>d__19__MoveNext
                (long param_1)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  undefined4 uVar11;
  
  if ((DAT_09525d38 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181738);
    FUN_03f5c2a4(&DAT_091830a0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09190578);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0918ce90);
    FUN_03f5c2a4(&DAT_0918dae8);
    FUN_03f5c2a4(&DAT_09225cf8);
    FUN_03f5c2a4(&DAT_091f6710);
    DAT_09525d38 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  uVar3 = 0;
  if (iVar1 < 3) {
    if ((iVar1 == 0) || (iVar1 == 1)) {
LAB_07d8bb88:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_07d8beb4;
    }
    if (iVar1 == 2) {
      plVar4 = *(long **)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (plVar4 == (long *)0x0) {
        uVar3 = 0;
        goto LAB_07d8bbb4;
      }
LAB_07d8bc94:
      uVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      if ((uVar3 & 1) == 0) {
        do {
          *(undefined8 *)(param_1 + 0x28) = 0;
          uVar3 = thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),0);
LAB_07d8beb4:
          plVar4 = *(long **)(param_1 + 0x20);
          if (plVar4 == (long *)0x0) goto LAB_07d8bbb4;
          lVar9 = *plVar4;
          uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar3 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_07d8bf08;
              }
              uVar3 = uVar3 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar3 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_07d8bf08:
          uVar3 = (*(code *)*puVar7)(plVar4,puVar7[1]);
          if ((uVar3 & 1) == 0) {
            return 0;
          }
          plVar4 = *(long **)(param_1 + 0x20);
          if (plVar4 == (long *)0x0) goto LAB_07d8bbb4;
          lVar9 = *plVar4;
          uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar3 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_07d8bc10;
              }
              uVar3 = uVar3 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar3 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,1);
LAB_07d8bc10:
          plVar5 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
          lVar9 = DAT_091830a0;
          if (plVar5 == (long *)0x0) {
            uVar11 = 1;
            goto LAB_07d8bf9c;
          }
          bVar2 = *(byte *)(DAT_091830a0 + 0x130);
          plVar8 = (long *)0x0;
          if ((bVar2 <= *(byte *)(*plVar5 + 0x130)) &&
             (plVar8 = plVar5,
             *(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) != DAT_091830a0)) {
            plVar8 = (long *)0x0;
          }
          plVar4 = (long *)(param_1 + 0x28);
          *plVar4 = (long)plVar8;
          plVar8 = (long *)0x0;
          if ((bVar2 <= *(byte *)(*plVar5 + 0x130)) &&
             (plVar8 = plVar5, *(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) != lVar9)
             ) {
            plVar8 = (long *)0x0;
          }
          thunk_FUN_03f5d7b8(plVar4,plVar8);
          plVar4 = (long *)*plVar4;
          if (plVar4 != (long *)0x0) goto LAB_07d8bc94;
          if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_0918dae8 + 0x130)) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_0918dae8 + 0x130) * 8 + -8)
              != DAT_0918dae8)) {
            lVar9 = thunk_FUN_03f99350(plVar5,DAT_09185b10);
            if (lVar9 == 0) goto LAB_07d8bf28;
            if (*(int *)(DAT_09190578 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = Cysharp_Threading_Tasks_EnumeratorAsyncExtensions_EnumeratorPromise__ConsumeEnumerator
                              (lVar9);
            *(undefined8 *)(param_1 + 0x30) = uVar6;
            uVar3 = thunk_FUN_03f5d7b8();
LAB_07d8bd14:
            plVar4 = *(long **)(param_1 + 0x30);
            if (plVar4 == (long *)0x0) goto LAB_07d8bbb4;
            lVar9 = *plVar4;
            uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar3 != 0) {
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_07d8bd6c;
                }
                uVar3 = uVar3 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar3 != 0);
            }
            puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_07d8bd6c:
            uVar3 = (*(code *)*puVar7)(plVar4,puVar7[1]);
            if ((uVar3 & 1) != 0) {
              uVar11 = 4;
              goto LAB_07d8bf9c;
            }
          }
          else {
            puVar7 = (undefined8 *)(param_1 + 0x30);
            *puVar7 = 0;
            thunk_FUN_03f5d7b8(puVar7,0);
            lVar9 = *plVar5;
            if ((*(byte *)(lVar9 + 0x130) < *(byte *)(DAT_09181738 + 0x130)) ||
               (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(DAT_09181738 + 0x130) * 8 + -8)
                != DAT_09181738)) {
              if (lVar9 == DAT_0918ce90) {
                if (*(int *)(DAT_09190578 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar6 = Cysharp_Threading_Tasks_EnumeratorAsyncExtensions_EnumeratorPromise__UnwrapWaitForSeconds
                                  (plVar5);
                goto LAB_07d8be1c;
              }
            }
            else {
              if (*(int *)(DAT_09190578 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar6 = Cysharp_Threading_Tasks_EnumeratorAsyncExtensions_EnumeratorPromise__UnwrapWaitAsyncOperation
                                (plVar5);
LAB_07d8be1c:
              *puVar7 = uVar6;
              thunk_FUN_03f5d7b8(puVar7,uVar6);
            }
            plVar4 = (long *)*puVar7;
            if (plVar4 == (long *)0x0) {
LAB_07d8bf28:
              plVar4 = (long *)System_Object__GetType(plVar5,0);
              uVar3 = 0;
              if (plVar4 == (long *)0x0) goto LAB_07d8bbb4;
              uVar6 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
              uVar6 = System_String__Concat(DAT_09225cf8,uVar6,DAT_091f6710,0);
              if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_091835d0);
              }
              UnityEngine_Debug__LogWarning(uVar6,0);
              uVar11 = 5;
              goto LAB_07d8bf9c;
            }
LAB_07d8be34:
            lVar9 = *plVar4;
            uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar3 != 0) {
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_07d8be84;
                }
                uVar3 = uVar3 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar3 != 0);
            }
            puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_07d8be84:
            uVar3 = (*(code *)*puVar7)(plVar4,puVar7[1]);
            if ((uVar3 & 1) != 0) {
              uVar11 = 3;
              goto LAB_07d8bf9c;
            }
          }
          *(undefined8 *)(param_1 + 0x30) = 0;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),0);
        } while( true );
      }
      uVar11 = 2;
LAB_07d8bf9c:
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = uVar11;
      uVar3 = 1;
    }
  }
  else {
    if (iVar1 == 3) {
      plVar4 = *(long **)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (plVar4 != (long *)0x0) goto LAB_07d8be34;
LAB_07d8bbb4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar3);
    }
    if (iVar1 == 4) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_07d8bd14;
    }
    if (iVar1 == 5) goto LAB_07d8bb88;
  }
  return uVar3;
}

