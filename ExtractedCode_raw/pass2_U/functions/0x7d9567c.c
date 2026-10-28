// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask.WhenAnyPromise$$.ctor
// address: 0x7d9567c
// body: available
// range: 0x7d9567c-0x7d9599f inclusive
// range: 0x7d959a4-0x7d959a7 inclusive
// range: 0x7d95a24-0x7d95a8b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d9599c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d959a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d95a88 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UniTask_WhenAnyPromise___ctor
               (undefined8 param_1,long param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *local_80;
  ulong uStack_78;
  long *local_70;
  ulong uStack_68;
  
  if ((DAT_09525e26 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174850);
    FUN_03f5c2a4(&DAT_091d9fb8);
    FUN_03f5c2a4(&DAT_091f3650);
    FUN_03f5c2a4(&DAT_09196d50);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525e26 = 1;
  }
  local_80 = (long *)0x0;
  uStack_78 = 0;
  System_Object___ctor(param_1,0);
  if (param_3 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar12 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_092100b8);
    System_ArgumentException___ctor(uVar12,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091f1f18);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar12,uVar6);
  }
  if (0 < (int)param_3) {
    uVar11 = 0;
    do {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(uint *)(param_2 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      puVar4 = (undefined8 *)(param_2 + 0x20 + uVar11 * 0x10);
      uStack_68 = puVar4[1];
      local_70 = (long *)*puVar4;
      thunk_FUN_03f5d7b8(&local_70,0);
      uVar2 = uStack_68;
      plVar1 = local_70;
      local_80 = local_70;
      uStack_78 = uStack_68;
      if (DAT_095162d4 == '\0') {
        FUN_03f5c2a4(&DAT_0918c610);
        DAT_095162d4 = '\x01';
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095162d5 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d5 = '\x01';
        if (plVar1 != (long *)0x0) goto LAB_07d957c4;
LAB_07d9582c:
        Cysharp_Threading_Tasks_UniTask_WhenAnyPromise__TryInvokeContinuation
                  (param_1,&local_80,uVar11 & 0xffffffff);
      }
      else {
        if (plVar1 == (long *)0x0) goto LAB_07d9582c;
LAB_07d957c4:
        lVar7 = *plVar1;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_091868c0) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_07d95818;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091868c0,0);
LAB_07d95818:
        iVar3 = (*(code *)*puVar4)(plVar1,uVar2 & 0xffffffff,puVar4[1]);
        if (iVar3 != 0) goto LAB_07d9582c;
        if (*(int *)(DAT_09196d50 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar4 = *(undefined8 **)(DAT_09196d50 + 0xb8);
        lVar7 = puVar4[1];
        if (lVar7 == 0) {
          if (*(int *)(DAT_09196d50 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar4 = *(undefined8 **)(DAT_09196d50 + 0xb8);
          }
          uVar12 = *puVar4;
          lVar7 = thunk_FUN_03f9944c(DAT_09174850);
          FUN_070a8c30(lVar7,uVar12,DAT_091f3650,0);
          plVar5 = (long *)(*(long *)(DAT_09196d50 + 0xb8) + 8);
          *plVar5 = lVar7;
          thunk_FUN_03f5d7b8(plVar5,lVar7);
        }
        uVar12 = FUN_04d621e4(param_1,plVar1,uVar2,uVar11 & 0xffffffff,DAT_091d9fb8);
        if (DAT_0951da74 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_0951da74 = '\x01';
        }
        lVar8 = *plVar1;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_091868c0) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_07d95968;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091868c0,1);
LAB_07d95968:
        (*(code *)*puVar4)(plVar1,lVar7,uVar12,uVar2 & 0xffffffff,puVar4[1]);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_3);
  }
  return;
}

