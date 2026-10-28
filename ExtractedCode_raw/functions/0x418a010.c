// rea decompile_all
// name: UniRx.Operators.WhenAllObservable.WhenAll$$Run
// address: 0x418a010
// body: available
// range: 0x418a010-0x418a363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x418a1d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418a1f8 to 0x409b8b8 UniRx.StableCompositeDisposable$$CreateUnsafe (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x418a348 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418a354 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418a35c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418a360 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0418a304) */
/* WARNING: Removing unreachable block (ram,0x0418a358) */

undefined8 UniRx_Operators_WhenAllObservable_WhenAll__Run(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  
  if ((DAT_09516760 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183bd8);
    FUN_03f5c2a4(&DAT_09180080);
    FUN_03f5c2a4(&DAT_0917b238);
    FUN_03f5c2a4(&DAT_0917b288);
    FUN_03f5c2a4(&DAT_091b7e98);
    FUN_03f5c2a4(&DAT_0918c670);
    FUN_03f5c2a4(&DAT_09196ec8);
    DAT_09516760 = 1;
  }
  if (param_1[4] != 0) {
    iVar1 = *(int *)(param_1[4] + 0x18);
    *(int *)((long)param_1 + 0x34) = iVar1;
    if (iVar1 == 0) {
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
      (**(code **)(*param_1 + 0x1b8))
                (param_1,**(undefined1 **)(DAT_0918c670 + 0xb8),*(undefined8 *)(*param_1 + 0x1c0));
      plVar2 = (long *)param_1[2];
      thunk_FUN_03f6a5cc();
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917b288) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_0418a2cc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b288,2);
LAB_0418a2cc:
      (*(code *)*puVar3)(plVar2,puVar3[1]);
      FUN_05d4c16c(param_1,DAT_091b7e98);
      if (*(int *)(DAT_09183bd8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      return **(undefined8 **)(DAT_09183bd8 + 0xb8);
    }
    *(undefined4 *)(param_1 + 6) = 0;
    plVar2 = (long *)FUN_03f5c394(DAT_09180080);
    lVar5 = param_1[4];
    if (lVar5 != 0) {
      uVar10 = 0;
      do {
        if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar10) {
          uVar4 = UniRx_StableCompositeDisposable__CreateUnsafe(plVar2,0);
          return uVar4;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar10) {
LAB_0418a348:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar11 = (long)(int)uVar10;
        plVar9 = *(long **)(lVar5 + lVar11 * 8 + 0x20);
        lVar5 = thunk_FUN_03f9944c(DAT_09196ec8);
        System_Object___ctor(lVar5,0);
        *(long *)(lVar5 + 0x10) = (long)param_1;
        thunk_FUN_03f5d7b8((long *)(lVar5 + 0x10),param_1);
        if (plVar9 == (long *)0x0) break;
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917b238) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0418a178;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b238,0);
LAB_0418a178:
        lVar5 = (*(code *)*puVar3)(plVar9,lVar5,puVar3[1]);
        if (plVar2 == (long *)0x0) break;
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0)) {
          uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,0);
        }
        if (*(uint *)(plVar2 + 3) <= uVar10) goto LAB_0418a348;
        plVar2[lVar11 + 4] = lVar5;
        thunk_FUN_03f5d7b8(plVar2 + lVar11 + 4,lVar5);
        lVar5 = param_1[4];
        uVar10 = uVar10 + 1;
      } while (lVar5 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

