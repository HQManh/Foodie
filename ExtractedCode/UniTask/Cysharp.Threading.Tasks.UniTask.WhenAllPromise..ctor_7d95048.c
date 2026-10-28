// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask.WhenAllPromise$$.ctor
// address: 0x7d95048
// body: available
// range: 0x7d95048-0x7d95377 inclusive
// range: 0x7d9537c-0x7d9537f inclusive
// range: 0x7d95400-0x7d95473 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d95374 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d9537c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d95470 to 0x64311f4 FUN_064311f4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UniTask_WhenAllPromise___ctor(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *local_80;
  ulong uStack_78;
  long *local_70;
  ulong uStack_68;
  
  if ((DAT_09525e1e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174850);
    FUN_03f5c2a4(&DAT_09181790);
    FUN_03f5c2a4(&DAT_091d9fb0);
    FUN_03f5c2a4(&DAT_091f3648);
    FUN_03f5c2a4(&DAT_09196d48);
    FUN_03f5c2a4(&DAT_091bdb40);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525e1e = 1;
  }
  local_80 = (long *)0x0;
  uStack_78 = 0;
  System_Object___ctor(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(uint *)(param_1 + 0x14) = param_3;
  if (param_3 == 0) {
    if (*(int *)(DAT_09181790 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_064311f4(param_1 + 0x18,**(undefined1 **)(DAT_09181790 + 0xb8),DAT_091bdb40);
    return;
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
        if (plVar1 != (long *)0x0) goto LAB_07d951b4;
LAB_07d95214:
        Cysharp_Threading_Tasks_UniTask_WhenAllPromise__TryInvokeContinuation(param_1,&local_80);
      }
      else {
        if (plVar1 == (long *)0x0) goto LAB_07d95214;
LAB_07d951b4:
        lVar6 = *plVar1;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_091868c0) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07d95200;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091868c0,0);
LAB_07d95200:
        iVar3 = (*(code *)*puVar4)(plVar1,uVar2 & 0xffffffff,puVar4[1]);
        if (iVar3 != 0) goto LAB_07d95214;
        if (*(int *)(DAT_09196d48 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar4 = *(undefined8 **)(DAT_09196d48 + 0xb8);
        lVar6 = puVar4[1];
        if (lVar6 == 0) {
          if (*(int *)(DAT_09196d48 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar4 = *(undefined8 **)(DAT_09196d48 + 0xb8);
          }
          uVar10 = *puVar4;
          lVar6 = thunk_FUN_03f9944c(DAT_09174850);
          FUN_070a8c30(lVar6,uVar10,DAT_091f3648,0);
          plVar5 = (long *)(*(long *)(DAT_09196d48 + 0xb8) + 8);
          *plVar5 = lVar6;
          thunk_FUN_03f5d7b8(plVar5,lVar6);
        }
        uVar10 = FUN_04d61fa0(param_1,plVar1,uVar2,DAT_091d9fb0);
        if (DAT_0951da74 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_0951da74 = '\x01';
        }
        lVar7 = *plVar1;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_091868c0) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_07d9533c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091868c0,1);
LAB_07d9533c:
        (*(code *)*puVar4)(plVar1,lVar6,uVar10,uVar2 & 0xffffffff,puVar4[1]);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_3);
  }
  return;
}

